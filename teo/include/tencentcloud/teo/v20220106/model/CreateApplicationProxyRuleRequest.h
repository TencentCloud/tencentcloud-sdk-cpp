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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATEAPPLICATIONPROXYRULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATEAPPLICATIONPROXYRULEREQUEST_H_

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
                * CreateApplicationProxyRule请求参数结构体
                */
                class CreateApplicationProxyRuleRequest : public AbstractModel
                {
                public:
                    CreateApplicationProxyRuleRequest();
                    ~CreateApplicationProxyRuleRequest() = default;
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
                     * 获取协议，取值为TCP或者UDP
                     * @return Proto 协议，取值为TCP或者UDP
                     */
                    std::string GetProto() const;

                    /**
                     * 设置协议，取值为TCP或者UDP
                     * @param Proto 协议，取值为TCP或者UDP
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     */
                    bool ProtoHasBeenSet() const;

                    /**
                     * 获取端口，支持格式：
80：80端口
81-90：81至90端口
                     * @return Port 端口，支持格式：
80：80端口
81-90：81至90端口
                     */
                    std::vector<std::string> GetPort() const;

                    /**
                     * 设置端口，支持格式：
80：80端口
81-90：81至90端口
                     * @param Port 端口，支持格式：
80：80端口
81-90：81至90端口
                     */
                    void SetPort(const std::vector<std::string>& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取源站类型，取值：
custom：手动添加
origins：源站组
load_balancing：负载均衡
                     * @return OriginType 源站类型，取值：
custom：手动添加
origins：源站组
load_balancing：负载均衡
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置源站类型，取值：
custom：手动添加
origins：源站组
load_balancing：负载均衡
                     * @param OriginType 源站类型，取值：
custom：手动添加
origins：源站组
load_balancing：负载均衡
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取源站信息：
当OriginType=custom时，表示多个：
IP:端口
域名:端口
当OriginType=origins时，包含一个元素，表示源站组ID
当OriginType=load_balancing时，包含一个元素，表示负载均衡ID
                     * @return OriginValue 源站信息：
当OriginType=custom时，表示多个：
IP:端口
域名:端口
当OriginType=origins时，包含一个元素，表示源站组ID
当OriginType=load_balancing时，包含一个元素，表示负载均衡ID
                     */
                    std::vector<std::string> GetOriginValue() const;

                    /**
                     * 设置源站信息：
当OriginType=custom时，表示多个：
IP:端口
域名:端口
当OriginType=origins时，包含一个元素，表示源站组ID
当OriginType=load_balancing时，包含一个元素，表示负载均衡ID
                     * @param OriginValue 源站信息：
当OriginType=custom时，表示多个：
IP:端口
域名:端口
当OriginType=origins时，包含一个元素，表示源站组ID
当OriginType=load_balancing时，包含一个元素，表示负载均衡ID
                     */
                    void SetOriginValue(const std::vector<std::string>& _originValue);

                    /**
                     * 判断参数 OriginValue 是否已赋值
                     * @return OriginValue 是否已赋值
                     */
                    bool OriginValueHasBeenSet() const;

                    /**
                     * 获取传递客户端IP，当Proto=TCP时，取值：
TOA：TOA
PPV1: Proxy Protocol传递，协议版本V1
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
当Proto=UDP时，取值：
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
                     * @return ForwardClientIp 传递客户端IP，当Proto=TCP时，取值：
TOA：TOA
PPV1: Proxy Protocol传递，协议版本V1
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
当Proto=UDP时，取值：
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
                     */
                    std::string GetForwardClientIp() const;

                    /**
                     * 设置传递客户端IP，当Proto=TCP时，取值：
TOA：TOA
PPV1: Proxy Protocol传递，协议版本V1
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
当Proto=UDP时，取值：
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
                     * @param ForwardClientIp 传递客户端IP，当Proto=TCP时，取值：
TOA：TOA
PPV1: Proxy Protocol传递，协议版本V1
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
当Proto=UDP时，取值：
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
                     */
                    void SetForwardClientIp(const std::string& _forwardClientIp);

                    /**
                     * 判断参数 ForwardClientIp 是否已赋值
                     * @return ForwardClientIp 是否已赋值
                     */
                    bool ForwardClientIpHasBeenSet() const;

                    /**
                     * 获取是否开启会话保持
                     * @return SessionPersist 是否开启会话保持
                     */
                    bool GetSessionPersist() const;

                    /**
                     * 设置是否开启会话保持
                     * @param SessionPersist 是否开启会话保持
                     */
                    void SetSessionPersist(const bool& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     */
                    bool SessionPersistHasBeenSet() const;

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
                     * 协议，取值为TCP或者UDP
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * 端口，支持格式：
80：80端口
81-90：81至90端口
                     */
                    std::vector<std::string> m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 源站类型，取值：
custom：手动添加
origins：源站组
load_balancing：负载均衡
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 源站信息：
当OriginType=custom时，表示多个：
IP:端口
域名:端口
当OriginType=origins时，包含一个元素，表示源站组ID
当OriginType=load_balancing时，包含一个元素，表示负载均衡ID
                     */
                    std::vector<std::string> m_originValue;
                    bool m_originValueHasBeenSet;

                    /**
                     * 传递客户端IP，当Proto=TCP时，取值：
TOA：TOA
PPV1: Proxy Protocol传递，协议版本V1
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
当Proto=UDP时，取值：
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
                     */
                    std::string m_forwardClientIp;
                    bool m_forwardClientIpHasBeenSet;

                    /**
                     * 是否开启会话保持
                     */
                    bool m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATEAPPLICATIONPROXYRULEREQUEST_H_
