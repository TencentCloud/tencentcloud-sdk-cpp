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
                     * 获取<p>电子签平台给企业分配的ID（在不同应用下同一个企业会分配通用的ID）</p>
                     * @return OrganizationId <p>电子签平台给企业分配的ID（在不同应用下同一个企业会分配通用的ID）</p>
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置<p>电子签平台给企业分配的ID（在不同应用下同一个企业会分配通用的ID）</p>
                     * @param _organizationId <p>电子签平台给企业分配的ID（在不同应用下同一个企业会分配通用的ID）</p>
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
                     * 获取<p>第三方平台子客企业的唯一标识</p>
                     * @return OrganizationOpenId <p>第三方平台子客企业的唯一标识</p>
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置<p>第三方平台子客企业的唯一标识</p>
                     * @param _organizationOpenId <p>第三方平台子客企业的唯一标识</p>
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
                     * 获取<p>第三方平台子客企业名称</p>
                     * @return OrganizationName <p>第三方平台子客企业名称</p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>第三方平台子客企业名称</p>
                     * @param _organizationName <p>第三方平台子客企业名称</p>
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
                     * 获取<p>企业的统一社会信用代码</p>
                     * @return UnifiedSocialCreditCode <p>企业的统一社会信用代码</p>
                     * 
                     */
                    std::string GetUnifiedSocialCreditCode() const;

                    /**
                     * 设置<p>企业的统一社会信用代码</p>
                     * @param _unifiedSocialCreditCode <p>企业的统一社会信用代码</p>
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
                     * 获取<p>企业法定代表人的姓名</p>
                     * @return LegalName <p>企业法定代表人的姓名</p>
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置<p>企业法定代表人的姓名</p>
                     * @param _legalName <p>企业法定代表人的姓名</p>
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
                     * 获取<p>企业法定代表人作为第三方平台子客企业员工的唯一标识</p>
                     * @return LegalOpenId <p>企业法定代表人作为第三方平台子客企业员工的唯一标识</p>
                     * 
                     */
                    std::string GetLegalOpenId() const;

                    /**
                     * 设置<p>企业法定代表人作为第三方平台子客企业员工的唯一标识</p>
                     * @param _legalOpenId <p>企业法定代表人作为第三方平台子客企业员工的唯一标识</p>
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
                     * 获取<p>企业超级管理员的姓名</p>
                     * @return AdminName <p>企业超级管理员的姓名</p>
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置<p>企业超级管理员的姓名</p>
                     * @param _adminName <p>企业超级管理员的姓名</p>
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
                     * 获取<p>企业超级管理员作为第三方平台子客企业员工的唯一标识</p>
                     * @return AdminOpenId <p>企业超级管理员作为第三方平台子客企业员工的唯一标识</p>
                     * 
                     */
                    std::string GetAdminOpenId() const;

                    /**
                     * 设置<p>企业超级管理员作为第三方平台子客企业员工的唯一标识</p>
                     * @param _adminOpenId <p>企业超级管理员作为第三方平台子客企业员工的唯一标识</p>
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
                     * 获取<p>企业超级管理员的手机号码<br><strong>注</strong>：<code>手机号码脱敏（隐藏部分用*替代）</code></p>
                     * @return AdminMobile <p>企业超级管理员的手机号码<br><strong>注</strong>：<code>手机号码脱敏（隐藏部分用*替代）</code></p>
                     * 
                     */
                    std::string GetAdminMobile() const;

                    /**
                     * 设置<p>企业超级管理员的手机号码<br><strong>注</strong>：<code>手机号码脱敏（隐藏部分用*替代）</code></p>
                     * @param _adminMobile <p>企业超级管理员的手机号码<br><strong>注</strong>：<code>手机号码脱敏（隐藏部分用*替代）</code></p>
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
                     * 获取<p>企业认证状态枚举值及说明如下：</p><table>  <thead>    <tr>      <th>枚举值</th>      <th>说明</th>    </tr>  </thead>  <tbody>    <tr>      <td><code>UNVERIFIED</code></td>      <td>企业未认证</td>    </tr>    <tr>      <td><code>VERIFYING</code></td>      <td>企业认证中，还未选择授权方式</td>    </tr>    <tr>      <td><code>VERIFYINGLEGALPENDINGAUTHORIZATION</code></td>      <td>企业认证中，待法人授权或法人认证</td>    </tr>    <tr>      <td><code>VERIFYINGAUTHORIZATIONFILEPENDING</code></td>      <td>企业认证中，已上传授权书，授权书待审核</td>    </tr>    <tr>      <td><code>VERIFYINGAUTHORIZATIONFILEREJECT</code></td>      <td>企业认证中，授权书审核被驳回</td>    </tr>    <tr>      <td><code>VERIFIED</code></td>      <td>企业已认证成功</td>    </tr>  </tbody></table><p>企业认证流程的典型流转路径如下：</p><pre><code>UNVERIFIED → VERIFYING（提交企业信息，选择授权方式）                ├─ 法人授权 → VERIFYINGLEGALPENDINGAUTHORIZATION → VERIFIED                ├─ 法人认证 → VERIFYINGLEGALPENDINGAUTHORIZATION → VERIFIED                └─ 授权书 → VERIFYINGAUTHORIZATIONFILEPENDING                              ├─ 审核通过 → VERIFIED                              └─ 审核驳回 → VERIFYINGAUTHORIZATIONFILEREJECT</code></pre><p>枚举值：</p><ul><li>UNVERIFIED： 企业未认证</li><li>VERIFYING： 企业认证中，还未选择授权方式</li><li>VERIFYINGLEGALPENDINGAUTHORIZATION： 企业认证中，待法人授权或法人认证</li><li>VERIFYINGAUTHORIZATIONFILEPENDING： 企业认证中，已上传授权书，授权书待审核</li><li>VERIFYINGAUTHORIZATIONFILEREJECT： 企业认证中，授权书审核被驳回</li><li>VERIFIED： 企业已认证成功</li></ul>
                     * @return AuthorizationStatus <p>企业认证状态枚举值及说明如下：</p><table>  <thead>    <tr>      <th>枚举值</th>      <th>说明</th>    </tr>  </thead>  <tbody>    <tr>      <td><code>UNVERIFIED</code></td>      <td>企业未认证</td>    </tr>    <tr>      <td><code>VERIFYING</code></td>      <td>企业认证中，还未选择授权方式</td>    </tr>    <tr>      <td><code>VERIFYINGLEGALPENDINGAUTHORIZATION</code></td>      <td>企业认证中，待法人授权或法人认证</td>    </tr>    <tr>      <td><code>VERIFYINGAUTHORIZATIONFILEPENDING</code></td>      <td>企业认证中，已上传授权书，授权书待审核</td>    </tr>    <tr>      <td><code>VERIFYINGAUTHORIZATIONFILEREJECT</code></td>      <td>企业认证中，授权书审核被驳回</td>    </tr>    <tr>      <td><code>VERIFIED</code></td>      <td>企业已认证成功</td>    </tr>  </tbody></table><p>企业认证流程的典型流转路径如下：</p><pre><code>UNVERIFIED → VERIFYING（提交企业信息，选择授权方式）                ├─ 法人授权 → VERIFYINGLEGALPENDINGAUTHORIZATION → VERIFIED                ├─ 法人认证 → VERIFYINGLEGALPENDINGAUTHORIZATION → VERIFIED                └─ 授权书 → VERIFYINGAUTHORIZATIONFILEPENDING                              ├─ 审核通过 → VERIFIED                              └─ 审核驳回 → VERIFYINGAUTHORIZATIONFILEREJECT</code></pre><p>枚举值：</p><ul><li>UNVERIFIED： 企业未认证</li><li>VERIFYING： 企业认证中，还未选择授权方式</li><li>VERIFYINGLEGALPENDINGAUTHORIZATION： 企业认证中，待法人授权或法人认证</li><li>VERIFYINGAUTHORIZATIONFILEPENDING： 企业认证中，已上传授权书，授权书待审核</li><li>VERIFYINGAUTHORIZATIONFILEREJECT： 企业认证中，授权书审核被驳回</li><li>VERIFIED： 企业已认证成功</li></ul>
                     * 
                     */
                    std::string GetAuthorizationStatus() const;

                    /**
                     * 设置<p>企业认证状态枚举值及说明如下：</p><table>  <thead>    <tr>      <th>枚举值</th>      <th>说明</th>    </tr>  </thead>  <tbody>    <tr>      <td><code>UNVERIFIED</code></td>      <td>企业未认证</td>    </tr>    <tr>      <td><code>VERIFYING</code></td>      <td>企业认证中，还未选择授权方式</td>    </tr>    <tr>      <td><code>VERIFYINGLEGALPENDINGAUTHORIZATION</code></td>      <td>企业认证中，待法人授权或法人认证</td>    </tr>    <tr>      <td><code>VERIFYINGAUTHORIZATIONFILEPENDING</code></td>      <td>企业认证中，已上传授权书，授权书待审核</td>    </tr>    <tr>      <td><code>VERIFYINGAUTHORIZATIONFILEREJECT</code></td>      <td>企业认证中，授权书审核被驳回</td>    </tr>    <tr>      <td><code>VERIFIED</code></td>      <td>企业已认证成功</td>    </tr>  </tbody></table><p>企业认证流程的典型流转路径如下：</p><pre><code>UNVERIFIED → VERIFYING（提交企业信息，选择授权方式）                ├─ 法人授权 → VERIFYINGLEGALPENDINGAUTHORIZATION → VERIFIED                ├─ 法人认证 → VERIFYINGLEGALPENDINGAUTHORIZATION → VERIFIED                └─ 授权书 → VERIFYINGAUTHORIZATIONFILEPENDING                              ├─ 审核通过 → VERIFIED                              └─ 审核驳回 → VERIFYINGAUTHORIZATIONFILEREJECT</code></pre><p>枚举值：</p><ul><li>UNVERIFIED： 企业未认证</li><li>VERIFYING： 企业认证中，还未选择授权方式</li><li>VERIFYINGLEGALPENDINGAUTHORIZATION： 企业认证中，待法人授权或法人认证</li><li>VERIFYINGAUTHORIZATIONFILEPENDING： 企业认证中，已上传授权书，授权书待审核</li><li>VERIFYINGAUTHORIZATIONFILEREJECT： 企业认证中，授权书审核被驳回</li><li>VERIFIED： 企业已认证成功</li></ul>
                     * @param _authorizationStatus <p>企业认证状态枚举值及说明如下：</p><table>  <thead>    <tr>      <th>枚举值</th>      <th>说明</th>    </tr>  </thead>  <tbody>    <tr>      <td><code>UNVERIFIED</code></td>      <td>企业未认证</td>    </tr>    <tr>      <td><code>VERIFYING</code></td>      <td>企业认证中，还未选择授权方式</td>    </tr>    <tr>      <td><code>VERIFYINGLEGALPENDINGAUTHORIZATION</code></td>      <td>企业认证中，待法人授权或法人认证</td>    </tr>    <tr>      <td><code>VERIFYINGAUTHORIZATIONFILEPENDING</code></td>      <td>企业认证中，已上传授权书，授权书待审核</td>    </tr>    <tr>      <td><code>VERIFYINGAUTHORIZATIONFILEREJECT</code></td>      <td>企业认证中，授权书审核被驳回</td>    </tr>    <tr>      <td><code>VERIFIED</code></td>      <td>企业已认证成功</td>    </tr>  </tbody></table><p>企业认证流程的典型流转路径如下：</p><pre><code>UNVERIFIED → VERIFYING（提交企业信息，选择授权方式）                ├─ 法人授权 → VERIFYINGLEGALPENDINGAUTHORIZATION → VERIFIED                ├─ 法人认证 → VERIFYINGLEGALPENDINGAUTHORIZATION → VERIFIED                └─ 授权书 → VERIFYINGAUTHORIZATIONFILEPENDING                              ├─ 审核通过 → VERIFIED                              └─ 审核驳回 → VERIFYINGAUTHORIZATIONFILEREJECT</code></pre><p>枚举值：</p><ul><li>UNVERIFIED： 企业未认证</li><li>VERIFYING： 企业认证中，还未选择授权方式</li><li>VERIFYINGLEGALPENDINGAUTHORIZATION： 企业认证中，待法人授权或法人认证</li><li>VERIFYINGAUTHORIZATIONFILEPENDING： 企业认证中，已上传授权书，授权书待审核</li><li>VERIFYINGAUTHORIZATIONFILEREJECT： 企业认证中，授权书审核被驳回</li><li>VERIFIED： 企业已认证成功</li></ul>
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
                     * 获取<p>企业认证方式字段。值如下：</p><ul>  <li>**"AuthorizationInit"**： 暂未选择授权方式</li>  <li>**"AuthorizationFile"**： 授权书</li>  <li>**"AuthorizationLegalPerson"**： 法人授权超管</li>  <li>**"AuthorizationLegalIdentity"**： 法人直接认证</li></ul>
                     * @return AuthorizationType <p>企业认证方式字段。值如下：</p><ul>  <li>**"AuthorizationInit"**： 暂未选择授权方式</li>  <li>**"AuthorizationFile"**： 授权书</li>  <li>**"AuthorizationLegalPerson"**： 法人授权超管</li>  <li>**"AuthorizationLegalIdentity"**： 法人直接认证</li></ul>
                     * 
                     */
                    std::string GetAuthorizationType() const;

                    /**
                     * 设置<p>企业认证方式字段。值如下：</p><ul>  <li>**"AuthorizationInit"**： 暂未选择授权方式</li>  <li>**"AuthorizationFile"**： 授权书</li>  <li>**"AuthorizationLegalPerson"**： 法人授权超管</li>  <li>**"AuthorizationLegalIdentity"**： 法人直接认证</li></ul>
                     * @param _authorizationType <p>企业认证方式字段。值如下：</p><ul>  <li>**"AuthorizationInit"**： 暂未选择授权方式</li>  <li>**"AuthorizationFile"**： 授权书</li>  <li>**"AuthorizationLegalPerson"**： 法人授权超管</li>  <li>**"AuthorizationLegalIdentity"**： 法人直接认证</li></ul>
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
                     * 获取<p>子企业激活状态。值如下：</p><ul>  <li>**0**： 未激活</li>  <li>**1**： 已激活</li></ul>
                     * @return ActiveStatus <p>子企业激活状态。值如下：</p><ul>  <li>**0**： 未激活</li>  <li>**1**： 已激活</li></ul>
                     * 
                     */
                    int64_t GetActiveStatus() const;

                    /**
                     * 设置<p>子企业激活状态。值如下：</p><ul>  <li>**0**： 未激活</li>  <li>**1**： 已激活</li></ul>
                     * @param _activeStatus <p>子企业激活状态。值如下：</p><ul>  <li>**0**： 未激活</li>  <li>**1**： 已激活</li></ul>
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
                     * 获取<p>账号到期时间，时间戳</p>
                     * @return LicenseExpireTime <p>账号到期时间，时间戳</p>
                     * 
                     */
                    int64_t GetLicenseExpireTime() const;

                    /**
                     * 设置<p>账号到期时间，时间戳</p>
                     * @param _licenseExpireTime <p>账号到期时间，时间戳</p>
                     * 
                     */
                    void SetLicenseExpireTime(const int64_t& _licenseExpireTime);

                    /**
                     * 判断参数 LicenseExpireTime 是否已赋值
                     * @return LicenseExpireTime 是否已赋值
                     * 
                     */
                    bool LicenseExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否已提交企业认证信息</p><p>默认值：false</p><p>此参数表示客户是否已提交企业信息。如图所示，在点击提交按钮之前，该字段为 <code>false</code>；点击提交按钮之后，该字段变为 <code>true</code>。</p><img src="https://qcloudimg.tencent-cloud.cn/raw/548d838430b60e797dbfba80cb4a3ef7.png" alt="企业信息提交状态示意图"><p><strong>注意：</strong>该字段并非在变为 <code>true</code> 后就不再变化。任何导致当前认证记录失效的操作都会将其重置为 <code>false</code>，包括但不限于：重新提交企业信息、审核被拒绝后重新上传企业信息等操作。</p>
                     * @return HasSubmittedAuthInfo <p>是否已提交企业认证信息</p><p>默认值：false</p><p>此参数表示客户是否已提交企业信息。如图所示，在点击提交按钮之前，该字段为 <code>false</code>；点击提交按钮之后，该字段变为 <code>true</code>。</p><img src="https://qcloudimg.tencent-cloud.cn/raw/548d838430b60e797dbfba80cb4a3ef7.png" alt="企业信息提交状态示意图"><p><strong>注意：</strong>该字段并非在变为 <code>true</code> 后就不再变化。任何导致当前认证记录失效的操作都会将其重置为 <code>false</code>，包括但不限于：重新提交企业信息、审核被拒绝后重新上传企业信息等操作。</p>
                     * 
                     */
                    bool GetHasSubmittedAuthInfo() const;

                    /**
                     * 设置<p>是否已提交企业认证信息</p><p>默认值：false</p><p>此参数表示客户是否已提交企业信息。如图所示，在点击提交按钮之前，该字段为 <code>false</code>；点击提交按钮之后，该字段变为 <code>true</code>。</p><img src="https://qcloudimg.tencent-cloud.cn/raw/548d838430b60e797dbfba80cb4a3ef7.png" alt="企业信息提交状态示意图"><p><strong>注意：</strong>该字段并非在变为 <code>true</code> 后就不再变化。任何导致当前认证记录失效的操作都会将其重置为 <code>false</code>，包括但不限于：重新提交企业信息、审核被拒绝后重新上传企业信息等操作。</p>
                     * @param _hasSubmittedAuthInfo <p>是否已提交企业认证信息</p><p>默认值：false</p><p>此参数表示客户是否已提交企业信息。如图所示，在点击提交按钮之前，该字段为 <code>false</code>；点击提交按钮之后，该字段变为 <code>true</code>。</p><img src="https://qcloudimg.tencent-cloud.cn/raw/548d838430b60e797dbfba80cb4a3ef7.png" alt="企业信息提交状态示意图"><p><strong>注意：</strong>该字段并非在变为 <code>true</code> 后就不再变化。任何导致当前认证记录失效的操作都会将其重置为 <code>false</code>，包括但不限于：重新提交企业信息、审核被拒绝后重新上传企业信息等操作。</p>
                     * 
                     */
                    void SetHasSubmittedAuthInfo(const bool& _hasSubmittedAuthInfo);

                    /**
                     * 判断参数 HasSubmittedAuthInfo 是否已赋值
                     * @return HasSubmittedAuthInfo 是否已赋值
                     * 
                     */
                    bool HasSubmittedAuthInfoHasBeenSet() const;

                private:

                    /**
                     * <p>电子签平台给企业分配的ID（在不同应用下同一个企业会分配通用的ID）</p>
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * <p>第三方平台子客企业的唯一标识</p>
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * <p>第三方平台子客企业名称</p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>企业的统一社会信用代码</p>
                     */
                    std::string m_unifiedSocialCreditCode;
                    bool m_unifiedSocialCreditCodeHasBeenSet;

                    /**
                     * <p>企业法定代表人的姓名</p>
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * <p>企业法定代表人作为第三方平台子客企业员工的唯一标识</p>
                     */
                    std::string m_legalOpenId;
                    bool m_legalOpenIdHasBeenSet;

                    /**
                     * <p>企业超级管理员的姓名</p>
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * <p>企业超级管理员作为第三方平台子客企业员工的唯一标识</p>
                     */
                    std::string m_adminOpenId;
                    bool m_adminOpenIdHasBeenSet;

                    /**
                     * <p>企业超级管理员的手机号码<br><strong>注</strong>：<code>手机号码脱敏（隐藏部分用*替代）</code></p>
                     */
                    std::string m_adminMobile;
                    bool m_adminMobileHasBeenSet;

                    /**
                     * <p>企业认证状态枚举值及说明如下：</p><table>  <thead>    <tr>      <th>枚举值</th>      <th>说明</th>    </tr>  </thead>  <tbody>    <tr>      <td><code>UNVERIFIED</code></td>      <td>企业未认证</td>    </tr>    <tr>      <td><code>VERIFYING</code></td>      <td>企业认证中，还未选择授权方式</td>    </tr>    <tr>      <td><code>VERIFYINGLEGALPENDINGAUTHORIZATION</code></td>      <td>企业认证中，待法人授权或法人认证</td>    </tr>    <tr>      <td><code>VERIFYINGAUTHORIZATIONFILEPENDING</code></td>      <td>企业认证中，已上传授权书，授权书待审核</td>    </tr>    <tr>      <td><code>VERIFYINGAUTHORIZATIONFILEREJECT</code></td>      <td>企业认证中，授权书审核被驳回</td>    </tr>    <tr>      <td><code>VERIFIED</code></td>      <td>企业已认证成功</td>    </tr>  </tbody></table><p>企业认证流程的典型流转路径如下：</p><pre><code>UNVERIFIED → VERIFYING（提交企业信息，选择授权方式）                ├─ 法人授权 → VERIFYINGLEGALPENDINGAUTHORIZATION → VERIFIED                ├─ 法人认证 → VERIFYINGLEGALPENDINGAUTHORIZATION → VERIFIED                └─ 授权书 → VERIFYINGAUTHORIZATIONFILEPENDING                              ├─ 审核通过 → VERIFIED                              └─ 审核驳回 → VERIFYINGAUTHORIZATIONFILEREJECT</code></pre><p>枚举值：</p><ul><li>UNVERIFIED： 企业未认证</li><li>VERIFYING： 企业认证中，还未选择授权方式</li><li>VERIFYINGLEGALPENDINGAUTHORIZATION： 企业认证中，待法人授权或法人认证</li><li>VERIFYINGAUTHORIZATIONFILEPENDING： 企业认证中，已上传授权书，授权书待审核</li><li>VERIFYINGAUTHORIZATIONFILEREJECT： 企业认证中，授权书审核被驳回</li><li>VERIFIED： 企业已认证成功</li></ul>
                     */
                    std::string m_authorizationStatus;
                    bool m_authorizationStatusHasBeenSet;

                    /**
                     * <p>企业认证方式字段。值如下：</p><ul>  <li>**"AuthorizationInit"**： 暂未选择授权方式</li>  <li>**"AuthorizationFile"**： 授权书</li>  <li>**"AuthorizationLegalPerson"**： 法人授权超管</li>  <li>**"AuthorizationLegalIdentity"**： 法人直接认证</li></ul>
                     */
                    std::string m_authorizationType;
                    bool m_authorizationTypeHasBeenSet;

                    /**
                     * <p>子企业激活状态。值如下：</p><ul>  <li>**0**： 未激活</li>  <li>**1**： 已激活</li></ul>
                     */
                    int64_t m_activeStatus;
                    bool m_activeStatusHasBeenSet;

                    /**
                     * <p>账号到期时间，时间戳</p>
                     */
                    int64_t m_licenseExpireTime;
                    bool m_licenseExpireTimeHasBeenSet;

                    /**
                     * <p>是否已提交企业认证信息</p><p>默认值：false</p><p>此参数表示客户是否已提交企业信息。如图所示，在点击提交按钮之前，该字段为 <code>false</code>；点击提交按钮之后，该字段变为 <code>true</code>。</p><img src="https://qcloudimg.tencent-cloud.cn/raw/548d838430b60e797dbfba80cb4a3ef7.png" alt="企业信息提交状态示意图"><p><strong>注意：</strong>该字段并非在变为 <code>true</code> 后就不再变化。任何导致当前认证记录失效的操作都会将其重置为 <code>false</code>，包括但不限于：重新提交企业信息、审核被拒绝后重新上传企业信息等操作。</p>
                     */
                    bool m_hasSubmittedAuthInfo;
                    bool m_hasSubmittedAuthInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELORGANIZATIONINFO_H_
