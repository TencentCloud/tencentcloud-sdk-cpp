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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIPINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRabbitMQVipInstance请求参数结构体
                */
                class CreateRabbitMQVipInstanceRequest : public AbstractModel
                {
                public:
                    CreateRabbitMQVipInstanceRequest();
                    ~CreateRabbitMQVipInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>可用区</p>
                     * @return ZoneIds <p>可用区</p>
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zoneIds <p>可用区</p>
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID，形如 vpc-xxx。有效的 VpcId 可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">私有网络</a>控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a>，从接口返回中的 unVpcId 字段获取。若在创建子机时 VpcId 与 SubnetId 同时传入 DEFAULT，则强制使用默认 vpc 网络。</p>
                     * @return VpcId <p>私有网络ID，形如 vpc-xxx。有效的 VpcId 可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">私有网络</a>控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a>，从接口返回中的 unVpcId 字段获取。若在创建子机时 VpcId 与 SubnetId 同时传入 DEFAULT，则强制使用默认 vpc 网络。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID，形如 vpc-xxx。有效的 VpcId 可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">私有网络</a>控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a>，从接口返回中的 unVpcId 字段获取。若在创建子机时 VpcId 与 SubnetId 同时传入 DEFAULT，则强制使用默认 vpc 网络。</p>
                     * @param _vpcId <p>私有网络ID，形如 vpc-xxx。有效的 VpcId 可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">私有网络</a>控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a>，从接口返回中的 unVpcId 字段获取。若在创建子机时 VpcId 与 SubnetId 同时传入 DEFAULT，则强制使用默认 vpc 网络。</p>
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
                     * 获取<p>私有网络子网 ID，形如 subnet-xxx。有效的私有网络子网 ID 可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">子网控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets</a>，从接口返回中的 unSubnetId 字段获取。若在创建子机时 SubnetId 与 VpcId 同时传入 DEFAULT，则强制使用默认 vpc 网络。</p>
                     * @return SubnetId <p>私有网络子网 ID，形如 subnet-xxx。有效的私有网络子网 ID 可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">子网控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets</a>，从接口返回中的 unSubnetId 字段获取。若在创建子机时 SubnetId 与 VpcId 同时传入 DEFAULT，则强制使用默认 vpc 网络。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>私有网络子网 ID，形如 subnet-xxx。有效的私有网络子网 ID 可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">子网控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets</a>，从接口返回中的 unSubnetId 字段获取。若在创建子机时 SubnetId 与 VpcId 同时传入 DEFAULT，则强制使用默认 vpc 网络。</p>
                     * @param _subnetId <p>私有网络子网 ID，形如 subnet-xxx。有效的私有网络子网 ID 可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">子网控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets</a>，从接口返回中的 unSubnetId 字段获取。若在创建子机时 SubnetId 与 VpcId 同时传入 DEFAULT，则强制使用默认 vpc 网络。</p>
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
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>集群的节点规格，需要输入对应的规格标识：<br>2C8G：rabbit-vip-profession-2c8g<br>4C16G：rabbit-vip-profession-4c16g<br>8C32G：rabbit-vip-profession-8c32g<br>16C32G：rabbit-vip-basic-4<br>16C64G：rabbit-vip-profession-16c64g<br>2C4G：rabbit-vip-basic-5<br>4C8G：rabbit-vip-basic-1<br>8C16G（已售罄）：rabbit-vip-basic-2<br>不传默认为 4C8G：rabbit-vip-basic-1</p>
                     * @return NodeSpec <p>集群的节点规格，需要输入对应的规格标识：<br>2C8G：rabbit-vip-profession-2c8g<br>4C16G：rabbit-vip-profession-4c16g<br>8C32G：rabbit-vip-profession-8c32g<br>16C32G：rabbit-vip-basic-4<br>16C64G：rabbit-vip-profession-16c64g<br>2C4G：rabbit-vip-basic-5<br>4C8G：rabbit-vip-basic-1<br>8C16G（已售罄）：rabbit-vip-basic-2<br>不传默认为 4C8G：rabbit-vip-basic-1</p>
                     * 
                     */
                    std::string GetNodeSpec() const;

                    /**
                     * 设置<p>集群的节点规格，需要输入对应的规格标识：<br>2C8G：rabbit-vip-profession-2c8g<br>4C16G：rabbit-vip-profession-4c16g<br>8C32G：rabbit-vip-profession-8c32g<br>16C32G：rabbit-vip-basic-4<br>16C64G：rabbit-vip-profession-16c64g<br>2C4G：rabbit-vip-basic-5<br>4C8G：rabbit-vip-basic-1<br>8C16G（已售罄）：rabbit-vip-basic-2<br>不传默认为 4C8G：rabbit-vip-basic-1</p>
                     * @param _nodeSpec <p>集群的节点规格，需要输入对应的规格标识：<br>2C8G：rabbit-vip-profession-2c8g<br>4C16G：rabbit-vip-profession-4c16g<br>8C32G：rabbit-vip-profession-8c32g<br>16C32G：rabbit-vip-basic-4<br>16C64G：rabbit-vip-profession-16c64g<br>2C4G：rabbit-vip-basic-5<br>4C8G：rabbit-vip-basic-1<br>8C16G（已售罄）：rabbit-vip-basic-2<br>不传默认为 4C8G：rabbit-vip-basic-1</p>
                     * 
                     */
                    void SetNodeSpec(const std::string& _nodeSpec);

                    /**
                     * 判断参数 NodeSpec 是否已赋值
                     * @return NodeSpec 是否已赋值
                     * 
                     */
                    bool NodeSpecHasBeenSet() const;

                    /**
                     * 获取<p>节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3</p>
                     * @return NodeNum <p>节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3</p>
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置<p>节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3</p>
                     * @param _nodeNum <p>节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3</p>
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取<p>单节点存储规格,不传默认为200G</p>
                     * @return StorageSize <p>单节点存储规格,不传默认为200G</p>
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置<p>单节点存储规格,不传默认为200G</p>
                     * @param _storageSize <p>单节点存储规格,不传默认为200G</p>
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启默认镜像队列，true 表示为开启，false 表示为不开启。不传默认为 false。该参数对4.x集群不生效。</p>
                     * @return EnableCreateDefaultHaMirrorQueue <p>是否开启默认镜像队列，true 表示为开启，false 表示为不开启。不传默认为 false。该参数对4.x集群不生效。</p>
                     * 
                     */
                    bool GetEnableCreateDefaultHaMirrorQueue() const;

                    /**
                     * 设置<p>是否开启默认镜像队列，true 表示为开启，false 表示为不开启。不传默认为 false。该参数对4.x集群不生效。</p>
                     * @param _enableCreateDefaultHaMirrorQueue <p>是否开启默认镜像队列，true 表示为开启，false 表示为不开启。不传默认为 false。该参数对4.x集群不生效。</p>
                     * 
                     */
                    void SetEnableCreateDefaultHaMirrorQueue(const bool& _enableCreateDefaultHaMirrorQueue);

                    /**
                     * 判断参数 EnableCreateDefaultHaMirrorQueue 是否已赋值
                     * @return EnableCreateDefaultHaMirrorQueue 是否已赋值
                     * 
                     */
                    bool EnableCreateDefaultHaMirrorQueueHasBeenSet() const;

                    /**
                     * 获取<p>仅预付费集群（PayMode 参数为 1 时）使用该参数，表示是否自动续费，true 表示打开自动续费。不传默认为 true</p>
                     * @return AutoRenewFlag <p>仅预付费集群（PayMode 参数为 1 时）使用该参数，表示是否自动续费，true 表示打开自动续费。不传默认为 true</p>
                     * 
                     */
                    bool GetAutoRenewFlag() const;

                    /**
                     * 设置<p>仅预付费集群（PayMode 参数为 1 时）使用该参数，表示是否自动续费，true 表示打开自动续费。不传默认为 true</p>
                     * @param _autoRenewFlag <p>仅预付费集群（PayMode 参数为 1 时）使用该参数，表示是否自动续费，true 表示打开自动续费。不传默认为 true</p>
                     * 
                     */
                    void SetAutoRenewFlag(const bool& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>购买时长,不传默认为1(月)</p>
                     * @return TimeSpan <p>购买时长,不传默认为1(月)</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>购买时长,不传默认为1(月)</p>
                     * @param _timeSpan <p>购买时长,不传默认为1(月)</p>
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>付费方式，0 为后付费，即按量计费；1 为预付费，即包年包月。默认包年包月</p>
                     * @return PayMode <p>付费方式，0 为后付费，即按量计费；1 为预付费，即包年包月。默认包年包月</p>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>付费方式，0 为后付费，即按量计费；1 为预付费，即包年包月。默认包年包月</p>
                     * @param _payMode <p>付费方式，0 为后付费，即按量计费；1 为预付费，即包年包月。默认包年包月</p>
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>集群版本，不传默认为 3.8.30，可选值为 3.8.30、3.11.8和3.13.7</p>
                     * @return ClusterVersion <p>集群版本，不传默认为 3.8.30，可选值为 3.8.30、3.11.8和3.13.7</p>
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置<p>集群版本，不传默认为 3.8.30，可选值为 3.8.30、3.11.8和3.13.7</p>
                     * @param _clusterVersion <p>集群版本，不传默认为 3.8.30，可选值为 3.8.30、3.11.8和3.13.7</p>
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取<p>是否国际站请求，默认 false</p>
                     * @return IsIntl <p>是否国际站请求，默认 false</p>
                     * 
                     */
                    bool GetIsIntl() const;

                    /**
                     * 设置<p>是否国际站请求，默认 false</p>
                     * @param _isIntl <p>是否国际站请求，默认 false</p>
                     * 
                     */
                    void SetIsIntl(const bool& _isIntl);

                    /**
                     * 判断参数 IsIntl 是否已赋值
                     * @return IsIntl 是否已赋值
                     * 
                     */
                    bool IsIntlHasBeenSet() const;

                    /**
                     * 获取<p>资源标签列表</p>
                     * @return ResourceTags <p>资源标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>资源标签列表</p>
                     * @param _resourceTags <p>资源标签列表</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>公网带宽大小，单位 Mbps</p>
                     * @return Bandwidth <p>公网带宽大小，单位 Mbps</p>
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置<p>公网带宽大小，单位 Mbps</p>
                     * @param _bandwidth <p>公网带宽大小，单位 Mbps</p>
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取<p>是否打开公网接入，不传默认为false</p>
                     * @return EnablePublicAccess <p>是否打开公网接入，不传默认为false</p>
                     * 
                     */
                    bool GetEnablePublicAccess() const;

                    /**
                     * 设置<p>是否打开公网接入，不传默认为false</p>
                     * @param _enablePublicAccess <p>是否打开公网接入，不传默认为false</p>
                     * 
                     */
                    void SetEnablePublicAccess(const bool& _enablePublicAccess);

                    /**
                     * 判断参数 EnablePublicAccess 是否已赋值
                     * @return EnablePublicAccess 是否已赋值
                     * 
                     */
                    bool EnablePublicAccessHasBeenSet() const;

                    /**
                     * 获取<p>是否打开集群删除保护，不传默认为 false</p>
                     * @return EnableDeletionProtection <p>是否打开集群删除保护，不传默认为 false</p>
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置<p>是否打开集群删除保护，不传默认为 false</p>
                     * @param _enableDeletionProtection <p>是否打开集群删除保护，不传默认为 false</p>
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>集群类型</p><p>枚举值：</p><ul><li>NORMAL： 公有云</li><li>CDC： 本地专用集群</li></ul>
                     * @return ClusterType <p>集群类型</p><p>枚举值：</p><ul><li>NORMAL： 公有云</li><li>CDC： 本地专用集群</li></ul>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型</p><p>枚举值：</p><ul><li>NORMAL： 公有云</li><li>CDC： 本地专用集群</li></ul>
                     * @param _clusterType <p>集群类型</p><p>枚举值：</p><ul><li>NORMAL： 公有云</li><li>CDC： 本地专用集群</li></ul>
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>CDC 集群 ID</p>
                     * @return CdcClusterId <p>CDC 集群 ID</p>
                     * 
                     */
                    std::string GetCdcClusterId() const;

                    /**
                     * 设置<p>CDC 集群 ID</p>
                     * @param _cdcClusterId <p>CDC 集群 ID</p>
                     * 
                     */
                    void SetCdcClusterId(const std::string& _cdcClusterId);

                    /**
                     * 判断参数 CdcClusterId 是否已赋值
                     * @return CdcClusterId 是否已赋值
                     * 
                     */
                    bool CdcClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>可用区</p>
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>私有网络ID，形如 vpc-xxx。有效的 VpcId 可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">私有网络</a>控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a>，从接口返回中的 unVpcId 字段获取。若在创建子机时 VpcId 与 SubnetId 同时传入 DEFAULT，则强制使用默认 vpc 网络。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络子网 ID，形如 subnet-xxx。有效的私有网络子网 ID 可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">子网控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets</a>，从接口返回中的 unSubnetId 字段获取。若在创建子机时 SubnetId 与 VpcId 同时传入 DEFAULT，则强制使用默认 vpc 网络。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群的节点规格，需要输入对应的规格标识：<br>2C8G：rabbit-vip-profession-2c8g<br>4C16G：rabbit-vip-profession-4c16g<br>8C32G：rabbit-vip-profession-8c32g<br>16C32G：rabbit-vip-basic-4<br>16C64G：rabbit-vip-profession-16c64g<br>2C4G：rabbit-vip-basic-5<br>4C8G：rabbit-vip-basic-1<br>8C16G（已售罄）：rabbit-vip-basic-2<br>不传默认为 4C8G：rabbit-vip-basic-1</p>
                     */
                    std::string m_nodeSpec;
                    bool m_nodeSpecHasBeenSet;

                    /**
                     * <p>节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3</p>
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>单节点存储规格,不传默认为200G</p>
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * <p>是否开启默认镜像队列，true 表示为开启，false 表示为不开启。不传默认为 false。该参数对4.x集群不生效。</p>
                     */
                    bool m_enableCreateDefaultHaMirrorQueue;
                    bool m_enableCreateDefaultHaMirrorQueueHasBeenSet;

                    /**
                     * <p>仅预付费集群（PayMode 参数为 1 时）使用该参数，表示是否自动续费，true 表示打开自动续费。不传默认为 true</p>
                     */
                    bool m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>购买时长,不传默认为1(月)</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>付费方式，0 为后付费，即按量计费；1 为预付费，即包年包月。默认包年包月</p>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>集群版本，不传默认为 3.8.30，可选值为 3.8.30、3.11.8和3.13.7</p>
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * <p>是否国际站请求，默认 false</p>
                     */
                    bool m_isIntl;
                    bool m_isIntlHasBeenSet;

                    /**
                     * <p>资源标签列表</p>
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>公网带宽大小，单位 Mbps</p>
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>是否打开公网接入，不传默认为false</p>
                     */
                    bool m_enablePublicAccess;
                    bool m_enablePublicAccessHasBeenSet;

                    /**
                     * <p>是否打开集群删除保护，不传默认为 false</p>
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                    /**
                     * <p>集群类型</p><p>枚举值：</p><ul><li>NORMAL： 公有云</li><li>CDC： 本地专用集群</li></ul>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>CDC 集群 ID</p>
                     */
                    std::string m_cdcClusterId;
                    bool m_cdcClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIPINSTANCEREQUEST_H_
