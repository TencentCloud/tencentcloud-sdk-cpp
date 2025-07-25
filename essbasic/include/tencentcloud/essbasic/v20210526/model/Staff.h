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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_STAFF_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_STAFF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/StaffRole.h>
#include <tencentcloud/essbasic/v20210526/model/Department.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 企业员工信息
                */
                class Staff : public AbstractModel
                {
                public:
                    Staff();
                    ~Staff() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取员工在电子签平台的用户ID
                     * @return UserId 员工在电子签平台的用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置员工在电子签平台的用户ID
                     * @param _userId 员工在电子签平台的用户ID
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
                     * 获取显示的员工名
注意：2024-07-08 及之后创建的应用号，该字段返回的是打码信息
                     * @return DisplayName 显示的员工名
注意：2024-07-08 及之后创建的应用号，该字段返回的是打码信息
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置显示的员工名
注意：2024-07-08 及之后创建的应用号，该字段返回的是打码信息
                     * @param _displayName 显示的员工名
注意：2024-07-08 及之后创建的应用号，该字段返回的是打码信息
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
                     * 获取员工手机号
注意：2024-07-08 及之后创建的应用号，该字段返回的是打码信息
                     * @return Mobile 员工手机号
注意：2024-07-08 及之后创建的应用号，该字段返回的是打码信息
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置员工手机号
注意：2024-07-08 及之后创建的应用号，该字段返回的是打码信息
                     * @param _mobile 员工手机号
注意：2024-07-08 及之后创建的应用号，该字段返回的是打码信息
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取员工邮箱
                     * @return Email 员工邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置员工邮箱
                     * @param _email 员工邮箱
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
                     * 获取员工在第三方应用平台的用户ID
                     * @return OpenId 员工在第三方应用平台的用户ID
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置员工在第三方应用平台的用户ID
                     * @param _openId 员工在第三方应用平台的用户ID
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
                     * 获取员工角色
                     * @return Roles 员工角色
                     * 
                     */
                    std::vector<StaffRole> GetRoles() const;

                    /**
                     * 设置员工角色
                     * @param _roles 员工角色
                     * 
                     */
                    void SetRoles(const std::vector<StaffRole>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取员工部门
                     * @return Department 员工部门
                     * 
                     */
                    Department GetDepartment() const;

                    /**
                     * 设置员工部门
                     * @param _department 员工部门
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
                     * 获取员工是否实名
                     * @return Verified 员工是否实名
                     * 
                     */
                    bool GetVerified() const;

                    /**
                     * 设置员工是否实名
                     * @param _verified 员工是否实名
                     * 
                     */
                    void SetVerified(const bool& _verified);

                    /**
                     * 判断参数 Verified 是否已赋值
                     * @return Verified 是否已赋值
                     * 
                     */
                    bool VerifiedHasBeenSet() const;

                    /**
                     * 获取员工创建时间戳，单位秒
                     * @return CreatedOn 员工创建时间戳，单位秒
                     * 
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置员工创建时间戳，单位秒
                     * @param _createdOn 员工创建时间戳，单位秒
                     * 
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取员工实名时间戳，单位秒
                     * @return VerifiedOn 员工实名时间戳，单位秒
                     * 
                     */
                    int64_t GetVerifiedOn() const;

                    /**
                     * 设置员工实名时间戳，单位秒
                     * @param _verifiedOn 员工实名时间戳，单位秒
                     * 
                     */
                    void SetVerifiedOn(const int64_t& _verifiedOn);

                    /**
                     * 判断参数 VerifiedOn 是否已赋值
                     * @return VerifiedOn 是否已赋值
                     * 
                     */
                    bool VerifiedOnHasBeenSet() const;

                    /**
                     * 获取员工是否离职：0-未离职，1-离职
                     * @return QuiteJob 员工是否离职：0-未离职，1-离职
                     * 
                     */
                    int64_t GetQuiteJob() const;

                    /**
                     * 设置员工是否离职：0-未离职，1-离职
                     * @param _quiteJob 员工是否离职：0-未离职，1-离职
                     * 
                     */
                    void SetQuiteJob(const int64_t& _quiteJob);

                    /**
                     * 判断参数 QuiteJob 是否已赋值
                     * @return QuiteJob 是否已赋值
                     * 
                     */
                    bool QuiteJobHasBeenSet() const;

                private:

                    /**
                     * 员工在电子签平台的用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 显示的员工名
注意：2024-07-08 及之后创建的应用号，该字段返回的是打码信息
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 员工手机号
注意：2024-07-08 及之后创建的应用号，该字段返回的是打码信息
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 员工邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 员工在第三方应用平台的用户ID
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 员工角色
                     */
                    std::vector<StaffRole> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * 员工部门
                     */
                    Department m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * 员工是否实名
                     */
                    bool m_verified;
                    bool m_verifiedHasBeenSet;

                    /**
                     * 员工创建时间戳，单位秒
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 员工实名时间戳，单位秒
                     */
                    int64_t m_verifiedOn;
                    bool m_verifiedOnHasBeenSet;

                    /**
                     * 员工是否离职：0-未离职，1-离职
                     */
                    int64_t m_quiteJob;
                    bool m_quiteJobHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_STAFF_H_
