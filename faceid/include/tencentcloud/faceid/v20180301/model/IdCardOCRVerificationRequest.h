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
                     * 获取<p>身份证号。</p><ul><li>姓名和身份证号、ImageBase64、ImageUrl三者必须提供其中之一。</li><li>若都提供了，则按照姓名和身份证号&gt;ImageBase64&gt;ImageUrl的优先级使用参数。</li></ul>
                     * @return IdCard <p>身份证号。</p><ul><li>姓名和身份证号、ImageBase64、ImageUrl三者必须提供其中之一。</li><li>若都提供了，则按照姓名和身份证号&gt;ImageBase64&gt;ImageUrl的优先级使用参数。</li></ul>
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置<p>身份证号。</p><ul><li>姓名和身份证号、ImageBase64、ImageUrl三者必须提供其中之一。</li><li>若都提供了，则按照姓名和身份证号&gt;ImageBase64&gt;ImageUrl的优先级使用参数。</li></ul>
                     * @param _idCard <p>身份证号。</p><ul><li>姓名和身份证号、ImageBase64、ImageUrl三者必须提供其中之一。</li><li>若都提供了，则按照姓名和身份证号&gt;ImageBase64&gt;ImageUrl的优先级使用参数。</li></ul>
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
                     * 获取<p>姓名。</p>
                     * @return Name <p>姓名。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>姓名。</p>
                     * @param _name <p>姓名。</p>
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
                     * 获取<p>身份证人像面的 Base64 值。</p><ul><li>支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。</li><li>支持的图片大小：所下载图片经Base64编码后不超过 3M。请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
                     * @return ImageBase64 <p>身份证人像面的 Base64 值。</p><ul><li>支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。</li><li>支持的图片大小：所下载图片经Base64编码后不超过 3M。请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>身份证人像面的 Base64 值。</p><ul><li>支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。</li><li>支持的图片大小：所下载图片经Base64编码后不超过 3M。请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
                     * @param _imageBase64 <p>身份证人像面的 Base64 值。</p><ul><li>支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。</li><li>支持的图片大小：所下载图片经Base64编码后不超过 3M。请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
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
                     * 获取<p>身份证人像面的 Url 地址。</p><ul><li>支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。</li><li>支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。</li><li>图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
                     * @return ImageUrl <p>身份证人像面的 Url 地址。</p><ul><li>支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。</li><li>支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。</li><li>图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>身份证人像面的 Url 地址。</p><ul><li>支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。</li><li>支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。</li><li>图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
                     * @param _imageUrl <p>身份证人像面的 Url 地址。</p><ul><li>支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。</li><li>支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。</li><li>图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
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
                     * 获取<p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     * @return Encryption <p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     * @param _encryption <p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取<p>告警配置。</p><ul><li>仅当使用ImageBase64或者ImageUrl时，告警配置生效</li><li>以下可选字段均为bool 类型，默认false。<ul><li>CopyWarn，复印件告警。</li><li>BorderCheckWarn，边框和框内遮挡告警。</li><li>ReshootWarn，翻拍告警。</li><li>DetectPsWarn，PS检测告警（疑似存在PS痕迹）。</li><li>TempIdWarn，临时身份证告警。</li><li>Quality，图片质量告警（评价图片模糊程度）。</li></ul></li><li>SDK 设置方式参考：Config = Json.stringify({&quot;CopyWarn&quot;:true,&quot;ReshootWarn&quot;:true})。</li><li>API 3.0 Explorer 设置方式参考：Config = {&quot;CopyWarn&quot;:true,&quot;Quality&quot;:true}。</li></ul>
                     * @return Config <p>告警配置。</p><ul><li>仅当使用ImageBase64或者ImageUrl时，告警配置生效</li><li>以下可选字段均为bool 类型，默认false。<ul><li>CopyWarn，复印件告警。</li><li>BorderCheckWarn，边框和框内遮挡告警。</li><li>ReshootWarn，翻拍告警。</li><li>DetectPsWarn，PS检测告警（疑似存在PS痕迹）。</li><li>TempIdWarn，临时身份证告警。</li><li>Quality，图片质量告警（评价图片模糊程度）。</li></ul></li><li>SDK 设置方式参考：Config = Json.stringify({&quot;CopyWarn&quot;:true,&quot;ReshootWarn&quot;:true})。</li><li>API 3.0 Explorer 设置方式参考：Config = {&quot;CopyWarn&quot;:true,&quot;Quality&quot;:true}。</li></ul>
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置<p>告警配置。</p><ul><li>仅当使用ImageBase64或者ImageUrl时，告警配置生效</li><li>以下可选字段均为bool 类型，默认false。<ul><li>CopyWarn，复印件告警。</li><li>BorderCheckWarn，边框和框内遮挡告警。</li><li>ReshootWarn，翻拍告警。</li><li>DetectPsWarn，PS检测告警（疑似存在PS痕迹）。</li><li>TempIdWarn，临时身份证告警。</li><li>Quality，图片质量告警（评价图片模糊程度）。</li></ul></li><li>SDK 设置方式参考：Config = Json.stringify({&quot;CopyWarn&quot;:true,&quot;ReshootWarn&quot;:true})。</li><li>API 3.0 Explorer 设置方式参考：Config = {&quot;CopyWarn&quot;:true,&quot;Quality&quot;:true}。</li></ul>
                     * @param _config <p>告警配置。</p><ul><li>仅当使用ImageBase64或者ImageUrl时，告警配置生效</li><li>以下可选字段均为bool 类型，默认false。<ul><li>CopyWarn，复印件告警。</li><li>BorderCheckWarn，边框和框内遮挡告警。</li><li>ReshootWarn，翻拍告警。</li><li>DetectPsWarn，PS检测告警（疑似存在PS痕迹）。</li><li>TempIdWarn，临时身份证告警。</li><li>Quality，图片质量告警（评价图片模糊程度）。</li></ul></li><li>SDK 设置方式参考：Config = Json.stringify({&quot;CopyWarn&quot;:true,&quot;ReshootWarn&quot;:true})。</li><li>API 3.0 Explorer 设置方式参考：Config = {&quot;CopyWarn&quot;:true,&quot;Quality&quot;:true}。</li></ul>
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * <p>身份证号。</p><ul><li>姓名和身份证号、ImageBase64、ImageUrl三者必须提供其中之一。</li><li>若都提供了，则按照姓名和身份证号&gt;ImageBase64&gt;ImageUrl的优先级使用参数。</li></ul>
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * <p>姓名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>身份证人像面的 Base64 值。</p><ul><li>支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。</li><li>支持的图片大小：所下载图片经Base64编码后不超过 3M。请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>身份证人像面的 Url 地址。</p><ul><li>支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。</li><li>支持的图片大小：所下载图片经 Base64 编码后不超过 3M。图片下载时间不超过 3 秒。</li><li>图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>告警配置。</p><ul><li>仅当使用ImageBase64或者ImageUrl时，告警配置生效</li><li>以下可选字段均为bool 类型，默认false。<ul><li>CopyWarn，复印件告警。</li><li>BorderCheckWarn，边框和框内遮挡告警。</li><li>ReshootWarn，翻拍告警。</li><li>DetectPsWarn，PS检测告警（疑似存在PS痕迹）。</li><li>TempIdWarn，临时身份证告警。</li><li>Quality，图片质量告警（评价图片模糊程度）。</li></ul></li><li>SDK 设置方式参考：Config = Json.stringify({&quot;CopyWarn&quot;:true,&quot;ReshootWarn&quot;:true})。</li><li>API 3.0 Explorer 设置方式参考：Config = {&quot;CopyWarn&quot;:true,&quot;Quality&quot;:true}。</li></ul>
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDOCRVERIFICATIONREQUEST_H_
