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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERROLELISTDATAUSERROLEINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERROLELISTDATAUSERROLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/UserRoleListDataRoleInfo.h>
#include <tencentcloud/bi/v20220105/model/UserGroupDTO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 用户角色信息
                */
                class UserRoleListDataUserRoleInfo : public AbstractModel
                {
                public:
                    UserRoleListDataUserRoleInfo();
                    ~UserRoleListDataUserRoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取业务ID
                     * @return Id 业务ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置业务ID
                     * @param _id 业务ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取角色列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleList 角色列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserRoleListDataRoleInfo> GetRoleList() const;

                    /**
                     * 设置角色列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleList 角色列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleList(const std::vector<UserRoleListDataRoleInfo>& _roleList);

                    /**
                     * 判断参数 RoleList 是否已赋值
                     * @return RoleList 是否已赋值
                     * 
                     */
                    bool RoleListHasBeenSet() const;

                    /**
                     * 获取角色ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleIdList 角色ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetRoleIdList() const;

                    /**
                     * 设置角色ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleIdList 角色ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleIdList(const std::vector<uint64_t>& _roleIdList);

                    /**
                     * 判断参数 RoleIdList 是否已赋值
                     * @return RoleIdList 是否已赋值
                     * 
                     */
                    bool RoleIdListHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
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
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    std::string GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const std::string& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

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
                     * 获取创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedUser 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedUser() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdUser 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedUser(const std::string& _createdUser);

                    /**
                     * 判断参数 CreatedUser 是否已赋值
                     * @return CreatedUser 是否已赋值
                     * 
                     */
                    bool CreatedUserHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedUser 更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedUser() const;

                    /**
                     * 设置更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedUser 更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedUser(const std::string& _updatedUser);

                    /**
                     * 判断参数 UpdatedUser 是否已赋值
                     * @return UpdatedUser 是否已赋值
                     * 
                     */
                    bool UpdatedUserHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取最后一次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastLogin 最后一次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastLogin() const;

                    /**
                     * 设置最后一次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastLogin 最后一次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastLogin(const std::string& _lastLogin);

                    /**
                     * 判断参数 LastLogin 是否已赋值
                     * @return LastLogin 是否已赋值
                     * 
                     */
                    bool LastLoginHasBeenSet() const;

                    /**
                     * 获取账号状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 账号状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置账号状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 账号状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneNumber 手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneNumber 手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取手机号区号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AreaCode 手机号区号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAreaCode() const;

                    /**
                     * 设置手机号区号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _areaCode 手机号区号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAreaCode(const std::string& _areaCode);

                    /**
                     * 判断参数 AreaCode 是否已赋值
                     * @return AreaCode 是否已赋值
                     * 
                     */
                    bool AreaCodeHasBeenSet() const;

                    /**
                     * 获取是否为主账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootAccount 是否为主账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRootAccount() const;

                    /**
                     * 设置是否为主账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rootAccount 是否为主账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRootAccount(const bool& _rootAccount);

                    /**
                     * 判断参数 RootAccount 是否已赋值
                     * @return RootAccount 是否已赋值
                     * 
                     */
                    bool RootAccountHasBeenSet() const;

                    /**
                     * 获取是否为企业管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorpAdmin 是否为企业管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCorpAdmin() const;

                    /**
                     * 设置是否为企业管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _corpAdmin 是否为企业管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCorpAdmin(const bool& _corpAdmin);

                    /**
                     * 判断参数 CorpAdmin 是否已赋值
                     * @return CorpAdmin 是否已赋值
                     * 
                     */
                    bool CorpAdminHasBeenSet() const;

                    /**
                     * 获取企微用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppUserId 企微用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppUserId() const;

                    /**
                     * 设置企微用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appUserId 企微用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppUserId(const std::string& _appUserId);

                    /**
                     * 判断参数 AppUserId 是否已赋值
                     * @return AppUserId 是否已赋值
                     * 
                     */
                    bool AppUserIdHasBeenSet() const;

                    /**
                     * 获取昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppUserAliasName 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppUserAliasName() const;

                    /**
                     * 设置昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appUserAliasName 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppUserAliasName(const std::string& _appUserAliasName);

                    /**
                     * 判断参数 AppUserAliasName 是否已赋值
                     * @return AppUserAliasName 是否已赋值
                     * 
                     */
                    bool AppUserAliasNameHasBeenSet() const;

                    /**
                     * 获取应用用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppUserName 应用用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppUserName() const;

                    /**
                     * 设置应用用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appUserName 应用用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppUserName(const std::string& _appUserName);

                    /**
                     * 判断参数 AppUserName 是否已赋值
                     * @return AppUserName 是否已赋值
                     * 
                     */
                    bool AppUserNameHasBeenSet() const;

                    /**
                     * 获取是否在可见范围内
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InValidateAppRange 是否在可见范围内
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetInValidateAppRange() const;

                    /**
                     * 设置是否在可见范围内
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inValidateAppRange 是否在可见范围内
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInValidateAppRange(const bool& _inValidateAppRange);

                    /**
                     * 判断参数 InValidateAppRange 是否已赋值
                     * @return InValidateAppRange 是否已赋值
                     * 
                     */
                    bool InValidateAppRangeHasBeenSet() const;

                    /**
                     * 获取用户openid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppOpenUserId 用户openid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppOpenUserId() const;

                    /**
                     * 设置用户openid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appOpenUserId 用户openid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppOpenUserId(const std::string& _appOpenUserId);

                    /**
                     * 判断参数 AppOpenUserId 是否已赋值
                     * @return AppOpenUserId 是否已赋值
                     * 
                     */
                    bool AppOpenUserIdHasBeenSet() const;

                    /**
                     * 获取邮箱激活状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmailActivationStatus 邮箱激活状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEmailActivationStatus() const;

                    /**
                     * 设置邮箱激活状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _emailActivationStatus 邮箱激活状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmailActivationStatus(const int64_t& _emailActivationStatus);

                    /**
                     * 判断参数 EmailActivationStatus 是否已赋值
                     * @return EmailActivationStatus 是否已赋值
                     * 
                     */
                    bool EmailActivationStatusHasBeenSet() const;

                    /**
                     * 获取用户组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroupList 用户组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserGroupDTO> GetUserGroupList() const;

                    /**
                     * 设置用户组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userGroupList 用户组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserGroupList(const std::vector<UserGroupDTO>& _userGroupList);

                    /**
                     * 判断参数 UserGroupList 是否已赋值
                     * @return UserGroupList 是否已赋值
                     * 
                     */
                    bool UserGroupListHasBeenSet() const;

                private:

                    /**
                     * 业务ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 角色列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserRoleListDataRoleInfo> m_roleList;
                    bool m_roleListHasBeenSet;

                    /**
                     * 角色ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_roleIdList;
                    bool m_roleIdListHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 企业ID
                     */
                    std::string m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdUser;
                    bool m_createdUserHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedUser;
                    bool m_updatedUserHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 最后一次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastLogin;
                    bool m_lastLoginHasBeenSet;

                    /**
                     * 账号状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 手机号区号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_areaCode;
                    bool m_areaCodeHasBeenSet;

                    /**
                     * 是否为主账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_rootAccount;
                    bool m_rootAccountHasBeenSet;

                    /**
                     * 是否为企业管理员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_corpAdmin;
                    bool m_corpAdminHasBeenSet;

                    /**
                     * 企微用户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appUserId;
                    bool m_appUserIdHasBeenSet;

                    /**
                     * 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appUserAliasName;
                    bool m_appUserAliasNameHasBeenSet;

                    /**
                     * 应用用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appUserName;
                    bool m_appUserNameHasBeenSet;

                    /**
                     * 是否在可见范围内
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_inValidateAppRange;
                    bool m_inValidateAppRangeHasBeenSet;

                    /**
                     * 用户openid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appOpenUserId;
                    bool m_appOpenUserIdHasBeenSet;

                    /**
                     * 邮箱激活状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_emailActivationStatus;
                    bool m_emailActivationStatusHasBeenSet;

                    /**
                     * 用户组信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserGroupDTO> m_userGroupList;
                    bool m_userGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERROLELISTDATAUSERROLEINFO_H_
