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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_USERINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>
#include <tencentcloud/dlc/v20210125/model/WorkGroupMessage.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 授权用户信息
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户Id，和子用户uin相同
                     * @return UserId 用户Id，和子用户uin相同
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id，和子用户uin相同
                     * @param _userId 用户Id，和子用户uin相同
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
                     * 获取单独给用户绑定的权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicySet 单独给用户绑定的权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置单独给用户绑定的权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policySet 单独给用户绑定的权限集合
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取当前用户的创建者
                     * @return Creator 当前用户的创建者
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置当前用户的创建者
                     * @param _creator 当前用户的创建者
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取创建时间，格式如2021-07-28 16:19:32
                     * @return CreateTime 创建时间，格式如2021-07-28 16:19:32
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，格式如2021-07-28 16:19:32
                     * @param _createTime 创建时间，格式如2021-07-28 16:19:32
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取关联的工作组集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkGroupSet 关联的工作组集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkGroupMessage> GetWorkGroupSet() const;

                    /**
                     * 设置关联的工作组集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workGroupSet 关联的工作组集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkGroupSet(const std::vector<WorkGroupMessage>& _workGroupSet);

                    /**
                     * 判断参数 WorkGroupSet 是否已赋值
                     * @return WorkGroupSet 是否已赋值
                     * 
                     */
                    bool WorkGroupSetHasBeenSet() const;

                    /**
                     * 获取是否是主账号
                     * @return IsOwner 是否是主账号
                     * 
                     */
                    bool GetIsOwner() const;

                    /**
                     * 设置是否是主账号
                     * @param _isOwner 是否是主账号
                     * 
                     */
                    void SetIsOwner(const bool& _isOwner);

                    /**
                     * 判断参数 IsOwner 是否已赋值
                     * @return IsOwner 是否已赋值
                     * 
                     */
                    bool IsOwnerHasBeenSet() const;

                    /**
                     * 获取用户类型。ADMIN：管理员 COMMON：普通用户。
                     * @return UserType 用户类型。ADMIN：管理员 COMMON：普通用户。
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置用户类型。ADMIN：管理员 COMMON：普通用户。
                     * @param _userType 用户类型。ADMIN：管理员 COMMON：普通用户。
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
                     * 获取用户别名
                     * @return UserAlias 用户别名
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置用户别名
                     * @param _userAlias 用户别名
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                    /**
                     * 获取账号类型
                     * @return AccountType 账号类型
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置账号类型
                     * @param _accountType 账号类型
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                private:

                    /**
                     * 用户Id，和子用户uin相同
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户描述信息，方便区分不同用户
                     */
                    std::string m_userDescription;
                    bool m_userDescriptionHasBeenSet;

                    /**
                     * 单独给用户绑定的权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * 当前用户的创建者
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 创建时间，格式如2021-07-28 16:19:32
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 关联的工作组集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkGroupMessage> m_workGroupSet;
                    bool m_workGroupSetHasBeenSet;

                    /**
                     * 是否是主账号
                     */
                    bool m_isOwner;
                    bool m_isOwnerHasBeenSet;

                    /**
                     * 用户类型。ADMIN：管理员 COMMON：普通用户。
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 用户别名
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * 账号类型
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_USERINFO_H_
