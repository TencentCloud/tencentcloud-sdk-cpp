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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBPROXYADDRESSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBPROXYADDRESSREQUEST_H_

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
                * CreateDBProxyAddress请求参数结构体
                */
                class CreateDBProxyAddressRequest : public AbstractModel
                {
                public:
                    CreateDBProxyAddressRequest();
                    ~CreateDBProxyAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID，指定要创建代理地址的目标实例</p>
                     * @return DBInstanceId <p>实例 ID，指定要创建代理地址的目标实例</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例 ID，指定要创建代理地址的目标实例</p>
                     * @param _dBInstanceId <p>实例 ID，指定要创建代理地址的目标实例</p>
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
                     * 获取<p>VPC ID，代理地址所属的私有网络</p>
                     * @return VpcId <p>VPC ID，代理地址所属的私有网络</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID，代理地址所属的私有网络</p>
                     * @param _vpcId <p>VPC ID，代理地址所属的私有网络</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网 ID，代理地址所属的子网</p>
                     * @return SubnetId <p>子网 ID，代理地址所属的子网</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网 ID，代理地址所属的子网</p>
                     * @param _subnetId <p>子网 ID，代理地址所属的子网</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>代理组 ID。不传则按实例自动查找其默认代理组</p>
                     * @return ProxyGroupId <p>代理组 ID。不传则按实例自动查找其默认代理组</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>代理组 ID。不传则按实例自动查找其默认代理组</p>
                     * @param _proxyGroupId <p>代理组 ID。不传则按实例自动查找其默认代理组</p>
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
                     * 获取<p>安全组 ID 列表，用于代理地址的网络安全控制</p>
                     * @return SecurityGroup <p>安全组 ID 列表，用于代理地址的网络安全控制</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置<p>安全组 ID 列表，用于代理地址的网络安全控制</p>
                     * @param _securityGroup <p>安全组 ID 列表，用于代理地址的网络安全控制</p>
                     * 
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取<p>代理地址备注信息，最长 256 个字符</p>
                     * @return Description <p>代理地址备注信息，最长 256 个字符</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>代理地址备注信息，最长 256 个字符</p>
                     * @param _description <p>代理地址备注信息，最长 256 个字符</p>
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
                     * 获取<p>连接池开关。true：开启连接池；false：关闭连接池</p>
                     * @return ConnectionPool <p>连接池开关。true：开启连接池；false：关闭连接池</p>
                     * 
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置<p>连接池开关。true：开启连接池；false：关闭连接池</p>
                     * @param _connectionPool <p>连接池开关。true：开启连接池；false：关闭连接池</p>
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
                     * 获取<p>权重模式。取值：<ul><li>system：系统自动分配权重</li><li>custom：手动指定权重，需配合 ProxyAllocation 参数使用</li></ul></p>
                     * @return WeightMode <p>权重模式。取值：<ul><li>system：系统自动分配权重</li><li>custom：手动指定权重，需配合 ProxyAllocation 参数使用</li></ul></p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>权重模式。取值：<ul><li>system：系统自动分配权重</li><li>custom：手动指定权重，需配合 ProxyAllocation 参数使用</li></ul></p>
                     * @param _weightMode <p>权重模式。取值：<ul><li>system：系统自动分配权重</li><li>custom：手动指定权重，需配合 ProxyAllocation 参数使用</li></ul></p>
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
                     * 获取<p>路由权重列表。WeightMode 为 custom 时必填。若WeightMode传system或不传 ，则传入的权重不生效，由系统分配默认权重。</p>
                     * @return ProxyAllocation <p>路由权重列表。WeightMode 为 custom 时必填。若WeightMode传system或不传 ，则传入的权重不生效，由系统分配默认权重。</p>
                     * 
                     */
                    std::vector<ProxyRoute> GetProxyAllocation() const;

                    /**
                     * 设置<p>路由权重列表。WeightMode 为 custom 时必填。若WeightMode传system或不传 ，则传入的权重不生效，由系统分配默认权重。</p>
                     * @param _proxyAllocation <p>路由权重列表。WeightMode 为 custom 时必填。若WeightMode传system或不传 ，则传入的权重不生效，由系统分配默认权重。</p>
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
                     * 获取<p>是否自动将新增的只读实例加入读写分离。true：自动加入；false：不自动加入</p>
                     * @return RoAutoAdd <p>是否自动将新增的只读实例加入读写分离。true：自动加入；false：不自动加入</p>
                     * 
                     */
                    bool GetRoAutoAdd() const;

                    /**
                     * 设置<p>是否自动将新增的只读实例加入读写分离。true：自动加入；false：不自动加入</p>
                     * @param _roAutoAdd <p>是否自动将新增的只读实例加入读写分离。true：自动加入；false：不自动加入</p>
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
                     * 获取<p>延迟剔除开关。true：开启延迟剔除，当只读实例延迟超过阈值时自动剔除路由；false：关闭延迟剔除。开启时 LatencyRemoveTime 必填</p>
                     * @return LatencyRemove <p>延迟剔除开关。true：开启延迟剔除，当只读实例延迟超过阈值时自动剔除路由；false：关闭延迟剔除。开启时 LatencyRemoveTime 必填</p>
                     * 
                     */
                    bool GetLatencyRemove() const;

                    /**
                     * 设置<p>延迟剔除开关。true：开启延迟剔除，当只读实例延迟超过阈值时自动剔除路由；false：关闭延迟剔除。开启时 LatencyRemoveTime 必填</p>
                     * @param _latencyRemove <p>延迟剔除开关。true：开启延迟剔除，当只读实例延迟超过阈值时自动剔除路由；false：关闭延迟剔除。开启时 LatencyRemoveTime 必填</p>
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
                     * 获取<p>延迟剔除阈值，单位秒，取值范围 [1, 10000]。LatencyRemove 为 true 时必填</p>
                     * @return LatencyRemoveTime <p>延迟剔除阈值，单位秒，取值范围 [1, 10000]。LatencyRemove 为 true 时必填</p>
                     * 
                     */
                    uint64_t GetLatencyRemoveTime() const;

                    /**
                     * 设置<p>延迟剔除阈值，单位秒，取值范围 [1, 10000]。LatencyRemove 为 true 时必填</p>
                     * @param _latencyRemoveTime <p>延迟剔除阈值，单位秒，取值范围 [1, 10000]。LatencyRemove 为 true 时必填</p>
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
                     * 获取<p>最小路由节点数，取值范围 [0, 256]。用于防止延迟剔除将所有节点剔除后的兜底策略</p>
                     * @return MinRouteNum <p>最小路由节点数，取值范围 [0, 256]。用于防止延迟剔除将所有节点剔除后的兜底策略</p>
                     * 
                     */
                    uint64_t GetMinRouteNum() const;

                    /**
                     * 设置<p>最小路由节点数，取值范围 [0, 256]。用于防止延迟剔除将所有节点剔除后的兜底策略</p>
                     * @param _minRouteNum <p>最小路由节点数，取值范围 [0, 256]。用于防止延迟剔除将所有节点剔除后的兜底策略</p>
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
                     * <p>实例 ID，指定要创建代理地址的目标实例</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>VPC ID，代理地址所属的私有网络</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网 ID，代理地址所属的子网</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>代理组 ID。不传则按实例自动查找其默认代理组</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>安全组 ID 列表，用于代理地址的网络安全控制</p>
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * <p>代理地址备注信息，最长 256 个字符</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>连接池开关。true：开启连接池；false：关闭连接池</p>
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * <p>权重模式。取值：<ul><li>system：系统自动分配权重</li><li>custom：手动指定权重，需配合 ProxyAllocation 参数使用</li></ul></p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>路由权重列表。WeightMode 为 custom 时必填。若WeightMode传system或不传 ，则传入的权重不生效，由系统分配默认权重。</p>
                     */
                    std::vector<ProxyRoute> m_proxyAllocation;
                    bool m_proxyAllocationHasBeenSet;

                    /**
                     * <p>是否自动将新增的只读实例加入读写分离。true：自动加入；false：不自动加入</p>
                     */
                    bool m_roAutoAdd;
                    bool m_roAutoAddHasBeenSet;

                    /**
                     * <p>延迟剔除开关。true：开启延迟剔除，当只读实例延迟超过阈值时自动剔除路由；false：关闭延迟剔除。开启时 LatencyRemoveTime 必填</p>
                     */
                    bool m_latencyRemove;
                    bool m_latencyRemoveHasBeenSet;

                    /**
                     * <p>延迟剔除阈值，单位秒，取值范围 [1, 10000]。LatencyRemove 为 true 时必填</p>
                     */
                    uint64_t m_latencyRemoveTime;
                    bool m_latencyRemoveTimeHasBeenSet;

                    /**
                     * <p>最小路由节点数，取值范围 [0, 256]。用于防止延迟剔除将所有节点剔除后的兜底策略</p>
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

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBPROXYADDRESSREQUEST_H_
