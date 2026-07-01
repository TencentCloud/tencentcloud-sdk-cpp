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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDTOKENREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/GetEidTokenConfig.h>
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
                * GetEidToken请求参数结构体
                */
                class GetEidTokenRequest : public AbstractModel
                {
                public:
                    GetEidTokenRequest();
                    ~GetEidTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>EID商户ID。</p><ul><li>商户ID通过人脸核身控制台<a href="https://console.cloud.tencent.com/faceid/access">自助接入</a>申请。</li><li>商户ID与您通过腾讯云人脸核身控制台完成自助接入时所使用的腾讯云账号绑定。</li><li>必须使用申请该商户ID时登录的腾讯云账号所对应的腾讯云API密钥调用该接口。</li></ul>
                     * @return MerchantId <p>EID商户ID。</p><ul><li>商户ID通过人脸核身控制台<a href="https://console.cloud.tencent.com/faceid/access">自助接入</a>申请。</li><li>商户ID与您通过腾讯云人脸核身控制台完成自助接入时所使用的腾讯云账号绑定。</li><li>必须使用申请该商户ID时登录的腾讯云账号所对应的腾讯云API密钥调用该接口。</li></ul>
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置<p>EID商户ID。</p><ul><li>商户ID通过人脸核身控制台<a href="https://console.cloud.tencent.com/faceid/access">自助接入</a>申请。</li><li>商户ID与您通过腾讯云人脸核身控制台完成自助接入时所使用的腾讯云账号绑定。</li><li>必须使用申请该商户ID时登录的腾讯云账号所对应的腾讯云API密钥调用该接口。</li></ul>
                     * @param _merchantId <p>EID商户ID。</p><ul><li>商户ID通过人脸核身控制台<a href="https://console.cloud.tencent.com/faceid/access">自助接入</a>申请。</li><li>商户ID与您通过腾讯云人脸核身控制台完成自助接入时所使用的腾讯云账号绑定。</li><li>必须使用申请该商户ID时登录的腾讯云账号所对应的腾讯云API密钥调用该接口。</li></ul>
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取<p>身份标识。</p><ul><li>未使用OCR服务时，必须传入。</li><li>规则：a-z，A-Z，0-9组合。</li><li>最长长度32位。</li></ul>
                     * @return IdCard <p>身份标识。</p><ul><li>未使用OCR服务时，必须传入。</li><li>规则：a-z，A-Z，0-9组合。</li><li>最长长度32位。</li></ul>
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置<p>身份标识。</p><ul><li>未使用OCR服务时，必须传入。</li><li>规则：a-z，A-Z，0-9组合。</li><li>最长长度32位。</li></ul>
                     * @param _idCard <p>身份标识。</p><ul><li>未使用OCR服务时，必须传入。</li><li>规则：a-z，A-Z，0-9组合。</li><li>最长长度32位。</li></ul>
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
                     * 获取<p>姓名。</p><ul><li>未使用OCR服务时，必须传入。</li><li>最长长度32位。</li><li>中文请使用UTF-8编码。</li></ul>
                     * @return Name <p>姓名。</p><ul><li>未使用OCR服务时，必须传入。</li><li>最长长度32位。</li><li>中文请使用UTF-8编码。</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>姓名。</p><ul><li>未使用OCR服务时，必须传入。</li><li>最长长度32位。</li><li>中文请使用UTF-8编码。</li></ul>
                     * @param _name <p>姓名。</p><ul><li>未使用OCR服务时，必须传入。</li><li>最长长度32位。</li><li>中文请使用UTF-8编码。</li></ul>
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
                     * 获取<p>透传字段，在获取验证结果时返回。</p><ul><li>最长长度1024位。</li></ul>
                     * @return Extra <p>透传字段，在获取验证结果时返回。</p><ul><li>最长长度1024位。</li></ul>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>透传字段，在获取验证结果时返回。</p><ul><li>最长长度1024位。</li></ul>
                     * @param _extra <p>透传字段，在获取验证结果时返回。</p><ul><li>最长长度1024位。</li></ul>
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取<p>小程序模式配置，包括如何传入姓名身份证的配置，以及是否使用意愿核身。</p>
                     * @return Config <p>小程序模式配置，包括如何传入姓名身份证的配置，以及是否使用意愿核身。</p>
                     * 
                     */
                    GetEidTokenConfig GetConfig() const;

                    /**
                     * 设置<p>小程序模式配置，包括如何传入姓名身份证的配置，以及是否使用意愿核身。</p>
                     * @param _config <p>小程序模式配置，包括如何传入姓名身份证的配置，以及是否使用意愿核身。</p>
                     * 
                     */
                    void SetConfig(const GetEidTokenConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>用户从Url中进入核身认证结束后重定向的回调链接地址。</p><ul><li>最长长度1024位。</li><li>EidToken会在该链接的query参数中。</li></ul>
                     * @return RedirectUrl <p>用户从Url中进入核身认证结束后重定向的回调链接地址。</p><ul><li>最长长度1024位。</li><li>EidToken会在该链接的query参数中。</li></ul>
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置<p>用户从Url中进入核身认证结束后重定向的回调链接地址。</p><ul><li>最长长度1024位。</li><li>EidToken会在该链接的query参数中。</li></ul>
                     * @param _redirectUrl <p>用户从Url中进入核身认证结束后重定向的回调链接地址。</p><ul><li>最长长度1024位。</li><li>EidToken会在该链接的query参数中。</li></ul>
                     * 
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     * 
                     */
                    bool RedirectUrlHasBeenSet() const;

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

                private:

                    /**
                     * <p>EID商户ID。</p><ul><li>商户ID通过人脸核身控制台<a href="https://console.cloud.tencent.com/faceid/access">自助接入</a>申请。</li><li>商户ID与您通过腾讯云人脸核身控制台完成自助接入时所使用的腾讯云账号绑定。</li><li>必须使用申请该商户ID时登录的腾讯云账号所对应的腾讯云API密钥调用该接口。</li></ul>
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * <p>身份标识。</p><ul><li>未使用OCR服务时，必须传入。</li><li>规则：a-z，A-Z，0-9组合。</li><li>最长长度32位。</li></ul>
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * <p>姓名。</p><ul><li>未使用OCR服务时，必须传入。</li><li>最长长度32位。</li><li>中文请使用UTF-8编码。</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>透传字段，在获取验证结果时返回。</p><ul><li>最长长度1024位。</li></ul>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * <p>小程序模式配置，包括如何传入姓名身份证的配置，以及是否使用意愿核身。</p>
                     */
                    GetEidTokenConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>用户从Url中进入核身认证结束后重定向的回调链接地址。</p><ul><li>最长长度1024位。</li><li>EidToken会在该链接的query参数中。</li></ul>
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * <p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDTOKENREQUEST_H_
