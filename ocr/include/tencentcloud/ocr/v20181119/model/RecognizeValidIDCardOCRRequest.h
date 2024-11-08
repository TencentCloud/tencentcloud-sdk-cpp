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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEVALIDIDCARDOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEVALIDIDCARDOCRREQUEST_H_

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
                * RecognizeValidIDCardOCR请求参数结构体
                */
                class RecognizeValidIDCardOCRRequest : public AbstractModel
                {
                public:
                    RecognizeValidIDCardOCRRequest();
                    ~RecognizeValidIDCardOCRRequest() = default;
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
                     * 获取图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。
建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
                     * @return ImageUrl 图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。
建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。
建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
                     * @param _imageUrl 图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。
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
                     * 获取0 自动，自动判断输入证件的类型
1 身份证人像面，指定输入证件类型为二代身份证人像面
2 身份证国徽面，指定输入证件类型为二代身份证国徽面
3 身份证人像国徽面，指定输入证件类型为二代身份证人像面或者国徽面
4 临时身份证人像面，指定输入证件类型为临时身份证人像面
5 临时身份证国徽面，指定输入证件类型为临时身份证国徽面
6 临时身份证人像国徽面，指定输入证件类型为临时身份证人像面或者国徽面
7 港澳台居住证人像面，指定输入证件类型为港澳台居住证人像面
8 港澳台居住证国徽面，指定输入证件类型为港澳台居住证国徽面
9 港澳台居住证人像国徽面，指定输入证件类型为港澳台居住证人像面或者国徽面
10 外国人永久居留身份证人像面，指定输入证件类型为外国人永久居留证人像面
11 外国人永久居留身份证国徽面，指定输入证件类型为外国人永久居留证国徽面
12 外国人永久居留身份证人像国徽面，指定输入证件类型为外国人永久居留证人像或者国徽面
该参数如果不填，将为您自动判断卡证类型。
                     * @return CardType 0 自动，自动判断输入证件的类型
1 身份证人像面，指定输入证件类型为二代身份证人像面
2 身份证国徽面，指定输入证件类型为二代身份证国徽面
3 身份证人像国徽面，指定输入证件类型为二代身份证人像面或者国徽面
4 临时身份证人像面，指定输入证件类型为临时身份证人像面
5 临时身份证国徽面，指定输入证件类型为临时身份证国徽面
6 临时身份证人像国徽面，指定输入证件类型为临时身份证人像面或者国徽面
7 港澳台居住证人像面，指定输入证件类型为港澳台居住证人像面
8 港澳台居住证国徽面，指定输入证件类型为港澳台居住证国徽面
9 港澳台居住证人像国徽面，指定输入证件类型为港澳台居住证人像面或者国徽面
10 外国人永久居留身份证人像面，指定输入证件类型为外国人永久居留证人像面
11 外国人永久居留身份证国徽面，指定输入证件类型为外国人永久居留证国徽面
12 外国人永久居留身份证人像国徽面，指定输入证件类型为外国人永久居留证人像或者国徽面
该参数如果不填，将为您自动判断卡证类型。
                     * 
                     */
                    int64_t GetCardType() const;

                    /**
                     * 设置0 自动，自动判断输入证件的类型
1 身份证人像面，指定输入证件类型为二代身份证人像面
2 身份证国徽面，指定输入证件类型为二代身份证国徽面
3 身份证人像国徽面，指定输入证件类型为二代身份证人像面或者国徽面
4 临时身份证人像面，指定输入证件类型为临时身份证人像面
5 临时身份证国徽面，指定输入证件类型为临时身份证国徽面
6 临时身份证人像国徽面，指定输入证件类型为临时身份证人像面或者国徽面
7 港澳台居住证人像面，指定输入证件类型为港澳台居住证人像面
8 港澳台居住证国徽面，指定输入证件类型为港澳台居住证国徽面
9 港澳台居住证人像国徽面，指定输入证件类型为港澳台居住证人像面或者国徽面
10 外国人永久居留身份证人像面，指定输入证件类型为外国人永久居留证人像面
11 外国人永久居留身份证国徽面，指定输入证件类型为外国人永久居留证国徽面
12 外国人永久居留身份证人像国徽面，指定输入证件类型为外国人永久居留证人像或者国徽面
该参数如果不填，将为您自动判断卡证类型。
                     * @param _cardType 0 自动，自动判断输入证件的类型
1 身份证人像面，指定输入证件类型为二代身份证人像面
2 身份证国徽面，指定输入证件类型为二代身份证国徽面
3 身份证人像国徽面，指定输入证件类型为二代身份证人像面或者国徽面
4 临时身份证人像面，指定输入证件类型为临时身份证人像面
5 临时身份证国徽面，指定输入证件类型为临时身份证国徽面
6 临时身份证人像国徽面，指定输入证件类型为临时身份证人像面或者国徽面
7 港澳台居住证人像面，指定输入证件类型为港澳台居住证人像面
8 港澳台居住证国徽面，指定输入证件类型为港澳台居住证国徽面
9 港澳台居住证人像国徽面，指定输入证件类型为港澳台居住证人像面或者国徽面
10 外国人永久居留身份证人像面，指定输入证件类型为外国人永久居留证人像面
11 外国人永久居留身份证国徽面，指定输入证件类型为外国人永久居留证国徽面
12 外国人永久居留身份证人像国徽面，指定输入证件类型为外国人永久居留证人像或者国徽面
该参数如果不填，将为您自动判断卡证类型。
                     * 
                     */
                    void SetCardType(const int64_t& _cardType);

                    /**
                     * 判断参数 CardType 是否已赋值
                     * @return CardType 是否已赋值
                     * 
                     */
                    bool CardTypeHasBeenSet() const;

                    /**
                     * 获取默认值为false，打开返回证件头像切图。
                     * @return EnablePortrait 默认值为false，打开返回证件头像切图。
                     * 
                     */
                    bool GetEnablePortrait() const;

                    /**
                     * 设置默认值为false，打开返回证件头像切图。
                     * @param _enablePortrait 默认值为false，打开返回证件头像切图。
                     * 
                     */
                    void SetEnablePortrait(const bool& _enablePortrait);

                    /**
                     * 判断参数 EnablePortrait 是否已赋值
                     * @return EnablePortrait 是否已赋值
                     * 
                     */
                    bool EnablePortraitHasBeenSet() const;

                    /**
                     * 获取默认值为false，打开返回证件主体切图。
                     * @return EnableCropImage 默认值为false，打开返回证件主体切图。
                     * 
                     */
                    bool GetEnableCropImage() const;

                    /**
                     * 设置默认值为false，打开返回证件主体切图。
                     * @param _enableCropImage 默认值为false，打开返回证件主体切图。
                     * 
                     */
                    void SetEnableCropImage(const bool& _enableCropImage);

                    /**
                     * 判断参数 EnableCropImage 是否已赋值
                     * @return EnableCropImage 是否已赋值
                     * 
                     */
                    bool EnableCropImageHasBeenSet() const;

                    /**
                     * 获取默认值为false，打开返回边缘完整性判断。
                     * @return EnableBorderCheck 默认值为false，打开返回边缘完整性判断。
                     * 
                     */
                    bool GetEnableBorderCheck() const;

                    /**
                     * 设置默认值为false，打开返回边缘完整性判断。
                     * @param _enableBorderCheck 默认值为false，打开返回边缘完整性判断。
                     * 
                     */
                    void SetEnableBorderCheck(const bool& _enableBorderCheck);

                    /**
                     * 判断参数 EnableBorderCheck 是否已赋值
                     * @return EnableBorderCheck 是否已赋值
                     * 
                     */
                    bool EnableBorderCheckHasBeenSet() const;

                    /**
                     * 获取默认值为false，打开返回证件是否被遮挡。
                     * @return EnableOcclusionCheck 默认值为false，打开返回证件是否被遮挡。
                     * 
                     */
                    bool GetEnableOcclusionCheck() const;

                    /**
                     * 设置默认值为false，打开返回证件是否被遮挡。
                     * @param _enableOcclusionCheck 默认值为false，打开返回证件是否被遮挡。
                     * 
                     */
                    void SetEnableOcclusionCheck(const bool& _enableOcclusionCheck);

                    /**
                     * 判断参数 EnableOcclusionCheck 是否已赋值
                     * @return EnableOcclusionCheck 是否已赋值
                     * 
                     */
                    bool EnableOcclusionCheckHasBeenSet() const;

                    /**
                     * 获取默认值为false，打开返回证件是否存在复印。
                     * @return EnableCopyCheck 默认值为false，打开返回证件是否存在复印。
                     * 
                     */
                    bool GetEnableCopyCheck() const;

                    /**
                     * 设置默认值为false，打开返回证件是否存在复印。
                     * @param _enableCopyCheck 默认值为false，打开返回证件是否存在复印。
                     * 
                     */
                    void SetEnableCopyCheck(const bool& _enableCopyCheck);

                    /**
                     * 判断参数 EnableCopyCheck 是否已赋值
                     * @return EnableCopyCheck 是否已赋值
                     * 
                     */
                    bool EnableCopyCheckHasBeenSet() const;

                    /**
                     * 获取默认值为false，打开返回证件是否存在屏幕翻拍。
                     * @return EnableReshootCheck 默认值为false，打开返回证件是否存在屏幕翻拍。
                     * 
                     */
                    bool GetEnableReshootCheck() const;

                    /**
                     * 设置默认值为false，打开返回证件是否存在屏幕翻拍。
                     * @param _enableReshootCheck 默认值为false，打开返回证件是否存在屏幕翻拍。
                     * 
                     */
                    void SetEnableReshootCheck(const bool& _enableReshootCheck);

                    /**
                     * 判断参数 EnableReshootCheck 是否已赋值
                     * @return EnableReshootCheck 是否已赋值
                     * 
                     */
                    bool EnableReshootCheckHasBeenSet() const;

                    /**
                     * 获取默认值为false，打开返回证件是否存在PS。类型为：临时、港澳台居住证、外国人居住证失效
                     * @return EnablePSCheck 默认值为false，打开返回证件是否存在PS。类型为：临时、港澳台居住证、外国人居住证失效
                     * 
                     */
                    bool GetEnablePSCheck() const;

                    /**
                     * 设置默认值为false，打开返回证件是否存在PS。类型为：临时、港澳台居住证、外国人居住证失效
                     * @param _enablePSCheck 默认值为false，打开返回证件是否存在PS。类型为：临时、港澳台居住证、外国人居住证失效
                     * 
                     */
                    void SetEnablePSCheck(const bool& _enablePSCheck);

                    /**
                     * 判断参数 EnablePSCheck 是否已赋值
                     * @return EnablePSCheck 是否已赋值
                     * 
                     */
                    bool EnablePSCheckHasBeenSet() const;

                    /**
                     * 获取默认值为false，打开返回字段级反光和字段级完整性告警。类型为：临时、港澳台居住证、外国人居住证失效
                     * @return EnableWordCheck 默认值为false，打开返回字段级反光和字段级完整性告警。类型为：临时、港澳台居住证、外国人居住证失效
                     * 
                     */
                    bool GetEnableWordCheck() const;

                    /**
                     * 设置默认值为false，打开返回字段级反光和字段级完整性告警。类型为：临时、港澳台居住证、外国人居住证失效
                     * @param _enableWordCheck 默认值为false，打开返回字段级反光和字段级完整性告警。类型为：临时、港澳台居住证、外国人居住证失效
                     * 
                     */
                    void SetEnableWordCheck(const bool& _enableWordCheck);

                    /**
                     * 判断参数 EnableWordCheck 是否已赋值
                     * @return EnableWordCheck 是否已赋值
                     * 
                     */
                    bool EnableWordCheckHasBeenSet() const;

                private:

                    /**
                     * 图片的 Base64 值。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片的 Url 地址。要求图片经Base64编码后不超过 7M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。
建议图片存储于腾讯云，可保障更高的下载速度和稳定性。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 0 自动，自动判断输入证件的类型
1 身份证人像面，指定输入证件类型为二代身份证人像面
2 身份证国徽面，指定输入证件类型为二代身份证国徽面
3 身份证人像国徽面，指定输入证件类型为二代身份证人像面或者国徽面
4 临时身份证人像面，指定输入证件类型为临时身份证人像面
5 临时身份证国徽面，指定输入证件类型为临时身份证国徽面
6 临时身份证人像国徽面，指定输入证件类型为临时身份证人像面或者国徽面
7 港澳台居住证人像面，指定输入证件类型为港澳台居住证人像面
8 港澳台居住证国徽面，指定输入证件类型为港澳台居住证国徽面
9 港澳台居住证人像国徽面，指定输入证件类型为港澳台居住证人像面或者国徽面
10 外国人永久居留身份证人像面，指定输入证件类型为外国人永久居留证人像面
11 外国人永久居留身份证国徽面，指定输入证件类型为外国人永久居留证国徽面
12 外国人永久居留身份证人像国徽面，指定输入证件类型为外国人永久居留证人像或者国徽面
该参数如果不填，将为您自动判断卡证类型。
                     */
                    int64_t m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * 默认值为false，打开返回证件头像切图。
                     */
                    bool m_enablePortrait;
                    bool m_enablePortraitHasBeenSet;

                    /**
                     * 默认值为false，打开返回证件主体切图。
                     */
                    bool m_enableCropImage;
                    bool m_enableCropImageHasBeenSet;

                    /**
                     * 默认值为false，打开返回边缘完整性判断。
                     */
                    bool m_enableBorderCheck;
                    bool m_enableBorderCheckHasBeenSet;

                    /**
                     * 默认值为false，打开返回证件是否被遮挡。
                     */
                    bool m_enableOcclusionCheck;
                    bool m_enableOcclusionCheckHasBeenSet;

                    /**
                     * 默认值为false，打开返回证件是否存在复印。
                     */
                    bool m_enableCopyCheck;
                    bool m_enableCopyCheckHasBeenSet;

                    /**
                     * 默认值为false，打开返回证件是否存在屏幕翻拍。
                     */
                    bool m_enableReshootCheck;
                    bool m_enableReshootCheckHasBeenSet;

                    /**
                     * 默认值为false，打开返回证件是否存在PS。类型为：临时、港澳台居住证、外国人居住证失效
                     */
                    bool m_enablePSCheck;
                    bool m_enablePSCheckHasBeenSet;

                    /**
                     * 默认值为false，打开返回字段级反光和字段级完整性告警。类型为：临时、港澳台居住证、外国人居住证失效
                     */
                    bool m_enableWordCheck;
                    bool m_enableWordCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEVALIDIDCARDOCRREQUEST_H_
