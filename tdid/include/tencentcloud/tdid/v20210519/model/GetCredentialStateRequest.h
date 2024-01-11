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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALSTATEREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALSTATEREQUEST_H_

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
                * GetCredentialState请求参数结构体
                */
                class GetCredentialStateRequest : public AbstractModel
                {
                public:
                    GetCredentialStateRequest();
                    ~GetCredentialStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取凭证唯一Id
                     * @return CredentialId 凭证唯一Id
                     * 
                     */
                    std::string GetCredentialId() const;

                    /**
                     * 设置凭证唯一Id
                     * @param _credentialId 凭证唯一Id
                     * 
                     */
                    void SetCredentialId(const std::string& _credentialId);

                    /**
                     * 判断参数 CredentialId 是否已赋值
                     * @return CredentialId 是否已赋值
                     * 
                     */
                    bool CredentialIdHasBeenSet() const;

                    /**
                     * 获取用户应用Id
                     * @return DAPId 用户应用Id
                     * 
                     */
                    uint64_t GetDAPId() const;

                    /**
                     * 设置用户应用Id
                     * @param _dAPId 用户应用Id
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
                     * 凭证唯一Id
                     */
                    std::string m_credentialId;
                    bool m_credentialIdHasBeenSet;

                    /**
                     * 用户应用Id
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALSTATEREQUEST_H_
