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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateUser请求参数结构体
                */
                class CreateUserRequest : public AbstractModel
                {
                public:
                    CreateUserRequest();
                    ~CreateUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要授权的子用户uin，可以通过腾讯云控制台右上角 → “账号信息” → “账号ID进行查看”。
                     * @return UserId 需要授权的子用户uin，可以通过腾讯云控制台右上角 → “账号信息” → “账号ID进行查看”。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置需要授权的子用户uin，可以通过腾讯云控制台右上角 → “账号信息” → “账号ID进行查看”。
                     * @param _userId 需要授权的子用户uin，可以通过腾讯云控制台右上角 → “账号信息” → “账号ID进行查看”。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户描述信息，方便区分不同用户
                     * @return UserDescription 用户描述信息，方便区分不同用户
                     * 
                     */
                    std::string GetUserDescription() const;

                    /**
                     * 设置用户描述信息，方便区分不同用户
                     * @param _userDescription 用户描述信息，方便区分不同用户
                     * 
                     */
                    void SetUserDescription(const std::string& _userDescription);

                    /**
                     * 判断参数 UserDescription 是否已赋值
                     * @return UserDescription 是否已赋值
                     * 
                     */
                    bool UserDescriptionHasBeenSet() const;

                    /**
                     * 获取绑定到用户的权限集合
                     * @return PolicySet 绑定到用户的权限集合
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置绑定到用户的权限集合
                     * @param _policySet 绑定到用户的权限集合
                     * 
                     */
                    void SetPolicySet(const std::vector<Policy>& _policySet);

                    /**
                     * 判断参数 PolicySet 是否已赋值
                     * @return PolicySet 是否已赋值
                     * 
                     */
                    bool PolicySetHasBeenSet() const;

                    /**
                     * 获取用户类型。ADMIN：管理员 COMMON：一般用户。当用户类型为管理员的时候，不能设置权限集合和绑定的工作组集合，管理员默认拥有所有权限。该参数不填默认为COMMON
                     * @return UserType 用户类型。ADMIN：管理员 COMMON：一般用户。当用户类型为管理员的时候，不能设置权限集合和绑定的工作组集合，管理员默认拥有所有权限。该参数不填默认为COMMON
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置用户类型。ADMIN：管理员 COMMON：一般用户。当用户类型为管理员的时候，不能设置权限集合和绑定的工作组集合，管理员默认拥有所有权限。该参数不填默认为COMMON
                     * @param _userType 用户类型。ADMIN：管理员 COMMON：一般用户。当用户类型为管理员的时候，不能设置权限集合和绑定的工作组集合，管理员默认拥有所有权限。该参数不填默认为COMMON
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取绑定到用户的工作组ID集合。
                     * @return WorkGroupIds 绑定到用户的工作组ID集合。
                     * 
                     */
                    std::vector<int64_t> GetWorkGroupIds() const;

                    /**
                     * 设置绑定到用户的工作组ID集合。
                     * @param _workGroupIds 绑定到用户的工作组ID集合。
                     * 
                     */
                    void SetWorkGroupIds(const std::vector<int64_t>& _workGroupIds);

                    /**
                     * 判断参数 WorkGroupIds 是否已赋值
                     * @return WorkGroupIds 是否已赋值
                     * 
                     */
                    bool WorkGroupIdsHasBeenSet() const;

                    /**
                     * 获取用户别名，字符长度小50
                     * @return UserAlias 用户别名，字符长度小50
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置用户别名，字符长度小50
                     * @param _userAlias 用户别名，字符长度小50
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                private:

                    /**
                     * 需要授权的子用户uin，可以通过腾讯云控制台右上角 → “账号信息” → “账号ID进行查看”。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户描述信息，方便区分不同用户
                     */
                    std::string m_userDescription;
                    bool m_userDescriptionHasBeenSet;

                    /**
                     * 绑定到用户的权限集合
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * 用户类型。ADMIN：管理员 COMMON：一般用户。当用户类型为管理员的时候，不能设置权限集合和绑定的工作组集合，管理员默认拥有所有权限。该参数不填默认为COMMON
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 绑定到用户的工作组ID集合。
                     */
                    std::vector<int64_t> m_workGroupIds;
                    bool m_workGroupIdsHasBeenSet;

                    /**
                     * 用户别名，字符长度小50
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERREQUEST_H_
