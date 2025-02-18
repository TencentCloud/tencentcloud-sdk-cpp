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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERDETAILRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CompanyInfo.h>
#include <tencentcloud/ssl/v20191205/model/ManagerStatusInfo.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeManagerDetail返回参数结构体
                */
                class DescribeManagerDetailResponse : public AbstractModel
                {
                public:
                    DescribeManagerDetailResponse();
                    ~DescribeManagerDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取状态: audit: 审核中 ok: 审核通过 invalid: 失效 expiring: 即将过期 expired: 已过期
                     * @return Status 状态: audit: 审核中 ok: 审核通过 invalid: 失效 expiring: 即将过期 expired: 已过期
                     * @deprecated
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * @deprecated
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取管理人姓名
                     * @return ManagerFirstName 管理人姓名
                     * 
                     */
                    std::string GetManagerFirstName() const;

                    /**
                     * 判断参数 ManagerFirstName 是否已赋值
                     * @return ManagerFirstName 是否已赋值
                     * 
                     */
                    bool ManagerFirstNameHasBeenSet() const;

                    /**
                     * 获取管理人邮箱
                     * @return ManagerMail 管理人邮箱
                     * 
                     */
                    std::string GetManagerMail() const;

                    /**
                     * 判断参数 ManagerMail 是否已赋值
                     * @return ManagerMail 是否已赋值
                     * 
                     */
                    bool ManagerMailHasBeenSet() const;

                    /**
                     * 获取联系人姓名
                     * @return ContactFirstName 联系人姓名
                     * 
                     */
                    std::string GetContactFirstName() const;

                    /**
                     * 判断参数 ContactFirstName 是否已赋值
                     * @return ContactFirstName 是否已赋值
                     * 
                     */
                    bool ContactFirstNameHasBeenSet() const;

                    /**
                     * 获取管理人姓名
                     * @return ManagerLastName 管理人姓名
                     * 
                     */
                    std::string GetManagerLastName() const;

                    /**
                     * 判断参数 ManagerLastName 是否已赋值
                     * @return ManagerLastName 是否已赋值
                     * 
                     */
                    bool ManagerLastNameHasBeenSet() const;

                    /**
                     * 获取联系人职位
                     * @return ContactPosition 联系人职位
                     * 
                     */
                    std::string GetContactPosition() const;

                    /**
                     * 判断参数 ContactPosition 是否已赋值
                     * @return ContactPosition 是否已赋值
                     * 
                     */
                    bool ContactPositionHasBeenSet() const;

                    /**
                     * 获取管理人职位
                     * @return ManagerPosition 管理人职位
                     * 
                     */
                    std::string GetManagerPosition() const;

                    /**
                     * 判断参数 ManagerPosition 是否已赋值
                     * @return ManagerPosition 是否已赋值
                     * 
                     */
                    bool ManagerPositionHasBeenSet() const;

                    /**
                     * 获取核验通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyTime 核验通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVerifyTime() const;

                    /**
                     * 判断参数 VerifyTime 是否已赋值
                     * @return VerifyTime 是否已赋值
                     * 
                     */
                    bool VerifyTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取核验过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 核验过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取联系人姓名
                     * @return ContactLastName 联系人姓名
                     * 
                     */
                    std::string GetContactLastName() const;

                    /**
                     * 判断参数 ContactLastName 是否已赋值
                     * @return ContactLastName 是否已赋值
                     * 
                     */
                    bool ContactLastNameHasBeenSet() const;

                    /**
                     * 获取管理人电话
                     * @return ManagerPhone 管理人电话
                     * 
                     */
                    std::string GetManagerPhone() const;

                    /**
                     * 判断参数 ManagerPhone 是否已赋值
                     * @return ManagerPhone 是否已赋值
                     * 
                     */
                    bool ManagerPhoneHasBeenSet() const;

                    /**
                     * 获取联系人电话
                     * @return ContactPhone 联系人电话
                     * 
                     */
                    std::string GetContactPhone() const;

                    /**
                     * 判断参数 ContactPhone 是否已赋值
                     * @return ContactPhone 是否已赋值
                     * 
                     */
                    bool ContactPhoneHasBeenSet() const;

                    /**
                     * 获取联系人邮箱
                     * @return ContactMail 联系人邮箱
                     * 
                     */
                    std::string GetContactMail() const;

                    /**
                     * 判断参数 ContactMail 是否已赋值
                     * @return ContactMail 是否已赋值
                     * 
                     */
                    bool ContactMailHasBeenSet() const;

                    /**
                     * 获取管理人所属部门
                     * @return ManagerDepartment 管理人所属部门
                     * 
                     */
                    std::string GetManagerDepartment() const;

                    /**
                     * 判断参数 ManagerDepartment 是否已赋值
                     * @return ManagerDepartment 是否已赋值
                     * 
                     */
                    bool ManagerDepartmentHasBeenSet() const;

                    /**
                     * 获取管理人所属公司信息
                     * @return CompanyInfo 管理人所属公司信息
                     * 
                     */
                    CompanyInfo GetCompanyInfo() const;

                    /**
                     * 判断参数 CompanyInfo 是否已赋值
                     * @return CompanyInfo 是否已赋值
                     * 
                     */
                    bool CompanyInfoHasBeenSet() const;

                    /**
                     * 获取管理人公司ID
                     * @return CompanyId 管理人公司ID
                     * 
                     */
                    int64_t GetCompanyId() const;

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取管理人ID
                     * @return ManagerId 管理人ID
                     * 
                     */
                    int64_t GetManagerId() const;

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     * 
                     */
                    bool ManagerIdHasBeenSet() const;

                    /**
                     * 获取审核状态详细信息
                     * @return StatusInfo 审核状态详细信息
                     * 
                     */
                    std::vector<ManagerStatusInfo> GetStatusInfo() const;

                    /**
                     * 判断参数 StatusInfo 是否已赋值
                     * @return StatusInfo 是否已赋值
                     * 
                     */
                    bool StatusInfoHasBeenSet() const;

                private:

                    /**
                     * 状态: audit: 审核中 ok: 审核通过 invalid: 失效 expiring: 即将过期 expired: 已过期
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 管理人姓名
                     */
                    std::string m_managerFirstName;
                    bool m_managerFirstNameHasBeenSet;

                    /**
                     * 管理人邮箱
                     */
                    std::string m_managerMail;
                    bool m_managerMailHasBeenSet;

                    /**
                     * 联系人姓名
                     */
                    std::string m_contactFirstName;
                    bool m_contactFirstNameHasBeenSet;

                    /**
                     * 管理人姓名
                     */
                    std::string m_managerLastName;
                    bool m_managerLastNameHasBeenSet;

                    /**
                     * 联系人职位
                     */
                    std::string m_contactPosition;
                    bool m_contactPositionHasBeenSet;

                    /**
                     * 管理人职位
                     */
                    std::string m_managerPosition;
                    bool m_managerPositionHasBeenSet;

                    /**
                     * 核验通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_verifyTime;
                    bool m_verifyTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 核验过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 联系人姓名
                     */
                    std::string m_contactLastName;
                    bool m_contactLastNameHasBeenSet;

                    /**
                     * 管理人电话
                     */
                    std::string m_managerPhone;
                    bool m_managerPhoneHasBeenSet;

                    /**
                     * 联系人电话
                     */
                    std::string m_contactPhone;
                    bool m_contactPhoneHasBeenSet;

                    /**
                     * 联系人邮箱
                     */
                    std::string m_contactMail;
                    bool m_contactMailHasBeenSet;

                    /**
                     * 管理人所属部门
                     */
                    std::string m_managerDepartment;
                    bool m_managerDepartmentHasBeenSet;

                    /**
                     * 管理人所属公司信息
                     */
                    CompanyInfo m_companyInfo;
                    bool m_companyInfoHasBeenSet;

                    /**
                     * 管理人公司ID
                     */
                    int64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 管理人ID
                     */
                    int64_t m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * 审核状态详细信息
                     */
                    std::vector<ManagerStatusInfo> m_statusInfo;
                    bool m_statusInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERDETAILRESPONSE_H_
