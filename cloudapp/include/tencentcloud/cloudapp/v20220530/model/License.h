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

#ifndef TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_LICENSE_H_
#define TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_LICENSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudapp/v20220530/model/SaleParam.h>


namespace TencentCloud
{
    namespace Cloudapp
    {
        namespace V20220530
        {
            namespace Model
            {
                /**
                * 表示应用实例的软件授权，包含颁发信息、激活信息等内容。
                */
                class License : public AbstractModel
                {
                public:
                    License();
                    ~License() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取License ID
                     * @return LicenseId License ID
                     * 
                     */
                    std::string GetLicenseId() const;

                    /**
                     * 设置License ID
                     * @param _licenseId License ID
                     * 
                     */
                    void SetLicenseId(const std::string& _licenseId);

                    /**
                     * 判断参数 LicenseId 是否已赋值
                     * @return LicenseId 是否已赋值
                     * 
                     */
                    bool LicenseIdHasBeenSet() const;

                    /**
                     * 获取软件授权模式。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>Permanent</td><td>永久授权。该授权不受有效期限制。</td></tr><tr><td>Subscription</td><td>订阅授权。授权如果过了有效期，则会进入过期状态。</td></tr><tr><td>Accept</td><td>验收期授权。用于需要验收的软件处于验收期间的授权，授权如果过了验收有效期，则会进入过期状态。</td></tr></tbody></table>
                     * @return LicenseMode 软件授权模式。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>Permanent</td><td>永久授权。该授权不受有效期限制。</td></tr><tr><td>Subscription</td><td>订阅授权。授权如果过了有效期，则会进入过期状态。</td></tr><tr><td>Accept</td><td>验收期授权。用于需要验收的软件处于验收期间的授权，授权如果过了验收有效期，则会进入过期状态。</td></tr></tbody></table>
                     * 
                     */
                    std::string GetLicenseMode() const;

                    /**
                     * 设置软件授权模式。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>Permanent</td><td>永久授权。该授权不受有效期限制。</td></tr><tr><td>Subscription</td><td>订阅授权。授权如果过了有效期，则会进入过期状态。</td></tr><tr><td>Accept</td><td>验收期授权。用于需要验收的软件处于验收期间的授权，授权如果过了验收有效期，则会进入过期状态。</td></tr></tbody></table>
                     * @param _licenseMode 软件授权模式。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>Permanent</td><td>永久授权。该授权不受有效期限制。</td></tr><tr><td>Subscription</td><td>订阅授权。授权如果过了有效期，则会进入过期状态。</td></tr><tr><td>Accept</td><td>验收期授权。用于需要验收的软件处于验收期间的授权，授权如果过了验收有效期，则会进入过期状态。</td></tr></tbody></table>
                     * 
                     */
                    void SetLicenseMode(const std::string& _licenseMode);

                    /**
                     * 判断参数 LicenseMode 是否已赋值
                     * @return LicenseMode 是否已赋值
                     * 
                     */
                    bool LicenseModeHasBeenSet() const;

                    /**
                     * 获取软件的授权状态。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>Issued</td><td>已颁发，等待激活。一般来说，如果软件已经在运行，不会出现该状态。</td></tr><tr><td>Active</td><td>授权在有效期内，这是软件运行期间最常见的状态。</td></tr><tr><td>Expired</td><td>授权已过期。订阅类的软件授权有有效期，如果服务器时间已晚于有效期，则会进入过期状态。</td></tr><tr><td>Isolated</td><td>授权已隔离。有截止日期的授权，当用户授权到期时，先进入此状态，用户可以去续费，超过7天不续费则授权进入Destroyed状态。</td></tr><tr><td>Destroyed</td><td>授权已失效/销毁。用户如果退货软件，则授权会自动失效。</td></tr></tbody></table>
                     * @return LicenseStatus 软件的授权状态。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>Issued</td><td>已颁发，等待激活。一般来说，如果软件已经在运行，不会出现该状态。</td></tr><tr><td>Active</td><td>授权在有效期内，这是软件运行期间最常见的状态。</td></tr><tr><td>Expired</td><td>授权已过期。订阅类的软件授权有有效期，如果服务器时间已晚于有效期，则会进入过期状态。</td></tr><tr><td>Isolated</td><td>授权已隔离。有截止日期的授权，当用户授权到期时，先进入此状态，用户可以去续费，超过7天不续费则授权进入Destroyed状态。</td></tr><tr><td>Destroyed</td><td>授权已失效/销毁。用户如果退货软件，则授权会自动失效。</td></tr></tbody></table>
                     * 
                     */
                    std::string GetLicenseStatus() const;

