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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Component.h>
#include <tencentcloud/essbasic/v20210526/model/ApproverOption.h>
#include <tencentcloud/essbasic/v20210526/model/ComponentLimit.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 创建签署流程签署人入参。

其中签署方FlowApproverInfo需要传递的参数
非单C、单B、B2C合同，ApproverType、RecipientId（模板发起合同时）必传，建议都传。

其他身份标识

<ul><li>1-个人：Name、Mobile必传</li>
<li>2-第三方平台子客企业指定经办人：OpenId必传，OrgName必传、OrgOpenId必传；</li>
<li>3-第三方平台子客企业不指定经办人：OrgName必传、OrgOpenId必传；</li>
<li>4-非第三方平台子客企业：Name、Mobile必传，OrgName必传，且NotChannelOrganization=True。</li></ul>

RecipientId参数：
从DescribeTemplates接口中，可以得到模板下的签署方Recipient列表，根据模板自定义的Rolename在此结构体中确定其RecipientId。
                */
                class FlowApproverInfo : public AbstractModel
                {
                public:
                    FlowApproverInfo();
                    ~FlowApproverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署人姓名，最大长度50个字符
                     * @return Name 签署人姓名，最大长度50个字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置签署人姓名，最大长度50个字符
                     * @param _name 签署人姓名，最大长度50个字符
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取签署人的证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
4.OTHER_CARD_TYPE 其他（需要使用该类型请先联系运营经理）
                     * @return IdCardType 签署人的证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
4.OTHER_CARD_TYPE 其他（需要使用该类型请先联系运营经理）
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置签署人的证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
4.OTHER_CARD_TYPE 其他（需要使用该类型请先联系运营经理）
                     * @param _idCardType 签署人的证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
4.OTHER_CARD_TYPE 其他（需要使用该类型请先联系运营经理）
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取签署人证件号（长度不超过18位）
                     * @return IdCardNumber 签署人证件号（长度不超过18位）
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置签署人证件号（长度不超过18位）
                     * @param _idCardNumber 签署人证件号（长度不超过18位）
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取签署人手机号，脱敏显示。大陆手机号为11位，暂不支持海外手机号。
                     * @return Mobile 签署人手机号，脱敏显示。大陆手机号为11位，暂不支持海外手机号。
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置签署人手机号，脱敏显示。大陆手机号为11位，暂不支持海外手机号。
                     * @param _mobile 签署人手机号，脱敏显示。大陆手机号为11位，暂不支持海外手机号。
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
                     * 获取企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传，最大长度64个字符；
                     * @return OrganizationName 企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传，最大长度64个字符；
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传，最大长度64个字符；
                     * @param _organizationName 企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传，最大长度64个字符；
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
                     * 获取指定签署人非第三方平台子客企业下员工，在ApproverType为ORGANIZATION时指定。
默认为false，即签署人位于同一个第三方平台应用号下；默认为false，即签署人位于同一个第三方应用号下；
                     * @return NotChannelOrganization 指定签署人非第三方平台子客企业下员工，在ApproverType为ORGANIZATION时指定。
默认为false，即签署人位于同一个第三方平台应用号下；默认为false，即签署人位于同一个第三方应用号下；
                     * 
                     */
                    bool GetNotChannelOrganization() const;

                    /**
                     * 设置指定签署人非第三方平台子客企业下员工，在ApproverType为ORGANIZATION时指定。
默认为false，即签署人位于同一个第三方平台应用号下；默认为false，即签署人位于同一个第三方应用号下；
                     * @param _notChannelOrganization 指定签署人非第三方平台子客企业下员工，在ApproverType为ORGANIZATION时指定。
默认为false，即签署人位于同一个第三方平台应用号下；默认为false，即签署人位于同一个第三方应用号下；
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
                     * 获取用户侧第三方id，最大长度64个字符
当签署方为同一第三方平台下的员工时，该字段若不指定，则发起【待领取】的流程
                     * @return OpenId 用户侧第三方id，最大长度64个字符
当签署方为同一第三方平台下的员工时，该字段若不指定，则发起【待领取】的流程
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户侧第三方id，最大长度64个字符
当签署方为同一第三方平台下的员工时，该字段若不指定，则发起【待领取】的流程
                     * @param _openId 用户侧第三方id，最大长度64个字符
当签署方为同一第三方平台下的员工时，该字段若不指定，则发起【待领取】的流程
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
                     * 获取企业签署方在同一第三方平台应用下的其他合作企业OpenId，签署方为非发起方企业场景下必传，最大长度64个字符；
                     * @return OrganizationOpenId 企业签署方在同一第三方平台应用下的其他合作企业OpenId，签署方为非发起方企业场景下必传，最大长度64个字符；
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置企业签署方在同一第三方平台应用下的其他合作企业OpenId，签署方为非发起方企业场景下必传，最大长度64个字符；
                     * @param _organizationOpenId 企业签署方在同一第三方平台应用下的其他合作企业OpenId，签署方为非发起方企业场景下必传，最大长度64个字符；
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
                     * 获取签署人类型
PERSON-个人/自然人；
PERSON_AUTO_SIGN-个人自动签署，适用于个人自动签场景
注: 个人自动签场景为白名单功能, 使用前请联系对接的客户经理沟通。
ORGANIZATION-企业（企业签署方或模板发起时的企业静默签）；
ENTERPRISESERVER-企业自动签（他方企业自动签署或文件发起时的本方企业自动签）

若要实现他方企业（同一应用下）自动签，需要满足3个条件：
条件1：ApproverType 设置为ENTERPRISESERVER
条件2：子客之间完成授权
条件3：联系对接的客户经理沟通
                     * @return ApproverType 签署人类型
PERSON-个人/自然人；
PERSON_AUTO_SIGN-个人自动签署，适用于个人自动签场景
注: 个人自动签场景为白名单功能, 使用前请联系对接的客户经理沟通。
ORGANIZATION-企业（企业签署方或模板发起时的企业静默签）；
ENTERPRISESERVER-企业自动签（他方企业自动签署或文件发起时的本方企业自动签）

若要实现他方企业（同一应用下）自动签，需要满足3个条件：
条件1：ApproverType 设置为ENTERPRISESERVER
条件2：子客之间完成授权
条件3：联系对接的客户经理沟通
                     * 
                     */
                    std::string GetApproverType() const;

                    /**
                     * 设置签署人类型
PERSON-个人/自然人；
PERSON_AUTO_SIGN-个人自动签署，适用于个人自动签场景
注: 个人自动签场景为白名单功能, 使用前请联系对接的客户经理沟通。
ORGANIZATION-企业（企业签署方或模板发起时的企业静默签）；
ENTERPRISESERVER-企业自动签（他方企业自动签署或文件发起时的本方企业自动签）

若要实现他方企业（同一应用下）自动签，需要满足3个条件：
条件1：ApproverType 设置为ENTERPRISESERVER
条件2：子客之间完成授权
条件3：联系对接的客户经理沟通
                     * @param _approverType 签署人类型
PERSON-个人/自然人；
PERSON_AUTO_SIGN-个人自动签署，适用于个人自动签场景
注: 个人自动签场景为白名单功能, 使用前请联系对接的客户经理沟通。
ORGANIZATION-企业（企业签署方或模板发起时的企业静默签）；
ENTERPRISESERVER-企业自动签（他方企业自动签署或文件发起时的本方企业自动签）

若要实现他方企业（同一应用下）自动签，需要满足3个条件：
条件1：ApproverType 设置为ENTERPRISESERVER
条件2：子客之间完成授权
条件3：联系对接的客户经理沟通
                     * 
                     */
                    void SetApproverType(const std::string& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     * 
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取签署流程签署人在模板中对应的签署人Id；在非单方签署、以及非B2C签署的场景下必传，用于指定当前签署方在签署流程中的位置；
                     * @return RecipientId 签署流程签署人在模板中对应的签署人Id；在非单方签署、以及非B2C签署的场景下必传，用于指定当前签署方在签署流程中的位置；
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署流程签署人在模板中对应的签署人Id；在非单方签署、以及非B2C签署的场景下必传，用于指定当前签署方在签署流程中的位置；
                     * @param _recipientId 签署流程签署人在模板中对应的签署人Id；在非单方签署、以及非B2C签署的场景下必传，用于指定当前签署方在签署流程中的位置；
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
                     * 获取签署截止时间戳，默认一年
                     * @return Deadline 签署截止时间戳，默认一年
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署截止时间戳，默认一年
                     * @param _deadline 签署截止时间戳，默认一年
                     * 
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取签署完回调url，最大长度1000个字符
                     * @return CallbackUrl 签署完回调url，最大长度1000个字符
                     * @deprecated
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置签署完回调url，最大长度1000个字符
                     * @param _callbackUrl 签署完回调url，最大长度1000个字符
                     * @deprecated
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * @deprecated
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取使用PDF文件直接发起合同时，签署人指定的签署控件；<br/>使用模板发起合同时，指定本企业印章签署控件的印章ID: <br/>通过ComponentId或ComponenetName指定签署控件，ComponentValue为印章ID。
                     * @return SignComponents 使用PDF文件直接发起合同时，签署人指定的签署控件；<br/>使用模板发起合同时，指定本企业印章签署控件的印章ID: <br/>通过ComponentId或ComponenetName指定签署控件，ComponentValue为印章ID。
                     * 
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置使用PDF文件直接发起合同时，签署人指定的签署控件；<br/>使用模板发起合同时，指定本企业印章签署控件的印章ID: <br/>通过ComponentId或ComponenetName指定签署控件，ComponentValue为印章ID。
                     * @param _signComponents 使用PDF文件直接发起合同时，签署人指定的签署控件；<br/>使用模板发起合同时，指定本企业印章签署控件的印章ID: <br/>通过ComponentId或ComponenetName指定签署控件，ComponentValue为印章ID。
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
                     * 获取签署方控件类型为 SIGN_SIGNATURE时，可以指定签署方签名方式
	HANDWRITE – 手写签名
	OCR_ESIGN -- AI智能识别手写签名
	ESIGN -- 个人印章类型
	SYSTEM_ESIGN -- 系统签名（该类型可以在用户签署时根据用户姓名一键生成一个签名来进行签署）
                     * @return ComponentLimitType 签署方控件类型为 SIGN_SIGNATURE时，可以指定签署方签名方式
	HANDWRITE – 手写签名
	OCR_ESIGN -- AI智能识别手写签名
	ESIGN -- 个人印章类型
	SYSTEM_ESIGN -- 系统签名（该类型可以在用户签署时根据用户姓名一键生成一个签名来进行签署）
                     * 
                     */
                    std::vector<std::string> GetComponentLimitType() const;

                    /**
                     * 设置签署方控件类型为 SIGN_SIGNATURE时，可以指定签署方签名方式
	HANDWRITE – 手写签名
	OCR_ESIGN -- AI智能识别手写签名
	ESIGN -- 个人印章类型
	SYSTEM_ESIGN -- 系统签名（该类型可以在用户签署时根据用户姓名一键生成一个签名来进行签署）
                     * @param _componentLimitType 签署方控件类型为 SIGN_SIGNATURE时，可以指定签署方签名方式
	HANDWRITE – 手写签名
	OCR_ESIGN -- AI智能识别手写签名
	ESIGN -- 个人印章类型
	SYSTEM_ESIGN -- 系统签名（该类型可以在用户签署时根据用户姓名一键生成一个签名来进行签署）
                     * 
                     */
                    void SetComponentLimitType(const std::vector<std::string>& _componentLimitType);

                    /**
                     * 判断参数 ComponentLimitType 是否已赋值
                     * @return ComponentLimitType 是否已赋值
                     * 
                     */
                    bool ComponentLimitTypeHasBeenSet() const;

                    /**
                     * 获取合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * @return PreReadTime 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * 
                     */
                    int64_t GetPreReadTime() const;

                    /**
                     * 设置合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * @param _preReadTime 合同的强制预览时间：3~300s，未指定则按合同页数计算
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
                     * 获取签署完前端跳转的url，此字段的用法场景请联系客户经理确认
                     * @return JumpUrl 签署完前端跳转的url，此字段的用法场景请联系客户经理确认
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置签署完前端跳转的url，此字段的用法场景请联系客户经理确认
                     * @param _jumpUrl 签署完前端跳转的url，此字段的用法场景请联系客户经理确认
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取签署人个性化能力值
                     * @return ApproverOption 签署人个性化能力值
                     * 
                     */
                    ApproverOption GetApproverOption() const;

                    /**
                     * 设置签署人个性化能力值
                     * @param _approverOption 签署人个性化能力值
                     * 
                     */
                    void SetApproverOption(const ApproverOption& _approverOption);

                    /**
                     * 判断参数 ApproverOption 是否已赋值
                     * @return ApproverOption 是否已赋值
                     * 
                     */
                    bool ApproverOptionHasBeenSet() const;

                    /**
                     * 获取当前签署方进行签署操作是否需要企业内部审批，true 则为需要
                     * @return ApproverNeedSignReview 当前签署方进行签署操作是否需要企业内部审批，true 则为需要
                     * 
                     */
                    bool GetApproverNeedSignReview() const;

                    /**
                     * 设置当前签署方进行签署操作是否需要企业内部审批，true 则为需要
                     * @param _approverNeedSignReview 当前签署方进行签署操作是否需要企业内部审批，true 则为需要
                     * 
                     */
                    void SetApproverNeedSignReview(const bool& _approverNeedSignReview);

                    /**
                     * 判断参数 ApproverNeedSignReview 是否已赋值
                     * @return ApproverNeedSignReview 是否已赋值
                     * 
                     */
                    bool ApproverNeedSignReviewHasBeenSet() const;

                    /**
                     * 获取签署人查看合同时认证方式, 1-实名查看 2-短信验证码查看(企业签署方不支持该方式) 如果不传默认为1
查看合同的认证方式 Flow层级的优先于approver层级的
（当手写签名方式为OCR_ESIGN时，合同认证方式2无效，因为这种签名方式依赖实名认证）
                     * @return ApproverVerifyTypes 签署人查看合同时认证方式, 1-实名查看 2-短信验证码查看(企业签署方不支持该方式) 如果不传默认为1
查看合同的认证方式 Flow层级的优先于approver层级的
（当手写签名方式为OCR_ESIGN时，合同认证方式2无效，因为这种签名方式依赖实名认证）
                     * 
                     */
                    std::vector<int64_t> GetApproverVerifyTypes() const;

                    /**
                     * 设置签署人查看合同时认证方式, 1-实名查看 2-短信验证码查看(企业签署方不支持该方式) 如果不传默认为1
查看合同的认证方式 Flow层级的优先于approver层级的
（当手写签名方式为OCR_ESIGN时，合同认证方式2无效，因为这种签名方式依赖实名认证）
                     * @param _approverVerifyTypes 签署人查看合同时认证方式, 1-实名查看 2-短信验证码查看(企业签署方不支持该方式) 如果不传默认为1
查看合同的认证方式 Flow层级的优先于approver层级的
（当手写签名方式为OCR_ESIGN时，合同认证方式2无效，因为这种签名方式依赖实名认证）
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
                     * 获取签署人签署合同时的认证方式
1-人脸认证 2-签署密码 3-运营商三要素(默认为1,2)
                     * @return ApproverSignTypes 签署人签署合同时的认证方式
1-人脸认证 2-签署密码 3-运营商三要素(默认为1,2)
                     * 
                     */
                    std::vector<int64_t> GetApproverSignTypes() const;

                    /**
                     * 设置签署人签署合同时的认证方式
1-人脸认证 2-签署密码 3-运营商三要素(默认为1,2)
                     * @param _approverSignTypes 签署人签署合同时的认证方式
1-人脸认证 2-签署密码 3-运营商三要素(默认为1,2)
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
                     * 获取签署ID
- 发起流程时系统自动补充
- 创建签署链接时，可以通过查询详情接口获得签署人的SignId，然后可传入此值为该签署人创建签署链接，无需再传姓名、手机号、证件号等其他信息
                     * @return SignId 签署ID
- 发起流程时系统自动补充
- 创建签署链接时，可以通过查询详情接口获得签署人的SignId，然后可传入此值为该签署人创建签署链接，无需再传姓名、手机号、证件号等其他信息
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置签署ID
- 发起流程时系统自动补充
- 创建签署链接时，可以通过查询详情接口获得签署人的SignId，然后可传入此值为该签署人创建签署链接，无需再传姓名、手机号、证件号等其他信息
                     * @param _signId 签署ID
- 发起流程时系统自动补充
- 创建签署链接时，可以通过查询详情接口获得签署人的SignId，然后可传入此值为该签署人创建签署链接，无需再传姓名、手机号、证件号等其他信息
                     * 
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取SMS: 短信(需确保“电子签短信通知签署方”功能是开启状态才能生效); NONE: 不发信息
默认为SMS(签署方为子客时该字段不生效)
                     * @return NotifyType SMS: 短信(需确保“电子签短信通知签署方”功能是开启状态才能生效); NONE: 不发信息
默认为SMS(签署方为子客时该字段不生效)
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置SMS: 短信(需确保“电子签短信通知签署方”功能是开启状态才能生效); NONE: 不发信息
默认为SMS(签署方为子客时该字段不生效)
                     * @param _notifyType SMS: 短信(需确保“电子签短信通知签署方”功能是开启状态才能生效); NONE: 不发信息
默认为SMS(签署方为子客时该字段不生效)
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
                     * 获取[通过文件创建签署流程](https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowByFiles)时,如果设置了外层参数SignBeanTag=1(允许签署过程中添加签署控件),则可通过此参数明确规定合同所使用的签署控件类型（骑缝章、普通章法人章等）和具体的印章（印章ID）或签名方式。

注：`限制印章控件或骑缝章控件情况下,仅本企业签署方可以指定具体印章（通过传递ComponentValue,支持多个），他方企业或个人只支持限制控件类型。`
                     * @return AddSignComponentsLimits [通过文件创建签署流程](https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowByFiles)时,如果设置了外层参数SignBeanTag=1(允许签署过程中添加签署控件),则可通过此参数明确规定合同所使用的签署控件类型（骑缝章、普通章法人章等）和具体的印章（印章ID）或签名方式。

注：`限制印章控件或骑缝章控件情况下,仅本企业签署方可以指定具体印章（通过传递ComponentValue,支持多个），他方企业或个人只支持限制控件类型。`
                     * 
                     */
                    std::vector<ComponentLimit> GetAddSignComponentsLimits() const;

                    /**
                     * 设置[通过文件创建签署流程](https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowByFiles)时,如果设置了外层参数SignBeanTag=1(允许签署过程中添加签署控件),则可通过此参数明确规定合同所使用的签署控件类型（骑缝章、普通章法人章等）和具体的印章（印章ID）或签名方式。

注：`限制印章控件或骑缝章控件情况下,仅本企业签署方可以指定具体印章（通过传递ComponentValue,支持多个），他方企业或个人只支持限制控件类型。`
                     * @param _addSignComponentsLimits [通过文件创建签署流程](https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowByFiles)时,如果设置了外层参数SignBeanTag=1(允许签署过程中添加签署控件),则可通过此参数明确规定合同所使用的签署控件类型（骑缝章、普通章法人章等）和具体的印章（印章ID）或签名方式。

注：`限制印章控件或骑缝章控件情况下,仅本企业签署方可以指定具体印章（通过传递ComponentValue,支持多个），他方企业或个人只支持限制控件类型。`
                     * 
                     */
                    void SetAddSignComponentsLimits(const std::vector<ComponentLimit>& _addSignComponentsLimits);

                    /**
                     * 判断参数 AddSignComponentsLimits 是否已赋值
                     * @return AddSignComponentsLimits 是否已赋值
                     * 
                     */
                    bool AddSignComponentsLimitsHasBeenSet() const;

                    /**
                     * 获取自定义签署方角色名称
                     * @return ApproverRoleName 自定义签署方角色名称
                     * 
                     */
                    std::string GetApproverRoleName() const;

                    /**
                     * 设置自定义签署方角色名称
                     * @param _approverRoleName 自定义签署方角色名称
                     * 
                     */
                    void SetApproverRoleName(const std::string& _approverRoleName);

                    /**
                     * 判断参数 ApproverRoleName 是否已赋值
                     * @return ApproverRoleName 是否已赋值
                     * 
                     */
                    bool ApproverRoleNameHasBeenSet() const;

                private:

                    /**
                     * 签署人姓名，最大长度50个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 签署人的证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
4.OTHER_CARD_TYPE 其他（需要使用该类型请先联系运营经理）
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 签署人证件号（长度不超过18位）
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 签署人手机号，脱敏显示。大陆手机号为11位，暂不支持海外手机号。
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传，最大长度64个字符；
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 指定签署人非第三方平台子客企业下员工，在ApproverType为ORGANIZATION时指定。
默认为false，即签署人位于同一个第三方平台应用号下；默认为false，即签署人位于同一个第三方应用号下；
                     */
                    bool m_notChannelOrganization;
                    bool m_notChannelOrganizationHasBeenSet;

                    /**
                     * 用户侧第三方id，最大长度64个字符
当签署方为同一第三方平台下的员工时，该字段若不指定，则发起【待领取】的流程
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 企业签署方在同一第三方平台应用下的其他合作企业OpenId，签署方为非发起方企业场景下必传，最大长度64个字符；
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * 签署人类型
PERSON-个人/自然人；
PERSON_AUTO_SIGN-个人自动签署，适用于个人自动签场景
注: 个人自动签场景为白名单功能, 使用前请联系对接的客户经理沟通。
ORGANIZATION-企业（企业签署方或模板发起时的企业静默签）；
ENTERPRISESERVER-企业自动签（他方企业自动签署或文件发起时的本方企业自动签）

若要实现他方企业（同一应用下）自动签，需要满足3个条件：
条件1：ApproverType 设置为ENTERPRISESERVER
条件2：子客之间完成授权
条件3：联系对接的客户经理沟通
                     */
                    std::string m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 签署流程签署人在模板中对应的签署人Id；在非单方签署、以及非B2C签署的场景下必传，用于指定当前签署方在签署流程中的位置；
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 签署截止时间戳，默认一年
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 签署完回调url，最大长度1000个字符
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 使用PDF文件直接发起合同时，签署人指定的签署控件；<br/>使用模板发起合同时，指定本企业印章签署控件的印章ID: <br/>通过ComponentId或ComponenetName指定签署控件，ComponentValue为印章ID。
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * 签署方控件类型为 SIGN_SIGNATURE时，可以指定签署方签名方式
	HANDWRITE – 手写签名
	OCR_ESIGN -- AI智能识别手写签名
	ESIGN -- 个人印章类型
	SYSTEM_ESIGN -- 系统签名（该类型可以在用户签署时根据用户姓名一键生成一个签名来进行签署）
                     */
                    std::vector<std::string> m_componentLimitType;
                    bool m_componentLimitTypeHasBeenSet;

                    /**
                     * 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     */
                    int64_t m_preReadTime;
                    bool m_preReadTimeHasBeenSet;

                    /**
                     * 签署完前端跳转的url，此字段的用法场景请联系客户经理确认
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 签署人个性化能力值
                     */
                    ApproverOption m_approverOption;
                    bool m_approverOptionHasBeenSet;

                    /**
                     * 当前签署方进行签署操作是否需要企业内部审批，true 则为需要
                     */
                    bool m_approverNeedSignReview;
                    bool m_approverNeedSignReviewHasBeenSet;

                    /**
                     * 签署人查看合同时认证方式, 1-实名查看 2-短信验证码查看(企业签署方不支持该方式) 如果不传默认为1
查看合同的认证方式 Flow层级的优先于approver层级的
（当手写签名方式为OCR_ESIGN时，合同认证方式2无效，因为这种签名方式依赖实名认证）
                     */
                    std::vector<int64_t> m_approverVerifyTypes;
                    bool m_approverVerifyTypesHasBeenSet;

                    /**
                     * 签署人签署合同时的认证方式
1-人脸认证 2-签署密码 3-运营商三要素(默认为1,2)
                     */
                    std::vector<int64_t> m_approverSignTypes;
                    bool m_approverSignTypesHasBeenSet;

                    /**
                     * 签署ID
- 发起流程时系统自动补充
- 创建签署链接时，可以通过查询详情接口获得签署人的SignId，然后可传入此值为该签署人创建签署链接，无需再传姓名、手机号、证件号等其他信息
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * SMS: 短信(需确保“电子签短信通知签署方”功能是开启状态才能生效); NONE: 不发信息
默认为SMS(签署方为子客时该字段不生效)
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * [通过文件创建签署流程](https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowByFiles)时,如果设置了外层参数SignBeanTag=1(允许签署过程中添加签署控件),则可通过此参数明确规定合同所使用的签署控件类型（骑缝章、普通章法人章等）和具体的印章（印章ID）或签名方式。

注：`限制印章控件或骑缝章控件情况下,仅本企业签署方可以指定具体印章（通过传递ComponentValue,支持多个），他方企业或个人只支持限制控件类型。`
                     */
                    std::vector<ComponentLimit> m_addSignComponentsLimits;
                    bool m_addSignComponentsLimitsHasBeenSet;

                    /**
                     * 自定义签署方角色名称
                     */
                    std::string m_approverRoleName;
                    bool m_approverRoleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERINFO_H_
