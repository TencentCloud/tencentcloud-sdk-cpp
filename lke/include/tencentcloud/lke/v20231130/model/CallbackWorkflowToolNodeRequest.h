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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CALLBACKWORKFLOWTOOLNODEREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CALLBACKWORKFLOWTOOLNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CallbackWorkflowToolNode请求参数结构体
                */
                class CallbackWorkflowToolNodeRequest : public AbstractModel
                {
                public:
                    CallbackWorkflowToolNodeRequest();
                    ~CallbackWorkflowToolNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ADP调用外部API时,通过HTTP Header(X-ADP-Callback-Token)传递回调CallbackToken
                     * @return CallbackToken ADP调用外部API时,通过HTTP Header(X-ADP-Callback-Token)传递回调CallbackToken
                     * 
                     */
                    std::string GetCallbackToken() const;

                    /**
                     * 设置ADP调用外部API时,通过HTTP Header(X-ADP-Callback-Token)传递回调CallbackToken
                     * @param _callbackToken ADP调用外部API时,通过HTTP Header(X-ADP-Callback-Token)传递回调CallbackToken
                     * 
                     */
                    void SetCallbackToken(const std::string& _callbackToken);

                    /**
                     * 判断参数 CallbackToken 是否已赋值
                     * @return CallbackToken 是否已赋值
                     * 
                     */
                    bool CallbackTokenHasBeenSet() const;

                    /**
                     * 获取回调结果,可选,为JSON字符串
                     * @return Result 回调结果,可选,为JSON字符串
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置回调结果,可选,为JSON字符串
                     * @param _result 回调结果,可选,为JSON字符串
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取登录用户主账号(集成商模式必填)
                     * @return LoginUin 登录用户主账号(集成商模式必填)
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置登录用户主账号(集成商模式必填)
                     * @param _loginUin 登录用户主账号(集成商模式必填)
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取登录用户子账号(集成商模式必填)
                     * @return LoginSubAccountUin 登录用户子账号(集成商模式必填)
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置登录用户子账号(集成商模式必填)
                     * @param _loginSubAccountUin 登录用户子账号(集成商模式必填)
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return AppBizId 应用ID
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置应用ID
                     * @param _appBizId 应用ID
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                private:

                    /**
                     * ADP调用外部API时,通过HTTP Header(X-ADP-Callback-Token)传递回调CallbackToken
                     */
                    std::string m_callbackToken;
                    bool m_callbackTokenHasBeenSet;

                    /**
                     * 回调结果,可选,为JSON字符串
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 登录用户主账号(集成商模式必填)
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * 登录用户子账号(集成商模式必填)
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CALLBACKWORKFLOWTOOLNODEREQUEST_H_
