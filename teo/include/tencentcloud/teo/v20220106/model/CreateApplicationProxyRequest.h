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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATEAPPLICATIONPROXYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATEAPPLICATIONPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ApplicationProxyRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CreateApplicationProxy请求参数结构体
                */
                class CreateApplicationProxyRequest : public AbstractModel
                {
                public:
                    CreateApplicationProxyRequest();
                    ~CreateApplicationProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID
                     * @return ZoneId 站点ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID
                     * @param ZoneId 站点ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取站点名称
                     * @return ZoneName 站点名称
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称
                     * @param ZoneName 站点名称
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取代理名称
当ProxyType=hostname时，表示域名或者子域名
当ProxyType=instance时，表示实例名称
                     * @return ProxyName 代理名称
当ProxyType=hostname时，表示域名或者子域名
当ProxyType=instance时，表示实例名称
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置代理名称
当ProxyType=hostname时，表示域名或者子域名
当ProxyType=instance时，表示实例名称
                     * @param ProxyName 代理名称
当ProxyType=hostname时，表示域名或者子域名
当ProxyType=instance时，表示实例名称
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取调度模式：
ip表示Anycast IP
domain表示CNAME
                     * @return PlatType 调度模式：
ip表示Anycast IP
domain表示CNAME
                     */
                    std::string GetPlatType() const;

                    /**
                     * 设置调度模式：
ip表示Anycast IP
domain表示CNAME
                     * @param PlatType 调度模式：
ip表示Anycast IP
domain表示CNAME
                     */
                    void SetPlatType(const std::string& _platType);

                    /**
                     * 判断参数 PlatType 是否已赋值
                     * @return PlatType 是否已赋值
                     */
                    bool PlatTypeHasBeenSet() const;

                    /**
                     * 获取0关闭安全，1开启安全
                     * @return SecurityType 0关闭安全，1开启安全
                     */
                    int64_t GetSecurityType() const;

                    /**
                     * 设置0关闭安全，1开启安全
                     * @param SecurityType 0关闭安全，1开启安全
                     */
                    void SetSecurityType(const int64_t& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取0关闭加速，1开启加速
                     * @return AccelerateType 0关闭加速，1开启加速
                     */
                    int64_t GetAccelerateType() const;

                    /**
                     * 设置0关闭加速，1开启加速
                     * @param AccelerateType 0关闭加速，1开启加速
                     */
                    void SetAccelerateType(const int64_t& _accelerateType);

                    /**
                     * 判断参数 AccelerateType 是否已赋值
                     * @return AccelerateType 是否已赋值
                     */
                    bool AccelerateTypeHasBeenSet() const;

                    /**
                     * 获取字段已经移至Rule.ForwardClientIp
                     * @return ForwardClientIp 字段已经移至Rule.ForwardClientIp
                     */
                    std::string GetForwardClientIp() const;

                    /**
                     * 设置字段已经移至Rule.ForwardClientIp
                     * @param ForwardClientIp 字段已经移至Rule.ForwardClientIp
                     */
                    void SetForwardClientIp(const std::string& _forwardClientIp);

                    /**
                     * 判断参数 ForwardClientIp 是否已赋值
                     * @return ForwardClientIp 是否已赋值
                     */
                    bool ForwardClientIpHasBeenSet() const;

                    /**
                     * 获取字段已经移至Rule.SessionPersist
                     * @return SessionPersist 字段已经移至Rule.SessionPersist
                     */
                    bool GetSessionPersist() const;

                    /**
                     * 设置字段已经移至Rule.SessionPersist
                     * @param SessionPersist 字段已经移至Rule.SessionPersist
                     */
                    void SetSessionPersist(const bool& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     */
                    bool SessionPersistHasBeenSet() const;

                    /**
                     * 获取规则详细信息
                     * @return Rule 规则详细信息
                     */
                    std::vector<ApplicationProxyRule> GetRule() const;

                    /**
                     * 设置规则详细信息
                     * @param Rule 规则详细信息
                     */
                    void SetRule(const std::vector<ApplicationProxyRule>& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取会话保持时间，取值范围：30-3600，单位：秒
                     * @return SessionPersistTime 会话保持时间，取值范围：30-3600，单位：秒
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置会话保持时间，取值范围：30-3600，单位：秒
                     * @param SessionPersistTime 会话保持时间，取值范围：30-3600，单位：秒
                     */
                    void SetSessionPersistTime(const uint64_t& _sessionPersistTime);

                    /**
                     * 判断参数 SessionPersistTime 是否已赋值
                     * @return SessionPersistTime 是否已赋值
                     */
                    bool SessionPersistTimeHasBeenSet() const;

                    /**
                     * 获取服务类型
hostname：子域名模式
instance：实例模式
                     * @return ProxyType 服务类型
hostname：子域名模式
instance：实例模式
                     */
                    std::string GetProxyType() const;

                    /**
                     * 设置服务类型
hostname：子域名模式
instance：实例模式
                     * @param ProxyType 服务类型
hostname：子域名模式
instance：实例模式
                     */
                    void SetProxyType(const std::string& _proxyType);

                    /**
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     */
                    bool ProxyTypeHasBeenSet() const;

                private:

                    /**
                     * 站点ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 代理名称
当ProxyType=hostname时，表示域名或者子域名
当ProxyType=instance时，表示实例名称
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * 调度模式：
ip表示Anycast IP
domain表示CNAME
                     */
                    std::string m_platType;
                    bool m_platTypeHasBeenSet;

                    /**
                     * 0关闭安全，1开启安全
                     */
                    int64_t m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * 0关闭加速，1开启加速
                     */
                    int64_t m_accelerateType;
                    bool m_accelerateTypeHasBeenSet;

                    /**
                     * 字段已经移至Rule.ForwardClientIp
                     */
                    std::string m_forwardClientIp;
                    bool m_forwardClientIpHasBeenSet;

                    /**
                     * 字段已经移至Rule.SessionPersist
                     */
                    bool m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                    /**
                     * 规则详细信息
                     */
                    std::vector<ApplicationProxyRule> m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 会话保持时间，取值范围：30-3600，单位：秒
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * 服务类型
hostname：子域名模式
instance：实例模式
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATEAPPLICATIONPROXYREQUEST_H_
