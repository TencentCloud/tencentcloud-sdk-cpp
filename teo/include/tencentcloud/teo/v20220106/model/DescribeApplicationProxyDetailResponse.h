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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEAPPLICATIONPROXYDETAILRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEAPPLICATIONPROXYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ApplicationProxyRule.h>
#include <tencentcloud/teo/v20220106/model/Ipv6Access.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeApplicationProxyDetail返回参数结构体
                */
                class DescribeApplicationProxyDetailResponse : public AbstractModel
                {
                public:
                    DescribeApplicationProxyDetailResponse();
                    ~DescribeApplicationProxyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return ProxyId 实例ID。
                     */
                    std::string GetProxyId() const;

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取当ProxyType=hostname时，表示域名或子域名；
当ProxyType=instance时，表示代理名称。
                     * @return ProxyName 当ProxyType=hostname时，表示域名或子域名；
当ProxyType=instance时，表示代理名称。
                     */
                    std::string GetProxyName() const;

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取调度模式，取值有：
<li>ip：表示Anycast IP调度；</li>
<li>domain：表示CNAME调度。</li>
                     * @return PlatType 调度模式，取值有：
<li>ip：表示Anycast IP调度；</li>
<li>domain：表示CNAME调度。</li>
                     */
                    std::string GetPlatType() const;

                    /**
                     * 判断参数 PlatType 是否已赋值
                     * @return PlatType 是否已赋值
                     */
                    bool PlatTypeHasBeenSet() const;

                    /**
                     * 获取是否开启安全，取值有：
<li>0：关闭安全；</li>
<li>1：开启安全。</li>
                     * @return SecurityType 是否开启安全，取值有：
<li>0：关闭安全；</li>
<li>1：开启安全。</li>
                     */
                    int64_t GetSecurityType() const;

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取是否开启加速，取值有：
<li>0：关闭加速；</li>
<li>1：开启加速。</li>
                     * @return AccelerateType 是否开启加速，取值有：
<li>0：关闭加速；</li>
<li>1：开启加速。</li>
                     */
                    int64_t GetAccelerateType() const;

                    /**
                     * 判断参数 AccelerateType 是否已赋值
                     * @return AccelerateType 是否已赋值
                     */
                    bool AccelerateTypeHasBeenSet() const;

                    /**
                     * 获取字段已经废弃。
                     * @return ForwardClientIp 字段已经废弃。
                     */
                    std::string GetForwardClientIp() const;

                    /**
                     * 判断参数 ForwardClientIp 是否已赋值
                     * @return ForwardClientIp 是否已赋值
                     */
                    bool ForwardClientIpHasBeenSet() const;

                    /**
                     * 获取字段已经废弃。
                     * @return SessionPersist 字段已经废弃。
                     */
                    bool GetSessionPersist() const;

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     */
                    bool SessionPersistHasBeenSet() const;

                    /**
                     * 获取规则列表。
                     * @return Rule 规则列表。
                     */
                    std::vector<ApplicationProxyRule> GetRule() const;

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取状态，取值有：
<li>online：启用；</li>
<li>offline：停用；</li>
<li>progress：部署中。</li>
                     * @return Status 状态，取值有：
<li>online：启用；</li>
<li>offline：停用；</li>
<li>progress：部署中。</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取调度信息。
                     * @return ScheduleValue 调度信息。
                     */
                    std::vector<std::string> GetScheduleValue() const;

                    /**
                     * 判断参数 ScheduleValue 是否已赋值
                     * @return ScheduleValue 是否已赋值
                     */
                    bool ScheduleValueHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdateTime 更新时间。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取站点名称。
                     * @return ZoneName 站点名称。
                     */
                    std::string GetZoneName() const;

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取会话保持时间。
                     * @return SessionPersistTime 会话保持时间。
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 判断参数 SessionPersistTime 是否已赋值
                     * @return SessionPersistTime 是否已赋值
                     */
                    bool SessionPersistTimeHasBeenSet() const;

                    /**
                     * 获取四层代理模式，取值有：
<li>hostname：表示子域名模式；</li>
<li>instance：表示实例模式。</li>
                     * @return ProxyType 四层代理模式，取值有：
<li>hostname：表示子域名模式；</li>
<li>instance：表示实例模式。</li>
                     */
                    std::string GetProxyType() const;

                    /**
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     */
                    bool ProxyTypeHasBeenSet() const;

                    /**
                     * 获取当ProxyType=hostname时：
表示代理加速唯一标识。
                     * @return HostId 当ProxyType=hostname时：
表示代理加速唯一标识。
                     */
                    std::string GetHostId() const;

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取IPv6访问配置。
                     * @return Ipv6 IPv6访问配置。
                     */
                    Ipv6Access GetIpv6() const;

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     */
                    bool Ipv6HasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 当ProxyType=hostname时，表示域名或子域名；
当ProxyType=instance时，表示代理名称。
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * 调度模式，取值有：
<li>ip：表示Anycast IP调度；</li>
<li>domain：表示CNAME调度。</li>
                     */
                    std::string m_platType;
                    bool m_platTypeHasBeenSet;

                    /**
                     * 是否开启安全，取值有：
<li>0：关闭安全；</li>
<li>1：开启安全。</li>
                     */
                    int64_t m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * 是否开启加速，取值有：
<li>0：关闭加速；</li>
<li>1：开启加速。</li>
                     */
                    int64_t m_accelerateType;
                    bool m_accelerateTypeHasBeenSet;

                    /**
                     * 字段已经废弃。
                     */
                    std::string m_forwardClientIp;
                    bool m_forwardClientIpHasBeenSet;

                    /**
                     * 字段已经废弃。
                     */
                    bool m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                    /**
                     * 规则列表。
                     */
                    std::vector<ApplicationProxyRule> m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 状态，取值有：
<li>online：启用；</li>
<li>offline：停用；</li>
<li>progress：部署中。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 调度信息。
                     */
                    std::vector<std::string> m_scheduleValue;
                    bool m_scheduleValueHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点名称。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 会话保持时间。
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * 四层代理模式，取值有：
<li>hostname：表示子域名模式；</li>
<li>instance：表示实例模式。</li>
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                    /**
                     * 当ProxyType=hostname时：
表示代理加速唯一标识。
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * IPv6访问配置。
                     */
                    Ipv6Access m_ipv6;
                    bool m_ipv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEAPPLICATIONPROXYDETAILRESPONSE_H_
