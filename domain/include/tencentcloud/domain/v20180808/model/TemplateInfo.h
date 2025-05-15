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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_TEMPLATEINFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_TEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/CertificateInfo.h>
#include <tencentcloud/domain/v20180808/model/ContactInfo.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Template数据
                */
                class TemplateInfo : public AbstractModel
                {
                public:
                    TemplateInfo();
                    ~TemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板ID
                     * @return TemplateId 模板ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID
                     * @param _templateId 模板ID
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取认证状态:
NotUpload: 未实名认证
InAudit: 实名审核中
Approved: 已实名认证
Reject: 实名审核失败
NotVerified: 实名信息待修改
                     * @return AuditStatus 认证状态:
NotUpload: 未实名认证
InAudit: 实名审核中
Approved: 已实名认证
Reject: 实名审核失败
NotVerified: 实名信息待修改
                     * 
                     */
                    std::string GetAuditStatus() const;

                    /**
                     * 设置认证状态:
NotUpload: 未实名认证
InAudit: 实名审核中
Approved: 已实名认证
Reject: 实名审核失败
NotVerified: 实名信息待修改
                     * @param _auditStatus 认证状态:
NotUpload: 未实名认证
InAudit: 实名审核中
Approved: 已实名认证
Reject: 实名审核失败
NotVerified: 实名信息待修改
                     * 
                     */
                    void SetAuditStatus(const std::string& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取创建时间 
格式:YYYY-MM-DD HH:mm:ss
                     * @return CreatedOn 创建时间 
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置创建时间 
格式:YYYY-MM-DD HH:mm:ss
                     * @param _createdOn 创建时间 
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取更新时间 
格式:YYYY-MM-DD HH:mm:ss
                     * @return UpdatedOn 更新时间 
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置更新时间 
格式:YYYY-MM-DD HH:mm:ss
                     * @param _updatedOn 更新时间 
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取用户UIN
                     * @return UserUin 用户UIN
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置用户UIN
                     * @param _userUin 用户UIN
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取是否是默认模板: 是:yes，否:no
                     * @return IsDefault 是否是默认模板: 是:yes，否:no
                     * 
                     */
                    std::string GetIsDefault() const;

                    /**
                     * 设置是否是默认模板: 是:yes，否:no
                     * @param _isDefault 是否是默认模板: 是:yes，否:no
                     * 
                     */
                    void SetIsDefault(const std::string& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取认证失败原因
                     * @return AuditReason 认证失败原因
                     * 
                     */
                    std::string GetAuditReason() const;

                    /**
                     * 设置认证失败原因
                     * @param _auditReason 认证失败原因
                     * 
                     */
                    void SetAuditReason(const std::string& _auditReason);

                    /**
                     * 判断参数 AuditReason 是否已赋值
                     * @return AuditReason 是否已赋值
                     * 
                     */
                    bool AuditReasonHasBeenSet() const;

                    /**
                     * 获取认证信息
                     * @return CertificateInfo 认证信息
                     * 
                     */
                    CertificateInfo GetCertificateInfo() const;

                    /**
                     * 设置认证信息
                     * @param _certificateInfo 认证信息
                     * 
                     */
                    void SetCertificateInfo(const CertificateInfo& _certificateInfo);

                    /**
                     * 判断参数 CertificateInfo 是否已赋值
                     * @return CertificateInfo 是否已赋值
                     * 
                     */
                    bool CertificateInfoHasBeenSet() const;

                    /**
                     * 获取联系人信息
                     * @return ContactInfo 联系人信息
                     * 
                     */
                    ContactInfo GetContactInfo() const;

                    /**
                     * 设置联系人信息
                     * @param _contactInfo 联系人信息
                     * 
                     */
                    void SetContactInfo(const ContactInfo& _contactInfo);

                    /**
                     * 判断参数 ContactInfo 是否已赋值
                     * @return ContactInfo 是否已赋值
                     * 
                     */
                    bool ContactInfoHasBeenSet() const;

                    /**
                     * 获取模板是否符合规范， 1是 0 否
                     * @return IsValidTemplate 模板是否符合规范， 1是 0 否
                     * 
                     */
                    int64_t GetIsValidTemplate() const;

                    /**
                     * 设置模板是否符合规范， 1是 0 否
                     * @param _isValidTemplate 模板是否符合规范， 1是 0 否
                     * 
                     */
                    void SetIsValidTemplate(const int64_t& _isValidTemplate);

                    /**
                     * 判断参数 IsValidTemplate 是否已赋值
                     * @return IsValidTemplate 是否已赋值
                     * 
                     */
                    bool IsValidTemplateHasBeenSet() const;

                    /**
                     * 获取不符合规范原因
                     * @return InvalidReason 不符合规范原因
                     * 
                     */
                    std::string GetInvalidReason() const;

                    /**
                     * 设置不符合规范原因
                     * @param _invalidReason 不符合规范原因
                     * 
                     */
                    void SetInvalidReason(const std::string& _invalidReason);

                    /**
                     * 判断参数 InvalidReason 是否已赋值
                     * @return InvalidReason 是否已赋值
                     * 
                     */
                    bool InvalidReasonHasBeenSet() const;

                    /**
                     * 获取是包含黑名单手机或邮箱
                     * @return IsBlack 是包含黑名单手机或邮箱
                     * 
                     */
                    bool GetIsBlack() const;

                    /**
                     * 设置是包含黑名单手机或邮箱
                     * @param _isBlack 是包含黑名单手机或邮箱
                     * 
                     */
                    void SetIsBlack(const bool& _isBlack);

                    /**
                     * 判断参数 IsBlack 是否已赋值
                     * @return IsBlack 是否已赋值
                     * 
                     */
                    bool IsBlackHasBeenSet() const;

                private:

                    /**
                     * 模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 认证状态:
NotUpload: 未实名认证
InAudit: 实名审核中
Approved: 已实名认证
Reject: 实名审核失败
NotVerified: 实名信息待修改
                     */
                    std::string m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * 创建时间 
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 更新时间 
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 用户UIN
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 是否是默认模板: 是:yes，否:no
                     */
                    std::string m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 认证失败原因
                     */
                    std::string m_auditReason;
                    bool m_auditReasonHasBeenSet;

                    /**
                     * 认证信息
                     */
                    CertificateInfo m_certificateInfo;
                    bool m_certificateInfoHasBeenSet;

                    /**
                     * 联系人信息
                     */
                    ContactInfo m_contactInfo;
                    bool m_contactInfoHasBeenSet;

                    /**
                     * 模板是否符合规范， 1是 0 否
                     */
                    int64_t m_isValidTemplate;
                    bool m_isValidTemplateHasBeenSet;

                    /**
                     * 不符合规范原因
                     */
                    std::string m_invalidReason;
                    bool m_invalidReasonHasBeenSet;

                    /**
                     * 是包含黑名单手机或邮箱
                     */
                    bool m_isBlack;
                    bool m_isBlackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_TEMPLATEINFO_H_
