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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_GETCALLERIDENTITYRESPONSE_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_GETCALLERIDENTITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * GetCallerIdentity返回参数结构体
                */
                class GetCallerIdentityResponse : public AbstractModel
                {
                public:
                    GetCallerIdentityResponse();
                    ~GetCallerIdentityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前调用者ARN。
                     * @return Arn 当前调用者ARN。
                     * 
                     */
                    std::string GetArn() const;

                    /**
                     * 判断参数 Arn 是否已赋值
                     * @return Arn 是否已赋值
                     * 
                     */
                    bool ArnHasBeenSet() const;

                    /**
                     * 获取当前调用者所属主账号Uin。
                     * @return AccountId 当前调用者所属主账号Uin。
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取身份标识。
1. 调用者是云账号时，返回的是当前账号Uin
2. 调用者是角色时，返回的是roleId:roleSessionName
3. 调用者是联合身份时，返回的是uin:federatedUserName
                     * @return UserId 身份标识。
1. 调用者是云账号时，返回的是当前账号Uin
2. 调用者是角色时，返回的是roleId:roleSessionName
3. 调用者是联合身份时，返回的是uin:federatedUserName
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取密钥所属账号Uin。
1. 调用者是云账号，返回的当前账号Uin
2, 调用者是角色，返回的申请角色密钥的账号Uin
                     * @return PrincipalId 密钥所属账号Uin。
1. 调用者是云账号，返回的当前账号Uin
2, 调用者是角色，返回的申请角色密钥的账号Uin
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 判断参数 PrincipalId 是否已赋值
                     * @return PrincipalId 是否已赋值
                     * 
                     */
                    bool PrincipalIdHasBeenSet() const;

                    /**
                     * 获取身份类型。
                     * @return Type 身份类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 当前调用者ARN。
                     */
                    std::string m_arn;
                    bool m_arnHasBeenSet;

                    /**
                     * 当前调用者所属主账号Uin。
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 身份标识。
1. 调用者是云账号时，返回的是当前账号Uin
2. 调用者是角色时，返回的是roleId:roleSessionName
3. 调用者是联合身份时，返回的是uin:federatedUserName
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 密钥所属账号Uin。
1. 调用者是云账号，返回的当前账号Uin
2, 调用者是角色，返回的申请角色密钥的账号Uin
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                    /**
                     * 身份类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_GETCALLERIDENTITYRESPONSE_H_
