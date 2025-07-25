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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VEHICLELICENSEOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VEHICLELICENSEOCRREQUEST_H_

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
                * VehicleLicenseOCR请求参数结构体
                */
                class VehicleLicenseOCRRequest : public AbstractModel
                {
                public:
                    VehicleLicenseOCRRequest();
                    ~VehicleLicenseOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片的 Base64 值。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @return ImageBase64 图片的 Base64 值。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片的 Base64 值。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @param _imageBase64 图片的 Base64 值。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
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
                     * 获取图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片下载时间不超过 3 秒。
建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
                     * @return ImageUrl 图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片下载时间不超过 3 秒。
建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片下载时间不超过 3 秒。
建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
                     * @param _imageUrl 图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片下载时间不超过 3 秒。
建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
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
                     * 获取FRONT 为行驶证主页正面（有红色印章的一面），
BACK 为行驶证副页正面（有号码号牌的一面），
DOUBLE 为行驶证主页正面和副页正面。
默认值为：FRONT。
                     * @return CardSide FRONT 为行驶证主页正面（有红色印章的一面），
BACK 为行驶证副页正面（有号码号牌的一面），
DOUBLE 为行驶证主页正面和副页正面。
默认值为：FRONT。
                     * 
                     */
                    std::string GetCardSide() const;

                    /**
                     * 设置FRONT 为行驶证主页正面（有红色印章的一面），
BACK 为行驶证副页正面（有号码号牌的一面），
DOUBLE 为行驶证主页正面和副页正面。
默认值为：FRONT。
                     * @param _cardSide FRONT 为行驶证主页正面（有红色印章的一面），
BACK 为行驶证副页正面（有号码号牌的一面），
DOUBLE 为行驶证主页正面和副页正面。
默认值为：FRONT。
                     * 
                     */
                    void SetCardSide(const std::string& _cardSide);

                    /**
                     * 判断参数 CardSide 是否已赋值
                     * @return CardSide 是否已赋值
                     * 
                     */
                    bool CardSideHasBeenSet() const;

                    /**
                     * 获取FRONT为行驶证主页正面（有红色印章的一面），BACK 为拖拉机行驶证副页正面识别
                     * @return TractorCardSide FRONT为行驶证主页正面（有红色印章的一面），BACK 为拖拉机行驶证副页正面识别
                     * 
                     */
                    std::string GetTractorCardSide() const;

                    /**
                     * 设置FRONT为行驶证主页正面（有红色印章的一面），BACK 为拖拉机行驶证副页正面识别
                     * @param _tractorCardSide FRONT为行驶证主页正面（有红色印章的一面），BACK 为拖拉机行驶证副页正面识别
                     * 
                     */
                    void SetTractorCardSide(const std::string& _tractorCardSide);

                    /**
                     * 判断参数 TractorCardSide 是否已赋值
                     * @return TractorCardSide 是否已赋值
                     * 
                     */
                    bool TractorCardSideHasBeenSet() const;

                private:

                    /**
                     * 图片的 Base64 值。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片下载时间不超过 3 秒。
建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * FRONT 为行驶证主页正面（有红色印章的一面），
BACK 为行驶证副页正面（有号码号牌的一面），
DOUBLE 为行驶证主页正面和副页正面。
默认值为：FRONT。
                     */
                    std::string m_cardSide;
                    bool m_cardSideHasBeenSet;

                    /**
                     * FRONT为行驶证主页正面（有红色印章的一面），BACK 为拖拉机行驶证副页正面识别
                     */
                    std::string m_tractorCardSide;
                    bool m_tractorCardSideHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VEHICLELICENSEOCRREQUEST_H_
