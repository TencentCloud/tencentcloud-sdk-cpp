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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTENVELOPEREQUEST_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTENVELOPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * DetectEnvelope请求参数结构体
                */
                class DetectEnvelopeRequest : public AbstractModel
                {
                public:
                    DetectEnvelopeRequest();
                    ~DetectEnvelopeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片的URL地址。图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
图片大小的限制为4M，图片像素的限制为4k。
                     * @return ImageUrl 图片的URL地址。图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
图片大小的限制为4M，图片像素的限制为4k。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的URL地址。图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
图片大小的限制为4M，图片像素的限制为4k。
                     * @param _imageUrl 图片的URL地址。图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
图片大小的限制为4M，图片像素的限制为4k。
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
                     * 获取图片经过base64编码的内容。与ImageUrl同时存在时优先使用ImageUrl字段。 
图片大小的限制为4M，图片像素的限制为4k。
**注意：图片需要base64编码，并且要去掉编码头部。
                     * @return ImageBase64 图片经过base64编码的内容。与ImageUrl同时存在时优先使用ImageUrl字段。 
图片大小的限制为4M，图片像素的限制为4k。
**注意：图片需要base64编码，并且要去掉编码头部。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片经过base64编码的内容。与ImageUrl同时存在时优先使用ImageUrl字段。 
图片大小的限制为4M，图片像素的限制为4k。
**注意：图片需要base64编码，并且要去掉编码头部。
                     * @param _imageBase64 图片经过base64编码的内容。与ImageUrl同时存在时优先使用ImageUrl字段。 
图片大小的限制为4M，图片像素的限制为4k。
**注意：图片需要base64编码，并且要去掉编码头部。
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                private:

                    /**
                     * 图片的URL地址。图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
图片大小的限制为4M，图片像素的限制为4k。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 图片经过base64编码的内容。与ImageUrl同时存在时优先使用ImageUrl字段。 
图片大小的限制为4M，图片像素的限制为4k。
**注意：图片需要base64编码，并且要去掉编码头部。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTENVELOPEREQUEST_H_
