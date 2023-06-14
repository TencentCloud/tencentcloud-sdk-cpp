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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_STAFF_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_STAFF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/StaffRole.h>
#include <tencentcloud/ess/v20201111/model/Department.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
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
                     * 获取用户在电子签平台的id
                     * @return UserId 用户在电子签平台的id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户在电子签平台的id
                     * @param _userId 用户在电子签平台的id
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
                     * 获取显示的用户名/昵称
                     * @return DisplayName 显示的用户名/昵称
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置显示的用户名/昵称
                     * @param _displayName 显示的用户名/昵称
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
                     * 获取用户手机号
                     * @return Mobile 用户手机号
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置用户手机号
                     * @param _mobile 用户手机号
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
                     * 获取用户邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email 用户邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置用户邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _email 用户邮箱
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
                     * 获取用户在第三方平台id，如需在此接口提醒员工实名，该参数不传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenId 用户在第三方平台id，如需在此接口提醒员工实名，该参数不传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户在第三方平台id，如需在此接口提醒员工实名，该参数不传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _openId 用户在第三方平台id，如需在此接口提醒员工实名，该参数不传
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
                     * 获取员工角色
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Roles 员工角色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StaffRole> GetRoles() const;

                    /**
                     * 设置员工角色
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roles 员工角色
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Department 员工部门
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Department GetDepartment() const;

                    /**
                     * 设置员工部门
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _department 员工部门
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifiedOn 员工实名时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVerifiedOn() const;

                    /**
                     * 设置员工实名时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifiedOn 员工实名时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuiteJob 员工是否离职：0-未离职，1-离职
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQuiteJob() const;

                    /**
                     * 设置员工是否离职：0-未离职，1-离职
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quiteJob 员工是否离职：0-未离职，1-离职
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuiteJob(const int64_t& _quiteJob);

                    /**
                     * 判断参数 QuiteJob 是否已赋值
                     * @return QuiteJob 是否已赋值
                     * 
                     */
                    bool QuiteJobHasBeenSet() const;

                    /**
                     * 获取员工离职交接人用户id
                     * @return ReceiveUserId 员工离职交接人用户id
                     * 
                     */
                    std::string GetReceiveUserId() const;

                    /**
                     * 设置员工离职交接人用户id
                     * @param _receiveUserId 员工离职交接人用户id
                     * 
                     */
                    void SetReceiveUserId(const std::string& _receiveUserId);

                    /**
                     * 判断参数 ReceiveUserId 是否已赋值
                     * @return ReceiveUserId 是否已赋值
                     * 
                     */
                    bool ReceiveUserIdHasBeenSet() const;

                    /**
                     * 获取员工离职交接人用户OpenId
                     * @return ReceiveOpenId 员工离职交接人用户OpenId
                     * 
                     */
                    std::string GetReceiveOpenId() const;

                    /**
                     * 设置员工离职交接人用户OpenId
                     * @param _receiveOpenId 员工离职交接人用户OpenId
                     * 
                     */
                    void SetReceiveOpenId(const std::string& _receiveOpenId);

                    /**
                     * 判断参数 ReceiveOpenId 是否已赋值
                     * @return ReceiveOpenId 是否已赋值
                     * 
                     */
                    bool ReceiveOpenIdHasBeenSet() const;

                private:

                    /**
                     * 用户在电子签平台的id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 显示的用户名/昵称
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 用户手机号
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 用户邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 用户在第三方平台id，如需在此接口提醒员工实名，该参数不传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 员工角色
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StaffRole> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * 员工部门
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_verifiedOn;
                    bool m_verifiedOnHasBeenSet;

                    /**
                     * 员工是否离职：0-未离职，1-离职
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_quiteJob;
                    bool m_quiteJobHasBeenSet;

                    /**
                     * 员工离职交接人用户id
                     */
                    std::string m_receiveUserId;
                    bool m_receiveUserIdHasBeenSet;

                    /**
                     * 员工离职交接人用户OpenId
                     */
                    std::string m_receiveOpenId;
                    bool m_receiveOpenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_STAFF_H_
