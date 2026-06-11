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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_COMMONFLOWAPPROVER_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_COMMONFLOWAPPROVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/CommonApproverOption.h>
#include <tencentcloud/essbasic/v20210526/model/Component.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 通用签署人信息
                */
                class CommonFlowApprover : public AbstractModel
                {
                public:
                    CommonFlowApprover();
                    ~CommonFlowApprover() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>指定签署人非第三方平台子客企业下员工还是SaaS平台企业，在ApproverType为ORGANIZATION时指定。</p><ul><li>false: 默认值，第三方平台子客企业下员工</li><li>true: SaaS平台企业下的员工</li></ul>
                     * @return NotChannelOrganization <p>指定签署人非第三方平台子客企业下员工还是SaaS平台企业，在ApproverType为ORGANIZATION时指定。</p><ul><li>false: 默认值，第三方平台子客企业下员工</li><li>true: SaaS平台企业下的员工</li></ul>
                     * 
                     */
                    bool GetNotChannelOrganization() const;

                    /**
                     * 设置<p>指定签署人非第三方平台子客企业下员工还是SaaS平台企业，在ApproverType为ORGANIZATION时指定。</p><ul><li>false: 默认值，第三方平台子客企业下员工</li><li>true: SaaS平台企业下的员工</li></ul>
                     * @param _notChannelOrganization <p>指定签署人非第三方平台子客企业下员工还是SaaS平台企业，在ApproverType为ORGANIZATION时指定。</p><ul><li>false: 默认值，第三方平台子客企业下员工</li><li>true: SaaS平台企业下的员工</li></ul>
                     * 
                     */
                    void SetNotChannelOrganization(const bool& _notChannelOrganization);

                    /**
                     * 判断参数 NotChannelOrganization 是否已赋值
                     * @return NotChannelOrganization 是否已赋值
                     * 
                     */
                    bool NotChannelOrganizationHasBeenSet() const;

                    /**
                     * 获取<p>在指定签署方时，可选择企业B端或个人C端等不同的参与者类型，可选类型如下:</p><p> <strong>0</strong> :企业/企业员工（企业签署方或模板发起时的企业静默签）<br> <strong>1</strong> :个人/自然人<br><strong>3</strong> :企业/企业员工自动签（他方企业自动签署或文件发起时的本方企业自动签）</p><p>注：类型为3（企业/企业员工自动签）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。<br>使用自动签时，请确保企业已经开通自动签功能，开通方式：控制台 -&gt; 企业设置 -&gt; 扩展服务 -&gt; 企业自动签。<br>使用文件发起自动签时使用前请联系对接的客户经理沟通。</p>
                     * @return ApproverType <p>在指定签署方时，可选择企业B端或个人C端等不同的参与者类型，可选类型如下:</p><p> <strong>0</strong> :企业/企业员工（企业签署方或模板发起时的企业静默签）<br> <strong>1</strong> :个人/自然人<br><strong>3</strong> :企业/企业员工自动签（他方企业自动签署或文件发起时的本方企业自动签）</p><p>注：类型为3（企业/企业员工自动签）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。<br>使用自动签时，请确保企业已经开通自动签功能，开通方式：控制台 -&gt; 企业设置 -&gt; 扩展服务 -&gt; 企业自动签。<br>使用文件发起自动签时使用前请联系对接的客户经理沟通。</p>
                     * 
                     */
                    int64_t GetApproverType() const;

                    /**
                     * 设置<p>在指定签署方时，可选择企业B端或个人C端等不同的参与者类型，可选类型如下:</p><p> <strong>0</strong> :企业/企业员工（企业签署方或模板发起时的企业静默签）<br> <strong>1</strong> :个人/自然人<br><strong>3</strong> :企业/企业员工自动签（他方企业自动签署或文件发起时的本方企业自动签）</p><p>注：类型为3（企业/企业员工自动签）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。<br>使用自动签时，请确保企业已经开通自动签功能，开通方式：控制台 -&gt; 企业设置 -&gt; 扩展服务 -&gt; 企业自动签。<br>使用文件发起自动签时使用前请联系对接的客户经理沟通。</p>
                     * @param _approverType <p>在指定签署方时，可选择企业B端或个人C端等不同的参与者类型，可选类型如下:</p><p> <strong>0</strong> :企业/企业员工（企业签署方或模板发起时的企业静默签）<br> <strong>1</strong> :个人/自然人<br><strong>3</strong> :企业/企业员工自动签（他方企业自动签署或文件发起时的本方企业自动签）</p><p>注：类型为3（企业/企业员工自动签）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。<br>使用自动签时，请确保企业已经开通自动签功能，开通方式：控制台 -&gt; 企业设置 -&gt; 扩展服务 -&gt; 企业自动签。<br>使用文件发起自动签时使用前请联系对接的客户经理沟通。</p>
                     * 
                     */
                    void SetApproverType(const int64_t& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     * 
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取<p>电子签平台给企业生成的企业id</p>
                     * @return OrganizationId <p>电子签平台给企业生成的企业id</p>
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置<p>电子签平台给企业生成的企业id</p>
                     * @param _organizationId <p>电子签平台给企业生成的企业id</p>
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
                     * 获取<p>企业OpenId，第三方应用集成非静默签子客企业签署人发起合同必传</p>
                     * @return OrganizationOpenId <p>企业OpenId，第三方应用集成非静默签子客企业签署人发起合同必传</p>
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置<p>企业OpenId，第三方应用集成非静默签子客企业签署人发起合同必传</p>
                     * @param _organizationOpenId <p>企业OpenId，第三方应用集成非静默签子客企业签署人发起合同必传</p>
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
                     * 获取<p>企业名称，第三方应用集成非静默签子客企业签署人必传，saas企业签署人必传</p>
                     * @return OrganizationName <p>企业名称，第三方应用集成非静默签子客企业签署人必传，saas企业签署人必传</p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>企业名称，第三方应用集成非静默签子客企业签署人必传，saas企业签署人必传</p>
                     * @param _organizationName <p>企业名称，第三方应用集成非静默签子客企业签署人必传，saas企业签署人必传</p>
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
                     * 获取<p>电子签平台给企业员工或者自热人生成的用户id</p>
                     * @return UserId <p>电子签平台给企业员工或者自热人生成的用户id</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>电子签平台给企业员工或者自热人生成的用户id</p>
                     * @param _userId <p>电子签平台给企业员工或者自热人生成的用户id</p>
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
                     * 获取<p>第三方平台子客企业员工的唯一标识</p>
                     * @return OpenId <p>第三方平台子客企业员工的唯一标识</p>
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置<p>第三方平台子客企业员工的唯一标识</p>
                     * @param _openId <p>第三方平台子客企业员工的唯一标识</p>
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
                     * 获取<p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p>
                     * @return ApproverName <p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p>
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置<p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p>
                     * @param _approverName <p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p>
                     * 
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     * 
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取<p>签署人手机号，saas企业签署人，个人签署人必传</p>
                     * @return ApproverMobile <p>签署人手机号，saas企业签署人，个人签署人必传</p>
                     * 
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置<p>签署人手机号，saas企业签署人，个人签署人必传</p>
                     * @param _approverMobile <p>签署人手机号，saas企业签署人，个人签署人必传</p>
                     * 
                     */
                    void SetApproverMobile(const std::string& _approverMobile);

                    /**
                     * 判断参数 ApproverMobile 是否已赋值
                     * @return ApproverMobile 是否已赋值
                     * 
                     */
                    bool ApproverMobileHasBeenSet() const;

                    /**
                     * 获取<p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * @return ApproverIdCardType <p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * 
                     */
                    std::string GetApproverIdCardType() const;

                    /**
                     * 设置<p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * @param _approverIdCardType <p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * 
                     */
                    void SetApproverIdCardType(const std::string& _approverIdCardType);

                    /**
                     * 判断参数 ApproverIdCardType 是否已赋值
                     * @return ApproverIdCardType 是否已赋值
                     * 
                     */
                    bool ApproverIdCardTypeHasBeenSet() const;

                    /**
                     * 获取<p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @return ApproverIdCardNumber <p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * 
                     */
                    std::string GetApproverIdCardNumber() const;

                    /**
                     * 设置<p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @param _approverIdCardNumber <p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * 
                     */
                    void SetApproverIdCardNumber(const std::string& _approverIdCardNumber);

                    /**
                     * 判断参数 ApproverIdCardNumber 是否已赋值
                     * @return ApproverIdCardNumber 是否已赋值
                     * 
                     */
                    bool ApproverIdCardNumberHasBeenSet() const;

                    /**
                     * 获取<p>签署人Id，使用模板发起是，对应模板配置中的签署人RecipientId<br>注意：模板发起时该字段必填</p>
                     * @return RecipientId <p>签署人Id，使用模板发起是，对应模板配置中的签署人RecipientId<br>注意：模板发起时该字段必填</p>
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置<p>签署人Id，使用模板发起是，对应模板配置中的签署人RecipientId<br>注意：模板发起时该字段必填</p>
                     * @param _recipientId <p>签署人Id，使用模板发起是，对应模板配置中的签署人RecipientId<br>注意：模板发起时该字段必填</p>
                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取<p>签署前置条件：阅读时长限制，不传默认10s,最大300s，最小3s</p>
                     * @return PreReadTime <p>签署前置条件：阅读时长限制，不传默认10s,最大300s，最小3s</p>
                     * 
                     */
                    int64_t GetPreReadTime() const;

                    /**
                     * 设置<p>签署前置条件：阅读时长限制，不传默认10s,最大300s，最小3s</p>
                     * @param _preReadTime <p>签署前置条件：阅读时长限制，不传默认10s,最大300s，最小3s</p>
                     * 
                     */
                    void SetPreReadTime(const int64_t& _preReadTime);

                    /**
                     * 判断参数 PreReadTime 是否已赋值
                     * @return PreReadTime 是否已赋值
                     * 
                     */
                    bool PreReadTimeHasBeenSet() const;

                    /**
                     * 获取<p>签署前置条件：阅读全文限制</p>
                     * @return IsFullText <p>签署前置条件：阅读全文限制</p>
                     * 
                     */
                    bool GetIsFullText() const;

                    /**
                     * 设置<p>签署前置条件：阅读全文限制</p>
                     * @param _isFullText <p>签署前置条件：阅读全文限制</p>
                     * 
                     */
                    void SetIsFullText(const bool& _isFullText);

                    /**
                     * 判断参数 IsFullText 是否已赋值
                     * @return IsFullText 是否已赋值
                     * 
                     */
                    bool IsFullTextHasBeenSet() const;

                    /**
                     * 获取<p>通知签署方经办人的方式, 有以下途径:</p><ul><li> **SMS** :(默认)短信</li><li> **NONE** : 不通知</li></ul><p>注: <code>签署方为第三方子客企业时会被置为NONE,   不会发短信通知</code></p>
                     * @return NotifyType <p>通知签署方经办人的方式, 有以下途径:</p><ul><li> **SMS** :(默认)短信</li><li> **NONE** : 不通知</li></ul><p>注: <code>签署方为第三方子客企业时会被置为NONE,   不会发短信通知</code></p>
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置<p>通知签署方经办人的方式, 有以下途径:</p><ul><li> **SMS** :(默认)短信</li><li> **NONE** : 不通知</li></ul><p>注: <code>签署方为第三方子客企业时会被置为NONE,   不会发短信通知</code></p>
                     * @param _notifyType <p>通知签署方经办人的方式, 有以下途径:</p><ul><li> **SMS** :(默认)短信</li><li> **NONE** : 不通知</li></ul><p>注: <code>签署方为第三方子客企业时会被置为NONE,   不会发短信通知</code></p>
                     * 
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     * 
                     */
                    bool NotifyTypeHasBeenSet() const;

                    /**
                     * 获取<p>签署人配置，用于控制签署人相关属性</p>
                     * @return ApproverOption <p>签署人配置，用于控制签署人相关属性</p>
                     * 
                     */
                    CommonApproverOption GetApproverOption() const;

                    /**
                     * 设置<p>签署人配置，用于控制签署人相关属性</p>
                     * @param _approverOption <p>签署人配置，用于控制签署人相关属性</p>
                     * 
                     */
                    void SetApproverOption(const CommonApproverOption& _approverOption);

                    /**
                     * 判断参数 ApproverOption 是否已赋值
                     * @return ApproverOption 是否已赋值
                     * 
                     */
                    bool ApproverOptionHasBeenSet() const;

                    /**
                     * 获取<p>使用PDF文件直接发起合同时，签署人指定的签署控件；<br>使用模板发起合同时，指定本企业印章签署控件的印章ID: <br>通过ComponentId或ComponenetName指定签署控件，ComponentValue为印章ID。</p>
                     * @return SignComponents <p>使用PDF文件直接发起合同时，签署人指定的签署控件；<br>使用模板发起合同时，指定本企业印章签署控件的印章ID: <br>通过ComponentId或ComponenetName指定签署控件，ComponentValue为印章ID。</p>
                     * 
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置<p>使用PDF文件直接发起合同时，签署人指定的签署控件；<br>使用模板发起合同时，指定本企业印章签署控件的印章ID: <br>通过ComponentId或ComponenetName指定签署控件，ComponentValue为印章ID。</p>
                     * @param _signComponents <p>使用PDF文件直接发起合同时，签署人指定的签署控件；<br>使用模板发起合同时，指定本企业印章签署控件的印章ID: <br>通过ComponentId或ComponenetName指定签署控件，ComponentValue为印章ID。</p>
                     * 
                     */
                    void SetSignComponents(const std::vector<Component>& _signComponents);

                    /**
                     * 判断参数 SignComponents 是否已赋值
                     * @return SignComponents 是否已赋值
                     * 
                     */
                    bool SignComponentsHasBeenSet() const;

                    /**
                     * 获取<p>指定个人签署方查看合同的校验方式,可以传值如下:</p><ul><li>  **1**   : （默认）人脸识别,人脸识别后才能合同内容</li><li>  **2**  : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）</li></ul>注: <ul><li>如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式</li><li>此字段可传多个校验方式</li></ul>
                     * @return ApproverVerifyTypes <p>指定个人签署方查看合同的校验方式,可以传值如下:</p><ul><li>  **1**   : （默认）人脸识别,人脸识别后才能合同内容</li><li>  **2**  : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）</li></ul>注: <ul><li>如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式</li><li>此字段可传多个校验方式</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetApproverVerifyTypes() const;

                    /**
                     * 设置<p>指定个人签署方查看合同的校验方式,可以传值如下:</p><ul><li>  **1**   : （默认）人脸识别,人脸识别后才能合同内容</li><li>  **2**  : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）</li></ul>注: <ul><li>如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式</li><li>此字段可传多个校验方式</li></ul>
                     * @param _approverVerifyTypes <p>指定个人签署方查看合同的校验方式,可以传值如下:</p><ul><li>  **1**   : （默认）人脸识别,人脸识别后才能合同内容</li><li>  **2**  : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）</li></ul>注: <ul><li>如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式</li><li>此字段可传多个校验方式</li></ul>
                     * 
                     */
                    void SetApproverVerifyTypes(const std::vector<int64_t>& _approverVerifyTypes);

                    /**
                     * 判断参数 ApproverVerifyTypes 是否已赋值
                     * @return ApproverVerifyTypes 是否已赋值
                     * 
                     */
                    bool ApproverVerifyTypesHasBeenSet() const;

                    /**
                     * 获取<p>签署人签署合同时的认证方式</p><ul><li> **1** :人脸认证</li><li> **2** :签署密码</li><li> **3** :运营商三要素</li><li> **5** :设备指纹识别</li><li> **6** :设备面容识别</li></ul><p>默认为1(人脸认证 ),2(签署密码),3(运营商三要素),5(设备指纹识别),6(设备面容识别)</p><p>注: </p><ol><li>用<font color="red">模板创建合同场景</font>, 签署人的认证方式需要在配置模板的时候指定, <font color="red">在创建合同重新指定无效</font></li><li>运营商三要素认证方式对手机号运营商及前缀有限制,可以参考<a href="https://qian.tencent.com/developers/partner/mobile_support">运营商支持列表类</a>得到具体的支持说明</li><li>校验方式不允许只包含<font color="red">设备指纹识别</font>和<font color="red">设备面容识别</font>，至少需要再增加一种其他校验方式。</li><li><font color="red">设备指纹识别</font>和<font color="red">设备面容识别</font>只支持小程序使用，其他端暂不支持。</li></ol>
                     * @return ApproverSignTypes <p>签署人签署合同时的认证方式</p><ul><li> **1** :人脸认证</li><li> **2** :签署密码</li><li> **3** :运营商三要素</li><li> **5** :设备指纹识别</li><li> **6** :设备面容识别</li></ul><p>默认为1(人脸认证 ),2(签署密码),3(运营商三要素),5(设备指纹识别),6(设备面容识别)</p><p>注: </p><ol><li>用<font color="red">模板创建合同场景</font>, 签署人的认证方式需要在配置模板的时候指定, <font color="red">在创建合同重新指定无效</font></li><li>运营商三要素认证方式对手机号运营商及前缀有限制,可以参考<a href="https://qian.tencent.com/developers/partner/mobile_support">运营商支持列表类</a>得到具体的支持说明</li><li>校验方式不允许只包含<font color="red">设备指纹识别</font>和<font color="red">设备面容识别</font>，至少需要再增加一种其他校验方式。</li><li><font color="red">设备指纹识别</font>和<font color="red">设备面容识别</font>只支持小程序使用，其他端暂不支持。</li></ol>
                     * 
                     */
                    std::vector<int64_t> GetApproverSignTypes() const;

                    /**
                     * 设置<p>签署人签署合同时的认证方式</p><ul><li> **1** :人脸认证</li><li> **2** :签署密码</li><li> **3** :运营商三要素</li><li> **5** :设备指纹识别</li><li> **6** :设备面容识别</li></ul><p>默认为1(人脸认证 ),2(签署密码),3(运营商三要素),5(设备指纹识别),6(设备面容识别)</p><p>注: </p><ol><li>用<font color="red">模板创建合同场景</font>, 签署人的认证方式需要在配置模板的时候指定, <font color="red">在创建合同重新指定无效</font></li><li>运营商三要素认证方式对手机号运营商及前缀有限制,可以参考<a href="https://qian.tencent.com/developers/partner/mobile_support">运营商支持列表类</a>得到具体的支持说明</li><li>校验方式不允许只包含<font color="red">设备指纹识别</font>和<font color="red">设备面容识别</font>，至少需要再增加一种其他校验方式。</li><li><font color="red">设备指纹识别</font>和<font color="red">设备面容识别</font>只支持小程序使用，其他端暂不支持。</li></ol>
                     * @param _approverSignTypes <p>签署人签署合同时的认证方式</p><ul><li> **1** :人脸认证</li><li> **2** :签署密码</li><li> **3** :运营商三要素</li><li> **5** :设备指纹识别</li><li> **6** :设备面容识别</li></ul><p>默认为1(人脸认证 ),2(签署密码),3(运营商三要素),5(设备指纹识别),6(设备面容识别)</p><p>注: </p><ol><li>用<font color="red">模板创建合同场景</font>, 签署人的认证方式需要在配置模板的时候指定, <font color="red">在创建合同重新指定无效</font></li><li>运营商三要素认证方式对手机号运营商及前缀有限制,可以参考<a href="https://qian.tencent.com/developers/partner/mobile_support">运营商支持列表类</a>得到具体的支持说明</li><li>校验方式不允许只包含<font color="red">设备指纹识别</font>和<font color="red">设备面容识别</font>，至少需要再增加一种其他校验方式。</li><li><font color="red">设备指纹识别</font>和<font color="red">设备面容识别</font>只支持小程序使用，其他端暂不支持。</li></ol>
                     * 
                     */
                    void SetApproverSignTypes(const std::vector<int64_t>& _approverSignTypes);

                    /**
                     * 判断参数 ApproverSignTypes 是否已赋值
                     * @return ApproverSignTypes 是否已赋值
                     * 
                     */
                    bool ApproverSignTypesHasBeenSet() const;

                    /**
                     * 获取<p>签署方经办人控件类型是个人印章签署控件（SIGN_SIGNATURE） 时，可选的签名方式。</p><p>枚举值：</p><ul><li>HANDWRITE： 手写签名</li><li>ESIGN： 个人印章类型</li><li>OCR_ESIGN： AI智能识别手写签名</li><li>SYSTEM_ESIGN： 系统签名</li></ul>
                     * @return ComponentLimitType <p>签署方经办人控件类型是个人印章签署控件（SIGN_SIGNATURE） 时，可选的签名方式。</p><p>枚举值：</p><ul><li>HANDWRITE： 手写签名</li><li>ESIGN： 个人印章类型</li><li>OCR_ESIGN： AI智能识别手写签名</li><li>SYSTEM_ESIGN： 系统签名</li></ul>
                     * 
                     */
                    std::vector<std::string> GetComponentLimitType() const;

                    /**
                     * 设置<p>签署方经办人控件类型是个人印章签署控件（SIGN_SIGNATURE） 时，可选的签名方式。</p><p>枚举值：</p><ul><li>HANDWRITE： 手写签名</li><li>ESIGN： 个人印章类型</li><li>OCR_ESIGN： AI智能识别手写签名</li><li>SYSTEM_ESIGN： 系统签名</li></ul>
                     * @param _componentLimitType <p>签署方经办人控件类型是个人印章签署控件（SIGN_SIGNATURE） 时，可选的签名方式。</p><p>枚举值：</p><ul><li>HANDWRITE： 手写签名</li><li>ESIGN： 个人印章类型</li><li>OCR_ESIGN： AI智能识别手写签名</li><li>SYSTEM_ESIGN： 系统签名</li></ul>
                     * 
                     */
                    void SetComponentLimitType(const std::vector<std::string>& _componentLimitType);

                    /**
                     * 判断参数 ComponentLimitType 是否已赋值
                     * @return ComponentLimitType 是否已赋值
                     * 
                     */
                    bool ComponentLimitTypeHasBeenSet() const;

                private:

                    /**
                     * <p>指定签署人非第三方平台子客企业下员工还是SaaS平台企业，在ApproverType为ORGANIZATION时指定。</p><ul><li>false: 默认值，第三方平台子客企业下员工</li><li>true: SaaS平台企业下的员工</li></ul>
                     */
                    bool m_notChannelOrganization;
                    bool m_notChannelOrganizationHasBeenSet;

                    /**
                     * <p>在指定签署方时，可选择企业B端或个人C端等不同的参与者类型，可选类型如下:</p><p> <strong>0</strong> :企业/企业员工（企业签署方或模板发起时的企业静默签）<br> <strong>1</strong> :个人/自然人<br><strong>3</strong> :企业/企业员工自动签（他方企业自动签署或文件发起时的本方企业自动签）</p><p>注：类型为3（企业/企业员工自动签）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。<br>使用自动签时，请确保企业已经开通自动签功能，开通方式：控制台 -&gt; 企业设置 -&gt; 扩展服务 -&gt; 企业自动签。<br>使用文件发起自动签时使用前请联系对接的客户经理沟通。</p>
                     */
                    int64_t m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * <p>电子签平台给企业生成的企业id</p>
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * <p>企业OpenId，第三方应用集成非静默签子客企业签署人发起合同必传</p>
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * <p>企业名称，第三方应用集成非静默签子客企业签署人必传，saas企业签署人必传</p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>电子签平台给企业员工或者自热人生成的用户id</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>第三方平台子客企业员工的唯一标识</p>
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * <p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p>
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * <p>签署人手机号，saas企业签署人，个人签署人必传</p>
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * <p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     */
                    std::string m_approverIdCardType;
                    bool m_approverIdCardTypeHasBeenSet;

                    /**
                     * <p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     */
                    std::string m_approverIdCardNumber;
                    bool m_approverIdCardNumberHasBeenSet;

                    /**
                     * <p>签署人Id，使用模板发起是，对应模板配置中的签署人RecipientId<br>注意：模板发起时该字段必填</p>
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * <p>签署前置条件：阅读时长限制，不传默认10s,最大300s，最小3s</p>
                     */
                    int64_t m_preReadTime;
                    bool m_preReadTimeHasBeenSet;

                    /**
                     * <p>签署前置条件：阅读全文限制</p>
                     */
                    bool m_isFullText;
                    bool m_isFullTextHasBeenSet;

                    /**
                     * <p>通知签署方经办人的方式, 有以下途径:</p><ul><li> **SMS** :(默认)短信</li><li> **NONE** : 不通知</li></ul><p>注: <code>签署方为第三方子客企业时会被置为NONE,   不会发短信通知</code></p>
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * <p>签署人配置，用于控制签署人相关属性</p>
                     */
                    CommonApproverOption m_approverOption;
                    bool m_approverOptionHasBeenSet;

                    /**
                     * <p>使用PDF文件直接发起合同时，签署人指定的签署控件；<br>使用模板发起合同时，指定本企业印章签署控件的印章ID: <br>通过ComponentId或ComponenetName指定签署控件，ComponentValue为印章ID。</p>
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * <p>指定个人签署方查看合同的校验方式,可以传值如下:</p><ul><li>  **1**   : （默认）人脸识别,人脸识别后才能合同内容</li><li>  **2**  : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）</li></ul>注: <ul><li>如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式</li><li>此字段可传多个校验方式</li></ul>
                     */
                    std::vector<int64_t> m_approverVerifyTypes;
                    bool m_approverVerifyTypesHasBeenSet;

                    /**
                     * <p>签署人签署合同时的认证方式</p><ul><li> **1** :人脸认证</li><li> **2** :签署密码</li><li> **3** :运营商三要素</li><li> **5** :设备指纹识别</li><li> **6** :设备面容识别</li></ul><p>默认为1(人脸认证 ),2(签署密码),3(运营商三要素),5(设备指纹识别),6(设备面容识别)</p><p>注: </p><ol><li>用<font color="red">模板创建合同场景</font>, 签署人的认证方式需要在配置模板的时候指定, <font color="red">在创建合同重新指定无效</font></li><li>运营商三要素认证方式对手机号运营商及前缀有限制,可以参考<a href="https://qian.tencent.com/developers/partner/mobile_support">运营商支持列表类</a>得到具体的支持说明</li><li>校验方式不允许只包含<font color="red">设备指纹识别</font>和<font color="red">设备面容识别</font>，至少需要再增加一种其他校验方式。</li><li><font color="red">设备指纹识别</font>和<font color="red">设备面容识别</font>只支持小程序使用，其他端暂不支持。</li></ol>
                     */
                    std::vector<int64_t> m_approverSignTypes;
                    bool m_approverSignTypesHasBeenSet;

                    /**
                     * <p>签署方经办人控件类型是个人印章签署控件（SIGN_SIGNATURE） 时，可选的签名方式。</p><p>枚举值：</p><ul><li>HANDWRITE： 手写签名</li><li>ESIGN： 个人印章类型</li><li>OCR_ESIGN： AI智能识别手写签名</li><li>SYSTEM_ESIGN： 系统签名</li></ul>
                     */
                    std::vector<std::string> m_componentLimitType;
                    bool m_componentLimitTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_COMMONFLOWAPPROVER_H_
