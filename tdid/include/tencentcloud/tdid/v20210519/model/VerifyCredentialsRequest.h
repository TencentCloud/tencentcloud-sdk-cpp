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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYCREDENTIALSREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYCREDENTIALSREQUEST_H_

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
                * VerifyCredentials请求参数结构体
                */
                class VerifyCredentialsRequest : public AbstractModel
                {
                public:
                    VerifyCredentialsRequest();
                    ~VerifyCredentialsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0:仅验证签名，1:验证签名和链上状态，2, 仅验证链上状态，默认为0, 3.验证DID和凭证状态以及签名，4. 验证历史凭证有效性
                     * @return VerifyType 0:仅验证签名，1:验证签名和链上状态，2, 仅验证链上状态，默认为0, 3.验证DID和凭证状态以及签名，4. 验证历史凭证有效性
                     * 
                     */
                    uint64_t GetVerifyType() const;

                    /**
                     * 设置0:仅验证签名，1:验证签名和链上状态，2, 仅验证链上状态，默认为0, 3.验证DID和凭证状态以及签名，4. 验证历史凭证有效性
                     * @param _verifyType 0:仅验证签名，1:验证签名和链上状态，2, 仅验证链上状态，默认为0, 3.验证DID和凭证状态以及签名，4. 验证历史凭证有效性
                     * 
                     */
                    void SetVerifyType(const uint64_t& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取凭证内容
                     * @return CredentialData 凭证内容
                     * 
                     */
                    std::string GetCredentialData() const;

                    /**
                     * 设置凭证内容
                     * @param _credentialData 凭证内容
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

                private:

                    /**
                     * 0:仅验证签名，1:验证签名和链上状态，2, 仅验证链上状态，默认为0, 3.验证DID和凭证状态以及签名，4. 验证历史凭证有效性
                     */
                    uint64_t m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * 凭证内容
                     */
                    std::string m_credentialData;
                    bool m_credentialDataHasBeenSet;

                    /**
                     * DID应用id
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYCREDENTIALSREQUEST_H_
