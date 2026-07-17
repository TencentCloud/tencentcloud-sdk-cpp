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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEVPCACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEVPCACRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * RemoveVpcAcRule请求参数结构体
                */
                class RemoveVpcAcRuleRequest : public AbstractModel
                {
                public:
                    RemoveVpcAcRuleRequest();
                    ~RemoveVpcAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则的uuid列表，可通过查询规则列表获取，注意：如果传入的是[-1]将删除所有规则</p>
                     * @return RuleUuids <p>规则的uuid列表，可通过查询规则列表获取，注意：如果传入的是[-1]将删除所有规则</p>
                     * 
                     */
                    std::vector<int64_t> GetRuleUuids() const;

                    /**
                     * 设置<p>规则的uuid列表，可通过查询规则列表获取，注意：如果传入的是[-1]将删除所有规则</p>
                     * @param _ruleUuids <p>规则的uuid列表，可通过查询规则列表获取，注意：如果传入的是[-1]将删除所有规则</p>
                     * 
                     */
                    void SetRuleUuids(const std::vector<int64_t>& _ruleUuids);

                    /**
                     * 判断参数 RuleUuids 是否已赋值
                     * @return RuleUuids 是否已赋值
                     * 
                     */
                    bool RuleUuidsHasBeenSet() const;

                    /**
                     * 获取<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * @return CfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * 
                     */
                    std::string GetCfwAiAgentOperationSource() const;

                    /**
                     * 设置<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * @param _cfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * 
                     */
                    void SetCfwAiAgentOperationSource(const std::string& _cfwAiAgentOperationSource);

                    /**
                     * 判断参数 CfwAiAgentOperationSource 是否已赋值
                     * @return CfwAiAgentOperationSource 是否已赋值
                     * 
                     */
                    bool CfwAiAgentOperationSourceHasBeenSet() const;

                    /**
                     * 获取<p>仅当RuleUuids为-1时有效；0：删除Ipv4规则，1：删除Ipv6规则；默认为Ipv4类型规则</p>
                     * @return IpVersion <p>仅当RuleUuids为-1时有效；0：删除Ipv4规则，1：删除Ipv6规则；默认为Ipv4类型规则</p>
                     * 
                     */
                    uint64_t GetIpVersion() const;

                    /**
                     * 设置<p>仅当RuleUuids为-1时有效；0：删除Ipv4规则，1：删除Ipv6规则；默认为Ipv4类型规则</p>
                     * @param _ipVersion <p>仅当RuleUuids为-1时有效；0：删除Ipv4规则，1：删除Ipv6规则；默认为Ipv4类型规则</p>
                     * 
                     */
                    void SetIpVersion(const uint64_t& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                private:

                    /**
                     * <p>规则的uuid列表，可通过查询规则列表获取，注意：如果传入的是[-1]将删除所有规则</p>
                     */
                    std::vector<int64_t> m_ruleUuids;
                    bool m_ruleUuidsHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * <p>仅当RuleUuids为-1时有效；0：删除Ipv4规则，1：删除Ipv6规则；默认为Ipv4类型规则</p>
                     */
                    uint64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEVPCACRULEREQUEST_H_
