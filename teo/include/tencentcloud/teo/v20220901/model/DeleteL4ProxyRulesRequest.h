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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETEL4PROXYRULESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETEL4PROXYRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DeleteL4ProxyRules请求参数结构体
                */
                class DeleteL4ProxyRulesRequest : public AbstractModel
                {
                public:
                    DeleteL4ProxyRulesRequest();
                    ~DeleteL4ProxyRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取四层代理实例 ID。
                     * @return ProxyId 四层代理实例 ID。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置四层代理实例 ID。
                     * @param _proxyId 四层代理实例 ID。
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取转发规则 ID 列表。单次最多支持 200 条转发规则。
                     * @return RuleIds 转发规则 ID 列表。单次最多支持 200 条转发规则。
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置转发规则 ID 列表。单次最多支持 200 条转发规则。
                     * @param _ruleIds 转发规则 ID 列表。单次最多支持 200 条转发规则。
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 四层代理实例 ID。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 转发规则 ID 列表。单次最多支持 200 条转发规则。
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETEL4PROXYRULESREQUEST_H_
