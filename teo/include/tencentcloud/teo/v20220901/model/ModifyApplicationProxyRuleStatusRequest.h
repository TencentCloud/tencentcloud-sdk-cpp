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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYRULESTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYRULESTATUSREQUEST_H_

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
                * ModifyApplicationProxyRuleStatus请求参数结构体
                */
                class ModifyApplicationProxyRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyApplicationProxyRuleStatusRequest();
                    ~ModifyApplicationProxyRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param _zoneId 站点ID。
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
                     * 获取代理ID。
                     * @return ProxyId 代理ID。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置代理ID。
                     * @param _proxyId 代理ID。
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
                     * 获取规则ID。
                     * @return RuleId 规则ID。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID。
                     * @param _ruleId 规则ID。
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取状态，取值有：
<li>offline: 停用；</li>
<li>online: 启用。</li>
                     * @return Status 状态，取值有：
<li>offline: 停用；</li>
<li>online: 启用。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，取值有：
<li>offline: 停用；</li>
<li>online: 启用。</li>
                     * @param _status 状态，取值有：
<li>offline: 停用；</li>
<li>online: 启用。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 代理ID。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 规则ID。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 状态，取值有：
<li>offline: 停用；</li>
<li>online: 启用。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYRULESTATUSREQUEST_H_
