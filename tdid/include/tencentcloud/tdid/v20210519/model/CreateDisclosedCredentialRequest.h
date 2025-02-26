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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREATEDISCLOSEDCREDENTIALREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREATEDISCLOSEDCREDENTIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * CreateDisclosedCredential请求参数结构体
                */
                class CreateDisclosedCredentialRequest : public AbstractModel
                {
                public:
                    CreateDisclosedCredentialRequest();
                    ~CreateDisclosedCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取披露策略id，PolicyJson和PolicyId任选其一
                     * @return PolicyId 披露策略id，PolicyJson和PolicyId任选其一
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置披露策略id，PolicyJson和PolicyId任选其一
                     * @param _policyId 披露策略id，PolicyJson和PolicyId任选其一
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取凭证文本内容，FunctionArg和CredentialText任选其一
                     * @return CredentialData 凭证文本内容，FunctionArg和CredentialText任选其一
                     * 
                     */
                    std::string GetCredentialData() const;

                    /**
                     * 设置凭证文本内容，FunctionArg和CredentialText任选其一
                     * @param _credentialData 凭证文本内容，FunctionArg和CredentialText任选其一
                     * 
                     */
                    void SetCredentialData(const std::string& _credentialData);

                    /**
                     * 判断参数 CredentialData 是否已赋值
                     * @return CredentialData 是否已赋值
                     * 
                     */
                    bool CredentialDataHasBeenSet() const;

                    /**
                     * 获取披露策略文本
                     * @return PolicyJson 披露策略文本
                     * 
                     */
                    std::string GetPolicyJson() const;

                    /**
                     * 设置披露策略文本
                     * @param _policyJson 披露策略文本
                     * 
                     */
                    void SetPolicyJson(const std::string& _policyJson);

                    /**
                     * 判断参数 PolicyJson 是否已赋值
                     * @return PolicyJson 是否已赋值
                     * 
                     */
                    bool PolicyJsonHasBeenSet() const;

                    /**
                     * 获取DID应用ID
                     * @return DAPId DID应用ID
                     * 
                     */
                    uint64_t GetDAPId() const;

                    /**
                     * 设置DID应用ID
                     * @param _dAPId DID应用ID
                     * 
                     */
                    void SetDAPId(const uint64_t& _dAPId);

                    /**
                     * 判断参数 DAPId 是否已赋值
                     * @return DAPId 是否已赋值
                     * 
                     */
                    bool DAPIdHasBeenSet() const;

                    /**
                     * 获取用户应用ID
                     * @return UAPId 用户应用ID
                     * 
                     */
                    uint64_t GetUAPId() const;

                    /**
                     * 设置用户应用ID
                     * @param _uAPId 用户应用ID
                     * 
                     */
                    void SetUAPId(const uint64_t& _uAPId);

                    /**
                     * 判断参数 UAPId 是否已赋值
                     * @return UAPId 是否已赋值
                     * 
                     */
                    bool UAPIdHasBeenSet() const;

                private:

                    /**
                     * 披露策略id，PolicyJson和PolicyId任选其一
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 凭证文本内容，FunctionArg和CredentialText任选其一
                     */
                    std::string m_credentialData;
                    bool m_credentialDataHasBeenSet;

                    /**
                     * 披露策略文本
                     */
                    std::string m_policyJson;
                    bool m_policyJsonHasBeenSet;

                    /**
                     * DID应用ID
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                    /**
                     * 用户应用ID
                     */
                    uint64_t m_uAPId;
                    bool m_uAPIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREATEDISCLOSEDCREDENTIALREQUEST_H_
