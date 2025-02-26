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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_UPDATECREDENTIALSTATEREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_UPDATECREDENTIALSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/CredentialStatusInfo.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * UpdateCredentialState请求参数结构体
                */
                class UpdateCredentialStateRequest : public AbstractModel
                {
                public:
                    UpdateCredentialStateRequest();
                    ~UpdateCredentialStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DID应用Id
                     * @return DAPId DID应用Id
                     * 
                     */
                    uint64_t GetDAPId() const;

                    /**
                     * 设置DID应用Id
                     * @param _dAPId DID应用Id
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
                     * 获取更新VC状态的临时凭证内容，通过创建凭证接口(CreateCredential)生成并签名，凭证类型为：OperateCredential, 为安全起见凭证过期时间不适合太长，如设置为1分钟内
                     * @return OperateCredential 更新VC状态的临时凭证内容，通过创建凭证接口(CreateCredential)生成并签名，凭证类型为：OperateCredential, 为安全起见凭证过期时间不适合太长，如设置为1分钟内
                     * 
                     */
                    std::string GetOperateCredential() const;

                    /**
                     * 设置更新VC状态的临时凭证内容，通过创建凭证接口(CreateCredential)生成并签名，凭证类型为：OperateCredential, 为安全起见凭证过期时间不适合太长，如设置为1分钟内
                     * @param _operateCredential 更新VC状态的临时凭证内容，通过创建凭证接口(CreateCredential)生成并签名，凭证类型为：OperateCredential, 为安全起见凭证过期时间不适合太长，如设置为1分钟内
                     * 
                     */
                    void SetOperateCredential(const std::string& _operateCredential);

                    /**
                     * 判断参数 OperateCredential 是否已赋值
                     * @return OperateCredential 是否已赋值
                     * 
                     */
                    bool OperateCredentialHasBeenSet() const;

                    /**
                     * 获取待更新凭证状态的原始凭证内容
                     * @return OriginCredential 待更新凭证状态的原始凭证内容
                     * 
                     */
                    std::string GetOriginCredential() const;

                    /**
                     * 设置待更新凭证状态的原始凭证内容
                     * @param _originCredential 待更新凭证状态的原始凭证内容
                     * 
                     */
                    void SetOriginCredential(const std::string& _originCredential);

                    /**
                     * 判断参数 OriginCredential 是否已赋值
                     * @return OriginCredential 是否已赋值
                     * 
                     */
                    bool OriginCredentialHasBeenSet() const;

                    /**
                     * 获取凭证状态信息
                     * @return CredentialStatus 凭证状态信息
                     * 
                     */
                    CredentialStatusInfo GetCredentialStatus() const;

                    /**
                     * 设置凭证状态信息
                     * @param _credentialStatus 凭证状态信息
                     * 
                     */
                    void SetCredentialStatus(const CredentialStatusInfo& _credentialStatus);

                    /**
                     * 判断参数 CredentialStatus 是否已赋值
                     * @return CredentialStatus 是否已赋值
                     * 
                     */
                    bool CredentialStatusHasBeenSet() const;

                private:

                    /**
                     * DID应用Id
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                    /**
                     * 更新VC状态的临时凭证内容，通过创建凭证接口(CreateCredential)生成并签名，凭证类型为：OperateCredential, 为安全起见凭证过期时间不适合太长，如设置为1分钟内
                     */
                    std::string m_operateCredential;
                    bool m_operateCredentialHasBeenSet;

                    /**
                     * 待更新凭证状态的原始凭证内容
                     */
                    std::string m_originCredential;
                    bool m_originCredentialHasBeenSet;

                    /**
                     * 凭证状态信息
                     */
                    CredentialStatusInfo m_credentialStatus;
                    bool m_credentialStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_UPDATECREDENTIALSTATEREQUEST_H_
