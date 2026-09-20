/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CONSOLEUSERINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CONSOLEUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/RoleBasicInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 控制台用户信息（规范化，与内部 UserDetailInfo 解耦）
                */
                class ConsoleUserInfo : public AbstractModel
                {
                public:
                    ConsoleUserInfo();
                    ~ConsoleUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户 UIN
                     * @return UserUin 用户 UIN
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置用户 UIN
                     * @param _userUin 用户 UIN
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取昵称
                     * @return Nickname 昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置昵称
                     * @param _nickname 昵称
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取角色列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Roles 角色列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RoleBasicInfo> GetRoles() const;

                    /**
                     * 设置角色列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roles 角色列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoles(const std::vector<RoleBasicInfo>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取用户来源，group：用户组、user:用户
                     * @return UserSource 用户来源，group：用户组、user:用户
                     * 
                     */
                    std::string GetUserSource() const;

                    /**
                     * 设置用户来源，group：用户组、user:用户
                     * @param _userSource 用户来源，group：用户组、user:用户
                     * 
                     */
                    void SetUserSource(const std::string& _userSource);

                    /**
                     * 判断参数 UserSource 是否已赋值
                     * @return UserSource 是否已赋值
                     * 
                     */
                    bool UserSourceHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取是否主账号
                     * @return IsOwner 是否主账号
                     * 
                     */
                    bool GetIsOwner() const;

                    /**
                     * 设置是否主账号
                     * @param _isOwner 是否主账号
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
                     * 获取0: 普通用户 1: entraId用户
                     * @return UserTag 0: 普通用户 1: entraId用户
                     * 
                     */
                    int64_t GetUserTag() const;

                    /**
                     * 设置0: 普通用户 1: entraId用户
                     * @param _userTag 0: 普通用户 1: entraId用户
                     * 
                     */
                    void SetUserTag(const int64_t& _userTag);

                    /**
                     * 判断参数 UserTag 是否已赋值
                     * @return UserTag 是否已赋值
                     * 
                     */
                    bool UserTagHasBeenSet() const;

                    /**
                     * 获取是否具有 admin 权限的子账号
                     * @return IsAdmin 是否具有 admin 权限的子账号
                     * 
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置是否具有 admin 权限的子账号
                     * @param _isAdmin 是否具有 admin 权限的子账号
                     * 
                     */
                    void SetIsAdmin(const bool& _isAdmin);

                    /**
                     * 判断参数 IsAdmin 是否已赋值
                     * @return IsAdmin 是否已赋值
                     * 
                     */
                    bool IsAdminHasBeenSet() const;

                private:

                    /**
                     * 用户 UIN
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 角色列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RoleBasicInfo> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * 用户来源，group：用户组、user:用户
                     */
                    std::string m_userSource;
                    bool m_userSourceHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否主账号
                     */
                    bool m_isOwner;
                    bool m_isOwnerHasBeenSet;

                    /**
                     * 0: 普通用户 1: entraId用户
                     */
                    int64_t m_userTag;
                    bool m_userTagHasBeenSet;

                    /**
                     * 是否具有 admin 权限的子账号
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CONSOLEUSERINFO_H_