                    /**
                     * 设置软件的授权状态。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>Issued</td><td>已颁发，等待激活。一般来说，如果软件已经在运行，不会出现该状态。</td></tr><tr><td>Active</td><td>授权在有效期内，这是软件运行期间最常见的状态。</td></tr><tr><td>Expired</td><td>授权已过期。订阅类的软件授权有有效期，如果服务器时间已晚于有效期，则会进入过期状态。</td></tr><tr><td>Isolated</td><td>授权已隔离。有截止日期的授权，当用户授权到期时，先进入此状态，用户可以去续费，超过7天不续费则授权进入Destroyed状态。</td></tr><tr><td>Destroyed</td><td>授权已失效/销毁。用户如果退货软件，则授权会自动失效。</td></tr></tbody></table>
                     * @param _licenseStatus 软件的授权状态。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>Issued</td><td>已颁发，等待激活。一般来说，如果软件已经在运行，不会出现该状态。</td></tr><tr><td>Active</td><td>授权在有效期内，这是软件运行期间最常见的状态。</td></tr><tr><td>Expired</td><td>授权已过期。订阅类的软件授权有有效期，如果服务器时间已晚于有效期，则会进入过期状态。</td></tr><tr><td>Isolated</td><td>授权已隔离。有截止日期的授权，当用户授权到期时，先进入此状态，用户可以去续费，超过7天不续费则授权进入Destroyed状态。</td></tr><tr><td>Destroyed</td><td>授权已失效/销毁。用户如果退货软件，则授权会自动失效。</td></tr></tbody></table>
                     * 
                     */
                    void SetLicenseStatus(const std::string& _licenseStatus);

                    /**
                     * 判断参数 LicenseStatus 是否已赋值
                     * @return LicenseStatus 是否已赋值
                     * 
                     */
                    bool LicenseStatusHasBeenSet() const;

                    /**
                     * 获取软件供应方 ID。
                     * @return ProviderId 软件供应方 ID。
                     * 
                     */
                    uint64_t GetProviderId() const;

                    /**
                     * 设置软件供应方 ID。
                     * @param _providerId 软件供应方 ID。
                     * 
                     */
                    void SetProviderId(const uint64_t& _providerId);

                    /**
                     * 判断参数 ProviderId 是否已赋值
                     * @return ProviderId 是否已赋值
                     * 
                     */
                    bool ProviderIdHasBeenSet() const;

                    /**
                     * 获取软件包 ID。
                     * @return SoftwarePackageId 软件包 ID。
                     * 
                     */
                    std::string GetSoftwarePackageId() const;

                    /**
                     * 设置软件包 ID。
                     * @param _softwarePackageId 软件包 ID。
                     * 
                     */
                    void SetSoftwarePackageId(const std::string& _softwarePackageId);

                    /**
                     * 判断参数 SoftwarePackageId 是否已赋值
                     * @return SoftwarePackageId 是否已赋值
                     * 
                     */
                    bool SoftwarePackageIdHasBeenSet() const;

                    /**
                     * 获取软件包版本。
                     * @return SoftwarePackageVersion 软件包版本。
                     * 
                     */
                    std::string GetSoftwarePackageVersion() const;

                    /**
                     * 设置软件包版本。
                     * @param _softwarePackageVersion 软件包版本。
                     * 
                     */
                    void SetSoftwarePackageVersion(const std::string& _softwarePackageVersion);

