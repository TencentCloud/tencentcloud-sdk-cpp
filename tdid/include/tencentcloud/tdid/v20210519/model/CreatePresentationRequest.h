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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREATEPRESENTATIONREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREATEPRESENTATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/CredentialProof.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * CreatePresentation请求参数结构体
                */
                class CreatePresentationRequest : public AbstractModel
                {
                public:
                    CreatePresentationRequest();
                    ~CreatePresentationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DID应用id
                     * @return DAPId DID应用id
                     * 
                     */
                    uint64_t GetDAPId() const;

                    /**
                     * 设置DID应用id
                     * @param _dAPId DID应用id
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
                     * 获取用户应用id
                     * @return UAPId 用户应用id
                     * 
                     */
                    uint64_t GetUAPId() const;

                    /**
                     * 设置用户应用id
                     * @param _uAPId 用户应用id
                     * 
                     */
                    void SetUAPId(const uint64_t& _uAPId);

                    /**
                     * 判断参数 UAPId 是否已赋值
                     * @return UAPId 是否已赋值
                     * 
                     */
                    bool UAPIdHasBeenSet() const;

                    /**
                     * 获取凭证列表
                     * @return Credentials 凭证列表
                     * 
                     */
                    std::vector<std::string> GetCredentials() const;

                    /**
                     * 设置凭证列表
                     * @param _credentials 凭证列表
                     * 
                     */
                    void SetCredentials(const std::vector<std::string>& _credentials);

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                    /**
                     * 获取VP持有人的DID标识
                     * @return Did VP持有人的DID标识
                     * 
                     */
                    std::string GetDid() const;

                    /**
                     * 设置VP持有人的DID标识
                     * @param _did VP持有人的DID标识
                     * 
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     * 
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取VP随机验证码
                     * @return VerifyCode VP随机验证码
                     * 
                     */
                    std::string GetVerifyCode() const;

                    /**
                     * 设置VP随机验证码
                     * @param _verifyCode VP随机验证码
                     * 
                     */
                    void SetVerifyCode(const std::string& _verifyCode);

                    /**
                     * 判断参数 VerifyCode 是否已赋值
                     * @return VerifyCode 是否已赋值
                     * 
                     */
                    bool VerifyCodeHasBeenSet() const;

                    /**
                     * 获取选择性披露策略
                     * @return PolicyJson 选择性披露策略
                     * 
                     */
                    std::string GetPolicyJson() const;

                    /**
                     * 设置选择性披露策略
                     * @param _policyJson 选择性披露策略
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
                     * 获取是否签名，ture时signatureValue为待签名内容由调用端自行签名，false时signatureValue为平台自动已签名的内容。默认false
                     * @return Unsigned 是否签名，ture时signatureValue为待签名内容由调用端自行签名，false时signatureValue为平台自动已签名的内容。默认false
                     * 
                     */
                    bool GetUnsigned() const;

                    /**
                     * 设置是否签名，ture时signatureValue为待签名内容由调用端自行签名，false时signatureValue为平台自动已签名的内容。默认false
                     * @param _unsigned 是否签名，ture时signatureValue为待签名内容由调用端自行签名，false时signatureValue为平台自动已签名的内容。默认false
                     * 
                     */
                    void SetUnsigned(const bool& _unsigned);

                    /**
                     * 判断参数 Unsigned 是否已赋值
                     * @return Unsigned 是否已赋值
                     * 
                     */
                    bool UnsignedHasBeenSet() const;

                    /**
                     * 获取可验证凭证证明列表
                     * @return CredentialList 可验证凭证证明列表
                     * 
                     */
                    std::vector<CredentialProof> GetCredentialList() const;

                    /**
                     * 设置可验证凭证证明列表
                     * @param _credentialList 可验证凭证证明列表
                     * 
                     */
                    void SetCredentialList(const std::vector<CredentialProof>& _credentialList);

                    /**
                     * 判断参数 CredentialList 是否已赋值
                     * @return CredentialList 是否已赋值
                     * 
                     */
                    bool CredentialListHasBeenSet() const;

                private:

                    /**
                     * DID应用id
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                    /**
                     * 用户应用id
                     */
                    uint64_t m_uAPId;
                    bool m_uAPIdHasBeenSet;

                    /**
                     * 凭证列表
                     */
                    std::vector<std::string> m_credentials;
                    bool m_credentialsHasBeenSet;

                    /**
                     * VP持有人的DID标识
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * VP随机验证码
                     */
                    std::string m_verifyCode;
                    bool m_verifyCodeHasBeenSet;

                    /**
                     * 选择性披露策略
                     */
                    std::string m_policyJson;
                    bool m_policyJsonHasBeenSet;

                    /**
                     * 是否签名，ture时signatureValue为待签名内容由调用端自行签名，false时signatureValue为平台自动已签名的内容。默认false
                     */
                    bool m_unsigned;
                    bool m_unsignedHasBeenSet;

                    /**
                     * 可验证凭证证明列表
                     */
                    std::vector<CredentialProof> m_credentialList;
                    bool m_credentialListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREATEPRESENTATIONREQUEST_H_
