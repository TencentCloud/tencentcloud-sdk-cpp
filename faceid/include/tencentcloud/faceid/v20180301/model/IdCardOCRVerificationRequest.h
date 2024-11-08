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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDOCRVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDOCRVERIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * IdCardOCRVerification请求参数结构体
                */
                class IdCardOCRVerificationRequest : public AbstractModel
                {
                public:
                    IdCardOCRVerificationRequest();
                    ~IdCardOCRVerificationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取身份证号。
- 姓名和身份证号、ImageBase64、ImageUrl三者必须提供其中之一。
- 若都提供了，则按照姓名和身份证号>ImageBase64>ImageUrl的优先级使用参数。
                     * @return IdCard 身份证号。
- 姓名和身份证号、ImageBase64、ImageUrl三者必须提供其中之一。
- 若都提供了，则按照姓名和身份证号>ImageBase64>ImageUrl的优先级使用参数。
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置身份证号。
- 姓名和身份证号、ImageBase64、ImageUrl三者必须提供其中之一。
- 若都提供了，则按照姓名和身份证号>ImageBase64>ImageUrl的优先级使用参数。
                     * @param _idCard 身份证号。
- 姓名和身份证号、ImageBase64、ImageUrl三者必须提供其中之一。
- 若都提供了，则按照姓名和身份证号>ImageBase64>ImageUrl的优先级使用参数。
                     * 
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取姓名。
                     * @return Name 姓名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名。
                     * @param _name 姓名。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取身份证人像面的 Base64 值。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经Base64编码后不超过 3M。请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
                     * @return ImageBase64 身份证人像面的 Base64 值。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经Base64编码后不超过 3M。请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置身份证人像面的 Base64 值。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经Base64编码后不超过 3M。请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
                     * @param _imageBase64 身份证人像面的 Base64 值。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经Base64编码后不超过 3M。请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
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
                     * 获取身份证人像面的 Url 地址。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return ImageUrl 身份证人像面的 Url 地址。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置身份证人像面的 Url 地址。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _imageUrl 身份证人像面的 Url 地址。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
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
                     * 获取敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @return Encryption 敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @param _encryption 敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * 身份证号。
- 姓名和身份证号、ImageBase64、ImageUrl三者必须提供其中之一。
- 若都提供了，则按照姓名和身份证号>ImageBase64>ImageUrl的优先级使用参数。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 姓名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 身份证人像面的 Base64 值。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经Base64编码后不超过 3M。请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 身份证人像面的 Url 地址。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDOCRVERIFICATIONREQUEST_H_
