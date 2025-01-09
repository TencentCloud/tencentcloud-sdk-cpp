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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELORGANIZATIONINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELORGANIZATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 渠道企业信息
                */
                class ChannelOrganizationInfo : public AbstractModel
                {
                public:
                    ChannelOrganizationInfo();
                    ~ChannelOrganizationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取电子签平台给企业分配的ID（在不同应用下同一个企业会分配通用的ID）
                     * @return OrganizationId 电子签平台给企业分配的ID（在不同应用下同一个企业会分配通用的ID）
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置电子签平台给企业分配的ID（在不同应用下同一个企业会分配通用的ID）
                     * @param _organizationId 电子签平台给企业分配的ID（在不同应用下同一个企业会分配通用的ID）
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取第三方平台子客企业的唯一标识
                     * @return OrganizationOpenId 第三方平台子客企业的唯一标识
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置第三方平台子客企业的唯一标识
                     * @param _organizationOpenId 第三方平台子客企业的唯一标识
                     * 
                     */
                    void SetOrganizationOpenId(const std::string& _organizationOpenId);

                    /**
                     * 判断参数 OrganizationOpenId 是否已赋值
                     * @return OrganizationOpenId 是否已赋值
                     * 
                     */
                    bool OrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取第三方平台子客企业名称
                     * @return OrganizationName 第三方平台子客企业名称
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置第三方平台子客企业名称
                     * @param _organizationName 第三方平台子客企业名称
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取企业的统一社会信用代码
                     * @return UnifiedSocialCreditCode 企业的统一社会信用代码
                     * 
                     */
                    std::string GetUnifiedSocialCreditCode() const;

                    /**
                     * 设置企业的统一社会信用代码
                     * @param _unifiedSocialCreditCode 企业的统一社会信用代码
                     * 
                     */
                    void SetUnifiedSocialCreditCode(const std::string& _unifiedSocialCreditCode);

                    /**
                     * 判断参数 UnifiedSocialCreditCode 是否已赋值
                     * @return UnifiedSocialCreditCode 是否已赋值
                     * 
                     */
                    bool UnifiedSocialCreditCodeHasBeenSet() const;

                    /**
                     * 获取企业法定代表人的姓名
                     * @return LegalName 企业法定代表人的姓名
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置企业法定代表人的姓名
                     * @param _legalName 企业法定代表人的姓名
                     * 
                     */
                    void SetLegalName(const std::string& _legalName);

                    /**
                     * 判断参数 LegalName 是否已赋值
                     * @return LegalName 是否已赋值
                     * 
                     */
                    bool LegalNameHasBeenSet() const;

                    /**
                     * 获取企业法定代表人作为第三方平台子客企业员工的唯一标识
                     * @return LegalOpenId 企业法定代表人作为第三方平台子客企业员工的唯一标识
                     * 
                     */
                    std::string GetLegalOpenId() const;

                    /**
                     * 设置企业法定代表人作为第三方平台子客企业员工的唯一标识
                     * @param _legalOpenId 企业法定代表人作为第三方平台子客企业员工的唯一标识
                     * 
                     */
                    void SetLegalOpenId(const std::string& _legalOpenId);

                    /**
                     * 判断参数 LegalOpenId 是否已赋值
                     * @return LegalOpenId 是否已赋值
                     * 
                     */
                    bool LegalOpenIdHasBeenSet() const;

                    /**
                     * 获取企业超级管理员的姓名
                     * @return AdminName 企业超级管理员的姓名
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置企业超级管理员的姓名
                     * @param _adminName 企业超级管理员的姓名
                     * 
                     */
                    void SetAdminName(const std::string& _adminName);

                    /**
                     * 判断参数 AdminName 是否已赋值
                     * @return AdminName 是否已赋值
                     * 
                     */
                    bool AdminNameHasBeenSet() const;

                    /**
                     * 获取企业超级管理员作为第三方平台子客企业员工的唯一标识
                     * @return AdminOpenId 企业超级管理员作为第三方平台子客企业员工的唯一标识
                     * 
                     */
                    std::string GetAdminOpenId() const;

                    /**
                     * 设置企业超级管理员作为第三方平台子客企业员工的唯一标识
                     * @param _adminOpenId 企业超级管理员作为第三方平台子客企业员工的唯一标识
                     * 
                     */
                    void SetAdminOpenId(const std::string& _adminOpenId);

                    /**
                     * 判断参数 AdminOpenId 是否已赋值
                     * @return AdminOpenId 是否已赋值
                     * 
                     */
                    bool AdminOpenIdHasBeenSet() const;

                    /**
                     * 获取企业超级管理员的手机号码
**注**：`手机号码脱敏（隐藏部分用*替代）`
                     * @return AdminMobile 企业超级管理员的手机号码
**注**：`手机号码脱敏（隐藏部分用*替代）`
                     * 
                     */
                    std::string GetAdminMobile() const;

                    /**
                     * 设置企业超级管理员的手机号码
**注**：`手机号码脱敏（隐藏部分用*替代）`
                     * @param _adminMobile 企业超级管理员的手机号码
**注**：`手机号码脱敏（隐藏部分用*替代）`
                     * 
                     */
                    void SetAdminMobile(const std::string& _adminMobile);

                    /**
                     * 判断参数 AdminMobile 是否已赋值
                     * @return AdminMobile 是否已赋值
                     * 
                     */
                    bool AdminMobileHasBeenSet() const;

                    /**
                     * 获取企业认证状态字段。值如下：
<ul>
  <li>**"UNVERIFIED"**： 未认证的企业</li>
  <li>**"VERIFYINGLEGALPENDINGAUTHORIZATION"**： 认证中待法人授权的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEPENDING"**： 认证中授权书审核中的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEREJECT"**： 认证中授权书已驳回的企业</li>
  <li>**"VERIFYING"**： 认证中的企业</li>
  <li>**"VERIFIED"**： 已认证的企业</li>
</ul>
                     * @return AuthorizationStatus 企业认证状态字段。值如下：
<ul>
  <li>**"UNVERIFIED"**： 未认证的企业</li>
  <li>**"VERIFYINGLEGALPENDINGAUTHORIZATION"**： 认证中待法人授权的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEPENDING"**： 认证中授权书审核中的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEREJECT"**： 认证中授权书已驳回的企业</li>
  <li>**"VERIFYING"**： 认证中的企业</li>
  <li>**"VERIFIED"**： 已认证的企业</li>
</ul>
                     * 
                     */
                    std::string GetAuthorizationStatus() const;

                    /**
                     * 设置企业认证状态字段。值如下：
<ul>
  <li>**"UNVERIFIED"**： 未认证的企业</li>
  <li>**"VERIFYINGLEGALPENDINGAUTHORIZATION"**： 认证中待法人授权的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEPENDING"**： 认证中授权书审核中的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEREJECT"**： 认证中授权书已驳回的企业</li>
  <li>**"VERIFYING"**： 认证中的企业</li>
  <li>**"VERIFIED"**： 已认证的企业</li>
</ul>
                     * @param _authorizationStatus 企业认证状态字段。值如下：
<ul>
  <li>**"UNVERIFIED"**： 未认证的企业</li>
  <li>**"VERIFYINGLEGALPENDINGAUTHORIZATION"**： 认证中待法人授权的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEPENDING"**： 认证中授权书审核中的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEREJECT"**： 认证中授权书已驳回的企业</li>
  <li>**"VERIFYING"**： 认证中的企业</li>
  <li>**"VERIFIED"**： 已认证的企业</li>
</ul>
                     * 
                     */
                    void SetAuthorizationStatus(const std::string& _authorizationStatus);

                    /**
                     * 判断参数 AuthorizationStatus 是否已赋值
                     * @return AuthorizationStatus 是否已赋值
                     * 
                     */
                    bool AuthorizationStatusHasBeenSet() const;

                    /**
                     * 获取企业认证方式字段。值如下：
<ul>
  <li>**"AuthorizationInit"**： 暂未选择授权方式</li>
  <li>**"AuthorizationFile"**： 授权书</li>
  <li>**"AuthorizationLegalPerson"**： 法人授权超管</li>
  <li>**"AuthorizationLegalIdentity"**： 法人直接认证</li>
</ul>
                     * @return AuthorizationType 企业认证方式字段。值如下：
<ul>
  <li>**"AuthorizationInit"**： 暂未选择授权方式</li>
  <li>**"AuthorizationFile"**： 授权书</li>
  <li>**"AuthorizationLegalPerson"**： 法人授权超管</li>
  <li>**"AuthorizationLegalIdentity"**： 法人直接认证</li>
</ul>
                     * 
                     */
                    std::string GetAuthorizationType() const;

                    /**
                     * 设置企业认证方式字段。值如下：
<ul>
  <li>**"AuthorizationInit"**： 暂未选择授权方式</li>
  <li>**"AuthorizationFile"**： 授权书</li>
  <li>**"AuthorizationLegalPerson"**： 法人授权超管</li>
  <li>**"AuthorizationLegalIdentity"**： 法人直接认证</li>
</ul>
                     * @param _authorizationType 企业认证方式字段。值如下：
<ul>
  <li>**"AuthorizationInit"**： 暂未选择授权方式</li>
  <li>**"AuthorizationFile"**： 授权书</li>
  <li>**"AuthorizationLegalPerson"**： 法人授权超管</li>
  <li>**"AuthorizationLegalIdentity"**： 法人直接认证</li>
</ul>
                     * 
                     */
                    void SetAuthorizationType(const std::string& _authorizationType);

                    /**
                     * 判断参数 AuthorizationType 是否已赋值
                     * @return AuthorizationType 是否已赋值
                     * 
                     */
                    bool AuthorizationTypeHasBeenSet() const;

                    /**
                     * 获取子企业激活状态。值如下：
<ul>
  <li>**0**： 未激活</li>
  <li>**1**： 已激活</li>
</ul>
                     * @return ActiveStatus 子企业激活状态。值如下：
<ul>
  <li>**0**： 未激活</li>
  <li>**1**： 已激活</li>
</ul>
                     * 
                     */
                    int64_t GetActiveStatus() const;

                    /**
                     * 设置子企业激活状态。值如下：
<ul>
  <li>**0**： 未激活</li>
  <li>**1**： 已激活</li>
</ul>
                     * @param _activeStatus 子企业激活状态。值如下：
<ul>
  <li>**0**： 未激活</li>
  <li>**1**： 已激活</li>
</ul>
                     * 
                     */
                    void SetActiveStatus(const int64_t& _activeStatus);

                    /**
                     * 判断参数 ActiveStatus 是否已赋值
                     * @return ActiveStatus 是否已赋值
                     * 
                     */
                    bool ActiveStatusHasBeenSet() const;

                    /**
                     * 获取账号到期时间，时间戳
                     * @return LicenseExpireTime 账号到期时间，时间戳
                     * 
                     */
                    int64_t GetLicenseExpireTime() const;

                    /**
                     * 设置账号到期时间，时间戳
                     * @param _licenseExpireTime 账号到期时间，时间戳
                     * 
                     */
                    void SetLicenseExpireTime(const int64_t& _licenseExpireTime);

                    /**
                     * 判断参数 LicenseExpireTime 是否已赋值
                     * @return LicenseExpireTime 是否已赋值
                     * 
                     */
                    bool LicenseExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 电子签平台给企业分配的ID（在不同应用下同一个企业会分配通用的ID）
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 第三方平台子客企业的唯一标识
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * 第三方平台子客企业名称
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 企业的统一社会信用代码
                     */
                    std::string m_unifiedSocialCreditCode;
                    bool m_unifiedSocialCreditCodeHasBeenSet;

                    /**
                     * 企业法定代表人的姓名
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * 企业法定代表人作为第三方平台子客企业员工的唯一标识
                     */
                    std::string m_legalOpenId;
                    bool m_legalOpenIdHasBeenSet;

                    /**
                     * 企业超级管理员的姓名
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * 企业超级管理员作为第三方平台子客企业员工的唯一标识
                     */
                    std::string m_adminOpenId;
                    bool m_adminOpenIdHasBeenSet;

                    /**
                     * 企业超级管理员的手机号码
**注**：`手机号码脱敏（隐藏部分用*替代）`
                     */
                    std::string m_adminMobile;
                    bool m_adminMobileHasBeenSet;

                    /**
                     * 企业认证状态字段。值如下：
<ul>
  <li>**"UNVERIFIED"**： 未认证的企业</li>
  <li>**"VERIFYINGLEGALPENDINGAUTHORIZATION"**： 认证中待法人授权的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEPENDING"**： 认证中授权书审核中的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEREJECT"**： 认证中授权书已驳回的企业</li>
  <li>**"VERIFYING"**： 认证中的企业</li>
  <li>**"VERIFIED"**： 已认证的企业</li>
</ul>
                     */
                    std::string m_authorizationStatus;
                    bool m_authorizationStatusHasBeenSet;

                    /**
                     * 企业认证方式字段。值如下：
<ul>
  <li>**"AuthorizationInit"**： 暂未选择授权方式</li>
  <li>**"AuthorizationFile"**： 授权书</li>
  <li>**"AuthorizationLegalPerson"**： 法人授权超管</li>
  <li>**"AuthorizationLegalIdentity"**： 法人直接认证</li>
</ul>
                     */
                    std::string m_authorizationType;
                    bool m_authorizationTypeHasBeenSet;

                    /**
                     * 子企业激活状态。值如下：
<ul>
  <li>**0**： 未激活</li>
  <li>**1**： 已激活</li>
</ul>
                     */
                    int64_t m_activeStatus;
                    bool m_activeStatusHasBeenSet;

                    /**
                     * 账号到期时间，时间戳
                     */
                    int64_t m_licenseExpireTime;
                    bool m_licenseExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELORGANIZATIONINFO_H_
