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
                     * 获取<p>图片的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * @return ImageBase64 <p>图片的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>图片的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * @param _imageBase64 <p>图片的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
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
                     * 获取<p>图片的 Url 地址。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。</p>
                     * @return ImageUrl <p>图片的 Url 地址。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>图片的 Url 地址。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。</p>
                     * @param _imageUrl <p>图片的 Url 地址。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。</p>
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
                     * 获取<p>0 自动，自动判断输入证件的类型<br>1 身份证人像面，指定输入证件类型为二代身份证人像面<br>2 身份证国徽面，指定输入证件类型为二代身份证国徽面<br>3 身份证人像国徽面，指定输入证件类型为二代身份证人像面或者国徽面<br>4 临时身份证人像面，指定输入证件类型为临时身份证人像面<br>5 临时身份证国徽面，指定输入证件类型为临时身份证国徽面<br>6 临时身份证人像国徽面，指定输入证件类型为临时身份证人像面或者国徽面<br>7 港澳台居住证人像面，指定输入证件类型为港澳台居住证人像面<br>8 港澳台居住证国徽面，指定输入证件类型为港澳台居住证国徽面<br>9 港澳台居住证人像国徽面，指定输入证件类型为港澳台居住证人像面或者国徽面<br>10 外国人永久居留身份证人像面，指定输入证件类型为外国人永久居留证人像面<br>11 外国人永久居留身份证国徽面，指定输入证件类型为外国人永久居留证国徽面<br>12 外国人永久居留身份证人像国徽面，指定输入证件类型为外国人永久居留证人像或者国徽面<br>该参数如果不填，将为您自动判断卡证类型。</p>
                     * @return CardType <p>0 自动，自动判断输入证件的类型<br>1 身份证人像面，指定输入证件类型为二代身份证人像面<br>2 身份证国徽面，指定输入证件类型为二代身份证国徽面<br>3 身份证人像国徽面，指定输入证件类型为二代身份证人像面或者国徽面<br>4 临时身份证人像面，指定输入证件类型为临时身份证人像面<br>5 临时身份证国徽面，指定输入证件类型为临时身份证国徽面<br>6 临时身份证人像国徽面，指定输入证件类型为临时身份证人像面或者国徽面<br>7 港澳台居住证人像面，指定输入证件类型为港澳台居住证人像面<br>8 港澳台居住证国徽面，指定输入证件类型为港澳台居住证国徽面<br>9 港澳台居住证人像国徽面，指定输入证件类型为港澳台居住证人像面或者国徽面<br>10 外国人永久居留身份证人像面，指定输入证件类型为外国人永久居留证人像面<br>11 外国人永久居留身份证国徽面，指定输入证件类型为外国人永久居留证国徽面<br>12 外国人永久居留身份证人像国徽面，指定输入证件类型为外国人永久居留证人像或者国徽面<br>该参数如果不填，将为您自动判断卡证类型。</p>
                     * 
                     */
                    int64_t GetCardType() const;

                    /**
                     * 设置<p>0 自动，自动判断输入证件的类型<br>1 身份证人像面，指定输入证件类型为二代身份证人像面<br>2 身份证国徽面，指定输入证件类型为二代身份证国徽面<br>3 身份证人像国徽面，指定输入证件类型为二代身份证人像面或者国徽面<br>4 临时身份证人像面，指定输入证件类型为临时身份证人像面<br>5 临时身份证国徽面，指定输入证件类型为临时身份证国徽面<br>6 临时身份证人像国徽面，指定输入证件类型为临时身份证人像面或者国徽面<br>7 港澳台居住证人像面，指定输入证件类型为港澳台居住证人像面<br>8 港澳台居住证国徽面，指定输入证件类型为港澳台居住证国徽面<br>9 港澳台居住证人像国徽面，指定输入证件类型为港澳台居住证人像面或者国徽面<br>10 外国人永久居留身份证人像面，指定输入证件类型为外国人永久居留证人像面<br>11 外国人永久居留身份证国徽面，指定输入证件类型为外国人永久居留证国徽面<br>12 外国人永久居留身份证人像国徽面，指定输入证件类型为外国人永久居留证人像或者国徽面<br>该参数如果不填，将为您自动判断卡证类型。</p>
                     * @param _cardType <p>0 自动，自动判断输入证件的类型<br>1 身份证人像面，指定输入证件类型为二代身份证人像面<br>2 身份证国徽面，指定输入证件类型为二代身份证国徽面<br>3 身份证人像国徽面，指定输入证件类型为二代身份证人像面或者国徽面<br>4 临时身份证人像面，指定输入证件类型为临时身份证人像面<br>5 临时身份证国徽面，指定输入证件类型为临时身份证国徽面<br>6 临时身份证人像国徽面，指定输入证件类型为临时身份证人像面或者国徽面<br>7 港澳台居住证人像面，指定输入证件类型为港澳台居住证人像面<br>8 港澳台居住证国徽面，指定输入证件类型为港澳台居住证国徽面<br>9 港澳台居住证人像国徽面，指定输入证件类型为港澳台居住证人像面或者国徽面<br>10 外国人永久居留身份证人像面，指定输入证件类型为外国人永久居留证人像面<br>11 外国人永久居留身份证国徽面，指定输入证件类型为外国人永久居留证国徽面<br>12 外国人永久居留身份证人像国徽面，指定输入证件类型为外国人永久居留证人像或者国徽面<br>该参数如果不填，将为您自动判断卡证类型。</p>
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
                     * 获取<p>默认值为false，打开返回证件头像切图。</p>
                     * @return EnablePortrait <p>默认值为false，打开返回证件头像切图。</p>
                     * 
                     */
                    bool GetEnablePortrait() const;

                    /**
                     * 设置<p>默认值为false，打开返回证件头像切图。</p>
                     * @param _enablePortrait <p>默认值为false，打开返回证件头像切图。</p>
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
                     * 获取<p>默认值为false，打开返回证件主体切图。</p>
                     * @return EnableCropImage <p>默认值为false，打开返回证件主体切图。</p>
                     * 
                     */
                    bool GetEnableCropImage() const;

                    /**
                     * 设置<p>默认值为false，打开返回证件主体切图。</p>
                     * @param _enableCropImage <p>默认值为false，打开返回证件主体切图。</p>
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
                     * 获取<p>默认值为false，打开返回边缘完整性判断。</p>
                     * @return EnableBorderCheck <p>默认值为false，打开返回边缘完整性判断。</p>
                     * 
                     */
                    bool GetEnableBorderCheck() const;

                    /**
                     * 设置<p>默认值为false，打开返回边缘完整性判断。</p>
                     * @param _enableBorderCheck <p>默认值为false，打开返回边缘完整性判断。</p>
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
                     * 获取<p>默认值为false，打开返回证件是否被遮挡。</p>
                     * @return EnableOcclusionCheck <p>默认值为false，打开返回证件是否被遮挡。</p>
                     * 
                     */
                    bool GetEnableOcclusionCheck() const;

                    /**
                     * 设置<p>默认值为false，打开返回证件是否被遮挡。</p>
                     * @param _enableOcclusionCheck <p>默认值为false，打开返回证件是否被遮挡。</p>
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
                     * 获取<p>默认值为false，打开返回证件是否存在复印。</p>
                     * @return EnableCopyCheck <p>默认值为false，打开返回证件是否存在复印。</p>
                     * 
                     */
                    bool GetEnableCopyCheck() const;

                    /**
                     * 设置<p>默认值为false，打开返回证件是否存在复印。</p>
                     * @param _enableCopyCheck <p>默认值为false，打开返回证件是否存在复印。</p>
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
                     * 获取<p>默认值为false，打开返回证件是否存在屏幕翻拍。</p>
                     * @return EnableReshootCheck <p>默认值为false，打开返回证件是否存在屏幕翻拍。</p>
                     * 
                     */
                    bool GetEnableReshootCheck() const;

                    /**
                     * 设置<p>默认值为false，打开返回证件是否存在屏幕翻拍。</p>
                     * @param _enableReshootCheck <p>默认值为false，打开返回证件是否存在屏幕翻拍。</p>
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
                     * 获取<p>默认值为false，打开返回是否存在反光。</p>
                     * @return EnableReflectCheck <p>默认值为false，打开返回是否存在反光。</p>
                     * 
                     */
                    bool GetEnableReflectCheck() const;

                    /**
                     * 设置<p>默认值为false，打开返回是否存在反光。</p>
                     * @param _enableReflectCheck <p>默认值为false，打开返回是否存在反光。</p>
                     * 
                     */
                    void SetEnableReflectCheck(const bool& _enableReflectCheck);

                    /**
                     * 判断参数 EnableReflectCheck 是否已赋值
                     * @return EnableReflectCheck 是否已赋值
                     * 
                     */
                    bool EnableReflectCheckHasBeenSet() const;

                    /**
                     * 获取<p>默认值为false，打开返回证件是否存在PS。类型为：临时、港澳台居住证、外国人居住证失效</p>
                     * @return EnablePSCheck <p>默认值为false，打开返回证件是否存在PS。类型为：临时、港澳台居住证、外国人居住证失效</p>
                     * 
                     */
                    bool GetEnablePSCheck() const;

                    /**
                     * 设置<p>默认值为false，打开返回证件是否存在PS。类型为：临时、港澳台居住证、外国人居住证失效</p>
                     * @param _enablePSCheck <p>默认值为false，打开返回证件是否存在PS。类型为：临时、港澳台居住证、外国人居住证失效</p>
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
                     * 获取<p>默认值为false，打开返回字段级反光和字段级完整性告警。类型为：临时、港澳台居住证、外国人居住证失效</p>
                     * @return EnableWordCheck <p>默认值为false，打开返回字段级反光和字段级完整性告警。类型为：临时、港澳台居住证、外国人居住证失效</p>
                     * 
                     */
                    bool GetEnableWordCheck() const;

                    /**
                     * 设置<p>默认值为false，打开返回字段级反光和字段级完整性告警。类型为：临时、港澳台居住证、外国人居住证失效</p>
                     * @param _enableWordCheck <p>默认值为false，打开返回字段级反光和字段级完整性告警。类型为：临时、港澳台居住证、外国人居住证失效</p>
                     * 
                     */
                    void SetEnableWordCheck(const bool& _enableWordCheck);

                    /**
                     * 判断参数 EnableWordCheck 是否已赋值
                     * @return EnableWordCheck 是否已赋值
                     * 
                     */
                    bool EnableWordCheckHasBeenSet() const;

                    /**
                     * 获取<p>默认值为false，打开返回证件是否模糊。</p>
                     * @return EnableQualityCheck <p>默认值为false，打开返回证件是否模糊。</p>
                     * 
                     */
                    bool GetEnableQualityCheck() const;

                    /**
                     * 设置<p>默认值为false，打开返回证件是否模糊。</p>
                     * @param _enableQualityCheck <p>默认值为false，打开返回证件是否模糊。</p>
                     * 
                     */
                    void SetEnableQualityCheck(const bool& _enableQualityCheck);

                    /**
                     * 判断参数 EnableQualityCheck 是否已赋值
                     * @return EnableQualityCheck 是否已赋值
                     * 
                     */
                    bool EnableQualityCheckHasBeenSet() const;

                    /**
                     * 获取<p>默认值为false，打开返回是否存在电子身份证判断。</p>
                     * @return EnableElectronCheck <p>默认值为false，打开返回是否存在电子身份证判断。</p>
                     * 
                     */
                    bool GetEnableElectronCheck() const;

                    /**
                     * 设置<p>默认值为false，打开返回是否存在电子身份证判断。</p>
                     * @param _enableElectronCheck <p>默认值为false，打开返回是否存在电子身份证判断。</p>
                     * 
                     */
                    void SetEnableElectronCheck(const bool& _enableElectronCheck);

                    /**
                     * 判断参数 EnableElectronCheck 是否已赋值
                     * @return EnableElectronCheck 是否已赋值
                     * 
                     */
                    bool EnableElectronCheckHasBeenSet() const;

                private:

                    /**
                     * <p>图片的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>图片的 Url 地址。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>0 自动，自动判断输入证件的类型<br>1 身份证人像面，指定输入证件类型为二代身份证人像面<br>2 身份证国徽面，指定输入证件类型为二代身份证国徽面<br>3 身份证人像国徽面，指定输入证件类型为二代身份证人像面或者国徽面<br>4 临时身份证人像面，指定输入证件类型为临时身份证人像面<br>5 临时身份证国徽面，指定输入证件类型为临时身份证国徽面<br>6 临时身份证人像国徽面，指定输入证件类型为临时身份证人像面或者国徽面<br>7 港澳台居住证人像面，指定输入证件类型为港澳台居住证人像面<br>8 港澳台居住证国徽面，指定输入证件类型为港澳台居住证国徽面<br>9 港澳台居住证人像国徽面，指定输入证件类型为港澳台居住证人像面或者国徽面<br>10 外国人永久居留身份证人像面，指定输入证件类型为外国人永久居留证人像面<br>11 外国人永久居留身份证国徽面，指定输入证件类型为外国人永久居留证国徽面<br>12 外国人永久居留身份证人像国徽面，指定输入证件类型为外国人永久居留证人像或者国徽面<br>该参数如果不填，将为您自动判断卡证类型。</p>
                     */
                    int64_t m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * <p>默认值为false，打开返回证件头像切图。</p>
                     */
                    bool m_enablePortrait;
                    bool m_enablePortraitHasBeenSet;

                    /**
                     * <p>默认值为false，打开返回证件主体切图。</p>
                     */
                    bool m_enableCropImage;
                    bool m_enableCropImageHasBeenSet;

                    /**
                     * <p>默认值为false，打开返回边缘完整性判断。</p>
                     */
                    bool m_enableBorderCheck;
                    bool m_enableBorderCheckHasBeenSet;

                    /**
                     * <p>默认值为false，打开返回证件是否被遮挡。</p>
                     */
                    bool m_enableOcclusionCheck;
                    bool m_enableOcclusionCheckHasBeenSet;

                    /**
                     * <p>默认值为false，打开返回证件是否存在复印。</p>
                     */
                    bool m_enableCopyCheck;
                    bool m_enableCopyCheckHasBeenSet;

                    /**
                     * <p>默认值为false，打开返回证件是否存在屏幕翻拍。</p>
                     */
                    bool m_enableReshootCheck;
                    bool m_enableReshootCheckHasBeenSet;

                    /**
                     * <p>默认值为false，打开返回是否存在反光。</p>
                     */
                    bool m_enableReflectCheck;
                    bool m_enableReflectCheckHasBeenSet;

                    /**
                     * <p>默认值为false，打开返回证件是否存在PS。类型为：临时、港澳台居住证、外国人居住证失效</p>
                     */
                    bool m_enablePSCheck;
                    bool m_enablePSCheckHasBeenSet;

                    /**
                     * <p>默认值为false，打开返回字段级反光和字段级完整性告警。类型为：临时、港澳台居住证、外国人居住证失效</p>
                     */
                    bool m_enableWordCheck;
                    bool m_enableWordCheckHasBeenSet;

                    /**
                     * <p>默认值为false，打开返回证件是否模糊。</p>
                     */
                    bool m_enableQualityCheck;
                    bool m_enableQualityCheckHasBeenSet;

                    /**
                     * <p>默认值为false，打开返回是否存在电子身份证判断。</p>
                     */
                    bool m_enableElectronCheck;
                    bool m_enableElectronCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEVALIDIDCARDOCRREQUEST_H_
