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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7RULECERTREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7RULECERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateL7RuleCert请求参数结构体
                */
                class CreateL7RuleCertRequest : public AbstractModel
                {
                public:
                    CreateL7RuleCertRequest();
                    ~CreateL7RuleCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源实例ID，例如高防IP实例的ID，高防IP专业版实例的ID
                     * @return Id 资源实例ID，例如高防IP实例的ID，高防IP专业版实例的ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源实例ID，例如高防IP实例的ID，高防IP专业版实例的ID
                     * @param _id 资源实例ID，例如高防IP实例的ID，高防IP专业版实例的ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取证书类型，当为协议为HTTPS协议时必须填，取值[2(腾讯云托管证书)]
                     * @return CertType 证书类型，当为协议为HTTPS协议时必须填，取值[2(腾讯云托管证书)]
                     * 
                     */
                    uint64_t GetCertType() const;

                    /**
                     * 设置证书类型，当为协议为HTTPS协议时必须填，取值[2(腾讯云托管证书)]
                     * @param _certType 证书类型，当为协议为HTTPS协议时必须填，取值[2(腾讯云托管证书)]
                     * 
                     */
                    void SetCertType(const uint64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     * @return SSLId 当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     * 
                     */
                    std::string GetSSLId() const;

                    /**
                     * 设置当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     * @param _sSLId 当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     * 
                     */
                    void SetSSLId(const std::string& _sSLId);

                    /**
                     * 判断参数 SSLId 是否已赋值
                     * @return SSLId 是否已赋值
                     * 
                     */
                    bool SSLIdHasBeenSet() const;

                    /**
                     * 获取当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * @return Cert 当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * @param _cert 当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * 
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取当证书来源为自有证书时，此字段必须填写证书密钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * @return PrivateKey 当证书来源为自有证书时，此字段必须填写证书密钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置当证书来源为自有证书时，此字段必须填写证书密钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * @param _privateKey 当证书来源为自有证书时，此字段必须填写证书密钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源实例ID，例如高防IP实例的ID，高防IP专业版实例的ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 证书类型，当为协议为HTTPS协议时必须填，取值[2(腾讯云托管证书)]
                     */
                    uint64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 当证书来源为腾讯云托管证书时，此字段必须填写托管证书ID
                     */
                    std::string m_sSLId;
                    bool m_sSLIdHasBeenSet;

                    /**
                     * 当证书来源为自有证书时，此字段必须填写证书内容；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * 当证书来源为自有证书时，此字段必须填写证书密钥；(因已不再支持自有证书，此字段已弃用，请不用填写此字段)
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7RULECERTREQUEST_H_
