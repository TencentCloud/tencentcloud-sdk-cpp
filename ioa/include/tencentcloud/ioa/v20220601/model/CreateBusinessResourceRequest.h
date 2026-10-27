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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_CREATEBUSINESSRESOURCEREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_CREATEBUSINESSRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * CreateBusinessResource请求参数结构体
                */
                class CreateBusinessResourceRequest : public AbstractModel
                {
                public:
                    CreateBusinessResourceRequest();
                    ~CreateBusinessResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>业务资源所在的模块id，没有资源模块先创建资源模块(只支持32位)</p>
                     * @return AreaId <p>业务资源所在的模块id，没有资源模块先创建资源模块(只支持32位)</p>
                     * 
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置<p>业务资源所在的模块id，没有资源模块先创建资源模块(只支持32位)</p>
                     * @param _areaId <p>业务资源所在的模块id，没有资源模块先创建资源模块(只支持32位)</p>
                     * 
                     */
                    void SetAreaId(const int64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     * 
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取<p>业务资源协议类型, 1:UDP, 2:TCP, 3:所有协议(只支持32位)</p>
                     * @return Protocol <p>业务资源协议类型, 1:UDP, 2:TCP, 3:所有协议(只支持32位)</p>
                     * 
                     */
                    int64_t GetProtocol() const;

                    /**
                     * 设置<p>业务资源协议类型, 1:UDP, 2:TCP, 3:所有协议(只支持32位)</p>
                     * @param _protocol <p>业务资源协议类型, 1:UDP, 2:TCP, 3:所有协议(只支持32位)</p>
                     * 
                     */
                    void SetProtocol(const int64_t& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>业务资源名称，同一个资源模块下面不可重复</p>
                     * @return ServiceName <p>业务资源名称，同一个资源模块下面不可重复</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>业务资源名称，同一个资源模块下面不可重复</p>
                     * @param _serviceName <p>业务资源名称，同一个资源模块下面不可重复</p>
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>业务资源类型:ip,domain,ip_section，对应ip、域名、ip段</p>
                     * @return ServiceType <p>业务资源类型:ip,domain,ip_section，对应ip、域名、ip段</p>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>业务资源类型:ip,domain,ip_section，对应ip、域名、ip段</p>
                     * @param _serviceType <p>业务资源类型:ip,domain,ip_section，对应ip、域名、ip段</p>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>业务资源端口 all,1-65535</p>
                     * @return ServicePort <p>业务资源端口 all,1-65535</p>
                     * 
                     */
                    std::string GetServicePort() const;

                    /**
                     * 设置<p>业务资源端口 all,1-65535</p>
                     * @param _servicePort <p>业务资源端口 all,1-65535</p>
                     * 
                     */
                    void SetServicePort(const std::string& _servicePort);

                    /**
                     * 判断参数 ServicePort 是否已赋值
                     * @return ServicePort 是否已赋值
                     * 
                     */
                    bool ServicePortHasBeenSet() const;

                    /**
                     * 获取<p>业务资源优先级 1-65535(只支持32位)</p>
                     * @return Levels <p>业务资源优先级 1-65535(只支持32位)</p>
                     * 
                     */
                    int64_t GetLevels() const;

                    /**
                     * 设置<p>业务资源优先级 1-65535(只支持32位)</p>
                     * @param _levels <p>业务资源优先级 1-65535(只支持32位)</p>
                     * 
                     */
                    void SetLevels(const int64_t& _levels);

                    /**
                     * 判断参数 Levels 是否已赋值
                     * @return Levels 是否已赋值
                     * 
                     */
                    bool LevelsHasBeenSet() const;

                    /**
                     * 获取<p>业务资源地址(ip、域名、ip段)</p>
                     * @return ServiceAddress <p>业务资源地址(ip、域名、ip段)</p>
                     * 
                     */
                    std::string GetServiceAddress() const;

                    /**
                     * 设置<p>业务资源地址(ip、域名、ip段)</p>
                     * @param _serviceAddress <p>业务资源地址(ip、域名、ip段)</p>
                     * 
                     */
                    void SetServiceAddress(const std::string& _serviceAddress);

                    /**
                     * 判断参数 ServiceAddress 是否已赋值
                     * @return ServiceAddress 是否已赋值
                     * 
                     */
                    bool ServiceAddressHasBeenSet() const;

                    /**
                     * 获取<p>是否走代理,该参数不传，默认为0, 2：内外网直连，1：内网直连， 0：不启用代理配置(只支持32位)</p>
                     * @return DirectConn <p>是否走代理,该参数不传，默认为0, 2：内外网直连，1：内网直连， 0：不启用代理配置(只支持32位)</p>
                     * 
                     */
                    int64_t GetDirectConn() const;

                    /**
                     * 设置<p>是否走代理,该参数不传，默认为0, 2：内外网直连，1：内网直连， 0：不启用代理配置(只支持32位)</p>
                     * @param _directConn <p>是否走代理,该参数不传，默认为0, 2：内外网直连，1：内网直连， 0：不启用代理配置(只支持32位)</p>
                     * 
                     */
                    void SetDirectConn(const int64_t& _directConn);

                    /**
                     * 判断参数 DirectConn 是否已赋值
                     * @return DirectConn 是否已赋值
                     * 
                     */
                    bool DirectConnHasBeenSet() const;

                    /**
                     * 获取<p>连通性检查开关，0-关闭 1-开启，默认1(只支持32位)</p>
                     * @return ConnectivityCheckSwitch <p>连通性检查开关，0-关闭 1-开启，默认1(只支持32位)</p>
                     * 
                     */
                    int64_t GetConnectivityCheckSwitch() const;

                    /**
                     * 设置<p>连通性检查开关，0-关闭 1-开启，默认1(只支持32位)</p>
                     * @param _connectivityCheckSwitch <p>连通性检查开关，0-关闭 1-开启，默认1(只支持32位)</p>
                     * 
                     */
                    void SetConnectivityCheckSwitch(const int64_t& _connectivityCheckSwitch);

                    /**
                     * 判断参数 ConnectivityCheckSwitch 是否已赋值
                     * @return ConnectivityCheckSwitch 是否已赋值
                     * 
                     */
                    bool ConnectivityCheckSwitchHasBeenSet() const;

                    /**
                     * 获取<p>连通性检查测试间隔数值，最小为1，默认1(只支持32位)</p>
                     * @return ConnectivityCheckInterval <p>连通性检查测试间隔数值，最小为1，默认1(只支持32位)</p>
                     * 
                     */
                    int64_t GetConnectivityCheckInterval() const;

                    /**
                     * 设置<p>连通性检查测试间隔数值，最小为1，默认1(只支持32位)</p>
                     * @param _connectivityCheckInterval <p>连通性检查测试间隔数值，最小为1，默认1(只支持32位)</p>
                     * 
                     */
                    void SetConnectivityCheckInterval(const int64_t& _connectivityCheckInterval);

                    /**
                     * 判断参数 ConnectivityCheckInterval 是否已赋值
                     * @return ConnectivityCheckInterval 是否已赋值
                     * 
                     */
                    bool ConnectivityCheckIntervalHasBeenSet() const;

                    /**
                     * 获取<p>连通性检查测试间隔单位 minutes/hours/days，默认hours</p>
                     * @return ConnectivityCheckIntervalUnit <p>连通性检查测试间隔单位 minutes/hours/days，默认hours</p>
                     * 
                     */
                    std::string GetConnectivityCheckIntervalUnit() const;

                    /**
                     * 设置<p>连通性检查测试间隔单位 minutes/hours/days，默认hours</p>
                     * @param _connectivityCheckIntervalUnit <p>连通性检查测试间隔单位 minutes/hours/days，默认hours</p>
                     * 
                     */
                    void SetConnectivityCheckIntervalUnit(const std::string& _connectivityCheckIntervalUnit);

                    /**
                     * 判断参数 ConnectivityCheckIntervalUnit 是否已赋值
                     * @return ConnectivityCheckIntervalUnit 是否已赋值
                     * 
                     */
                    bool ConnectivityCheckIntervalUnitHasBeenSet() const;

                    /**
                     * 获取<p>资源网络类型：1-内网资源 2-外网资源，默认1</p>
                     * @return ServiceNetwork <p>资源网络类型：1-内网资源 2-外网资源，默认1</p>
                     * 
                     */
                    int64_t GetServiceNetwork() const;

                    /**
                     * 设置<p>资源网络类型：1-内网资源 2-外网资源，默认1</p>
                     * @param _serviceNetwork <p>资源网络类型：1-内网资源 2-外网资源，默认1</p>
                     * 
                     */
                    void SetServiceNetwork(const int64_t& _serviceNetwork);

                    /**
                     * 判断参数 ServiceNetwork 是否已赋值
                     * @return ServiceNetwork 是否已赋值
                     * 
                     */
                    bool ServiceNetworkHasBeenSet() const;

                    /**
                     * 获取<p>是否启用L3网络：1-不启用 2-启用，默认1</p>
                     * @return WireGuardTunnel <p>是否启用L3网络：1-不启用 2-启用，默认1</p>
                     * 
                     */
                    int64_t GetWireGuardTunnel() const;

                    /**
                     * 设置<p>是否启用L3网络：1-不启用 2-启用，默认1</p>
                     * @param _wireGuardTunnel <p>是否启用L3网络：1-不启用 2-启用，默认1</p>
                     * 
                     */
                    void SetWireGuardTunnel(const int64_t& _wireGuardTunnel);

                    /**
                     * 判断参数 WireGuardTunnel 是否已赋值
                     * @return WireGuardTunnel 是否已赋值
                     * 
                     */
                    bool WireGuardTunnelHasBeenSet() const;

                    /**
                     * 获取<p>资源描述</p>
                     * @return Description <p>资源描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>资源描述</p>
                     * @param _description <p>资源描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>URL审计开关：0-关闭 1-开启，默认0</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * @return URLAuditState <p>URL审计开关：0-关闭 1-开启，默认0</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * 
                     */
                    int64_t GetURLAuditState() const;

                    /**
                     * 设置<p>URL审计开关：0-关闭 1-开启，默认0</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * @param _uRLAuditState <p>URL审计开关：0-关闭 1-开启，默认0</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * 
                     */
                    void SetURLAuditState(const int64_t& _uRLAuditState);

                    /**
                     * 判断参数 URLAuditState 是否已赋值
                     * @return URLAuditState 是否已赋值
                     * 
                     */
                    bool URLAuditStateHasBeenSet() const;

                    /**
                     * 获取<p>URL审计证书ID列表，多个用分号分隔</p>
                     * @return URLAuditId <p>URL审计证书ID列表，多个用分号分隔</p>
                     * 
                     */
                    std::string GetURLAuditId() const;

                    /**
                     * 设置<p>URL审计证书ID列表，多个用分号分隔</p>
                     * @param _uRLAuditId <p>URL审计证书ID列表，多个用分号分隔</p>
                     * 
                     */
                    void SetURLAuditId(const std::string& _uRLAuditId);

                    /**
                     * 判断参数 URLAuditId 是否已赋值
                     * @return URLAuditId 是否已赋值
                     * 
                     */
                    bool URLAuditIdHasBeenSet() const;

                    /**
                     * 获取<p>URL审计路径，多个用分号分隔</p>
                     * @return URLPath <p>URL审计路径，多个用分号分隔</p>
                     * 
                     */
                    std::string GetURLPath() const;

                    /**
                     * 设置<p>URL审计路径，多个用分号分隔</p>
                     * @param _uRLPath <p>URL审计路径，多个用分号分隔</p>
                     * 
                     */
                    void SetURLPath(const std::string& _uRLPath);

                    /**
                     * 判断参数 URLPath 是否已赋值
                     * @return URLPath 是否已赋值
                     * 
                     */
                    bool URLPathHasBeenSet() const;

                    /**
                     * 获取<p>证书Id</p>
                     * @return SSLCertId <p>证书Id</p>
                     * 
                     */
                    std::string GetSSLCertId() const;

                    /**
                     * 设置<p>证书Id</p>
                     * @param _sSLCertId <p>证书Id</p>
                     * 
                     */
                    void SetSSLCertId(const std::string& _sSLCertId);

                    /**
                     * 判断参数 SSLCertId 是否已赋值
                     * @return SSLCertId 是否已赋值
                     * 
                     */
                    bool SSLCertIdHasBeenSet() const;

                private:

                    /**
                     * <p>业务资源所在的模块id，没有资源模块先创建资源模块(只支持32位)</p>
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * <p>业务资源协议类型, 1:UDP, 2:TCP, 3:所有协议(只支持32位)</p>
                     */
                    int64_t m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>业务资源名称，同一个资源模块下面不可重复</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>业务资源类型:ip,domain,ip_section，对应ip、域名、ip段</p>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>业务资源端口 all,1-65535</p>
                     */
                    std::string m_servicePort;
                    bool m_servicePortHasBeenSet;

                    /**
                     * <p>业务资源优先级 1-65535(只支持32位)</p>
                     */
                    int64_t m_levels;
                    bool m_levelsHasBeenSet;

                    /**
                     * <p>业务资源地址(ip、域名、ip段)</p>
                     */
                    std::string m_serviceAddress;
                    bool m_serviceAddressHasBeenSet;

                    /**
                     * <p>是否走代理,该参数不传，默认为0, 2：内外网直连，1：内网直连， 0：不启用代理配置(只支持32位)</p>
                     */
                    int64_t m_directConn;
                    bool m_directConnHasBeenSet;

                    /**
                     * <p>连通性检查开关，0-关闭 1-开启，默认1(只支持32位)</p>
                     */
                    int64_t m_connectivityCheckSwitch;
                    bool m_connectivityCheckSwitchHasBeenSet;

                    /**
                     * <p>连通性检查测试间隔数值，最小为1，默认1(只支持32位)</p>
                     */
                    int64_t m_connectivityCheckInterval;
                    bool m_connectivityCheckIntervalHasBeenSet;

                    /**
                     * <p>连通性检查测试间隔单位 minutes/hours/days，默认hours</p>
                     */
                    std::string m_connectivityCheckIntervalUnit;
                    bool m_connectivityCheckIntervalUnitHasBeenSet;

                    /**
                     * <p>资源网络类型：1-内网资源 2-外网资源，默认1</p>
                     */
                    int64_t m_serviceNetwork;
                    bool m_serviceNetworkHasBeenSet;

                    /**
                     * <p>是否启用L3网络：1-不启用 2-启用，默认1</p>
                     */
                    int64_t m_wireGuardTunnel;
                    bool m_wireGuardTunnelHasBeenSet;

                    /**
                     * <p>资源描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>URL审计开关：0-关闭 1-开启，默认0</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     */
                    int64_t m_uRLAuditState;
                    bool m_uRLAuditStateHasBeenSet;

                    /**
                     * <p>URL审计证书ID列表，多个用分号分隔</p>
                     */
                    std::string m_uRLAuditId;
                    bool m_uRLAuditIdHasBeenSet;

                    /**
                     * <p>URL审计路径，多个用分号分隔</p>
                     */
                    std::string m_uRLPath;
                    bool m_uRLPathHasBeenSet;

                    /**
                     * <p>证书Id</p>
                     */
                    std::string m_sSLCertId;
                    bool m_sSLCertIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_CREATEBUSINESSRESOURCEREQUEST_H_
