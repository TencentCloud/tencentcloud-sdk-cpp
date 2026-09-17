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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEPUBLICNETWORKINSTANCEREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEPUBLICNETWORKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * CreatePublicNetworkInstance请求参数结构体
                */
                class CreatePublicNetworkInstanceRequest : public AbstractModel
                {
                public:
                    CreatePublicNetworkInstanceRequest();
                    ~CreatePublicNetworkInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>可用区</p>
                     * @return ZoneId <p>可用区</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zoneId <p>可用区</p>
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
                     * 获取<p>公网实例名称</p>
                     * @return NetworkInstanceName <p>公网实例名称</p>
                     * 
                     */
                    std::string GetNetworkInstanceName() const;

                    /**
                     * 设置<p>公网实例名称</p>
                     * @param _networkInstanceName <p>公网实例名称</p>
                     * 
                     */
                    void SetNetworkInstanceName(const std::string& _networkInstanceName);

                    /**
                     * 判断参数 NetworkInstanceName 是否已赋值
                     * @return NetworkInstanceName 是否已赋值
                     * 
                     */
                    bool NetworkInstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>网络线路</p>
                     * @return Line <p>网络线路</p>
                     * 
                     */
                    std::string GetLine() const;

                    /**
                     * 设置<p>网络线路</p>
                     * @param _line <p>网络线路</p>
                     * 
                     */
                    void SetLine(const std::string& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取<p>路由模式</p>
                     * @return RouteMode <p>路由模式</p>
                     * 
                     */
                    std::string GetRouteMode() const;

                    /**
                     * 设置<p>路由模式</p>
                     * @param _routeMode <p>路由模式</p>
                     * 
                     */
                    void SetRouteMode(const std::string& _routeMode);

                    /**
                     * 判断参数 RouteMode 是否已赋值
                     * @return RouteMode 是否已赋值
                     * 
                     */
                    bool RouteModeHasBeenSet() const;

                    /**
                     * 获取<p>公网带宽（Mbps）</p>
                     * @return Bandwidth <p>公网带宽（Mbps）</p>
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置<p>公网带宽（Mbps）</p>
                     * @param _bandwidth <p>公网带宽（Mbps）</p>
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取<p>BGP AS号</p>
                     * @return BgpAsNumber <p>BGP AS号</p>
                     * 
                     */
                    int64_t GetBgpAsNumber() const;

                    /**
                     * 设置<p>BGP AS号</p>
                     * @param _bgpAsNumber <p>BGP AS号</p>
                     * 
                     */
                    void SetBgpAsNumber(const int64_t& _bgpAsNumber);

                    /**
                     * 判断参数 BgpAsNumber 是否已赋值
                     * @return BgpAsNumber 是否已赋值
                     * 
                     */
                    bool BgpAsNumberHasBeenSet() const;

                    /**
                     * 获取<p>BGP认证密码</p>
                     * @return BgpPassword <p>BGP认证密码</p>
                     * 
                     */
                    std::string GetBgpPassword() const;

                    /**
                     * 设置<p>BGP认证密码</p>
                     * @param _bgpPassword <p>BGP认证密码</p>
                     * 
                     */
                    void SetBgpPassword(const std::string& _bgpPassword);

                    /**
                     * 判断参数 BgpPassword 是否已赋值
                     * @return BgpPassword 是否已赋值
                     * 
                     */
                    bool BgpPasswordHasBeenSet() const;

                    /**
                     * 获取<p>公网实例类型</p><p>枚举值：</p><ul><li>standard： 标准型(默认)</li><li>custom： 自定义型(暂不支持创建)</li></ul>
                     * @return InstanceType <p>公网实例类型</p><p>枚举值：</p><ul><li>standard： 标准型(默认)</li><li>custom： 自定义型(暂不支持创建)</li></ul>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>公网实例类型</p><p>枚举值：</p><ul><li>standard： 标准型(默认)</li><li>custom： 自定义型(暂不支持创建)</li></ul>
                     * @param _instanceType <p>公网实例类型</p><p>枚举值：</p><ul><li>standard： 标准型(默认)</li><li>custom： 自定义型(暂不支持创建)</li></ul>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>公网实例名称</p>
                     */
                    std::string m_networkInstanceName;
                    bool m_networkInstanceNameHasBeenSet;

                    /**
                     * <p>网络线路</p>
                     */
                    std::string m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * <p>路由模式</p>
                     */
                    std::string m_routeMode;
                    bool m_routeModeHasBeenSet;

                    /**
                     * <p>公网带宽（Mbps）</p>
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>BGP AS号</p>
                     */
                    int64_t m_bgpAsNumber;
                    bool m_bgpAsNumberHasBeenSet;

                    /**
                     * <p>BGP认证密码</p>
                     */
                    std::string m_bgpPassword;
                    bool m_bgpPasswordHasBeenSet;

                    /**
                     * <p>公网实例类型</p><p>枚举值：</p><ul><li>standard： 标准型(默认)</li><li>custom： 自定义型(暂不支持创建)</li></ul>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEPUBLICNETWORKINSTANCEREQUEST_H_
