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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYAPPLICATIONPROXYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYAPPLICATIONPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyApplicationProxy请求参数结构体
                */
                class ModifyApplicationProxyRequest : public AbstractModel
                {
                public:
                    ModifyApplicationProxyRequest();
                    ~ModifyApplicationProxyRequest() = default;
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
                     * 获取代理ID
                     * @return ProxyId 代理ID
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置代理ID
                     * @param ProxyId 代理ID
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

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
                     * 获取参数已经废弃
                     * @return ForwardClientIp 参数已经废弃
                     */
                    std::string GetForwardClientIp() const;

                    /**
                     * 设置参数已经废弃
                     * @param ForwardClientIp 参数已经废弃
                     */
                    void SetForwardClientIp(const std::string& _forwardClientIp);

                    /**
                     * 判断参数 ForwardClientIp 是否已赋值
                     * @return ForwardClientIp 是否已赋值
                     */
                    bool ForwardClientIpHasBeenSet() const;

                    /**
                     * 获取参数已经废弃
                     * @return SessionPersist 参数已经废弃
                     */
                    bool GetSessionPersist() const;

                    /**
                     * 设置参数已经废弃
                     * @param SessionPersist 参数已经废弃
                     */
                    void SetSessionPersist(const bool& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     */
                    bool SessionPersistHasBeenSet() const;

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
                     * 代理ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 代理名称
当ProxyType=hostname时，表示域名或者子域名
当ProxyType=instance时，表示实例名称
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * 参数已经废弃
                     */
                    std::string m_forwardClientIp;
                    bool m_forwardClientIpHasBeenSet;

                    /**
                     * 参数已经废弃
                     */
                    bool m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

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

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYAPPLICATIONPROXYREQUEST_H_
