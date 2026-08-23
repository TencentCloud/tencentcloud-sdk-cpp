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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEPASSWORDPOLICYREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEPASSWORDPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/PasswordPolicy.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstancePasswordPolicy请求参数结构体
                */
                class ModifyInstancePasswordPolicyRequest : public AbstractModel
                {
                public:
                    ModifyInstancePasswordPolicyRequest();
                    ~ModifyInstancePasswordPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/redis">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/redis">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/redis">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/redis">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例的密码复杂度策略控制对象，包含密码长度及各类字符（字母/数字/特殊符号）最小数量的校验指标。</p>
                     * @return PasswordPolicy <p>实例的密码复杂度策略控制对象，包含密码长度及各类字符（字母/数字/特殊符号）最小数量的校验指标。</p>
                     * 
                     */
                    PasswordPolicy GetPasswordPolicy() const;

                    /**
                     * 设置<p>实例的密码复杂度策略控制对象，包含密码长度及各类字符（字母/数字/特殊符号）最小数量的校验指标。</p>
                     * @param _passwordPolicy <p>实例的密码复杂度策略控制对象，包含密码长度及各类字符（字母/数字/特殊符号）最小数量的校验指标。</p>
                     * 
                     */
                    void SetPasswordPolicy(const PasswordPolicy& _passwordPolicy);

                    /**
                     * 判断参数 PasswordPolicy 是否已赋值
                     * @return PasswordPolicy 是否已赋值
                     * 
                     */
                    bool PasswordPolicyHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/redis">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例的密码复杂度策略控制对象，包含密码长度及各类字符（字母/数字/特殊符号）最小数量的校验指标。</p>
                     */
                    PasswordPolicy m_passwordPolicy;
                    bool m_passwordPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEPASSWORDPOLICYREQUEST_H_
