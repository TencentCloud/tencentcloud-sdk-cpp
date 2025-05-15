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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_USER_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_USER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/Group.h>
#include <tencentcloud/bh/v20230418/model/Department.h>
#include <tencentcloud/bh/v20230418/model/IOAUserGroup.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 用户信息
                */
                class User : public AbstractModel
                {
                public:
                    User();
                    ~User() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名, 3-20个字符 必须以英文字母开头，且不能包含字母、数字、.、_、-以外的字符
                     * @return UserName 用户名, 3-20个字符 必须以英文字母开头，且不能包含字母、数字、.、_、-以外的字符
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名, 3-20个字符 必须以英文字母开头，且不能包含字母、数字、.、_、-以外的字符
                     * @param _userName 用户名, 3-20个字符 必须以英文字母开头，且不能包含字母、数字、.、_、-以外的字符
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
                     * 获取用户姓名， 最大20个字符，不能包含空白字符
                     * @return RealName 用户姓名， 最大20个字符，不能包含空白字符
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置用户姓名， 最大20个字符，不能包含空白字符
                     * @param _realName 用户姓名， 最大20个字符，不能包含空白字符
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
                     * 获取用户ID
                     * @return Id 用户ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置用户ID
                     * @param _id 用户ID
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
                     * 获取手机号码， 大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     * @return Phone 手机号码， 大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号码， 大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     * @param _phone 手机号码， 大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
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
                     * 获取电子邮件
                     * @return Email 电子邮件
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置电子邮件
                     * @param _email 电子邮件
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
                     * 获取用户生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     * @return ValidateFrom 用户生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     * 
                     */
                    std::string GetValidateFrom() const;

                    /**
                     * 设置用户生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     * @param _validateFrom 用户生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     * 
                     */
                    void SetValidateFrom(const std::string& _validateFrom);

                    /**
                     * 判断参数 ValidateFrom 是否已赋值
                     * @return ValidateFrom 是否已赋值
                     * 
                     */
                    bool ValidateFromHasBeenSet() const;

                    /**
                     * 获取用户失效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     * @return ValidateTo 用户失效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     * 
                     */
                    std::string GetValidateTo() const;

                    /**
                     * 设置用户失效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     * @param _validateTo 用户失效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     * 
                     */
                    void SetValidateTo(const std::string& _validateTo);

                    /**
                     * 判断参数 ValidateTo 是否已赋值
                     * @return ValidateTo 是否已赋值
                     * 
                     */
                    bool ValidateToHasBeenSet() const;

                    /**
                     * 获取所属用户组列表
                     * @return GroupSet 所属用户组列表
                     * 
                     */
                    std::vector<Group> GetGroupSet() const;

                    /**
                     * 设置所属用户组列表
                     * @param _groupSet 所属用户组列表
                     * 
                     */
                    void SetGroupSet(const std::vector<Group>& _groupSet);

                    /**
                     * 判断参数 GroupSet 是否已赋值
                     * @return GroupSet 是否已赋值
                     * 
                     */
                    bool GroupSetHasBeenSet() const;

                    /**
                     * 获取认证方式，0 - 本地，1 - LDAP，2 - OAuth
                     * @return AuthType 认证方式，0 - 本地，1 - LDAP，2 - OAuth
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置认证方式，0 - 本地，1 - LDAP，2 - OAuth
                     * @param _authType 认证方式，0 - 本地，1 - LDAP，2 - OAuth
                     * 
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问
                     * @return ValidateTime 访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问
                     * 
                     */
                    std::string GetValidateTime() const;

                    /**
                     * 设置访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问
                     * @param _validateTime 访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问
                     * 
                     */
                    void SetValidateTime(const std::string& _validateTime);

                    /**
                     * 判断参数 ValidateTime 是否已赋值
                     * @return ValidateTime 是否已赋值
                     * 
                     */
                    bool ValidateTimeHasBeenSet() const;

                    /**
                     * 获取用户所属部门（用于出参）
                     * @return Department 用户所属部门（用于出参）
                     * 
                     */
                    Department GetDepartment() const;

                    /**
                     * 设置用户所属部门（用于出参）
                     * @param _department 用户所属部门（用于出参）
                     * 
                     */
                    void SetDepartment(const Department& _department);

                    /**
                     * 判断参数 Department 是否已赋值
                     * @return Department 是否已赋值
                     * 
                     */
                    bool DepartmentHasBeenSet() const;

                    /**
                     * 获取用户所属部门（用于入参）
                     * @return DepartmentId 用户所属部门（用于入参）
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置用户所属部门（用于入参）
                     * @param _departmentId 用户所属部门（用于入参）
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
                     * 获取激活状态 0 - 未激活 1 - 激活
                     * @return ActiveStatus 激活状态 0 - 未激活 1 - 激活
                     * 
                     */
                    uint64_t GetActiveStatus() const;

                    /**
                     * 设置激活状态 0 - 未激活 1 - 激活
                     * @param _activeStatus 激活状态 0 - 未激活 1 - 激活
                     * 
                     */
                    void SetActiveStatus(const uint64_t& _activeStatus);

                    /**
                     * 判断参数 ActiveStatus 是否已赋值
                     * @return ActiveStatus 是否已赋值
                     * 
                     */
                    bool ActiveStatusHasBeenSet() const;

                    /**
                     * 获取锁定状态 0 - 未锁定 1 - 锁定
                     * @return LockStatus 锁定状态 0 - 未锁定 1 - 锁定
                     * 
                     */
                    uint64_t GetLockStatus() const;

                    /**
                     * 设置锁定状态 0 - 未锁定 1 - 锁定
                     * @param _lockStatus 锁定状态 0 - 未锁定 1 - 锁定
                     * 
                     */
                    void SetLockStatus(const uint64_t& _lockStatus);

                    /**
                     * 判断参数 LockStatus 是否已赋值
                     * @return LockStatus 是否已赋值
                     * 
                     */
                    bool LockStatusHasBeenSet() const;

                    /**
                     * 获取ukey绑定状态 0 - 未绑定 1 - 已绑定
                     * @return UKeyStatus ukey绑定状态 0 - 未绑定 1 - 已绑定
                     * 
                     */
                    int64_t GetUKeyStatus() const;

                    /**
                     * 设置ukey绑定状态 0 - 未绑定 1 - 已绑定
                     * @param _uKeyStatus ukey绑定状态 0 - 未绑定 1 - 已绑定
                     * 
                     */
                    void SetUKeyStatus(const int64_t& _uKeyStatus);

                    /**
                     * 判断参数 UKeyStatus 是否已赋值
                     * @return UKeyStatus 是否已赋值
                     * 
                     */
                    bool UKeyStatusHasBeenSet() const;

                    /**
                     * 获取状态 与Filter中一致
                     * @return Status 状态 与Filter中一致
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态 与Filter中一致
                     * @param _status 状态 与Filter中一致
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取权限版本
                     * @return AclVersion 权限版本
                     * 
                     */
                    uint64_t GetAclVersion() const;

                    /**
                     * 设置权限版本
                     * @param _aclVersion 权限版本
                     * 
                     */
                    void SetAclVersion(const uint64_t& _aclVersion);

                    /**
                     * 判断参数 AclVersion 是否已赋值
                     * @return AclVersion 是否已赋值
                     * 
                     */
                    bool AclVersionHasBeenSet() const;

                    /**
                     * 获取用户来源，0-bh,1-ioa
                     * @return UserFrom 用户来源，0-bh,1-ioa
                     * 
                     */
                    uint64_t GetUserFrom() const;

                    /**
                     * 设置用户来源，0-bh,1-ioa
                     * @param _userFrom 用户来源，0-bh,1-ioa
                     * 
                     */
                    void SetUserFrom(const uint64_t& _userFrom);

                    /**
                     * 判断参数 UserFrom 是否已赋值
                     * @return UserFrom 是否已赋值
                     * 
                     */
                    bool UserFromHasBeenSet() const;

                    /**
                     * 获取ioa同步过来的用户相关信息
                     * @return IOAUserGroup ioa同步过来的用户相关信息
                     * 
                     */
                    IOAUserGroup GetIOAUserGroup() const;

                    /**
                     * 设置ioa同步过来的用户相关信息
                     * @param _iOAUserGroup ioa同步过来的用户相关信息
                     * 
                     */
                    void SetIOAUserGroup(const IOAUserGroup& _iOAUserGroup);

                    /**
                     * 判断参数 IOAUserGroup 是否已赋值
                     * @return IOAUserGroup 是否已赋值
                     * 
                     */
                    bool IOAUserGroupHasBeenSet() const;

                private:

                    /**
                     * 用户名, 3-20个字符 必须以英文字母开头，且不能包含字母、数字、.、_、-以外的字符
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户姓名， 最大20个字符，不能包含空白字符
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 用户ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 手机号码， 大陆手机号直接填写，如果是其他国家、地区号码,按照"国家地区代码|手机号"的格式输入。如: "+852|xxxxxxxx"
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 电子邮件
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 用户生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     */
                    std::string m_validateFrom;
                    bool m_validateFromHasBeenSet;

                    /**
                     * 用户失效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则用户长期有效
                     */
                    std::string m_validateTo;
                    bool m_validateToHasBeenSet;

                    /**
                     * 所属用户组列表
                     */
                    std::vector<Group> m_groupSet;
                    bool m_groupSetHasBeenSet;

                    /**
                     * 认证方式，0 - 本地，1 - LDAP，2 - OAuth
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 访问时间段限制， 由0、1组成的字符串，长度168(7 × 24)，代表该用户在一周中允许访问的时间段。字符串中第N个字符代表在一周中的第N个小时， 0 - 代表不允许访问，1 - 代表允许访问
                     */
                    std::string m_validateTime;
                    bool m_validateTimeHasBeenSet;

                    /**
                     * 用户所属部门（用于出参）
                     */
                    Department m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * 用户所属部门（用于入参）
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 激活状态 0 - 未激活 1 - 激活
                     */
                    uint64_t m_activeStatus;
                    bool m_activeStatusHasBeenSet;

                    /**
                     * 锁定状态 0 - 未锁定 1 - 锁定
                     */
                    uint64_t m_lockStatus;
                    bool m_lockStatusHasBeenSet;

                    /**
                     * ukey绑定状态 0 - 未绑定 1 - 已绑定
                     */
                    int64_t m_uKeyStatus;
                    bool m_uKeyStatusHasBeenSet;

                    /**
                     * 状态 与Filter中一致
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 权限版本
                     */
                    uint64_t m_aclVersion;
                    bool m_aclVersionHasBeenSet;

                    /**
                     * 用户来源，0-bh,1-ioa
                     */
                    uint64_t m_userFrom;
                    bool m_userFromHasBeenSet;

                    /**
                     * ioa同步过来的用户相关信息
                     */
                    IOAUserGroup m_iOAUserGroup;
                    bool m_iOAUserGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_USER_H_
