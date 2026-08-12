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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_SECURITYVERIFICATIONEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_SECURITYVERIFICATIONEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Result.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 安全验证事件详情
                */
                class SecurityVerificationEvent : public AbstractModel
                {
                public:
                    SecurityVerificationEvent();
                    ~SecurityVerificationEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>安全验证所处的事件类型</p><p>枚举值：</p><ul><li>register： 注册</li><li>login： 登录</li><li>modify_account： 修改账号</li><li>modify_password： 修改密码</li><li>create_order： 创建订单</li><li>transaction： 交易支付</li><li>modify_order： 修改订单</li><li>withdraw： 提现</li><li>add_promotion： 参加营销活动</li><li>redeem： 兑奖</li></ul>
                     * @return VerificationEvent <p>安全验证所处的事件类型</p><p>枚举值：</p><ul><li>register： 注册</li><li>login： 登录</li><li>modify_account： 修改账号</li><li>modify_password： 修改密码</li><li>create_order： 创建订单</li><li>transaction： 交易支付</li><li>modify_order： 修改订单</li><li>withdraw： 提现</li><li>add_promotion： 参加营销活动</li><li>redeem： 兑奖</li></ul>
                     * 
                     */
                    std::string GetVerificationEvent() const;

                    /**
                     * 设置<p>安全验证所处的事件类型</p><p>枚举值：</p><ul><li>register： 注册</li><li>login： 登录</li><li>modify_account： 修改账号</li><li>modify_password： 修改密码</li><li>create_order： 创建订单</li><li>transaction： 交易支付</li><li>modify_order： 修改订单</li><li>withdraw： 提现</li><li>add_promotion： 参加营销活动</li><li>redeem： 兑奖</li></ul>
                     * @param _verificationEvent <p>安全验证所处的事件类型</p><p>枚举值：</p><ul><li>register： 注册</li><li>login： 登录</li><li>modify_account： 修改账号</li><li>modify_password： 修改密码</li><li>create_order： 创建订单</li><li>transaction： 交易支付</li><li>modify_order： 修改订单</li><li>withdraw： 提现</li><li>add_promotion： 参加营销活动</li><li>redeem： 兑奖</li></ul>
                     * 
                     */
                    void SetVerificationEvent(const std::string& _verificationEvent);

                    /**
                     * 判断参数 VerificationEvent 是否已赋值
                     * @return VerificationEvent 是否已赋值
                     * 
                     */
                    bool VerificationEventHasBeenSet() const;

                    /**
                     * 获取<p>安全验证类型，sms-短信、phone_call-电话、email-邮件、captcha-验证码、shared_knowledge-共享知识、face-人脸、fingerprint-指纹等</p>
                     * @return VerificationType <p>安全验证类型，sms-短信、phone_call-电话、email-邮件、captcha-验证码、shared_knowledge-共享知识、face-人脸、fingerprint-指纹等</p>
                     * 
                     */
                    std::string GetVerificationType() const;

                    /**
                     * 设置<p>安全验证类型，sms-短信、phone_call-电话、email-邮件、captcha-验证码、shared_knowledge-共享知识、face-人脸、fingerprint-指纹等</p>
                     * @param _verificationType <p>安全验证类型，sms-短信、phone_call-电话、email-邮件、captcha-验证码、shared_knowledge-共享知识、face-人脸、fingerprint-指纹等</p>
                     * 
                     */
                    void SetVerificationType(const std::string& _verificationType);

                    /**
                     * 判断参数 VerificationType 是否已赋值
                     * @return VerificationType 是否已赋值
                     * 
                     */
                    bool VerificationTypeHasBeenSet() const;

                    /**
                     * 获取<p>安全验证的内容，例如：用于验证的电话号码、邮件、验证码或者问题，当安全验证类型是sms、phone_call、email、captcha、shared_knowledge时输入</p>
                     * @return VerificationContent <p>安全验证的内容，例如：用于验证的电话号码、邮件、验证码或者问题，当安全验证类型是sms、phone_call、email、captcha、shared_knowledge时输入</p>
                     * 
                     */
                    std::string GetVerificationContent() const;

                    /**
                     * 设置<p>安全验证的内容，例如：用于验证的电话号码、邮件、验证码或者问题，当安全验证类型是sms、phone_call、email、captcha、shared_knowledge时输入</p>
                     * @param _verificationContent <p>安全验证的内容，例如：用于验证的电话号码、邮件、验证码或者问题，当安全验证类型是sms、phone_call、email、captcha、shared_knowledge时输入</p>
                     * 
                     */
                    void SetVerificationContent(const std::string& _verificationContent);

                    /**
                     * 判断参数 VerificationContent 是否已赋值
                     * @return VerificationContent 是否已赋值
                     * 
                     */
                    bool VerificationContentHasBeenSet() const;

                    /**
                     * 获取<p>安全验证结果</p>
                     * @return VerificationResult <p>安全验证结果</p>
                     * 
                     */
                    Result GetVerificationResult() const;

                    /**
                     * 设置<p>安全验证结果</p>
                     * @param _verificationResult <p>安全验证结果</p>
                     * 
                     */
                    void SetVerificationResult(const Result& _verificationResult);

                    /**
                     * 判断参数 VerificationResult 是否已赋值
                     * @return VerificationResult 是否已赋值
                     * 
                     */
                    bool VerificationResultHasBeenSet() const;

                    /**
                     * 获取<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @return Cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @param _cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>安全验证所处的事件类型</p><p>枚举值：</p><ul><li>register： 注册</li><li>login： 登录</li><li>modify_account： 修改账号</li><li>modify_password： 修改密码</li><li>create_order： 创建订单</li><li>transaction： 交易支付</li><li>modify_order： 修改订单</li><li>withdraw： 提现</li><li>add_promotion： 参加营销活动</li><li>redeem： 兑奖</li></ul>
                     */
                    std::string m_verificationEvent;
                    bool m_verificationEventHasBeenSet;

                    /**
                     * <p>安全验证类型，sms-短信、phone_call-电话、email-邮件、captcha-验证码、shared_knowledge-共享知识、face-人脸、fingerprint-指纹等</p>
                     */
                    std::string m_verificationType;
                    bool m_verificationTypeHasBeenSet;

                    /**
                     * <p>安全验证的内容，例如：用于验证的电话号码、邮件、验证码或者问题，当安全验证类型是sms、phone_call、email、captcha、shared_knowledge时输入</p>
                     */
                    std::string m_verificationContent;
                    bool m_verificationContentHasBeenSet;

                    /**
                     * <p>安全验证结果</p>
                     */
                    Result m_verificationResult;
                    bool m_verificationResultHasBeenSet;

                    /**
                     * <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_SECURITYVERIFICATIONEVENT_H_