                    /**
                     * 判断参数 SoftwarePackageVersion 是否已赋值
                     * @return SoftwarePackageVersion 是否已赋值
                     * 
                     */
                    bool SoftwarePackageVersionHasBeenSet() const;

                    /**
                     * 获取被授权的用户 UIN。
                     * @return AuthorizedUserUin 被授权的用户 UIN。
                     * 
                     */
                    std::string GetAuthorizedUserUin() const;

                    /**
                     * 设置被授权的用户 UIN。
                     * @param _authorizedUserUin 被授权的用户 UIN。
                     * 
                     */
                    void SetAuthorizedUserUin(const std::string& _authorizedUserUin);

                    /**
                     * 判断参数 AuthorizedUserUin 是否已赋值
                     * @return AuthorizedUserUin 是否已赋值
                     * 
                     */
                    bool AuthorizedUserUinHasBeenSet() const;

                    /**
                     * 获取被授权的应用实例 ID。
                     * @return AuthorizedCloudappId 被授权的应用实例 ID。
                     * 
                     */
                    std::string GetAuthorizedCloudappId() const;

                    /**
                     * 设置被授权的应用实例 ID。
                     * @param _authorizedCloudappId 被授权的应用实例 ID。
                     * 
                     */
                    void SetAuthorizedCloudappId(const std::string& _authorizedCloudappId);

                    /**
                     * 判断参数 AuthorizedCloudappId 是否已赋值
                     * @return AuthorizedCloudappId 是否已赋值
                     * 
                     */
                    bool AuthorizedCloudappIdHasBeenSet() const;

                    /**
                     * 获取被授权的角色 ID。
                     * @return AuthorizedCloudappRoleId 被授权的角色 ID。
                     * 
                     */
                    std::string GetAuthorizedCloudappRoleId() const;

                    /**
                     * 设置被授权的角色 ID。
                     * @param _authorizedCloudappRoleId 被授权的角色 ID。
                     * 
                     */
                    void SetAuthorizedCloudappRoleId(const std::string& _authorizedCloudappRoleId);

                    /**
                     * 判断参数 AuthorizedCloudappRoleId 是否已赋值
                     * @return AuthorizedCloudappRoleId 是否已赋值
                     * 
                     */
                    bool AuthorizedCloudappRoleIdHasBeenSet() const;

                    /**
                     * 获取被授权的软件规格，具体字段请参考结构SaleParam
                     * @return AuthorizedSpecification 被授权的软件规格，具体字段请参考结构SaleParam
                     * 
                     */
                    std::vector<SaleParam> GetAuthorizedSpecification() const;

                    /**
                     * 设置被授权的软件规格，具体字段请参考结构SaleParam
                     * @param _authorizedSpecification 被授权的软件规格，具体字段请参考结构SaleParam
                     * 
                     */
                    void SetAuthorizedSpecification(const std::vector<SaleParam>& _authorizedSpecification);

                    /**
                     * 判断参数 AuthorizedSpecification 是否已赋值
                     * @return AuthorizedSpecification 是否已赋值
                     * 
                     */
                    bool AuthorizedSpecificationHasBeenSet() const;

