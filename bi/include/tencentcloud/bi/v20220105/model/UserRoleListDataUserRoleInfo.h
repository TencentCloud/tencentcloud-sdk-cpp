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
                     * 获取<p>业务ID</p>
                     * @return Id <p>业务ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>业务ID</p>
                     * @param _id <p>业务ID</p>
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
                     * 获取<p>角色列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleList <p>角色列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserRoleListDataRoleInfo> GetRoleList() const;

                    /**
                     * 设置<p>角色列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleList <p>角色列表</p>
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
                     * 获取<p>角色ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleIdList <p>角色ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetRoleIdList() const;

                    /**
                     * 设置<p>角色ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleIdList <p>角色ID列表</p>
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
                     * 获取<p>用户ID</p>
                     * @return UserId <p>用户ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户ID</p>
                     * @param _userId <p>用户ID</p>
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
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
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
                     * 获取<p>企业ID</p>
                     * @return CorpId <p>企业ID</p>
                     * 
                     */
                    std::string GetCorpId() const;

                    /**
                     * 设置<p>企业ID</p>
                     * @param _corpId <p>企业ID</p>
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
                     * 获取<p>邮箱</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email <p>邮箱</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>邮箱</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _email <p>邮箱</p>
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
                     * 获取<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedUser <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedUser() const;

                    /**
                     * 设置<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdUser <p>创建人</p>
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
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt <p>创建时间</p>
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
                     * 获取<p>更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedUser <p>更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedUser() const;

                    /**
                     * 设置<p>更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedUser <p>更新人</p>
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
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt <p>更新时间</p>
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
                     * 获取<p>最后一次登录时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastLogin <p>最后一次登录时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastLogin() const;

                    /**
                     * 设置<p>最后一次登录时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastLogin <p>最后一次登录时间</p>
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
                     * 获取<p>账号状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>账号状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>账号状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>账号状态</p>
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
                     * 获取<p>手机号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneNumber <p>手机号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置<p>手机号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneNumber <p>手机号码</p>
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
                     * 获取<p>手机号区号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AreaCode <p>手机号区号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAreaCode() const;

                    /**
                     * 设置<p>手机号区号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _areaCode <p>手机号区号</p>
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
                     * 获取<p>是否为主账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootAccount <p>是否为主账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRootAccount() const;

                    /**
                     * 设置<p>是否为主账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rootAccount <p>是否为主账号</p>
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
                     * 获取<p>是否为企业管理员</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorpAdmin <p>是否为企业管理员</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCorpAdmin() const;

                    /**
                     * 设置<p>是否为企业管理员</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _corpAdmin <p>是否为企业管理员</p>
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
                     * 获取<p>企微用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppUserId <p>企微用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppUserId() const;

                    /**
                     * 设置<p>企微用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appUserId <p>企微用户id</p>
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
                     * 获取<p>昵称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppUserAliasName <p>昵称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppUserAliasName() const;

                    /**
                     * 设置<p>昵称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appUserAliasName <p>昵称</p>
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
                     * 获取<p>应用用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppUserName <p>应用用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppUserName() const;

                    /**
                     * 设置<p>应用用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appUserName <p>应用用户名</p>
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
                     * 获取<p>是否在可见范围内</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InValidateAppRange <p>是否在可见范围内</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetInValidateAppRange() const;

                    /**
                     * 设置<p>是否在可见范围内</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inValidateAppRange <p>是否在可见范围内</p>
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
                     * 获取<p>用户openid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppOpenUserId <p>用户openid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppOpenUserId() const;

                    /**
                     * 设置<p>用户openid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appOpenUserId <p>用户openid</p>
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
                     * 获取<p>邮箱激活状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmailActivationStatus <p>邮箱激活状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEmailActivationStatus() const;

                    /**
                     * 设置<p>邮箱激活状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _emailActivationStatus <p>邮箱激活状态</p>
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
                     * 获取<p>用户组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroupList <p>用户组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserGroupDTO> GetUserGroupList() const;

                    /**
                     * 设置<p>用户组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userGroupList <p>用户组信息</p>
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

                    /**
                     * 获取<p>用户类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdentityType <p>用户类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentityType() const;

                    /**
                     * 设置<p>用户类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identityType <p>用户类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentityType(const std::string& _identityType);

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     * 
                     */
                    bool IdentityTypeHasBeenSet() const;

                private:

                    /**
                     * <p>业务ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>角色列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserRoleListDataRoleInfo> m_roleList;
                    bool m_roleListHasBeenSet;

                    /**
                     * <p>角色ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_roleIdList;
                    bool m_roleIdListHasBeenSet;

                    /**
                     * <p>用户ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>企业ID</p>
                     */
                    std::string m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * <p>邮箱</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdUser;
                    bool m_createdUserHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedUser;
                    bool m_updatedUserHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>最后一次登录时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastLogin;
                    bool m_lastLoginHasBeenSet;

                    /**
                     * <p>账号状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>手机号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * <p>手机号区号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_areaCode;
                    bool m_areaCodeHasBeenSet;

                    /**
                     * <p>是否为主账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_rootAccount;
                    bool m_rootAccountHasBeenSet;

                    /**
                     * <p>是否为企业管理员</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_corpAdmin;
                    bool m_corpAdminHasBeenSet;

                    /**
                     * <p>企微用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appUserId;
                    bool m_appUserIdHasBeenSet;

                    /**
                     * <p>昵称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appUserAliasName;
                    bool m_appUserAliasNameHasBeenSet;

                    /**
                     * <p>应用用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appUserName;
                    bool m_appUserNameHasBeenSet;

                    /**
                     * <p>是否在可见范围内</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_inValidateAppRange;
                    bool m_inValidateAppRangeHasBeenSet;

                    /**
                     * <p>用户openid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appOpenUserId;
                    bool m_appOpenUserIdHasBeenSet;

                    /**
                     * <p>邮箱激活状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_emailActivationStatus;
                    bool m_emailActivationStatusHasBeenSet;

                    /**
                     * <p>用户组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserGroupDTO> m_userGroupList;
                    bool m_userGroupListHasBeenSet;

                    /**
                     * <p>用户类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identityType;
                    bool m_identityTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERROLELISTDATAUSERROLEINFO_H_
