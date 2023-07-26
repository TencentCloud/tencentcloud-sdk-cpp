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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWCREATEAPPROVER_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWCREATEAPPROVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/RegisterInfo.h>
#include <tencentcloud/ess/v20201111/model/ApproverOption.h>
#include <tencentcloud/ess/v20201111/model/Component.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 创建流程的签署方信息
                */
                class FlowCreateApprover : public AbstractModel
                {
                public:
                    FlowCreateApprover();
                    ~FlowCreateApprover() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，会默认完成该签署方的签署。静默签署仅进行盖章操作，不能是手写签名。
                     * @return ApproverType 参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，会默认完成该签署方的签署。静默签署仅进行盖章操作，不能是手写签名。
                     * 
                     */
                    int64_t GetApproverType() const;

                    /**
                     * 设置参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，会默认完成该签署方的签署。静默签署仅进行盖章操作，不能是手写签名。
                     * @param _approverType 参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，会默认完成该签署方的签署。静默签署仅进行盖章操作，不能是手写签名。
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
                     * 获取如果签署方为企业，需要填入企业全称
                     * @return OrganizationName 如果签署方为企业，需要填入企业全称
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置如果签署方为企业，需要填入企业全称
                     * @param _organizationName 如果签署方为企业，需要填入企业全称
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
                     * 获取签署方经办人姓名
                     * @return ApproverName 签署方经办人姓名
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置签署方经办人姓名
                     * @param _approverName 签署方经办人姓名
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
                     * 获取签署方经办人手机号码
                     * @return ApproverMobile 签署方经办人手机号码
                     * 
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置签署方经办人手机号码
                     * @param _approverMobile 签署方经办人手机号码
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
                     * 获取签署方经办人证件类型ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     * @return ApproverIdCardType 签署方经办人证件类型ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     * 
                     */
                    std::string GetApproverIdCardType() const;

                    /**
                     * 设置签署方经办人证件类型ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     * @param _approverIdCardType 签署方经办人证件类型ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
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
                     * 获取签署方经办人证件号码
                     * @return ApproverIdCardNumber 签署方经办人证件号码
                     * 
                     */
                    std::string GetApproverIdCardNumber() const;

                    /**
                     * 设置签署方经办人证件号码
                     * @param _approverIdCardNumber 签署方经办人证件号码
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
                     * 获取签署方经办人在模板中的参与方ID
                     * @return RecipientId 签署方经办人在模板中的参与方ID
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署方经办人在模板中的参与方ID
                     * @param _recipientId 签署方经办人在模板中的参与方ID
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
                     * 获取签署意愿确认渠道,WEIXINAPP:人脸识别
                     * @return VerifyChannel 签署意愿确认渠道,WEIXINAPP:人脸识别
                     * 
                     */
                    std::vector<std::string> GetVerifyChannel() const;

                    /**
                     * 设置签署意愿确认渠道,WEIXINAPP:人脸识别
                     * @param _verifyChannel 签署意愿确认渠道,WEIXINAPP:人脸识别
                     * 
                     */
                    void SetVerifyChannel(const std::vector<std::string>& _verifyChannel);

                    /**
                     * 判断参数 VerifyChannel 是否已赋值
                     * @return VerifyChannel 是否已赋值
                     * 
                     */
                    bool VerifyChannelHasBeenSet() const;

                    /**
                     * 获取是否发送短信，sms--短信通知，none--不通知，默认为sms；发起方=签署方时不发送短信
                     * @return NotifyType 是否发送短信，sms--短信通知，none--不通知，默认为sms；发起方=签署方时不发送短信
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置是否发送短信，sms--短信通知，none--不通知，默认为sms；发起方=签署方时不发送短信
                     * @param _notifyType 是否发送短信，sms--短信通知，none--不通知，默认为sms；发起方=签署方时不发送短信
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
                     * 获取合同强制需要阅读全文，无需传此参数
                     * @return IsFullText 合同强制需要阅读全文，无需传此参数
                     * 
                     */
                    bool GetIsFullText() const;

                    /**
                     * 设置合同强制需要阅读全文，无需传此参数
                     * @param _isFullText 合同强制需要阅读全文，无需传此参数
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
                     * 获取合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * @return PreReadTime 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * 
                     */
                    uint64_t GetPreReadTime() const;

                    /**
                     * 设置合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * @param _preReadTime 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * 
                     */
                    void SetPreReadTime(const uint64_t& _preReadTime);

                    /**
                     * 判断参数 PreReadTime 是否已赋值
                     * @return PreReadTime 是否已赋值
                     * 
                     */
                    bool PreReadTimeHasBeenSet() const;

                    /**
                     * 获取签署方经办人的用户ID,和签署方经办人姓名+手机号+证件必须有一个。
                     * @return UserId 签署方经办人的用户ID,和签署方经办人姓名+手机号+证件必须有一个。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置签署方经办人的用户ID,和签署方经办人姓名+手机号+证件必须有一个。
                     * @param _userId 签署方经办人的用户ID,和签署方经办人姓名+手机号+证件必须有一个。
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
                     * 获取当前只支持true，默认为true
                     * @return Required 当前只支持true，默认为true
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置当前只支持true，默认为true
                     * @param _required 当前只支持true，默认为true
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取签署人用户来源,企微侧用户请传入：WEWORKAPP
                     * @return ApproverSource 签署人用户来源,企微侧用户请传入：WEWORKAPP
                     * 
                     */
                    std::string GetApproverSource() const;

                    /**
                     * 设置签署人用户来源,企微侧用户请传入：WEWORKAPP
                     * @param _approverSource 签署人用户来源,企微侧用户请传入：WEWORKAPP
                     * 
                     */
                    void SetApproverSource(const std::string& _approverSource);

                    /**
                     * 判断参数 ApproverSource 是否已赋值
                     * @return ApproverSource 是否已赋值
                     * 
                     */
                    bool ApproverSourceHasBeenSet() const;

                    /**
                     * 获取企业签署方或签标识，客户自定义，64位长度。用于发起含有或签签署人的合同。或签参与人必须有此字段。合同内不同或签参与人CustomApproverTag需要保证唯一。如果或签签署人为本方企微参与人，ApproverSource参数需要指定WEWORKAPP
                     * @return CustomApproverTag 企业签署方或签标识，客户自定义，64位长度。用于发起含有或签签署人的合同。或签参与人必须有此字段。合同内不同或签参与人CustomApproverTag需要保证唯一。如果或签签署人为本方企微参与人，ApproverSource参数需要指定WEWORKAPP
                     * 
                     */
                    std::string GetCustomApproverTag() const;

                    /**
                     * 设置企业签署方或签标识，客户自定义，64位长度。用于发起含有或签签署人的合同。或签参与人必须有此字段。合同内不同或签参与人CustomApproverTag需要保证唯一。如果或签签署人为本方企微参与人，ApproverSource参数需要指定WEWORKAPP
                     * @param _customApproverTag 企业签署方或签标识，客户自定义，64位长度。用于发起含有或签签署人的合同。或签参与人必须有此字段。合同内不同或签参与人CustomApproverTag需要保证唯一。如果或签签署人为本方企微参与人，ApproverSource参数需要指定WEWORKAPP
                     * 
                     */
                    void SetCustomApproverTag(const std::string& _customApproverTag);

                    /**
                     * 判断参数 CustomApproverTag 是否已赋值
                     * @return CustomApproverTag 是否已赋值
                     * 
                     */
                    bool CustomApproverTagHasBeenSet() const;

                    /**
                     * 获取快速注册相关信息，目前暂未开放！
                     * @return RegisterInfo 快速注册相关信息，目前暂未开放！
                     * 
                     */
                    RegisterInfo GetRegisterInfo() const;

                    /**
                     * 设置快速注册相关信息，目前暂未开放！
                     * @param _registerInfo 快速注册相关信息，目前暂未开放！
                     * 
                     */
                    void SetRegisterInfo(const RegisterInfo& _registerInfo);

                    /**
                     * 判断参数 RegisterInfo 是否已赋值
                     * @return RegisterInfo 是否已赋值
                     * 
                     */
                    bool RegisterInfoHasBeenSet() const;

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
                     * 获取签署完前端跳转的url，暂未使用
                     * @return JumpUrl 签署完前端跳转的url，暂未使用
                     * @deprecated
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置签署完前端跳转的url，暂未使用
                     * @param _jumpUrl 签署完前端跳转的url，暂未使用
                     * @deprecated
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * @deprecated
                     */
                    bool JumpUrlHasBeenSet() const;

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
                     * 获取当前签署方进行签署操作是否需要企业内部审批，true 则为需要。为个人签署方时则由发起方企业审核。
                     * @return ApproverNeedSignReview 当前签署方进行签署操作是否需要企业内部审批，true 则为需要。为个人签署方时则由发起方企业审核。
                     * 
                     */
                    bool GetApproverNeedSignReview() const;

                    /**
                     * 设置当前签署方进行签署操作是否需要企业内部审批，true 则为需要。为个人签署方时则由发起方企业审核。
                     * @param _approverNeedSignReview 当前签署方进行签署操作是否需要企业内部审批，true 则为需要。为个人签署方时则由发起方企业审核。
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
                     * 获取签署人签署控件
                     * @return SignComponents 签署人签署控件
                     * 
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置签署人签署控件
                     * @param _signComponents 签署人签署控件
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
                     * 获取签署人填写控件
                     * @return Components 签署人填写控件
                     * 
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置签署人填写控件
                     * @param _components 签署人填写控件
                     * 
                     */
                    void SetComponents(const std::vector<Component>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

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

                private:

                    /**
                     * 参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，会默认完成该签署方的签署。静默签署仅进行盖章操作，不能是手写签名。
                     */
                    int64_t m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 如果签署方为企业，需要填入企业全称
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 签署方经办人姓名
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * 签署方经办人手机号码
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * 签署方经办人证件类型ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     */
                    std::string m_approverIdCardType;
                    bool m_approverIdCardTypeHasBeenSet;

                    /**
                     * 签署方经办人证件号码
                     */
                    std::string m_approverIdCardNumber;
                    bool m_approverIdCardNumberHasBeenSet;

                    /**
                     * 签署方经办人在模板中的参与方ID
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 签署意愿确认渠道,WEIXINAPP:人脸识别
                     */
                    std::vector<std::string> m_verifyChannel;
                    bool m_verifyChannelHasBeenSet;

                    /**
                     * 是否发送短信，sms--短信通知，none--不通知，默认为sms；发起方=签署方时不发送短信
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * 合同强制需要阅读全文，无需传此参数
                     */
                    bool m_isFullText;
                    bool m_isFullTextHasBeenSet;

                    /**
                     * 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     */
                    uint64_t m_preReadTime;
                    bool m_preReadTimeHasBeenSet;

                    /**
                     * 签署方经办人的用户ID,和签署方经办人姓名+手机号+证件必须有一个。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 当前只支持true，默认为true
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * 签署人用户来源,企微侧用户请传入：WEWORKAPP
                     */
                    std::string m_approverSource;
                    bool m_approverSourceHasBeenSet;

                    /**
                     * 企业签署方或签标识，客户自定义，64位长度。用于发起含有或签签署人的合同。或签参与人必须有此字段。合同内不同或签参与人CustomApproverTag需要保证唯一。如果或签签署人为本方企微参与人，ApproverSource参数需要指定WEWORKAPP
                     */
                    std::string m_customApproverTag;
                    bool m_customApproverTagHasBeenSet;

                    /**
                     * 快速注册相关信息，目前暂未开放！
                     */
                    RegisterInfo m_registerInfo;
                    bool m_registerInfoHasBeenSet;

                    /**
                     * 签署人个性化能力值
                     */
                    ApproverOption m_approverOption;
                    bool m_approverOptionHasBeenSet;

                    /**
                     * 签署完前端跳转的url，暂未使用
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 签署ID
- 发起流程时系统自动补充
- 创建签署链接时，可以通过查询详情接口获得签署人的SignId，然后可传入此值为该签署人创建签署链接，无需再传姓名、手机号、证件号等其他信息
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * 当前签署方进行签署操作是否需要企业内部审批，true 则为需要。为个人签署方时则由发起方企业审核。
                     */
                    bool m_approverNeedSignReview;
                    bool m_approverNeedSignReviewHasBeenSet;

                    /**
                     * 签署人签署控件
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * 签署人填写控件
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 签署方控件类型为 SIGN_SIGNATURE时，可以指定签署方签名方式
	HANDWRITE – 手写签名
	OCR_ESIGN -- AI智能识别手写签名
	ESIGN -- 个人印章类型
	SYSTEM_ESIGN -- 系统签名（该类型可以在用户签署时根据用户姓名一键生成一个签名来进行签署）
                     */
                    std::vector<std::string> m_componentLimitType;
                    bool m_componentLimitTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWCREATEAPPROVER_H_
