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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKVERIFYCODEMATCHFLOWIDREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKVERIFYCODEMATCHFLOWIDREQUEST_H_

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
                * CheckVerifyCodeMatchFlowId请求参数结构体
                */
                class CheckVerifyCodeMatchFlowIdRequest : public AbstractModel
                {
                public:
                    CheckVerifyCodeMatchFlowIdRequest();
                    ~CheckVerifyCodeMatchFlowIdRequest() = default;
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
                     * 获取验证码
                     * @return VerifyCode 验证码
                     * 
                     */
                    std::string GetVerifyCode() const;

                    /**
                     * 设置验证码
                     * @param _verifyCode 验证码
                     * 
                     */
                    void SetVerifyCode(const std::string& _verifyCode);

                    /**
                     * 判断参数 VerifyCode 是否已赋值
                     * @return VerifyCode 是否已赋值
                     * 
                     */
                    bool VerifyCodeHasBeenSet() const;

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
                     * 验证码
                     */
                    std::string m_verifyCode;
                    bool m_verifyCodeHasBeenSet;

                    /**
                     * 流程(目录) id
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKVERIFYCODEMATCHFLOWIDREQUEST_H_
