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
                     * 获取电子签企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationId 电子签企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置电子签企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationId 电子签企业Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取电子签企业OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationOpenId 电子签企业OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置电子签企业OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationOpenId 电子签企业OpenId
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取企业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationName 企业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置企业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationName 企业名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取企业信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnifiedSocialCreditCode 企业信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnifiedSocialCreditCode() const;

                    /**
                     * 设置企业信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unifiedSocialCreditCode 企业信用代码
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LegalName 法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _legalName 法人姓名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取法人OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LegalOpenId 法人OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLegalOpenId() const;

                    /**
                     * 设置法人OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _legalOpenId 法人OpenId
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取超管姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminName 超管姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置超管姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminName 超管姓名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取超管OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminOpenId 超管OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdminOpenId() const;

                    /**
                     * 设置超管OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminOpenId 超管OpenId
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取超管手机号，脱敏后返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminMobile 超管手机号，脱敏后返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdminMobile() const;

                    /**
                     * 设置超管手机号，脱敏后返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminMobile 超管手机号，脱敏后返回
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorizationStatus 企业认证状态字段。值如下：
<ul>
  <li>**"UNVERIFIED"**： 未认证的企业</li>
  <li>**"VERIFYINGLEGALPENDINGAUTHORIZATION"**： 认证中待法人授权的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEPENDING"**： 认证中授权书审核中的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEREJECT"**： 认证中授权书已驳回的企业</li>
  <li>**"VERIFYING"**： 认证中的企业</li>
  <li>**"VERIFIED"**： 已认证的企业</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authorizationStatus 企业认证状态字段。值如下：
<ul>
  <li>**"UNVERIFIED"**： 未认证的企业</li>
  <li>**"VERIFYINGLEGALPENDINGAUTHORIZATION"**： 认证中待法人授权的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEPENDING"**： 认证中授权书审核中的企业</li>
  <li>**"VERIFYINGAUTHORIZATIONFILEREJECT"**： 认证中授权书已驳回的企业</li>
  <li>**"VERIFYING"**： 认证中的企业</li>
  <li>**"VERIFIED"**： 已认证的企业</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorizationType 企业认证方式字段。值如下：
<ul>
  <li>**"AuthorizationInit"**： 暂未选择授权方式</li>
  <li>**"AuthorizationFile"**： 授权书</li>
  <li>**"AuthorizationLegalPerson"**： 法人授权超管</li>
  <li>**"AuthorizationLegalIdentity"**： 法人直接认证</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authorizationType 企业认证方式字段。值如下：
<ul>
  <li>**"AuthorizationInit"**： 暂未选择授权方式</li>
  <li>**"AuthorizationFile"**： 授权书</li>
  <li>**"AuthorizationLegalPerson"**： 法人授权超管</li>
  <li>**"AuthorizationLegalIdentity"**： 法人直接认证</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthorizationType(const std::string& _authorizationType);

                    /**
                     * 判断参数 AuthorizationType 是否已赋值
                     * @return AuthorizationType 是否已赋值
                     * 
                     */
                    bool AuthorizationTypeHasBeenSet() const;

                private:

                    /**
                     * 电子签企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 电子签企业OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * 企业名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 企业信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unifiedSocialCreditCode;
                    bool m_unifiedSocialCreditCodeHasBeenSet;

                    /**
                     * 法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * 法人OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_legalOpenId;
                    bool m_legalOpenIdHasBeenSet;

                    /**
                     * 超管姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * 超管OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_adminOpenId;
                    bool m_adminOpenIdHasBeenSet;

                    /**
                     * 超管手机号，脱敏后返回
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authorizationType;
                    bool m_authorizationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELORGANIZATIONINFO_H_
