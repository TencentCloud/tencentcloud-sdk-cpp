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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_REJECTFLOWREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_REJECTFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * RejectFlow请求参数结构体
                */
                class RejectFlowRequest : public AbstractModel
                {
                public:
                    RejectFlowRequest();
                    ~RejectFlowRequest() = default;
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
                     * 获取流程编号
                     * @return FlowId 流程编号
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流程编号
                     * @param _flowId 流程编号
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
                     * 获取意愿确认票据。
1. VerifyChannel 为 WEIXINAPP，使用响应的VerifyResult；
2. VerifyChannel 为 FACEID时，使用OrderNo；
3. VerifyChannel 为 VERIFYCODE，使用短信验证码
4. VerifyChannel 为 NONE，传空值
（注：普通情况下，VerifyResult不能为None，如您不希望腾讯电子签对用户签署意愿做校验，请提前与客户经理或邮件至e-contract@tencent.com与我们联系）
                     * @return VerifyResult 意愿确认票据。
1. VerifyChannel 为 WEIXINAPP，使用响应的VerifyResult；
2. VerifyChannel 为 FACEID时，使用OrderNo；
3. VerifyChannel 为 VERIFYCODE，使用短信验证码
4. VerifyChannel 为 NONE，传空值
（注：普通情况下，VerifyResult不能为None，如您不希望腾讯电子签对用户签署意愿做校验，请提前与客户经理或邮件至e-contract@tencent.com与我们联系）
                     * 
                     */
                    std::string GetVerifyResult() const;

                    /**
                     * 设置意愿确认票据。
1. VerifyChannel 为 WEIXINAPP，使用响应的VerifyResult；
2. VerifyChannel 为 FACEID时，使用OrderNo；
3. VerifyChannel 为 VERIFYCODE，使用短信验证码
4. VerifyChannel 为 NONE，传空值
（注：普通情况下，VerifyResult不能为None，如您不希望腾讯电子签对用户签署意愿做校验，请提前与客户经理或邮件至e-contract@tencent.com与我们联系）
                     * @param _verifyResult 意愿确认票据。
1. VerifyChannel 为 WEIXINAPP，使用响应的VerifyResult；
2. VerifyChannel 为 FACEID时，使用OrderNo；
3. VerifyChannel 为 VERIFYCODE，使用短信验证码
4. VerifyChannel 为 NONE，传空值
（注：普通情况下，VerifyResult不能为None，如您不希望腾讯电子签对用户签署意愿做校验，请提前与客户经理或邮件至e-contract@tencent.com与我们联系）
                     * 
                     */
                    void SetVerifyResult(const std::string& _verifyResult);

                    /**
                     * 判断参数 VerifyResult 是否已赋值
                     * @return VerifyResult 是否已赋值
                     * 
                     */
                    bool VerifyResultHasBeenSet() const;

                    /**
                     * 获取意愿确认渠道：
1. WEIXINAPP - 微信小程序
2. FACEID - 慧眼 (默认) 
3. VERIFYCODE - 验证码
4. THIRD - 第三方 (暂不支持)
5. NONE - 无需电子签系统验证
（注：普通情况下，VerifyChannel不能为None，如您不希望腾讯电子签对用户签署意愿做校验，请提前与客户经理或邮件至e-contract@tencent.com与我们联系）
                     * @return VerifyChannel 意愿确认渠道：
1. WEIXINAPP - 微信小程序
2. FACEID - 慧眼 (默认) 
3. VERIFYCODE - 验证码
4. THIRD - 第三方 (暂不支持)
5. NONE - 无需电子签系统验证
（注：普通情况下，VerifyChannel不能为None，如您不希望腾讯电子签对用户签署意愿做校验，请提前与客户经理或邮件至e-contract@tencent.com与我们联系）
                     * 
                     */
                    std::string GetVerifyChannel() const;

                    /**
                     * 设置意愿确认渠道：
1. WEIXINAPP - 微信小程序
2. FACEID - 慧眼 (默认) 
3. VERIFYCODE - 验证码
4. THIRD - 第三方 (暂不支持)
5. NONE - 无需电子签系统验证
（注：普通情况下，VerifyChannel不能为None，如您不希望腾讯电子签对用户签署意愿做校验，请提前与客户经理或邮件至e-contract@tencent.com与我们联系）
                     * @param _verifyChannel 意愿确认渠道：
1. WEIXINAPP - 微信小程序
2. FACEID - 慧眼 (默认) 
3. VERIFYCODE - 验证码
4. THIRD - 第三方 (暂不支持)
5. NONE - 无需电子签系统验证
（注：普通情况下，VerifyChannel不能为None，如您不希望腾讯电子签对用户签署意愿做校验，请提前与客户经理或邮件至e-contract@tencent.com与我们联系）
                     * 
                     */
                    void SetVerifyChannel(const std::string& _verifyChannel);

                    /**
                     * 判断参数 VerifyChannel 是否已赋值
                     * @return VerifyChannel 是否已赋值
                     * 
                     */
                    bool VerifyChannelHasBeenSet() const;

                    /**
                     * 获取客户端来源IP
                     * @return SourceIp 客户端来源IP
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置客户端来源IP
                     * @param _sourceIp 客户端来源IP
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取拒签原因
                     * @return RejectMessage 拒签原因
                     * 
                     */
                    std::string GetRejectMessage() const;

                    /**
                     * 设置拒签原因
                     * @param _rejectMessage 拒签原因
                     * 
                     */
                    void SetRejectMessage(const std::string& _rejectMessage);

                    /**
                     * 判断参数 RejectMessage 是否已赋值
                     * @return RejectMessage 是否已赋值
                     * 
                     */
                    bool RejectMessageHasBeenSet() const;

                    /**
                     * 获取签署参与者编号
                     * @return SignId 签署参与者编号
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置签署参与者编号
                     * @param _signId 签署参与者编号
                     * 
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 流程编号
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 意愿确认票据。
1. VerifyChannel 为 WEIXINAPP，使用响应的VerifyResult；
2. VerifyChannel 为 FACEID时，使用OrderNo；
3. VerifyChannel 为 VERIFYCODE，使用短信验证码
4. VerifyChannel 为 NONE，传空值
（注：普通情况下，VerifyResult不能为None，如您不希望腾讯电子签对用户签署意愿做校验，请提前与客户经理或邮件至e-contract@tencent.com与我们联系）
                     */
                    std::string m_verifyResult;
                    bool m_verifyResultHasBeenSet;

                    /**
                     * 意愿确认渠道：
1. WEIXINAPP - 微信小程序
2. FACEID - 慧眼 (默认) 
3. VERIFYCODE - 验证码
4. THIRD - 第三方 (暂不支持)
5. NONE - 无需电子签系统验证
（注：普通情况下，VerifyChannel不能为None，如您不希望腾讯电子签对用户签署意愿做校验，请提前与客户经理或邮件至e-contract@tencent.com与我们联系）
                     */
                    std::string m_verifyChannel;
                    bool m_verifyChannelHasBeenSet;

                    /**
                     * 客户端来源IP
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 拒签原因
                     */
                    std::string m_rejectMessage;
                    bool m_rejectMessageHasBeenSet;

                    /**
                     * 签署参与者编号
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_REJECTFLOWREQUEST_H_
