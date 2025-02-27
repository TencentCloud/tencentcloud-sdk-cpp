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
                     * 获取EID商户ID。
- 商户ID通过人脸核身控制台[自助接入](https://console.cloud.tencent.com/faceid/access)申请。
- 商户ID与您通过腾讯云人脸核身控制台完成自助接入时所使用的腾讯云账号绑定。
- 必须使用申请该商户ID时登录的腾讯云账号所对应的腾讯云API密钥调用该接口。
                     * @return MerchantId EID商户ID。
- 商户ID通过人脸核身控制台[自助接入](https://console.cloud.tencent.com/faceid/access)申请。
- 商户ID与您通过腾讯云人脸核身控制台完成自助接入时所使用的腾讯云账号绑定。
- 必须使用申请该商户ID时登录的腾讯云账号所对应的腾讯云API密钥调用该接口。
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置EID商户ID。
- 商户ID通过人脸核身控制台[自助接入](https://console.cloud.tencent.com/faceid/access)申请。
- 商户ID与您通过腾讯云人脸核身控制台完成自助接入时所使用的腾讯云账号绑定。
- 必须使用申请该商户ID时登录的腾讯云账号所对应的腾讯云API密钥调用该接口。
                     * @param _merchantId EID商户ID。
- 商户ID通过人脸核身控制台[自助接入](https://console.cloud.tencent.com/faceid/access)申请。
- 商户ID与您通过腾讯云人脸核身控制台完成自助接入时所使用的腾讯云账号绑定。
- 必须使用申请该商户ID时登录的腾讯云账号所对应的腾讯云API密钥调用该接口。
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
                     * 获取身份标识。
- 未使用OCR服务时，必须传入。
- 规则：a-z，A-Z，0-9组合。
- 最长长度32位。
                     * @return IdCard 身份标识。
- 未使用OCR服务时，必须传入。
- 规则：a-z，A-Z，0-9组合。
- 最长长度32位。
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置身份标识。
- 未使用OCR服务时，必须传入。
- 规则：a-z，A-Z，0-9组合。
- 最长长度32位。
                     * @param _idCard 身份标识。
- 未使用OCR服务时，必须传入。
- 规则：a-z，A-Z，0-9组合。
- 最长长度32位。
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
- 未使用OCR服务时，必须传入。
- 最长长度32位。
- 中文请使用UTF-8编码。
                     * @return Name 姓名。
- 未使用OCR服务时，必须传入。
- 最长长度32位。
- 中文请使用UTF-8编码。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名。
- 未使用OCR服务时，必须传入。
- 最长长度32位。
- 中文请使用UTF-8编码。
                     * @param _name 姓名。
- 未使用OCR服务时，必须传入。
- 最长长度32位。
- 中文请使用UTF-8编码。
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
                     * 获取透传字段，在获取验证结果时返回。
- 最长长度1024位。
                     * @return Extra 透传字段，在获取验证结果时返回。
- 最长长度1024位。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置透传字段，在获取验证结果时返回。
- 最长长度1024位。
                     * @param _extra 透传字段，在获取验证结果时返回。
- 最长长度1024位。
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
                     * 获取小程序模式配置，包括如何传入姓名身份证的配置，以及是否使用意愿核身。
                     * @return Config 小程序模式配置，包括如何传入姓名身份证的配置，以及是否使用意愿核身。
                     * 
                     */
                    GetEidTokenConfig GetConfig() const;

                    /**
                     * 设置小程序模式配置，包括如何传入姓名身份证的配置，以及是否使用意愿核身。
                     * @param _config 小程序模式配置，包括如何传入姓名身份证的配置，以及是否使用意愿核身。
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
                     * 获取用户从Url中进入核身认证结束后重定向的回调链接地址。
- 最长长度1024位。
- EidToken会在该链接的query参数中。
                     * @return RedirectUrl 用户从Url中进入核身认证结束后重定向的回调链接地址。
- 最长长度1024位。
- EidToken会在该链接的query参数中。
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置用户从Url中进入核身认证结束后重定向的回调链接地址。
- 最长长度1024位。
- EidToken会在该链接的query参数中。
                     * @param _redirectUrl 用户从Url中进入核身认证结束后重定向的回调链接地址。
- 最长长度1024位。
- EidToken会在该链接的query参数中。
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
                     * EID商户ID。
- 商户ID通过人脸核身控制台[自助接入](https://console.cloud.tencent.com/faceid/access)申请。
- 商户ID与您通过腾讯云人脸核身控制台完成自助接入时所使用的腾讯云账号绑定。
- 必须使用申请该商户ID时登录的腾讯云账号所对应的腾讯云API密钥调用该接口。
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 身份标识。
- 未使用OCR服务时，必须传入。
- 规则：a-z，A-Z，0-9组合。
- 最长长度32位。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 姓名。
- 未使用OCR服务时，必须传入。
- 最长长度32位。
- 中文请使用UTF-8编码。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 透传字段，在获取验证结果时返回。
- 最长长度1024位。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 小程序模式配置，包括如何传入姓名身份证的配置，以及是否使用意愿核身。
                     */
                    GetEidTokenConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 用户从Url中进入核身认证结束后重定向的回调链接地址。
- 最长长度1024位。
- EidToken会在该链接的query参数中。
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

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

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDTOKENREQUEST_H_
