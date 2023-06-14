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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_ADDFAIRPLAYPEMREQUEST_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_ADDFAIRPLAYPEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * AddFairPlayPem请求参数结构体
                */
                class AddFairPlayPemRequest : public AbstractModel
                {
                public:
                    AddFairPlayPemRequest();
                    ~AddFairPlayPemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取加密后的fairplay方案申请时使用的私钥。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对私钥文件中的字段进行加密，并对加密结果进行base64编码。
                     * @return Pem 加密后的fairplay方案申请时使用的私钥。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对私钥文件中的字段进行加密，并对加密结果进行base64编码。
                     * 
                     */
                    std::string GetPem() const;

                    /**
                     * 设置加密后的fairplay方案申请时使用的私钥。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对私钥文件中的字段进行加密，并对加密结果进行base64编码。
                     * @param _pem 加密后的fairplay方案申请时使用的私钥。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对私钥文件中的字段进行加密，并对加密结果进行base64编码。
                     * 
                     */
                    void SetPem(const std::string& _pem);

                    /**
                     * 判断参数 Pem 是否已赋值
                     * @return Pem 是否已赋值
                     * 
                     */
                    bool PemHasBeenSet() const;

                    /**
                     * 获取加密后的fairplay方案申请返回的ask数据。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对Ask字符串进行加密，并对加密结果进行base64编码。
                     * @return Ask 加密后的fairplay方案申请返回的ask数据。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对Ask字符串进行加密，并对加密结果进行base64编码。
                     * 
                     */
                    std::string GetAsk() const;

                    /**
                     * 设置加密后的fairplay方案申请返回的ask数据。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对Ask字符串进行加密，并对加密结果进行base64编码。
                     * @param _ask 加密后的fairplay方案申请返回的ask数据。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对Ask字符串进行加密，并对加密结果进行base64编码。
                     * 
                     */
                    void SetAsk(const std::string& _ask);

                    /**
                     * 判断参数 Ask 是否已赋值
                     * @return Ask 是否已赋值
                     * 
                     */
                    bool AskHasBeenSet() const;

                    /**
                     * 获取私钥的解密密钥。
openssl在生成rsa时，可能会需要设置加密密钥，请记住设置的密钥。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     * @return PemDecryptKey 私钥的解密密钥。
openssl在生成rsa时，可能会需要设置加密密钥，请记住设置的密钥。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     * 
                     */
                    std::string GetPemDecryptKey() const;

                    /**
                     * 设置私钥的解密密钥。
openssl在生成rsa时，可能会需要设置加密密钥，请记住设置的密钥。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     * @param _pemDecryptKey 私钥的解密密钥。
openssl在生成rsa时，可能会需要设置加密密钥，请记住设置的密钥。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     * 
                     */
                    void SetPemDecryptKey(const std::string& _pemDecryptKey);

                    /**
                     * 判断参数 PemDecryptKey 是否已赋值
                     * @return PemDecryptKey 是否已赋值
                     * 
                     */
                    bool PemDecryptKeyHasBeenSet() const;

                    /**
                     * 获取委托者Id,适用于托管自身证书的客户。普通客户无需填该字段。
                     * @return BailorId 委托者Id,适用于托管自身证书的客户。普通客户无需填该字段。
                     * 
                     */
                    uint64_t GetBailorId() const;

                    /**
                     * 设置委托者Id,适用于托管自身证书的客户。普通客户无需填该字段。
                     * @param _bailorId 委托者Id,适用于托管自身证书的客户。普通客户无需填该字段。
                     * 
                     */
                    void SetBailorId(const uint64_t& _bailorId);

                    /**
                     * 判断参数 BailorId 是否已赋值
                     * @return BailorId 是否已赋值
                     * 
                     */
                    bool BailorIdHasBeenSet() const;

                    /**
                     * 获取私钥的优先级，优先级数值越高，优先级越高。
该值可以不传，后台将自动分配一个优先级。
                     * @return Priority 私钥的优先级，优先级数值越高，优先级越高。
该值可以不传，后台将自动分配一个优先级。
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置私钥的优先级，优先级数值越高，优先级越高。
该值可以不传，后台将自动分配一个优先级。
                     * @param _priority 私钥的优先级，优先级数值越高，优先级越高。
该值可以不传，后台将自动分配一个优先级。
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 加密后的fairplay方案申请时使用的私钥。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对私钥文件中的字段进行加密，并对加密结果进行base64编码。
                     */
                    std::string m_pem;
                    bool m_pemHasBeenSet;

                    /**
                     * 加密后的fairplay方案申请返回的ask数据。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对Ask字符串进行加密，并对加密结果进行base64编码。
                     */
                    std::string m_ask;
                    bool m_askHasBeenSet;

                    /**
                     * 私钥的解密密钥。
openssl在生成rsa时，可能会需要设置加密密钥，请记住设置的密钥。
请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     */
                    std::string m_pemDecryptKey;
                    bool m_pemDecryptKeyHasBeenSet;

                    /**
                     * 委托者Id,适用于托管自身证书的客户。普通客户无需填该字段。
                     */
                    uint64_t m_bailorId;
                    bool m_bailorIdHasBeenSet;

                    /**
                     * 私钥的优先级，优先级数值越高，优先级越高。
该值可以不传，后台将自动分配一个优先级。
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_ADDFAIRPLAYPEMREQUEST_H_
