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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SENDSIGNINNERVERIFYCODEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SENDSIGNINNERVERIFYCODEREQUEST_H_

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
                * SendSignInnerVerifyCode请求参数结构体
                */
                class SendSignInnerVerifyCodeRequest : public AbstractModel
                {
                public:
                    SendSignInnerVerifyCodeRequest();
                    ~SendSignInnerVerifyCodeRequest() = default;
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
                     * 获取手机号
                     * @return Mobile 手机号
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置手机号
                     * @param _mobile 手机号
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
                     * 获取验证码类型，取值(SIGN)
                     * @return VerifyType 验证码类型，取值(SIGN)
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置验证码类型，取值(SIGN)
                     * @param _verifyType 验证码类型，取值(SIGN)
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取用户 id
                     * @return UserId 用户 id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户 id
                     * @param _userId 用户 id
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
                     * 获取模板 id
                     * @return VerifyTemplateId 模板 id
                     * 
                     */
                    std::string GetVerifyTemplateId() const;

                    /**
                     * 设置模板 id
                     * @param _verifyTemplateId 模板 id
                     * 
                     */
                    void SetVerifyTemplateId(const std::string& _verifyTemplateId);

                    /**
                     * 判断参数 VerifyTemplateId 是否已赋值
                     * @return VerifyTemplateId 是否已赋值
                     * 
                     */
                    bool VerifyTemplateIdHasBeenSet() const;

                    /**
                     * 获取签名
                     * @return VerifySign 签名
                     * 
                     */
                    std::string GetVerifySign() const;

                    /**
                     * 设置签名
                     * @param _verifySign 签名
                     * 
                     */
                    void SetVerifySign(const std::string& _verifySign);

                    /**
                     * 判断参数 VerifySign 是否已赋值
                     * @return VerifySign 是否已赋值
                     * 
                     */
                    bool VerifySignHasBeenSet() const;

                    /**
                     * 获取流程(目录) id
                     * @return FlowId 流程(目录) id
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流程(目录) id
                     * @param _flowId 流程(目录) id
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
                     * 获取三要素检测结果
                     * @return CheckThreeElementResult 三要素检测结果
                     * 
                     */
                    int64_t GetCheckThreeElementResult() const;

                    /**
                     * 设置三要素检测结果
                     * @param _checkThreeElementResult 三要素检测结果
                     * 
                     */
                    void SetCheckThreeElementResult(const int64_t& _checkThreeElementResult);

                    /**
                     * 判断参数 CheckThreeElementResult 是否已赋值
                     * @return CheckThreeElementResult 是否已赋值
                     * 
                     */
                    bool CheckThreeElementResultHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 验证码类型，取值(SIGN)
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * 用户 id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 模板 id
                     */
                    std::string m_verifyTemplateId;
                    bool m_verifyTemplateIdHasBeenSet;

                    /**
                     * 签名
                     */
                    std::string m_verifySign;
                    bool m_verifySignHasBeenSet;

                    /**
                     * 流程(目录) id
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 三要素检测结果
                     */
                    int64_t m_checkThreeElementResult;
                    bool m_checkThreeElementResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SENDSIGNINNERVERIFYCODEREQUEST_H_
