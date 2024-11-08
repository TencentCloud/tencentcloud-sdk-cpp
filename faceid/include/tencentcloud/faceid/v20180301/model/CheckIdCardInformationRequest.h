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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDCARDINFORMATIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDCARDINFORMATIONREQUEST_H_

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
                * CheckIdCardInformation请求参数结构体
                */
                class CheckIdCardInformationRequest : public AbstractModel
                {
                public:
                    CheckIdCardInformationRequest();
                    ~CheckIdCardInformationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取身份证人像面的 Base64 值。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经Base64编码后不超过 7M。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- ImageBase64、ImageUrl二者必须提供其中之一。若都提供了，则按照ImageUrl>ImageBase64的优先级使用参数。
                     * @return ImageBase64 身份证人像面的 Base64 值。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经Base64编码后不超过 7M。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- ImageBase64、ImageUrl二者必须提供其中之一。若都提供了，则按照ImageUrl>ImageBase64的优先级使用参数。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置身份证人像面的 Base64 值。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经Base64编码后不超过 7M。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- ImageBase64、ImageUrl二者必须提供其中之一。若都提供了，则按照ImageUrl>ImageBase64的优先级使用参数。
                     * @param _imageBase64 身份证人像面的 Base64 值。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经Base64编码后不超过 7M。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- ImageBase64、ImageUrl二者必须提供其中之一。若都提供了，则按照ImageUrl>ImageBase64的优先级使用参数。
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
                     * 获取身份证人像面的 Url 地址
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return ImageUrl 身份证人像面的 Url 地址
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置身份证人像面的 Url 地址
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _imageUrl 身份证人像面的 Url 地址
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
                     * 获取配置。
- 以下可选字段均为bool 类型，默认false。
CopyWarn，复印件告警。
BorderCheckWarn，边框和框内遮挡告警。
ReshootWarn，翻拍告警。
DetectPsWarn，PS检测告警（疑似存在PS痕迹）。
TempIdWarn，临时身份证告警。
Quality，图片质量告警（评价图片模糊程度）。

- SDK 设置方式参考：
Config = Json.stringify({"CopyWarn":true,"ReshootWarn":true})。

- API 3.0 Explorer 设置方式参考：
Config = {"CopyWarn":true,"ReshootWarn":true}。
                     * @return Config 配置。
- 以下可选字段均为bool 类型，默认false。
CopyWarn，复印件告警。
BorderCheckWarn，边框和框内遮挡告警。
ReshootWarn，翻拍告警。
DetectPsWarn，PS检测告警（疑似存在PS痕迹）。
TempIdWarn，临时身份证告警。
Quality，图片质量告警（评价图片模糊程度）。

- SDK 设置方式参考：
Config = Json.stringify({"CopyWarn":true,"ReshootWarn":true})。

- API 3.0 Explorer 设置方式参考：
Config = {"CopyWarn":true,"ReshootWarn":true}。
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置配置。
- 以下可选字段均为bool 类型，默认false。
CopyWarn，复印件告警。
BorderCheckWarn，边框和框内遮挡告警。
ReshootWarn，翻拍告警。
DetectPsWarn，PS检测告警（疑似存在PS痕迹）。
TempIdWarn，临时身份证告警。
Quality，图片质量告警（评价图片模糊程度）。

- SDK 设置方式参考：
Config = Json.stringify({"CopyWarn":true,"ReshootWarn":true})。

- API 3.0 Explorer 设置方式参考：
Config = {"CopyWarn":true,"ReshootWarn":true}。
                     * @param _config 配置。
- 以下可选字段均为bool 类型，默认false。
CopyWarn，复印件告警。
BorderCheckWarn，边框和框内遮挡告警。
ReshootWarn，翻拍告警。
DetectPsWarn，PS检测告警（疑似存在PS痕迹）。
TempIdWarn，临时身份证告警。
Quality，图片质量告警（评价图片模糊程度）。

- SDK 设置方式参考：
Config = Json.stringify({"CopyWarn":true,"ReshootWarn":true})。

- API 3.0 Explorer 设置方式参考：
Config = {"CopyWarn":true,"ReshootWarn":true}。
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取是否需要对返回中的敏感信息进行加密。
- 默认false。
- 敏感信息包括：Response.IdNum、Response.Name。
                     * @return IsEncrypt 是否需要对返回中的敏感信息进行加密。
- 默认false。
- 敏感信息包括：Response.IdNum、Response.Name。
                     * 
                     */
                    bool GetIsEncrypt() const;

                    /**
                     * 设置是否需要对返回中的敏感信息进行加密。
- 默认false。
- 敏感信息包括：Response.IdNum、Response.Name。
                     * @param _isEncrypt 是否需要对返回中的敏感信息进行加密。
- 默认false。
- 敏感信息包括：Response.IdNum、Response.Name。
                     * 
                     */
                    void SetIsEncrypt(const bool& _isEncrypt);

                    /**
                     * 判断参数 IsEncrypt 是否已赋值
                     * @return IsEncrypt 是否已赋值
                     * 
                     */
                    bool IsEncryptHasBeenSet() const;

                    /**
                     * 获取是否需要对响应体加密。
                     * @return IsEncryptResponse 是否需要对响应体加密。
                     * 
                     */
                    bool GetIsEncryptResponse() const;

                    /**
                     * 设置是否需要对响应体加密。
                     * @param _isEncryptResponse 是否需要对响应体加密。
                     * 
                     */
                    void SetIsEncryptResponse(const bool& _isEncryptResponse);

                    /**
                     * 判断参数 IsEncryptResponse 是否已赋值
                     * @return IsEncryptResponse 是否已赋值
                     * 
                     */
                    bool IsEncryptResponseHasBeenSet() const;

                    /**
                     * 获取是否需要对返回中的敏感信息进行加密,需指定加密算法Algorithm、CBC加密的初始向量、加密后的对称密钥。
                     * @return Encryption 是否需要对返回中的敏感信息进行加密,需指定加密算法Algorithm、CBC加密的初始向量、加密后的对称密钥。
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置是否需要对返回中的敏感信息进行加密,需指定加密算法Algorithm、CBC加密的初始向量、加密后的对称密钥。
                     * @param _encryption 是否需要对返回中的敏感信息进行加密,需指定加密算法Algorithm、CBC加密的初始向量、加密后的对称密钥。
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
                     * 身份证人像面的 Base64 值。
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经Base64编码后不超过 7M。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- ImageBase64、ImageUrl二者必须提供其中之一。若都提供了，则按照ImageUrl>ImageBase64的优先级使用参数。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 身份证人像面的 Url 地址
- 支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
- 支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 配置。
- 以下可选字段均为bool 类型，默认false。
CopyWarn，复印件告警。
BorderCheckWarn，边框和框内遮挡告警。
ReshootWarn，翻拍告警。
DetectPsWarn，PS检测告警（疑似存在PS痕迹）。
TempIdWarn，临时身份证告警。
Quality，图片质量告警（评价图片模糊程度）。

- SDK 设置方式参考：
Config = Json.stringify({"CopyWarn":true,"ReshootWarn":true})。

- API 3.0 Explorer 设置方式参考：
Config = {"CopyWarn":true,"ReshootWarn":true}。
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 是否需要对返回中的敏感信息进行加密。
- 默认false。
- 敏感信息包括：Response.IdNum、Response.Name。
                     */
                    bool m_isEncrypt;
                    bool m_isEncryptHasBeenSet;

                    /**
                     * 是否需要对响应体加密。
                     */
                    bool m_isEncryptResponse;
                    bool m_isEncryptResponseHasBeenSet;

                    /**
                     * 是否需要对返回中的敏感信息进行加密,需指定加密算法Algorithm、CBC加密的初始向量、加密后的对称密钥。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDCARDINFORMATIONREQUEST_H_
