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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/ManagerStatusInfo.h>
#include <tencentcloud/ssl/v20191205/model/Tags.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 管理人信息
                */
                class ManagerInfo : public AbstractModel
                {
                public:
                    ManagerInfo();
                    ~ManagerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态: audit: 审核中 ok: 审核通过 invalid: 失效 expiring: 即将过期 expired: 已过期
                     * @return Status 状态: audit: 审核中 ok: 审核通过 invalid: 失效 expiring: 即将过期 expired: 已过期
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态: audit: 审核中 ok: 审核通过 invalid: 失效 expiring: 即将过期 expired: 已过期
                     * @param _status 状态: audit: 审核中 ok: 审核通过 invalid: 失效 expiring: 即将过期 expired: 已过期
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
                     * 获取管理人姓名
                     * @return ManagerFirstName 管理人姓名
                     * 
                     */
                    std::string GetManagerFirstName() const;

                    /**
                     * 设置管理人姓名
                     * @param _managerFirstName 管理人姓名
                     * 
                     */
                    void SetManagerFirstName(const std::string& _managerFirstName);

                    /**
                     * 判断参数 ManagerFirstName 是否已赋值
                     * @return ManagerFirstName 是否已赋值
                     * 
                     */
                    bool ManagerFirstNameHasBeenSet() const;

                    /**
                     * 获取管理人姓名
                     * @return ManagerLastName 管理人姓名
                     * 
                     */
                    std::string GetManagerLastName() const;

                    /**
                     * 设置管理人姓名
                     * @param _managerLastName 管理人姓名
                     * 
                     */
                    void SetManagerLastName(const std::string& _managerLastName);

                    /**
                     * 判断参数 ManagerLastName 是否已赋值
                     * @return ManagerLastName 是否已赋值
                     * 
                     */
                    bool ManagerLastNameHasBeenSet() const;

                    /**
                     * 获取管理人职位
                     * @return ManagerPosition 管理人职位
                     * 
                     */
                    std::string GetManagerPosition() const;

                    /**
                     * 设置管理人职位
                     * @param _managerPosition 管理人职位
                     * 
                     */
                    void SetManagerPosition(const std::string& _managerPosition);

                    /**
                     * 判断参数 ManagerPosition 是否已赋值
                     * @return ManagerPosition 是否已赋值
                     * 
                     */
                    bool ManagerPositionHasBeenSet() const;

                    /**
                     * 获取管理人电话
                     * @return ManagerPhone 管理人电话
                     * 
                     */
                    std::string GetManagerPhone() const;

                    /**
                     * 设置管理人电话
                     * @param _managerPhone 管理人电话
                     * 
                     */
                    void SetManagerPhone(const std::string& _managerPhone);

                    /**
                     * 判断参数 ManagerPhone 是否已赋值
                     * @return ManagerPhone 是否已赋值
                     * 
                     */
                    bool ManagerPhoneHasBeenSet() const;

                    /**
                     * 获取管理人邮箱
                     * @return ManagerMail 管理人邮箱
                     * 
                     */
                    std::string GetManagerMail() const;

                    /**
                     * 设置管理人邮箱
                     * @param _managerMail 管理人邮箱
                     * 
                     */
                    void SetManagerMail(const std::string& _managerMail);

                    /**
                     * 判断参数 ManagerMail 是否已赋值
                     * @return ManagerMail 是否已赋值
                     * 
                     */
                    bool ManagerMailHasBeenSet() const;

                    /**
                     * 获取管理人所属部门
                     * @return ManagerDepartment 管理人所属部门
                     * 
                     */
                    std::string GetManagerDepartment() const;

                    /**
                     * 设置管理人所属部门
                     * @param _managerDepartment 管理人所属部门
                     * 
                     */
                    void SetManagerDepartment(const std::string& _managerDepartment);

                    /**
                     * 判断参数 ManagerDepartment 是否已赋值
                     * @return ManagerDepartment 是否已赋值
                     * 
                     */
                    bool ManagerDepartmentHasBeenSet() const;

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
                     * 获取管理人域名数量
                     * @return DomainCount 管理人域名数量
                     * 
                     */
                    int64_t GetDomainCount() const;

                    /**
                     * 设置管理人域名数量
                     * @param _domainCount 管理人域名数量
                     * 
                     */
                    void SetDomainCount(const int64_t& _domainCount);

                    /**
                     * 判断参数 DomainCount 是否已赋值
                     * @return DomainCount 是否已赋值
                     * 
                     */
                    bool DomainCountHasBeenSet() const;

                    /**
                     * 获取管理人证书数量
                     * @return CertCount 管理人证书数量
                     * 
                     */
                    int64_t GetCertCount() const;

                    /**
                     * 设置管理人证书数量
                     * @param _certCount 管理人证书数量
                     * 
                     */
                    void SetCertCount(const int64_t& _certCount);

                    /**
                     * 判断参数 CertCount 是否已赋值
                     * @return CertCount 是否已赋值
                     * 
                     */
                    bool CertCountHasBeenSet() const;

                    /**
                     * 获取管理人ID
                     * @return ManagerId 管理人ID
                     * 
                     */
                    int64_t GetManagerId() const;

                    /**
                     * 设置管理人ID
                     * @param _managerId 管理人ID
                     * 
                     */
                    void SetManagerId(const int64_t& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     * 
                     */
                    bool ManagerIdHasBeenSet() const;

                    /**
                     * 获取审核有效到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 审核有效到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置审核有效到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 审核有效到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取最近一次提交审核时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmitAuditTime 最近一次提交审核时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubmitAuditTime() const;

                    /**
                     * 设置最近一次提交审核时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submitAuditTime 最近一次提交审核时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmitAuditTime(const std::string& _submitAuditTime);

                    /**
                     * 判断参数 SubmitAuditTime 是否已赋值
                     * @return SubmitAuditTime 是否已赋值
                     * 
                     */
                    bool SubmitAuditTimeHasBeenSet() const;

                    /**
                     * 获取审核通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyTime 审核通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVerifyTime() const;

                    /**
                     * 设置审核通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifyTime 审核通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVerifyTime(const std::string& _verifyTime);

                    /**
                     * 判断参数 VerifyTime 是否已赋值
                     * @return VerifyTime 是否已赋值
                     * 
                     */
                    bool VerifyTimeHasBeenSet() const;

                    /**
                     * 获取具体审核状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusInfo 具体审核状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ManagerStatusInfo> GetStatusInfo() const;

                    /**
                     * 设置具体审核状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusInfo 具体审核状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusInfo(const std::vector<ManagerStatusInfo>& _statusInfo);

                    /**
                     * 判断参数 StatusInfo 是否已赋值
                     * @return StatusInfo 是否已赋值
                     * 
                     */
                    bool StatusInfoHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

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
                     * 管理人姓名
                     */
                    std::string m_managerLastName;
                    bool m_managerLastNameHasBeenSet;

                    /**
                     * 管理人职位
                     */
                    std::string m_managerPosition;
                    bool m_managerPositionHasBeenSet;

                    /**
                     * 管理人电话
                     */
                    std::string m_managerPhone;
                    bool m_managerPhoneHasBeenSet;

                    /**
                     * 管理人邮箱
                     */
                    std::string m_managerMail;
                    bool m_managerMailHasBeenSet;

                    /**
                     * 管理人所属部门
                     */
                    std::string m_managerDepartment;
                    bool m_managerDepartmentHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 管理人域名数量
                     */
                    int64_t m_domainCount;
                    bool m_domainCountHasBeenSet;

                    /**
                     * 管理人证书数量
                     */
                    int64_t m_certCount;
                    bool m_certCountHasBeenSet;

                    /**
                     * 管理人ID
                     */
                    int64_t m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * 审核有效到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 最近一次提交审核时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_submitAuditTime;
                    bool m_submitAuditTimeHasBeenSet;

                    /**
                     * 审核通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_verifyTime;
                    bool m_verifyTimeHasBeenSet;

                    /**
                     * 具体审核状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ManagerStatusInfo> m_statusInfo;
                    bool m_statusInfoHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERINFO_H_
