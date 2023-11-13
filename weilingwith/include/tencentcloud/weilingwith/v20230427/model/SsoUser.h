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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SSOUSER_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SSOUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 用户结果
                */
                class SsoUser : public AbstractModel
                {
                public:
                    SsoUser();
                    ~SsoUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 用户ID
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
                     * 获取用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 用户昵称
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
                     * 获取用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealName 用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realName 用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取用户类型，1-超级管理员；2-1号管理员；3-普通管理员；99-普通用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserType 用户类型，1-超级管理员；2-1号管理员；3-普通管理员；99-普通用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置用户类型，1-超级管理员；2-1号管理员；3-普通管理员；99-普通用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userType 用户类型，1-超级管理员；2-1号管理员；3-普通管理员；99-普通用户
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取所属租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TenantId 所属租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置所属租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tenantId 所属租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取所属组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroup 所属组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置所属组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userGroup 所属组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserGroup(const std::string& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

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
                     * 获取电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phone 电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phone 电话
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户状态，0待审核，1正常启用，2禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 用户状态，0待审核，1正常启用，2禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置用户状态，0待审核，1正常启用，2禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 用户状态，0待审核，1正常启用，2禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateAt(const int64_t& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateAt() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateAt(const int64_t& _updateAt);

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

                    /**
                     * 获取是否属于团队，0不可用，1属于，2不属
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BelongTeam 是否属于团队，0不可用，1属于，2不属
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBelongTeam() const;

                    /**
                     * 设置是否属于团队，0不可用，1属于，2不属
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _belongTeam 是否属于团队，0不可用，1属于，2不属
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBelongTeam(const int64_t& _belongTeam);

                    /**
                     * 判断参数 BelongTeam 是否已赋值
                     * @return BelongTeam 是否已赋值
                     * 
                     */
                    bool BelongTeamHasBeenSet() const;

                    /**
                     * 获取部门ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DepartmentId 部门ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置部门ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _departmentId 部门ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                    /**
                     * 获取部门名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DepartmentName 部门名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDepartmentName() const;

                    /**
                     * 设置部门名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _departmentName 部门名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDepartmentName(const std::string& _departmentName);

                    /**
                     * 判断参数 DepartmentName 是否已赋值
                     * @return DepartmentName 是否已赋值
                     * 
                     */
                    bool DepartmentNameHasBeenSet() const;

                    /**
                     * 获取子账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DepartmentUserId 子账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDepartmentUserId() const;

                    /**
                     * 设置子账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _departmentUserId 子账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDepartmentUserId(const int64_t& _departmentUserId);

                    /**
                     * 判断参数 DepartmentUserId 是否已赋值
                     * @return DepartmentUserId 是否已赋值
                     * 
                     */
                    bool DepartmentUserIdHasBeenSet() const;

                    /**
                     * 获取密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password 密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _password 密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 用户类型，1-超级管理员；2-1号管理员；3-普通管理员；99-普通用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 所属租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 所属组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * 邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 用户状态，0待审核，1正常启用，2禁用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateAt;
                    bool m_updateAtHasBeenSet;

                    /**
                     * 是否属于团队，0不可用，1属于，2不属
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_belongTeam;
                    bool m_belongTeamHasBeenSet;

                    /**
                     * 部门ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 部门名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_departmentName;
                    bool m_departmentNameHasBeenSet;

                    /**
                     * 子账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_departmentUserId;
                    bool m_departmentUserIdHasBeenSet;

                    /**
                     * 密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SSOUSER_H_
