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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SENDFLOWURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SENDFLOWURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>
#include <tencentcloud/essbasic/v20201222/model/Component.h>
#include <tencentcloud/essbasic/v20201222/model/SmsTemplate.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * SendFlowUrl请求参数结构体
                */
                class SendFlowUrlRequest : public AbstractModel
                {
                public:
                    SendFlowUrlRequest();
                    ~SendFlowUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取需要推送合同的流程ID
                     * @return FlowId 需要推送合同的流程ID
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置需要推送合同的流程ID
                     * @param _flowId 需要推送合同的流程ID
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取签署人ID
                     * @return UserId 签署人ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置签署人ID
                     * @param _userId 签署人ID
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
                     * 获取签署控件信息 (支持添加多个控件)
                     * @return SignComponents 签署控件信息 (支持添加多个控件)
                     * 
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置签署控件信息 (支持添加多个控件)
                     * @param _signComponents 签署控件信息 (支持添加多个控件)
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
                     * 获取签署人手机号 (如果选择短信验证码签署，则此字段必填)
                     * @return Mobile 签署人手机号 (如果选择短信验证码签署，则此字段必填)
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置签署人手机号 (如果选择短信验证码签署，则此字段必填)
                     * @param _mobile 签署人手机号 (如果选择短信验证码签署，则此字段必填)
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
                     * 获取签署人对应的子机构ID，个人签署者此字段不填
                     * @return SubOrganizationId 签署人对应的子机构ID，个人签署者此字段不填
                     * 
                     */
                    std::string GetSubOrganizationId() const;

                    /**
                     * 设置签署人对应的子机构ID，个人签署者此字段不填
                     * @param _subOrganizationId 签署人对应的子机构ID，个人签署者此字段不填
                     * 
                     */
                    void SetSubOrganizationId(const std::string& _subOrganizationId);

                    /**
                     * 判断参数 SubOrganizationId 是否已赋值
                     * @return SubOrganizationId 是否已赋值
                     * 
                     */
                    bool SubOrganizationIdHasBeenSet() const;

                    /**
                     * 获取签名后校验方式：
1. WEIXINAPP - 微信小程序；
2. FACEID - 慧眼 (默认) ；
3. VERIFYCODE - 验证码；
4. NONE - 无。此选项为白名单参数，暂不支持公开调用。如需开通权限，请通过客户经理或邮件至e-contract@tencent.com与我们联系；
5. THIRD - 第三方 (暂不支持)
6. OFFLINE - 线下人工审核
                     * @return VerifyChannel 签名后校验方式：
1. WEIXINAPP - 微信小程序；
2. FACEID - 慧眼 (默认) ；
3. VERIFYCODE - 验证码；
4. NONE - 无。此选项为白名单参数，暂不支持公开调用。如需开通权限，请通过客户经理或邮件至e-contract@tencent.com与我们联系；
5. THIRD - 第三方 (暂不支持)
6. OFFLINE - 线下人工审核
                     * 
                     */
                    std::vector<std::string> GetVerifyChannel() const;

                    /**
                     * 设置签名后校验方式：
1. WEIXINAPP - 微信小程序；
2. FACEID - 慧眼 (默认) ；
3. VERIFYCODE - 验证码；
4. NONE - 无。此选项为白名单参数，暂不支持公开调用。如需开通权限，请通过客户经理或邮件至e-contract@tencent.com与我们联系；
5. THIRD - 第三方 (暂不支持)
6. OFFLINE - 线下人工审核
                     * @param _verifyChannel 签名后校验方式：
1. WEIXINAPP - 微信小程序；
2. FACEID - 慧眼 (默认) ；
3. VERIFYCODE - 验证码；
4. NONE - 无。此选项为白名单参数，暂不支持公开调用。如需开通权限，请通过客户经理或邮件至e-contract@tencent.com与我们联系；
5. THIRD - 第三方 (暂不支持)
6. OFFLINE - 线下人工审核
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
                     * 获取签署链接失效截止时间，默认为7天
                     * @return Deadline 签署链接失效截止时间，默认为7天
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署链接失效截止时间，默认为7天
                     * @param _deadline 签署链接失效截止时间，默认为7天
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
                     * 获取是否为最后一个签署人。若为最后一人，本次签署完成以后自动归档
                     * @return IsLastApprover 是否为最后一个签署人。若为最后一人，本次签署完成以后自动归档
                     * 
                     */
                    bool GetIsLastApprover() const;

                    /**
                     * 设置是否为最后一个签署人。若为最后一人，本次签署完成以后自动归档
                     * @param _isLastApprover 是否为最后一个签署人。若为最后一人，本次签署完成以后自动归档
                     * 
                     */
                    void SetIsLastApprover(const bool& _isLastApprover);

                    /**
                     * 判断参数 IsLastApprover 是否已赋值
                     * @return IsLastApprover 是否已赋值
                     * 
                     */
                    bool IsLastApproverHasBeenSet() const;

                    /**
                     * 获取签署完成后，前端跳转的url
                     * @return JumpUrl 签署完成后，前端跳转的url
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置签署完成后，前端跳转的url
                     * @param _jumpUrl 签署完成后，前端跳转的url
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
                     * 获取短信模板
默认使用腾讯电子签官方短信模板，如有自定义需求，请通过客户经理或邮件至e-contract@tencent.com与我们联系。
                     * @return SmsTemplate 短信模板
默认使用腾讯电子签官方短信模板，如有自定义需求，请通过客户经理或邮件至e-contract@tencent.com与我们联系。
                     * 
                     */
                    SmsTemplate GetSmsTemplate() const;

                    /**
                     * 设置短信模板
默认使用腾讯电子签官方短信模板，如有自定义需求，请通过客户经理或邮件至e-contract@tencent.com与我们联系。
                     * @param _smsTemplate 短信模板
默认使用腾讯电子签官方短信模板，如有自定义需求，请通过客户经理或邮件至e-contract@tencent.com与我们联系。
                     * 
                     */
                    void SetSmsTemplate(const SmsTemplate& _smsTemplate);

                    /**
                     * 判断参数 SmsTemplate 是否已赋值
                     * @return SmsTemplate 是否已赋值
                     * 
                     */
                    bool SmsTemplateHasBeenSet() const;

                    /**
                     * 获取签署前置条件：是否要全文阅读，默认否
                     * @return IsFullText 签署前置条件：是否要全文阅读，默认否
                     * 
                     */
                    bool GetIsFullText() const;

                    /**
                     * 设置签署前置条件：是否要全文阅读，默认否
                     * @param _isFullText 签署前置条件：是否要全文阅读，默认否
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
                     * 获取签署前置条件：强制用户阅读待签署文件时长，默认不限制
                     * @return PreReadTime 签署前置条件：强制用户阅读待签署文件时长，默认不限制
                     * 
                     */
                    int64_t GetPreReadTime() const;

                    /**
                     * 设置签署前置条件：强制用户阅读待签署文件时长，默认不限制
                     * @param _preReadTime 签署前置条件：强制用户阅读待签署文件时长，默认不限制
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
                     * 获取当前参与者是否支持线下核身,默认为不支持
                     * @return CanOffLine 当前参与者是否支持线下核身,默认为不支持
                     * 
                     */
                    bool GetCanOffLine() const;

                    /**
                     * 设置当前参与者是否支持线下核身,默认为不支持
                     * @param _canOffLine 当前参与者是否支持线下核身,默认为不支持
                     * 
                     */
                    void SetCanOffLine(const bool& _canOffLine);

                    /**
                     * 判断参数 CanOffLine 是否已赋值
                     * @return CanOffLine 是否已赋值
                     * 
                     */
                    bool CanOffLineHasBeenSet() const;

                    /**
                     * 获取签署任务的回调地址
                     * @return CallbackUrl 签署任务的回调地址
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置签署任务的回调地址
                     * @param _callbackUrl 签署任务的回调地址
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 需要推送合同的流程ID
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 签署人ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 签署控件信息 (支持添加多个控件)
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * 签署人手机号 (如果选择短信验证码签署，则此字段必填)
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 签署人对应的子机构ID，个人签署者此字段不填
                     */
                    std::string m_subOrganizationId;
                    bool m_subOrganizationIdHasBeenSet;

                    /**
                     * 签名后校验方式：
1. WEIXINAPP - 微信小程序；
2. FACEID - 慧眼 (默认) ；
3. VERIFYCODE - 验证码；
4. NONE - 无。此选项为白名单参数，暂不支持公开调用。如需开通权限，请通过客户经理或邮件至e-contract@tencent.com与我们联系；
5. THIRD - 第三方 (暂不支持)
6. OFFLINE - 线下人工审核
                     */
                    std::vector<std::string> m_verifyChannel;
                    bool m_verifyChannelHasBeenSet;

                    /**
                     * 签署链接失效截止时间，默认为7天
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 是否为最后一个签署人。若为最后一人，本次签署完成以后自动归档
                     */
                    bool m_isLastApprover;
                    bool m_isLastApproverHasBeenSet;

                    /**
                     * 签署完成后，前端跳转的url
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 短信模板
默认使用腾讯电子签官方短信模板，如有自定义需求，请通过客户经理或邮件至e-contract@tencent.com与我们联系。
                     */
                    SmsTemplate m_smsTemplate;
                    bool m_smsTemplateHasBeenSet;

                    /**
                     * 签署前置条件：是否要全文阅读，默认否
                     */
                    bool m_isFullText;
                    bool m_isFullTextHasBeenSet;

                    /**
                     * 签署前置条件：强制用户阅读待签署文件时长，默认不限制
                     */
                    int64_t m_preReadTime;
                    bool m_preReadTimeHasBeenSet;

                    /**
                     * 当前参与者是否支持线下核身,默认为不支持
                     */
                    bool m_canOffLine;
                    bool m_canOffLineHasBeenSet;

                    /**
                     * 签署任务的回调地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SENDFLOWURLREQUEST_H_
