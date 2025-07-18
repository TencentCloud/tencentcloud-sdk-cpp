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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYFIREWALLRULESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYFIREWALLRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/FirewallRule.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyFirewallRules请求参数结构体
                */
                class ModifyFirewallRulesRequest : public AbstractModel
                {
                public:
                    ModifyFirewallRulesRequest();
                    ~ModifyFirewallRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。实例的ID可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     * @return InstanceId 实例 ID。实例的ID可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。实例的ID可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     * @param _instanceId 实例 ID。实例的ID可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
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
                     * 获取防火墙规则列表。列表长度最大值是100。
                     * @return FirewallRules 防火墙规则列表。列表长度最大值是100。
                     * 
                     */
                    std::vector<FirewallRule> GetFirewallRules() const;

                    /**
                     * 设置防火墙规则列表。列表长度最大值是100。
                     * @param _firewallRules 防火墙规则列表。列表长度最大值是100。
                     * 
                     */
                    void SetFirewallRules(const std::vector<FirewallRule>& _firewallRules);

                    /**
                     * 判断参数 FirewallRules 是否已赋值
                     * @return FirewallRules 是否已赋值
                     * 
                     */
                    bool FirewallRulesHasBeenSet() const;

                    /**
                     * 获取防火墙当前版本。用户每次更新防火墙规则时版本会自动加1，防止规则已过期，不填不考虑冲突。
                     * @return FirewallVersion 防火墙当前版本。用户每次更新防火墙规则时版本会自动加1，防止规则已过期，不填不考虑冲突。
                     * 
                     */
                    uint64_t GetFirewallVersion() const;

                    /**
                     * 设置防火墙当前版本。用户每次更新防火墙规则时版本会自动加1，防止规则已过期，不填不考虑冲突。
                     * @param _firewallVersion 防火墙当前版本。用户每次更新防火墙规则时版本会自动加1，防止规则已过期，不填不考虑冲突。
                     * 
                     */
                    void SetFirewallVersion(const uint64_t& _firewallVersion);

                    /**
                     * 判断参数 FirewallVersion 是否已赋值
                     * @return FirewallVersion 是否已赋值
                     * 
                     */
                    bool FirewallVersionHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。实例的ID可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 防火墙规则列表。列表长度最大值是100。
                     */
                    std::vector<FirewallRule> m_firewallRules;
                    bool m_firewallRulesHasBeenSet;

                    /**
                     * 防火墙当前版本。用户每次更新防火墙规则时版本会自动加1，防止规则已过期，不填不考虑冲突。
                     */
                    uint64_t m_firewallVersion;
                    bool m_firewallVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYFIREWALLRULESREQUEST_H_
