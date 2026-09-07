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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_LOGINEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_LOGINEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/User.h>
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
                * 登录事件详情
                */
                class LoginEvent : public AbstractModel
                {
                public:
                    LoginEvent();
                    ~LoginEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户基础信息</p>
                     * @return UserInfo <p>用户基础信息</p>
                     * 
                     */
                    User GetUserInfo() const;

                    /**
                     * 设置<p>用户基础信息</p>
                     * @param _userInfo <p>用户基础信息</p>
                     * 
                     */
                    void SetUserInfo(const User& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取<p>用户登录时输入的用户名</p>
                     * @return UserLoginName <p>用户登录时输入的用户名</p>
                     * 
                     */
                    std::string GetUserLoginName() const;

                    /**
                     * 设置<p>用户登录时输入的用户名</p>
                     * @param _userLoginName <p>用户登录时输入的用户名</p>
                     * 
                     */
                    void SetUserLoginName(const std::string& _userLoginName);

                    /**
                     * 判断参数 UserLoginName 是否已赋值
                     * @return UserLoginName 是否已赋值
                     * 
                     */
                    bool UserLoginNameHasBeenSet() const;

                    /**
                     * 获取<p>登录结果</p>
                     * @return LoginResult <p>登录结果</p>
                     * 
                     */
                    Result GetLoginResult() const;

                    /**
                     * 设置<p>登录结果</p>
                     * @param _loginResult <p>登录结果</p>
                     * 
                     */
                    void SetLoginResult(const Result& _loginResult);

                    /**
                     * 判断参数 LoginResult 是否已赋值
                     * @return LoginResult 是否已赋值
                     * 
                     */
                    bool LoginResultHasBeenSet() const;

                    /**
                     * 获取<p>用户注册时间。</p><p>参数格式：要求符合ISO 8601标准的带时区的毫秒级时间，格式&quot;YYYY-MM-DDTHH:mm:ss.sssZ&quot; ，例如&quot;2025-10-19T09:11:10.145+08:00&quot;</p>
                     * @return RegisterTime <p>用户注册时间。</p><p>参数格式：要求符合ISO 8601标准的带时区的毫秒级时间，格式&quot;YYYY-MM-DDTHH:mm:ss.sssZ&quot; ，例如&quot;2025-10-19T09:11:10.145+08:00&quot;</p>
                     * 
                     */
                    std::string GetRegisterTime() const;

                    /**
                     * 设置<p>用户注册时间。</p><p>参数格式：要求符合ISO 8601标准的带时区的毫秒级时间，格式&quot;YYYY-MM-DDTHH:mm:ss.sssZ&quot; ，例如&quot;2025-10-19T09:11:10.145+08:00&quot;</p>
                     * @param _registerTime <p>用户注册时间。</p><p>参数格式：要求符合ISO 8601标准的带时区的毫秒级时间，格式&quot;YYYY-MM-DDTHH:mm:ss.sssZ&quot; ，例如&quot;2025-10-19T09:11:10.145+08:00&quot;</p>
                     * 
                     */
                    void SetRegisterTime(const std::string& _registerTime);

                    /**
                     * 判断参数 RegisterTime 是否已赋值
                     * @return RegisterTime 是否已赋值
                     * 
                     */
                    bool RegisterTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否付费用户。</p><p>枚举值：</p><ul><li>true： 付费用户</li><li>false： 非付费用户</li></ul>
                     * @return IsPaidUser <p>是否付费用户。</p><p>枚举值：</p><ul><li>true： 付费用户</li><li>false： 非付费用户</li></ul>
                     * 
                     */
                    bool GetIsPaidUser() const;

                    /**
                     * 设置<p>是否付费用户。</p><p>枚举值：</p><ul><li>true： 付费用户</li><li>false： 非付费用户</li></ul>
                     * @param _isPaidUser <p>是否付费用户。</p><p>枚举值：</p><ul><li>true： 付费用户</li><li>false： 非付费用户</li></ul>
                     * 
                     */
                    void SetIsPaidUser(const bool& _isPaidUser);

                    /**
                     * 判断参数 IsPaidUser 是否已赋值
                     * @return IsPaidUser 是否已赋值
                     * 
                     */
                    bool IsPaidUserHasBeenSet() const;

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
                     * <p>用户基础信息</p>
                     */
                    User m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * <p>用户登录时输入的用户名</p>
                     */
                    std::string m_userLoginName;
                    bool m_userLoginNameHasBeenSet;

                    /**
                     * <p>登录结果</p>
                     */
                    Result m_loginResult;
                    bool m_loginResultHasBeenSet;

                    /**
                     * <p>用户注册时间。</p><p>参数格式：要求符合ISO 8601标准的带时区的毫秒级时间，格式&quot;YYYY-MM-DDTHH:mm:ss.sssZ&quot; ，例如&quot;2025-10-19T09:11:10.145+08:00&quot;</p>
                     */
                    std::string m_registerTime;
                    bool m_registerTimeHasBeenSet;

                    /**
                     * <p>是否付费用户。</p><p>枚举值：</p><ul><li>true： 付费用户</li><li>false： 非付费用户</li></ul>
                     */
                    bool m_isPaidUser;
                    bool m_isPaidUserHasBeenSet;

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

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_LOGINEVENT_H_
