/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRREQUEST_H_

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
                * MLIDPassportOCR请求参数结构体
                */
                class MLIDPassportOCRRequest : public AbstractModel
                {
                public:
                    MLIDPassportOCRRequest();
                    ~MLIDPassportOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片的 Base64 值。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。建议卡片部分占据图片2/3以上。
                     * @return ImageBase64 图片的 Base64 值。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。建议卡片部分占据图片2/3以上。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片的 Base64 值。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。建议卡片部分占据图片2/3以上。
                     * @param _imageBase64 图片的 Base64 值。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。建议卡片部分占据图片2/3以上。
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
                     * 获取是否返回图片，默认false
                     * @return RetImage 是否返回图片，默认false
                     * 
                     */
                    bool GetRetImage() const;

                    /**
                     * 设置是否返回图片，默认false
                     * @param _retImage 是否返回图片，默认false
                     * 
                     */
                    void SetRetImage(const bool& _retImage);

                    /**
                     * 判断参数 RetImage 是否已赋值
                     * @return RetImage 是否已赋值
                     * 
                     */
                    bool RetImageHasBeenSet() const;

                    /**
                     * 获取图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。建议卡片部分占据图片2/3以上。图片下载时间不超过 3 秒。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
                     * @return ImageUrl 图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。建议卡片部分占据图片2/3以上。图片下载时间不超过 3 秒。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。建议卡片部分占据图片2/3以上。图片下载时间不超过 3 秒。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
                     * @param _imageUrl 图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。建议卡片部分占据图片2/3以上。图片下载时间不超过 3 秒。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * 图片的 Base64 值。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。建议卡片部分占据图片2/3以上。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 是否返回图片，默认false
                     */
                    bool m_retImage;
                    bool m_retImageHasBeenSet;

                    /**
                     * 图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。建议卡片部分占据图片2/3以上。图片下载时间不超过 3 秒。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRREQUEST_H_
