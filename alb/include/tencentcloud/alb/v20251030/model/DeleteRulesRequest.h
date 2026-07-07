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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DELETERULESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DELETERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DeleteRules请求参数结构体
                */
                class DeleteRulesRequest : public AbstractModel
                {
                public:
                    DeleteRulesRequest();
                    ~DeleteRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * @return ListenerId 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * @param _listenerId 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * @return LoadBalancerId 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * @param _loadBalancerId 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取转发规则 ID 列表，ID 格式为 rule- 后接 8 位字母数字。
                     * @return RuleIds 转发规则 ID 列表，ID 格式为 rule- 后接 8 位字母数字。
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置转发规则 ID 列表，ID 格式为 rule- 后接 8 位字母数字。
                     * @param _ruleIds 转发规则 ID 列表，ID 格式为 rule- 后接 8 位字母数字。
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取是否只预检查此次请求。
                     * @return DryRun 是否只预检查此次请求。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否只预检查此次请求。
                     * @param _dryRun 是否只预检查此次请求。
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 转发规则 ID 列表，ID 格式为 rule- 后接 8 位字母数字。
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * 是否只预检查此次请求。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DELETERULESREQUEST_H_