                    /**
                     * 获取被授权的软件的计费模式。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>1</td><td>线上计费，软件的授权从腾讯云线上购买，支持续费、退款等操作。</td></tr><tr><td>2</td><td>线下计费，软件的授权线下签订合同购买，定向客户交付，无法从线上续费和退款。</td></tr><tr><td>4</td><td>免费</td></tr></tbody></table>
                     * @return BillingMode 被授权的软件的计费模式。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>1</td><td>线上计费，软件的授权从腾讯云线上购买，支持续费、退款等操作。</td></tr><tr><td>2</td><td>线下计费，软件的授权线下签订合同购买，定向客户交付，无法从线上续费和退款。</td></tr><tr><td>4</td><td>免费</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置被授权的软件的计费模式。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>1</td><td>线上计费，软件的授权从腾讯云线上购买，支持续费、退款等操作。</td></tr><tr><td>2</td><td>线下计费，软件的授权线下签订合同购买，定向客户交付，无法从线上续费和退款。</td></tr><tr><td>4</td><td>免费</td></tr></tbody></table>
                     * @param _billingMode 被授权的软件的计费模式。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>1</td><td>线上计费，软件的授权从腾讯云线上购买，支持续费、退款等操作。</td></tr><tr><td>2</td><td>线下计费，软件的授权线下签订合同购买，定向客户交付，无法从线上续费和退款。</td></tr><tr><td>4</td><td>免费</td></tr></tbody></table>
                     * 
                     */
                    void SetBillingMode(const int64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取授权时长（单位由LifeSpanUnit确定，枚举值有Y年/M月/D日三种）
                     * @return LifeSpan 授权时长（单位由LifeSpanUnit确定，枚举值有Y年/M月/D日三种）
                     * 
                     */
                    int64_t GetLifeSpan() const;

                    /**
                     * 设置授权时长（单位由LifeSpanUnit确定，枚举值有Y年/M月/D日三种）
                     * @param _lifeSpan 授权时长（单位由LifeSpanUnit确定，枚举值有Y年/M月/D日三种）
                     * 
                     */
                    void SetLifeSpan(const int64_t& _lifeSpan);

                    /**
                     * 判断参数 LifeSpan 是否已赋值
                     * @return LifeSpan 是否已赋值
                     * 
                     */
                    bool LifeSpanHasBeenSet() const;

                    /**
                     * 获取授权颁发时间。
                     * @return IssueDate 授权颁发时间。
                     * 
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 设置授权颁发时间。
                     * @param _issueDate 授权颁发时间。
                     * 
                     */
                    void SetIssueDate(const std::string& _issueDate);

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     * 
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取授权激活时间，如从未激活则返回 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivationDate 授权激活时间，如从未激活则返回 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivationDate() const;

                    /**
                     * 设置授权激活时间，如从未激活则返回 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activationDate 授权激活时间，如从未激活则返回 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivationDate(const std::string& _activationDate);

                    /**
                     * 判断参数 ActivationDate 是否已赋值
                     * @return ActivationDate 是否已赋值
                     * 
                     */
                    bool ActivationDateHasBeenSet() const;

                    /**
                     * 获取授权过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpirationDate 授权过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置授权过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expirationDate 授权过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpirationDate(const std::string& _expirationDate);

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     * 
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取授权时长单位，枚举值有Y年/M月/D日三种
                     * @return LifeSpanUnit 授权时长单位，枚举值有Y年/M月/D日三种
                     * 
                     */
                    std::string GetLifeSpanUnit() const;

                    /**
                     * 设置授权时长单位，枚举值有Y年/M月/D日三种
                     * @param _lifeSpanUnit 授权时长单位，枚举值有Y年/M月/D日三种
                     * 
                     */
                    void SetLifeSpanUnit(const std::string& _lifeSpanUnit);

                    /**
                     * 判断参数 LifeSpanUnit 是否已赋值
                     * @return LifeSpanUnit 是否已赋值
                     * 
                     */
                    bool LifeSpanUnitHasBeenSet() const;

                    /**
                     * 获取授权的类型：Standard正式版/Development开发版/Trial体验版
                     * @return LicenseType 授权的类型：Standard正式版/Development开发版/Trial体验版
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置授权的类型：Standard正式版/Development开发版/Trial体验版
                     * @param _licenseType 授权的类型：Standard正式版/Development开发版/Trial体验版
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取授权的层级：Master 主授权；Child 子授权/增强型授权
                     * @return LicenseLevel 授权的层级：Master 主授权；Child 子授权/增强型授权
                     * 
                     */
                    std::string GetLicenseLevel() const;

                    /**
                     * 设置授权的层级：Master 主授权；Child 子授权/增强型授权
                     * @param _licenseLevel 授权的层级：Master 主授权；Child 子授权/增强型授权
                     * 
                     */
                    void SetLicenseLevel(const std::string& _licenseLevel);

                    /**
                     * 判断参数 LicenseLevel 是否已赋值
                     * @return LicenseLevel 是否已赋值
                     * 
                     */
                    bool LicenseLevelHasBeenSet() const;

                private:

                    /**
                     * License ID
                     */
                    std::string m_licenseId;
                    bool m_licenseIdHasBeenSet;

                    /**
                     * 软件授权模式。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>Permanent</td><td>永久授权。该授权不受有效期限制。</td></tr><tr><td>Subscription</td><td>订阅授权。授权如果过了有效期，则会进入过期状态。</td></tr><tr><td>Accept</td><td>验收期授权。用于需要验收的软件处于验收期间的授权，授权如果过了验收有效期，则会进入过期状态。</td></tr></tbody></table>
                     */
                    std::string m_licenseMode;
                    bool m_licenseModeHasBeenSet;

                    /**
                     * 软件的授权状态。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>Issued</td><td>已颁发，等待激活。一般来说，如果软件已经在运行，不会出现该状态。</td></tr><tr><td>Active</td><td>授权在有效期内，这是软件运行期间最常见的状态。</td></tr><tr><td>Expired</td><td>授权已过期。订阅类的软件授权有有效期，如果服务器时间已晚于有效期，则会进入过期状态。</td></tr><tr><td>Isolated</td><td>授权已隔离。有截止日期的授权，当用户授权到期时，先进入此状态，用户可以去续费，超过7天不续费则授权进入Destroyed状态。</td></tr><tr><td>Destroyed</td><td>授权已失效/销毁。用户如果退货软件，则授权会自动失效。</td></tr></tbody></table>
                     */
                    std::string m_licenseStatus;
                    bool m_licenseStatusHasBeenSet;

                    /**
                     * 软件供应方 ID。
                     */
                    uint64_t m_providerId;
                    bool m_providerIdHasBeenSet;

                    /**
                     * 软件包 ID。
                     */
                    std::string m_softwarePackageId;
                    bool m_softwarePackageIdHasBeenSet;

                    /**
                     * 软件包版本。
                     */
                    std::string m_softwarePackageVersion;
                    bool m_softwarePackageVersionHasBeenSet;

                    /**
                     * 被授权的用户 UIN。
                     */
                    std::string m_authorizedUserUin;
                    bool m_authorizedUserUinHasBeenSet;

                    /**
                     * 被授权的应用实例 ID。
                     */
                    std::string m_authorizedCloudappId;
                    bool m_authorizedCloudappIdHasBeenSet;

                    /**
                     * 被授权的角色 ID。
                     */
                    std::string m_authorizedCloudappRoleId;
                    bool m_authorizedCloudappRoleIdHasBeenSet;

                    /**
                     * 被授权的软件规格，具体字段请参考结构SaleParam
                     */
                    std::vector<SaleParam> m_authorizedSpecification;
                    bool m_authorizedSpecificationHasBeenSet;

                    /**
                     * 被授权的软件的计费模式。<table><thead><tr><th>枚举值</th><th>说明</th></tr></thead><tbody><tr><td>1</td><td>线上计费，软件的授权从腾讯云线上购买，支持续费、退款等操作。</td></tr><tr><td>2</td><td>线下计费，软件的授权线下签订合同购买，定向客户交付，无法从线上续费和退款。</td></tr><tr><td>4</td><td>免费</td></tr></tbody></table>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * 授权时长（单位由LifeSpanUnit确定，枚举值有Y年/M月/D日三种）
                     */
                    int64_t m_lifeSpan;
                    bool m_lifeSpanHasBeenSet;

                    /**
                     * 授权颁发时间。
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * 授权激活时间，如从未激活则返回 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activationDate;
                    bool m_activationDateHasBeenSet;

                    /**
                     * 授权过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * 授权时长单位，枚举值有Y年/M月/D日三种
                     */
                    std::string m_lifeSpanUnit;
                    bool m_lifeSpanUnitHasBeenSet;

                    /**
                     * 授权的类型：Standard正式版/Development开发版/Trial体验版
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 授权的层级：Master 主授权；Child 子授权/增强型授权
                     */
                    std::string m_licenseLevel;
                    bool m_licenseLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_LICENSE_H_
