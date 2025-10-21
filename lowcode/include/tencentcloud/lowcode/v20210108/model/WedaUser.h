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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_WEDAUSER_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_WEDAUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/WedaRole.h>
#include <tencentcloud/lowcode/v20210108/model/RoleGroup.h>
#include <tencentcloud/lowcode/v20210108/model/OrgResp.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * weda用户
                */
                class WedaUser : public AbstractModel
                {
                public:
                    WedaUser();
                    ~WedaUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云主账号uin
                     * @return Uin 腾讯云主账号uin
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置腾讯云主账号uin
                     * @param _uin 腾讯云主账号uin
                     * 
                     */
                    void SetUin(const int64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取名字
                     * @return Name 名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字
                     * @param _name 名字
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取环境
                     * @return Env 环境
                     * 
                     */
                    int64_t GetEnv() const;

                    /**
                     * 设置环境
                     * @param _env 环境
                     * 
                     */
                    void SetEnv(const int64_t& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取昵称
                     * @return NickName 昵称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置昵称
                     * @param _nickName 昵称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取邮箱
                     * @return Email 邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
                     * @param _email 邮箱
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
                     * 获取手机号
                     * @return Phone 手机号
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号
                     * @param _phone 手机号
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取用户uuid
                     * @return Uuid 用户uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置用户uuid
                     * @param _uuid 用户uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取渠道，1:自建；2:企业微信导入
                     * @return Source 渠道，1:自建；2:企业微信导入
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置渠道，1:自建；2:企业微信导入
                     * @param _source 渠道，1:自建；2:企业微信导入
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取微信openid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenId 微信openid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置微信openid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _openId 微信openid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取关联角色
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelatedRoles 关联角色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WedaRole> GetRelatedRoles() const;

                    /**
                     * 设置关联角色
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relatedRoles 关联角色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelatedRoles(const std::vector<WedaRole>& _relatedRoles);

                    /**
                     * 判断参数 RelatedRoles 是否已赋值
                     * @return RelatedRoles 是否已赋值
                     * 
                     */
                    bool RelatedRolesHasBeenSet() const;

                    /**
                     * 获取企业微信userid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatUserId 企业微信userid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWechatUserId() const;

                    /**
                     * 设置企业微信userid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatUserId 企业微信userid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechatUserId(const std::string& _wechatUserId);

                    /**
                     * 判断参数 WechatUserId 是否已赋值
                     * @return WechatUserId 是否已赋值
                     * 
                     */
                    bool WechatUserIdHasBeenSet() const;

                    /**
                     * 获取内部用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternalUserType 内部用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInternalUserType() const;

                    /**
                     * 设置内部用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internalUserType 内部用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternalUserType(const int64_t& _internalUserType);

                    /**
                     * 判断参数 InternalUserType 是否已赋值
                     * @return InternalUserType 是否已赋值
                     * 
                     */
                    bool InternalUserTypeHasBeenSet() const;

                    /**
                     * 获取微搭用户id
                     * @return UserId 微搭用户id
                     * 
                     */
                    int64_t GetUserId() const;

                    /**
                     * 设置微搭用户id
                     * @param _userId 微搭用户id
                     * 
                     */
                    void SetUserId(const int64_t& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取所属部门名称
                     * @return OrgName 所属部门名称
                     * 
                     */
                    std::string GetOrgName() const;

                    /**
                     * 设置所属部门名称
                     * @param _orgName 所属部门名称
                     * 
                     */
                    void SetOrgName(const std::string& _orgName);

                    /**
                     * 判断参数 OrgName 是否已赋值
                     * @return OrgName 是否已赋值
                     * 
                     */
                    bool OrgNameHasBeenSet() const;

                    /**
                     * 获取用户schema
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserSchema 用户schema
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserSchema() const;

                    /**
                     * 设置用户schema
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userSchema 用户schema
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserSchema(const std::string& _userSchema);

                    /**
                     * 判断参数 UserSchema 是否已赋值
                     * @return UserSchema 是否已赋值
                     * 
                     */
                    bool UserSchemaHasBeenSet() const;

                    /**
                     * 获取用户扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserExtend 用户扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserExtend() const;

                    /**
                     * 设置用户扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userExtend 用户扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserExtend(const std::string& _userExtend);

                    /**
                     * 判断参数 UserExtend 是否已赋值
                     * @return UserExtend 是否已赋值
                     * 
                     */
                    bool UserExtendHasBeenSet() const;

                    /**
                     * 获取用户是否授权License
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLicensed 用户是否授权License
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsLicensed() const;

                    /**
                     * 设置用户是否授权License
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLicensed 用户是否授权License
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLicensed(const bool& _isLicensed);

                    /**
                     * 判断参数 IsLicensed 是否已赋值
                     * @return IsLicensed 是否已赋值
                     * 
                     */
                    bool IsLicensedHasBeenSet() const;

                    /**
                     * 获取权限组数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelatedRoleGroups 权限组数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RoleGroup> GetRelatedRoleGroups() const;

                    /**
                     * 设置权限组数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relatedRoleGroups 权限组数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelatedRoleGroups(const std::vector<RoleGroup>& _relatedRoleGroups);

                    /**
                     * 判断参数 RelatedRoleGroups 是否已赋值
                     * @return RelatedRoleGroups 是否已赋值
                     * 
                     */
                    bool RelatedRoleGroupsHasBeenSet() const;

                    /**
                     * 获取兼岗部门
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Orgs 兼岗部门
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OrgResp> GetOrgs() const;

                    /**
                     * 设置兼岗部门
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orgs 兼岗部门
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrgs(const std::vector<OrgResp>& _orgs);

                    /**
                     * 判断参数 Orgs 是否已赋值
                     * @return Orgs 是否已赋值
                     * 
                     */
                    bool OrgsHasBeenSet() const;

                    /**
                     * 获取主岗部门
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainOrg 主岗部门
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OrgResp> GetMainOrg() const;

                    /**
                     * 设置主岗部门
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainOrg 主岗部门
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMainOrg(const std::vector<OrgResp>& _mainOrg);

                    /**
                     * 判断参数 MainOrg 是否已赋值
                     * @return MainOrg 是否已赋值
                     * 
                     */
                    bool MainOrgHasBeenSet() const;

                    /**
                     * 获取直属上级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentUserId 直属上级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetParentUserId() const;

                    /**
                     * 设置直属上级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentUserId 直属上级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentUserId(const int64_t& _parentUserId);

                    /**
                     * 判断参数 ParentUserId 是否已赋值
                     * @return ParentUserId 是否已赋值
                     * 
                     */
                    bool ParentUserIdHasBeenSet() const;

                    /**
                     * 获取主列字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrimaryColumn 主列字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrimaryColumn() const;

                    /**
                     * 设置主列字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _primaryColumn 主列字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrimaryColumn(const std::string& _primaryColumn);

                    /**
                     * 判断参数 PrimaryColumn 是否已赋值
                     * @return PrimaryColumn 是否已赋值
                     * 
                     */
                    bool PrimaryColumnHasBeenSet() const;

                    /**
                     * 获取用户头像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvatarUrl 用户头像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvatarUrl() const;

                    /**
                     * 设置用户头像
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avatarUrl 用户头像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvatarUrl(const std::string& _avatarUrl);

                    /**
                     * 判断参数 AvatarUrl 是否已赋值
                     * @return AvatarUrl 是否已赋值
                     * 
                     */
                    bool AvatarUrlHasBeenSet() const;

                    /**
                     * 获取最后登录时间
                     * @return LastLoginTime 最后登录时间
                     * 
                     */
                    std::string GetLastLoginTime() const;

                    /**
                     * 设置最后登录时间
                     * @param _lastLoginTime 最后登录时间
                     * 
                     */
                    void SetLastLoginTime(const std::string& _lastLoginTime);

                    /**
                     * 判断参数 LastLoginTime 是否已赋值
                     * @return LastLoginTime 是否已赋值
                     * 
                     */
                    bool LastLoginTimeHasBeenSet() const;

                private:

                    /**
                     * 腾讯云主账号uin
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 环境
                     */
                    int64_t m_env;
                    bool m_envHasBeenSet;

                    /**
                     * 类型
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 项目id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 用户uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 渠道，1:自建；2:企业微信导入
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 微信openid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 关联角色
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WedaRole> m_relatedRoles;
                    bool m_relatedRolesHasBeenSet;

                    /**
                     * 企业微信userid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wechatUserId;
                    bool m_wechatUserIdHasBeenSet;

                    /**
                     * 内部用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_internalUserType;
                    bool m_internalUserTypeHasBeenSet;

                    /**
                     * 微搭用户id
                     */
                    int64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 所属部门名称
                     */
                    std::string m_orgName;
                    bool m_orgNameHasBeenSet;

                    /**
                     * 用户schema
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userSchema;
                    bool m_userSchemaHasBeenSet;

                    /**
                     * 用户扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userExtend;
                    bool m_userExtendHasBeenSet;

                    /**
                     * 用户是否授权License
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isLicensed;
                    bool m_isLicensedHasBeenSet;

                    /**
                     * 权限组数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RoleGroup> m_relatedRoleGroups;
                    bool m_relatedRoleGroupsHasBeenSet;

                    /**
                     * 兼岗部门
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OrgResp> m_orgs;
                    bool m_orgsHasBeenSet;

                    /**
                     * 主岗部门
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OrgResp> m_mainOrg;
                    bool m_mainOrgHasBeenSet;

                    /**
                     * 直属上级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_parentUserId;
                    bool m_parentUserIdHasBeenSet;

                    /**
                     * 主列字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_primaryColumn;
                    bool m_primaryColumnHasBeenSet;

                    /**
                     * 用户头像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_avatarUrl;
                    bool m_avatarUrlHasBeenSet;

                    /**
                     * 最后登录时间
                     */
                    std::string m_lastLoginTime;
                    bool m_lastLoginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_WEDAUSER_H_
