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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTUSERROLE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTUSERROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SystemRole.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 项目的用户对象
                */
                class ProjectUserRole : public AbstractModel
                {
                public:
                    ProjectUserRole();
                    ~ProjectUserRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户角色对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Roles 用户角色对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SystemRole> GetRoles() const;

                    /**
                     * 设置用户角色对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roles 用户角色对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoles(const std::vector<SystemRole>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取mc
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName mc
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置mc
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName mc
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 用户id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 是否创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCreator() const;

                    /**
                     * 设置是否创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator 是否创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const bool& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取显示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 显示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置显示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName 显示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取是否项目管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsProjectAdmin 是否项目管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsProjectAdmin() const;

                    /**
                     * 设置是否项目管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isProjectAdmin 是否项目管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsProjectAdmin(const bool& _isProjectAdmin);

                    /**
                     * 判断参数 IsProjectAdmin 是否已赋值
                     * @return IsProjectAdmin 是否已赋值
                     * 
                     */
                    bool IsProjectAdminHasBeenSet() const;

                    /**
                     * 获取手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneNum 手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneNum 手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email 邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _email 邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取主账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 主账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 主账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取租户iD
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 租户iD
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置租户iD
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 租户iD
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取是否项目负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsProjectOwner 是否项目负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsProjectOwner() const;

                    /**
                     * 设置是否项目负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isProjectOwner 是否项目负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsProjectOwner(const bool& _isProjectOwner);

                    /**
                     * 判断参数 IsProjectOwner 是否已赋值
                     * @return IsProjectOwner 是否已赋值
                     * 
                     */
                    bool IsProjectOwnerHasBeenSet() const;

                private:

                    /**
                     * 用户角色对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SystemRole> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * mc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 显示名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 是否项目管理员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isProjectAdmin;
                    bool m_isProjectAdminHasBeenSet;

                    /**
                     * 手机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * 邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 主账号id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 租户iD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 是否项目负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isProjectOwner;
                    bool m_isProjectOwnerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTUSERROLE_H_
