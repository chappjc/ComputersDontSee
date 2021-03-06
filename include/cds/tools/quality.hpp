// Copyright (c) 2012 D'ANGELO Emmanuel
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
// 
// * Redistributions of source code must retain the above copyright notice, this list of conditions 
//   and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright notice, this list of conditions 
//   and the following disclaimer in the documentation and/or other materials provided with the distribution.
// * Neither the name of the copyright holder nor the names of its contributors may be used 
//   to endorse or promote products derived from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
// IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef CDS_QUALITY_HPP
#define CDS_QUALITY_HPP

#include <opencv2/core/core.hpp>

namespace cds
{
  /**
   * Computes the Signal-to-Noise Ratio between an image and a ground truth.
   */
  double SNR(cv::Mat const &testImage, cv::Mat const &gtImage, cv::InputArray const &mask=cv::Mat());

  /**
   * Computes the Peak Signal-to-Noise Ratio between an image and a reference (ground truth).
   * By default the dynamic range of the images is set to 1.
   */
  double PSNR(cv::Mat const &testImage, cv::Mat const &referenceImage, cv::InputArray const &mask=cv::noArray(), double Imax=1.0);

  /**
   * Mean Squared Error between two images
   */
  double MSE(cv::Mat const &anImage, cv::Mat const &anotherImage, cv::InputArray const &mask=cv::noArray());

  /**
   * Structured Similarity (SSIM) index
   */
  void SSIM(cv::Mat const &X, cv::Mat const &Y, cv::Mat &ssim_map, float L=1.0, float k1=0.01, float k2=0.03, int size=8);
}

#endif	// CDS_QUALITY_HPP
