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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBPROXYADDRESSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBPROXYADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ProxyRoute.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDBProxyAddress请求参数结构体
                */
                class ModifyDBProxyAddressRequest : public AbstractModel
                {
                public:
                    ModifyDBProxyAddressRequest();
                    ~ModifyDBProxyAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return DBInstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _dBInstanceId <p>实例ID</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Proxy地址ID</p>
                     * @return AddressId <p>Proxy地址ID</p>
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置<p>Proxy地址ID</p>
                     * @param _addressId <p>Proxy地址ID</p>
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取<p>Proxy代理组 ID（不传则默认操作该实例下唯一的代理）</p>
                     * @return ProxyGroupId <p>Proxy代理组 ID（不传则默认操作该实例下唯一的代理）</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>Proxy代理组 ID（不传则默认操作该实例下唯一的代理）</p>
                     * @param _proxyGroupId <p>Proxy代理组 ID（不传则默认操作该实例下唯一的代理）</p>
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>地址描述/备注（最多 256 字符）</p>
                     * @return Description <p>地址描述/备注（最多 256 字符）</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>地址描述/备注（最多 256 字符）</p>
                     * @param _description <p>地址描述/备注（最多 256 字符）</p>
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
                     * 获取<p>连接池开关</p><p>枚举值：</p><ul><li>true： 开启</li><li>false： 关闭</li></ul>
                     * @return ConnectionPool <p>连接池开关</p><p>枚举值：</p><ul><li>true： 开启</li><li>false： 关闭</li></ul>
                     * 
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置<p>连接池开关</p><p>枚举值：</p><ul><li>true： 开启</li><li>false： 关闭</li></ul>
                     * @param _connectionPool <p>连接池开关</p><p>枚举值：</p><ul><li>true： 开启</li><li>false： 关闭</li></ul>
                     * 
                     */
                    void SetConnectionPool(const bool& _connectionPool);

                    /**
                     * 判断参数 ConnectionPool 是否已赋值
                     * @return ConnectionPool 是否已赋值
                     * 
                     */
                    bool ConnectionPoolHasBeenSet() const;

                    /**
                     * 获取<p>权重模式</p><p>枚举值：</p><ul><li>system： 系统自动分配权重</li><li>custom： 自定义权重，此模式下ProxyAllocation参数必传</li></ul><p>默认值：system</p>
                     * @return WeightMode <p>权重模式</p><p>枚举值：</p><ul><li>system： 系统自动分配权重</li><li>custom： 自定义权重，此模式下ProxyAllocation参数必传</li></ul><p>默认值：system</p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>权重模式</p><p>枚举值：</p><ul><li>system： 系统自动分配权重</li><li>custom： 自定义权重，此模式下ProxyAllocation参数必传</li></ul><p>默认值：system</p>
                     * @param _weightMode <p>权重模式</p><p>枚举值：</p><ul><li>system： 系统自动分配权重</li><li>custom： 自定义权重，此模式下ProxyAllocation参数必传</li></ul><p>默认值：system</p>
                     * 
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     * 
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取<p>system</p><p>入参限制：路由权重列表。若 WeightMode 传的是system或不传 ，则传入的权重不生效，由系统分配默认权重。</p>
                     * @return ProxyAllocation <p>system</p><p>入参限制：路由权重列表。若 WeightMode 传的是system或不传 ，则传入的权重不生效，由系统分配默认权重。</p>
                     * 
                     */
                    std::vector<ProxyRoute> GetProxyAllocation() const;

                    /**
                     * 设置<p>system</p><p>入参限制：路由权重列表。若 WeightMode 传的是system或不传 ，则传入的权重不生效，由系统分配默认权重。</p>
                     * @param _proxyAllocation <p>system</p><p>入参限制：路由权重列表。若 WeightMode 传的是system或不传 ，则传入的权重不生效，由系统分配默认权重。</p>
                     * 
                     */
                    void SetProxyAllocation(const std::vector<ProxyRoute>& _proxyAllocation);

                    /**
                     * 判断参数 ProxyAllocation 是否已赋值
                     * @return ProxyAllocation 是否已赋值
                     * 
                     */
                    bool ProxyAllocationHasBeenSet() const;

                    /**
                     * 获取<p>新增只读实例是否自动加入当前连接地址，仅后续新建实例生效</p>
                     * @return RoAutoAdd <p>新增只读实例是否自动加入当前连接地址，仅后续新建实例生效</p>
                     * 
                     */
                    bool GetRoAutoAdd() const;

                    /**
                     * 设置<p>新增只读实例是否自动加入当前连接地址，仅后续新建实例生效</p>
                     * @param _roAutoAdd <p>新增只读实例是否自动加入当前连接地址，仅后续新建实例生效</p>
                     * 
                     */
                    void SetRoAutoAdd(const bool& _roAutoAdd);

                    /**
                     * 判断参数 RoAutoAdd 是否已赋值
                     * @return RoAutoAdd 是否已赋值
                     * 
                     */
                    bool RoAutoAddHasBeenSet() const;

                    /**
                     * 获取<p>延迟剔除开关</p>
                     * @return LatencyRemove <p>延迟剔除开关</p>
                     * 
                     */
                    bool GetLatencyRemove() const;

                    /**
                     * 设置<p>延迟剔除开关</p>
                     * @param _latencyRemove <p>延迟剔除开关</p>
                     * 
                     */
                    void SetLatencyRemove(const bool& _latencyRemove);

                    /**
                     * 判断参数 LatencyRemove 是否已赋值
                     * @return LatencyRemove 是否已赋值
                     * 
                     */
                    bool LatencyRemoveHasBeenSet() const;

                    /**
                     * 获取<p>延迟剔除阈值，仅在延迟剔除开关打开时有效</p><p>单位：秒</p>
                     * @return LatencyRemoveTime <p>延迟剔除阈值，仅在延迟剔除开关打开时有效</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetLatencyRemoveTime() const;

                    /**
                     * 设置<p>延迟剔除阈值，仅在延迟剔除开关打开时有效</p><p>单位：秒</p>
                     * @param _latencyRemoveTime <p>延迟剔除阈值，仅在延迟剔除开关打开时有效</p><p>单位：秒</p>
                     * 
                     */
                    void SetLatencyRemoveTime(const uint64_t& _latencyRemoveTime);

                    /**
                     * 判断参数 LatencyRemoveTime 是否已赋值
                     * @return LatencyRemoveTime 是否已赋值
                     * 
                     */
                    bool LatencyRemoveTimeHasBeenSet() const;

                    /**
                     * 获取<p>最小保留路由数。在延迟/故障剔除时，至少保留的路由数量，防止所有节点被剔除导致服务不可用。</p>
                     * @return MinRouteNum <p>最小保留路由数。在延迟/故障剔除时，至少保留的路由数量，防止所有节点被剔除导致服务不可用。</p>
                     * 
                     */
                    uint64_t GetMinRouteNum() const;

                    /**
                     * 设置<p>最小保留路由数。在延迟/故障剔除时，至少保留的路由数量，防止所有节点被剔除导致服务不可用。</p>
                     * @param _minRouteNum <p>最小保留路由数。在延迟/故障剔除时，至少保留的路由数量，防止所有节点被剔除导致服务不可用。</p>
                     * 
                     */
                    void SetMinRouteNum(const uint64_t& _minRouteNum);

                    /**
                     * 判断参数 MinRouteNum 是否已赋值
                     * @return MinRouteNum 是否已赋值
                     * 
                     */
                    bool MinRouteNumHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡策略</p><p>枚举值：</p><ul><li>0： 按活跃连接数(默认)</li><li>1： 按请求数</li></ul>
                     * @return LoadBalancePolicy <p>负载均衡策略</p><p>枚举值：</p><ul><li>0： 按活跃连接数(默认)</li><li>1： 按请求数</li></ul>
                     * 
                     */
                    int64_t GetLoadBalancePolicy() const;

                    /**
                     * 设置<p>负载均衡策略</p><p>枚举值：</p><ul><li>0： 按活跃连接数(默认)</li><li>1： 按请求数</li></ul>
                     * @param _loadBalancePolicy <p>负载均衡策略</p><p>枚举值：</p><ul><li>0： 按活跃连接数(默认)</li><li>1： 按请求数</li></ul>
                     * 
                     */
                    void SetLoadBalancePolicy(const int64_t& _loadBalancePolicy);

                    /**
                     * 判断参数 LoadBalancePolicy 是否已赋值
                     * @return LoadBalancePolicy 是否已赋值
                     * 
                     */
                    bool LoadBalancePolicyHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>Proxy地址ID</p>
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * <p>Proxy代理组 ID（不传则默认操作该实例下唯一的代理）</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>地址描述/备注（最多 256 字符）</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>连接池开关</p><p>枚举值：</p><ul><li>true： 开启</li><li>false： 关闭</li></ul>
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * <p>权重模式</p><p>枚举值：</p><ul><li>system： 系统自动分配权重</li><li>custom： 自定义权重，此模式下ProxyAllocation参数必传</li></ul><p>默认值：system</p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>system</p><p>入参限制：路由权重列表。若 WeightMode 传的是system或不传 ，则传入的权重不生效，由系统分配默认权重。</p>
                     */
                    std::vector<ProxyRoute> m_proxyAllocation;
                    bool m_proxyAllocationHasBeenSet;

                    /**
                     * <p>新增只读实例是否自动加入当前连接地址，仅后续新建实例生效</p>
                     */
                    bool m_roAutoAdd;
                    bool m_roAutoAddHasBeenSet;

                    /**
                     * <p>延迟剔除开关</p>
                     */
                    bool m_latencyRemove;
                    bool m_latencyRemoveHasBeenSet;

                    /**
                     * <p>延迟剔除阈值，仅在延迟剔除开关打开时有效</p><p>单位：秒</p>
                     */
                    uint64_t m_latencyRemoveTime;
                    bool m_latencyRemoveTimeHasBeenSet;

                    /**
                     * <p>最小保留路由数。在延迟/故障剔除时，至少保留的路由数量，防止所有节点被剔除导致服务不可用。</p>
                     */
                    uint64_t m_minRouteNum;
                    bool m_minRouteNumHasBeenSet;

                    /**
                     * <p>负载均衡策略</p><p>枚举值：</p><ul><li>0： 按活跃连接数(默认)</li><li>1： 按请求数</li></ul>
                     */
                    int64_t m_loadBalancePolicy;
                    bool m_loadBalancePolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBPROXYADDRESSREQUEST_H_
