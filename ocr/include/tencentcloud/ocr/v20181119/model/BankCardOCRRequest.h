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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRREQUEST_H_

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
                * BankCardOCR请求参数结构体
                */
                class BankCardOCRRequest : public AbstractModel
                {
                public:
                    BankCardOCRRequest();
                    ~BankCardOCRRequest() = default;
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
                     * 获取是否返回预处理（精确剪裁对齐）后的银行卡图片数据，默认false。
                     * @return RetBorderCutImage 是否返回预处理（精确剪裁对齐）后的银行卡图片数据，默认false。
                     * 
                     */
                    bool GetRetBorderCutImage() const;

                    /**
                     * 设置是否返回预处理（精确剪裁对齐）后的银行卡图片数据，默认false。
                     * @param _retBorderCutImage 是否返回预处理（精确剪裁对齐）后的银行卡图片数据，默认false。
                     * 
                     */
                    void SetRetBorderCutImage(const bool& _retBorderCutImage);

                    /**
                     * 判断参数 RetBorderCutImage 是否已赋值
                     * @return RetBorderCutImage 是否已赋值
                     * 
                     */
                    bool RetBorderCutImageHasBeenSet() const;

                    /**
                     * 获取是否返回卡号的切图图片数据，默认false。
                     * @return RetCardNoImage 是否返回卡号的切图图片数据，默认false。
                     * 
                     */
                    bool GetRetCardNoImage() const;

                    /**
                     * 设置是否返回卡号的切图图片数据，默认false。
                     * @param _retCardNoImage 是否返回卡号的切图图片数据，默认false。
                     * 
                     */
                    void SetRetCardNoImage(const bool& _retCardNoImage);

                    /**
                     * 判断参数 RetCardNoImage 是否已赋值
                     * @return RetCardNoImage 是否已赋值
                     * 
                     */
                    bool RetCardNoImageHasBeenSet() const;

                    /**
                     * 获取复印件检测开关，如果输入的图片是银行卡复印件图片则返回告警，默认false。
                     * @return EnableCopyCheck 复印件检测开关，如果输入的图片是银行卡复印件图片则返回告警，默认false。
                     * 
                     */
                    bool GetEnableCopyCheck() const;

                    /**
                     * 设置复印件检测开关，如果输入的图片是银行卡复印件图片则返回告警，默认false。
                     * @param _enableCopyCheck 复印件检测开关，如果输入的图片是银行卡复印件图片则返回告警，默认false。
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
                     * 获取翻拍检测开关，如果输入的图片是银行卡翻拍图片则返回告警，默认false。
                     * @return EnableReshootCheck 翻拍检测开关，如果输入的图片是银行卡翻拍图片则返回告警，默认false。
                     * 
                     */
                    bool GetEnableReshootCheck() const;

                    /**
                     * 设置翻拍检测开关，如果输入的图片是银行卡翻拍图片则返回告警，默认false。
                     * @param _enableReshootCheck 翻拍检测开关，如果输入的图片是银行卡翻拍图片则返回告警，默认false。
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
                     * 获取边框遮挡检测开关，如果输入的图片是银行卡边框被遮挡则返回告警，默认false。
                     * @return EnableBorderCheck 边框遮挡检测开关，如果输入的图片是银行卡边框被遮挡则返回告警，默认false。
                     * 
                     */
                    bool GetEnableBorderCheck() const;

                    /**
                     * 设置边框遮挡检测开关，如果输入的图片是银行卡边框被遮挡则返回告警，默认false。
                     * @param _enableBorderCheck 边框遮挡检测开关，如果输入的图片是银行卡边框被遮挡则返回告警，默认false。
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
                     * 获取是否返回图片质量分数（图片质量分数是评价一个图片的模糊程度的标准），默认false。
                     * @return EnableQualityValue 是否返回图片质量分数（图片质量分数是评价一个图片的模糊程度的标准），默认false。
                     * 
                     */
                    bool GetEnableQualityValue() const;

                    /**
                     * 设置是否返回图片质量分数（图片质量分数是评价一个图片的模糊程度的标准），默认false。
                     * @param _enableQualityValue 是否返回图片质量分数（图片质量分数是评价一个图片的模糊程度的标准），默认false。
                     * 
                     */
                    void SetEnableQualityValue(const bool& _enableQualityValue);

                    /**
                     * 判断参数 EnableQualityValue 是否已赋值
                     * @return EnableQualityValue 是否已赋值
                     * 
                     */
                    bool EnableQualityValueHasBeenSet() const;

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
                     * 是否返回预处理（精确剪裁对齐）后的银行卡图片数据，默认false。
                     */
                    bool m_retBorderCutImage;
                    bool m_retBorderCutImageHasBeenSet;

                    /**
                     * 是否返回卡号的切图图片数据，默认false。
                     */
                    bool m_retCardNoImage;
                    bool m_retCardNoImageHasBeenSet;

                    /**
                     * 复印件检测开关，如果输入的图片是银行卡复印件图片则返回告警，默认false。
                     */
                    bool m_enableCopyCheck;
                    bool m_enableCopyCheckHasBeenSet;

                    /**
                     * 翻拍检测开关，如果输入的图片是银行卡翻拍图片则返回告警，默认false。
                     */
                    bool m_enableReshootCheck;
                    bool m_enableReshootCheckHasBeenSet;

                    /**
                     * 边框遮挡检测开关，如果输入的图片是银行卡边框被遮挡则返回告警，默认false。
                     */
                    bool m_enableBorderCheck;
                    bool m_enableBorderCheckHasBeenSet;

                    /**
                     * 是否返回图片质量分数（图片质量分数是评价一个图片的模糊程度的标准），默认false。
                     */
                    bool m_enableQualityValue;
                    bool m_enableQualityValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRREQUEST_H_
