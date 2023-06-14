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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ENGLISHOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ENGLISHOCRREQUEST_H_

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
                * EnglishOCR请求参数结构体
                */
                class EnglishOCRRequest : public AbstractModel
                {
                public:
                    EnglishOCRRequest();
                    ~EnglishOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。像素须介于20-10000px之间。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。

                     * @return ImageBase64 图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。像素须介于20-10000px之间。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。

                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。像素须介于20-10000px之间。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。

                     * @param _imageBase64 图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。像素须介于20-10000px之间。
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
                     * 获取图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。像素须介于20-10000px之间。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return ImageUrl 图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。像素须介于20-10000px之间。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。像素须介于20-10000px之间。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _imageUrl 图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。像素须介于20-10000px之间。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
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
                     * 获取单词四点坐标开关，开启可返回图片中单词的四点坐标。
该参数默认值为false。
                     * @return EnableCoordPoint 单词四点坐标开关，开启可返回图片中单词的四点坐标。
该参数默认值为false。
                     * 
                     */
                    bool GetEnableCoordPoint() const;

                    /**
                     * 设置单词四点坐标开关，开启可返回图片中单词的四点坐标。
该参数默认值为false。
                     * @param _enableCoordPoint 单词四点坐标开关，开启可返回图片中单词的四点坐标。
该参数默认值为false。
                     * 
                     */
                    void SetEnableCoordPoint(const bool& _enableCoordPoint);

                    /**
                     * 判断参数 EnableCoordPoint 是否已赋值
                     * @return EnableCoordPoint 是否已赋值
                     * 
                     */
                    bool EnableCoordPointHasBeenSet() const;

                    /**
                     * 获取候选字开关，开启可返回识别时多个可能的候选字（每个候选字对应其置信度）。
该参数默认值为false。
                     * @return EnableCandWord 候选字开关，开启可返回识别时多个可能的候选字（每个候选字对应其置信度）。
该参数默认值为false。
                     * 
                     */
                    bool GetEnableCandWord() const;

                    /**
                     * 设置候选字开关，开启可返回识别时多个可能的候选字（每个候选字对应其置信度）。
该参数默认值为false。
                     * @param _enableCandWord 候选字开关，开启可返回识别时多个可能的候选字（每个候选字对应其置信度）。
该参数默认值为false。
                     * 
                     */
                    void SetEnableCandWord(const bool& _enableCandWord);

                    /**
                     * 判断参数 EnableCandWord 是否已赋值
                     * @return EnableCandWord 是否已赋值
                     * 
                     */
                    bool EnableCandWordHasBeenSet() const;

                    /**
                     * 获取预处理开关，功能是检测图片倾斜的角度，将原本倾斜的图片矫正。该参数默认值为true。
                     * @return Preprocess 预处理开关，功能是检测图片倾斜的角度，将原本倾斜的图片矫正。该参数默认值为true。
                     * 
                     */
                    bool GetPreprocess() const;

                    /**
                     * 设置预处理开关，功能是检测图片倾斜的角度，将原本倾斜的图片矫正。该参数默认值为true。
                     * @param _preprocess 预处理开关，功能是检测图片倾斜的角度，将原本倾斜的图片矫正。该参数默认值为true。
                     * 
                     */
                    void SetPreprocess(const bool& _preprocess);

                    /**
                     * 判断参数 Preprocess 是否已赋值
                     * @return Preprocess 是否已赋值
                     * 
                     */
                    bool PreprocessHasBeenSet() const;

                private:

                    /**
                     * 图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。像素须介于20-10000px之间。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。

                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。像素须介于20-10000px之间。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 单词四点坐标开关，开启可返回图片中单词的四点坐标。
该参数默认值为false。
                     */
                    bool m_enableCoordPoint;
                    bool m_enableCoordPointHasBeenSet;

                    /**
                     * 候选字开关，开启可返回识别时多个可能的候选字（每个候选字对应其置信度）。
该参数默认值为false。
                     */
                    bool m_enableCandWord;
                    bool m_enableCandWordHasBeenSet;

                    /**
                     * 预处理开关，功能是检测图片倾斜的角度，将原本倾斜的图片矫正。该参数默认值为true。
                     */
                    bool m_preprocess;
                    bool m_preprocessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ENGLISHOCRREQUEST_H_
