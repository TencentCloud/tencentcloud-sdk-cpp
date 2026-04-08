/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ERASEHANDWRITTENIMAGEOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ERASEHANDWRITTENIMAGEOCRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * EraseHandwrittenImageOCR请求参数结构体
                */
                class EraseHandwrittenImageOCRRequest : public AbstractModel
                {
                public:
                    EraseHandwrittenImageOCRRequest();
                    ~EraseHandwrittenImageOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @return ImageBase64 图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @param _imageBase64 图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return ImageUrl 图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _imageUrl 图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。
                     * @return PdfPageNumber 需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。
                     * 
                     */
                    int64_t GetPdfPageNumber() const;

                    /**
                     * 设置需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。
                     * @param _pdfPageNumber 需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。
                     * 
                     */
                    void SetPdfPageNumber(const int64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     * 
                     */
                    bool PdfPageNumberHasBeenSet() const;

                    /**
                     * 获取0表示关闭切边，默认为0
1表示开启切边
                     * @return Crop 0表示关闭切边，默认为0
1表示开启切边
                     * 
                     */
                    int64_t GetCrop() const;

                    /**
                     * 设置0表示关闭切边，默认为0
1表示开启切边
                     * @param _crop 0表示关闭切边，默认为0
1表示开启切边
                     * 
                     */
                    void SetCrop(const int64_t& _crop);

                    /**
                     * 判断参数 Crop 是否已赋值
                     * @return Crop 是否已赋值
                     * 
                     */
                    bool CropHasBeenSet() const;

                    /**
                     * 获取0表示关闭弯曲矫正，默认为0
1表示开启弯曲矫正
                     * @return Deskew 0表示关闭弯曲矫正，默认为0
1表示开启弯曲矫正
                     * 
                     */
                    int64_t GetDeskew() const;

                    /**
                     * 设置0表示关闭弯曲矫正，默认为0
1表示开启弯曲矫正
                     * @param _deskew 0表示关闭弯曲矫正，默认为0
1表示开启弯曲矫正
                     * 
                     */
                    void SetDeskew(const int64_t& _deskew);

                    /**
                     * 判断参数 Deskew 是否已赋值
                     * @return Deskew 是否已赋值
                     * 
                     */
                    bool DeskewHasBeenSet() const;

                    /**
                     * 获取0表示关闭增强锐化，默认为0
1表示开启增强锐化
                     * @return Sharpen 0表示关闭增强锐化，默认为0
1表示开启增强锐化
                     * 
                     */
                    int64_t GetSharpen() const;

                    /**
                     * 设置0表示关闭增强锐化，默认为0
1表示开启增强锐化
                     * @param _sharpen 0表示关闭增强锐化，默认为0
1表示开启增强锐化
                     * 
                     */
                    void SetSharpen(const int64_t& _sharpen);

                    /**
                     * 判断参数 Sharpen 是否已赋值
                     * @return Sharpen 是否已赋值
                     * 
                     */
                    bool SharpenHasBeenSet() const;

                    /**
                     * 获取0表示返回黑白图像
1表示返回彩色图像，默认为1
                     * @return Grayscale 0表示返回黑白图像
1表示返回彩色图像，默认为1
                     * 
                     */
                    int64_t GetGrayscale() const;

                    /**
                     * 设置0表示返回黑白图像
1表示返回彩色图像，默认为1
                     * @param _grayscale 0表示返回黑白图像
1表示返回彩色图像，默认为1
                     * 
                     */
                    void SetGrayscale(const int64_t& _grayscale);

                    /**
                     * 判断参数 Grayscale 是否已赋值
                     * @return Grayscale 是否已赋值
                     * 
                     */
                    bool GrayscaleHasBeenSet() const;

                private:

                    /**
                     * 图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。
                     */
                    int64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * 0表示关闭切边，默认为0
1表示开启切边
                     */
                    int64_t m_crop;
                    bool m_cropHasBeenSet;

                    /**
                     * 0表示关闭弯曲矫正，默认为0
1表示开启弯曲矫正
                     */
                    int64_t m_deskew;
                    bool m_deskewHasBeenSet;

                    /**
                     * 0表示关闭增强锐化，默认为0
1表示开启增强锐化
                     */
                    int64_t m_sharpen;
                    bool m_sharpenHasBeenSet;

                    /**
                     * 0表示返回黑白图像
1表示返回彩色图像，默认为1
                     */
                    int64_t m_grayscale;
                    bool m_grayscaleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ERASEHANDWRITTENIMAGEOCRREQUEST_H_
