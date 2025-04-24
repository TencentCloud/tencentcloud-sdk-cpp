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
                     * 获取可用区
                     * @return ZoneIds 可用区
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置可用区
                     * @param _zoneIds 可用区
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
                     * 获取私有网络ID，形如 vpc-xxx。有效的 VpcId 可通过登录[私有网络](https://console.cloud.tencent.com/vpc/vpc?rid=1)控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372)，从接口返回中的 unVpcId 字段获取。若在创建子机时 VpcId 与 SubnetId 同时传入 DEFAULT，则强制使用默认 vpc 网络。
                     * @return VpcId 私有网络ID，形如 vpc-xxx。有效的 VpcId 可通过登录[私有网络](https://console.cloud.tencent.com/vpc/vpc?rid=1)控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372)，从接口返回中的 unVpcId 字段获取。若在创建子机时 VpcId 与 SubnetId 同时传入 DEFAULT，则强制使用默认 vpc 网络。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，形如 vpc-xxx。有效的 VpcId 可通过登录[私有网络](https://console.cloud.tencent.com/vpc/vpc?rid=1)控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372)，从接口返回中的 unVpcId 字段获取。若在创建子机时 VpcId 与 SubnetId 同时传入 DEFAULT，则强制使用默认 vpc 网络。
                     * @param _vpcId 私有网络ID，形如 vpc-xxx。有效的 VpcId 可通过登录[私有网络](https://console.cloud.tencent.com/vpc/vpc?rid=1)控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372)，从接口返回中的 unVpcId 字段获取。若在创建子机时 VpcId 与 SubnetId 同时传入 DEFAULT，则强制使用默认 vpc 网络。
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
                     * 获取私有网络子网 ID，形如 subnet-xxx。有效的私有网络子网 ID 可通过登录[子网控制台](https://console.cloud.tencent.com/vpc/subnet?rid=1)查询；也可以调用接口 [DescribeSubnets](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的 unSubnetId 字段获取。若在创建子机时 SubnetId 与 VpcId 同时传入 DEFAULT，则强制使用默认 vpc 网络。
                     * @return SubnetId 私有网络子网 ID，形如 subnet-xxx。有效的私有网络子网 ID 可通过登录[子网控制台](https://console.cloud.tencent.com/vpc/subnet?rid=1)查询；也可以调用接口 [DescribeSubnets](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的 unSubnetId 字段获取。若在创建子机时 SubnetId 与 VpcId 同时传入 DEFAULT，则强制使用默认 vpc 网络。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络子网 ID，形如 subnet-xxx。有效的私有网络子网 ID 可通过登录[子网控制台](https://console.cloud.tencent.com/vpc/subnet?rid=1)查询；也可以调用接口 [DescribeSubnets](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的 unSubnetId 字段获取。若在创建子机时 SubnetId 与 VpcId 同时传入 DEFAULT，则强制使用默认 vpc 网络。
                     * @param _subnetId 私有网络子网 ID，形如 subnet-xxx。有效的私有网络子网 ID 可通过登录[子网控制台](https://console.cloud.tencent.com/vpc/subnet?rid=1)查询；也可以调用接口 [DescribeSubnets](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的 unSubnetId 字段获取。若在创建子机时 SubnetId 与 VpcId 同时传入 DEFAULT，则强制使用默认 vpc 网络。
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
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
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
                     * 获取集群的节点规格，需要输入对应的规格标识：
2C8G：rabbit-vip-basic-2c8g
4C16G：rabbit-vip-basic-4c16g
8C32G：rabbit-vip-basic-8c32g
16C32G：rabbit-vip-basic-4
16C64G：rabbit-vip-basic-16c64g
2C4G：rabbit-vip-basic-5
4C8G：rabbit-vip-basic-1
8C16G（已售罄）：rabbit-vip-basic-2
不传默认为 4C8G：rabbit-vip-basic-1
                     * @return NodeSpec 集群的节点规格，需要输入对应的规格标识：
2C8G：rabbit-vip-basic-2c8g
4C16G：rabbit-vip-basic-4c16g
8C32G：rabbit-vip-basic-8c32g
16C32G：rabbit-vip-basic-4
16C64G：rabbit-vip-basic-16c64g
2C4G：rabbit-vip-basic-5
4C8G：rabbit-vip-basic-1
8C16G（已售罄）：rabbit-vip-basic-2
不传默认为 4C8G：rabbit-vip-basic-1
                     * 
                     */
                    std::string GetNodeSpec() const;

                    /**
                     * 设置集群的节点规格，需要输入对应的规格标识：
2C8G：rabbit-vip-basic-2c8g
4C16G：rabbit-vip-basic-4c16g
8C32G：rabbit-vip-basic-8c32g
16C32G：rabbit-vip-basic-4
16C64G：rabbit-vip-basic-16c64g
2C4G：rabbit-vip-basic-5
4C8G：rabbit-vip-basic-1
8C16G（已售罄）：rabbit-vip-basic-2
不传默认为 4C8G：rabbit-vip-basic-1
                     * @param _nodeSpec 集群的节点规格，需要输入对应的规格标识：
2C8G：rabbit-vip-basic-2c8g
4C16G：rabbit-vip-basic-4c16g
8C32G：rabbit-vip-basic-8c32g
16C32G：rabbit-vip-basic-4
16C64G：rabbit-vip-basic-16c64g
2C4G：rabbit-vip-basic-5
4C8G：rabbit-vip-basic-1
8C16G（已售罄）：rabbit-vip-basic-2
不传默认为 4C8G：rabbit-vip-basic-1
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
                     * 获取节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3
                     * @return NodeNum 节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3
                     * @param _nodeNum 节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3
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
                     * 获取单节点存储规格,不传默认为200G
                     * @return StorageSize 单节点存储规格,不传默认为200G
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置单节点存储规格,不传默认为200G
                     * @param _storageSize 单节点存储规格,不传默认为200G
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
                     * 获取是否开启默认镜像队列，true 表示为开启，false 表示为不开启。不传默认为 false
                     * @return EnableCreateDefaultHaMirrorQueue 是否开启默认镜像队列，true 表示为开启，false 表示为不开启。不传默认为 false
                     * 
                     */
                    bool GetEnableCreateDefaultHaMirrorQueue() const;

                    /**
                     * 设置是否开启默认镜像队列，true 表示为开启，false 表示为不开启。不传默认为 false
                     * @param _enableCreateDefaultHaMirrorQueue 是否开启默认镜像队列，true 表示为开启，false 表示为不开启。不传默认为 false
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
                     * 获取仅预付费集群（PayMode 参数为 1 时）使用该参数，表示是否自动续费，true 表示打开自动续费。不传默认为 true
                     * @return AutoRenewFlag 仅预付费集群（PayMode 参数为 1 时）使用该参数，表示是否自动续费，true 表示打开自动续费。不传默认为 true
                     * 
                     */
                    bool GetAutoRenewFlag() const;

                    /**
                     * 设置仅预付费集群（PayMode 参数为 1 时）使用该参数，表示是否自动续费，true 表示打开自动续费。不传默认为 true
                     * @param _autoRenewFlag 仅预付费集群（PayMode 参数为 1 时）使用该参数，表示是否自动续费，true 表示打开自动续费。不传默认为 true
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
                     * 获取购买时长,不传默认为1(月)
                     * @return TimeSpan 购买时长,不传默认为1(月)
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长,不传默认为1(月)
                     * @param _timeSpan 购买时长,不传默认为1(月)
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
                     * 获取付费方式，0 为后付费，即按量计费；1 为预付费，即包年包月。默认包年包月
                     * @return PayMode 付费方式，0 为后付费，即按量计费；1 为预付费，即包年包月。默认包年包月
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置付费方式，0 为后付费，即按量计费；1 为预付费，即包年包月。默认包年包月
                     * @param _payMode 付费方式，0 为后付费，即按量计费；1 为预付费，即包年包月。默认包年包月
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
                     * 获取集群版本，不传默认为 3.8.30，可选值为 3.8.30 和 3.11.8
                     * @return ClusterVersion 集群版本，不传默认为 3.8.30，可选值为 3.8.30 和 3.11.8
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置集群版本，不传默认为 3.8.30，可选值为 3.8.30 和 3.11.8
                     * @param _clusterVersion 集群版本，不传默认为 3.8.30，可选值为 3.8.30 和 3.11.8
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
                     * 获取是否国际站请求，默认 false
                     * @return IsIntl 是否国际站请求，默认 false
                     * 
                     */
                    bool GetIsIntl() const;

                    /**
                     * 设置是否国际站请求，默认 false
                     * @param _isIntl 是否国际站请求，默认 false
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
                     * 获取资源标签列表
                     * @return ResourceTags 资源标签列表
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置资源标签列表
                     * @param _resourceTags 资源标签列表
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
                     * 获取公网带宽大小，单位 Mbps
                     * @return Bandwidth 公网带宽大小，单位 Mbps
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置公网带宽大小，单位 Mbps
                     * @param _bandwidth 公网带宽大小，单位 Mbps
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
                     * 获取是否打开公网接入，不传默认为false
                     * @return EnablePublicAccess 是否打开公网接入，不传默认为false
                     * 
                     */
                    bool GetEnablePublicAccess() const;

                    /**
                     * 设置是否打开公网接入，不传默认为false
                     * @param _enablePublicAccess 是否打开公网接入，不传默认为false
                     * 
                     */
                    void SetEnablePublicAccess(const bool& _enablePublicAccess);

                    /**
                     * 判断参数 EnablePublicAccess 是否已赋值
                     * @return EnablePublicAccess 是否已赋值
                     * 
                     */
                    bool EnablePublicAccessHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 私有网络ID，形如 vpc-xxx。有效的 VpcId 可通过登录[私有网络](https://console.cloud.tencent.com/vpc/vpc?rid=1)控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372)，从接口返回中的 unVpcId 字段获取。若在创建子机时 VpcId 与 SubnetId 同时传入 DEFAULT，则强制使用默认 vpc 网络。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络子网 ID，形如 subnet-xxx。有效的私有网络子网 ID 可通过登录[子网控制台](https://console.cloud.tencent.com/vpc/subnet?rid=1)查询；也可以调用接口 [DescribeSubnets](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的 unSubnetId 字段获取。若在创建子机时 SubnetId 与 VpcId 同时传入 DEFAULT，则强制使用默认 vpc 网络。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群的节点规格，需要输入对应的规格标识：
2C8G：rabbit-vip-basic-2c8g
4C16G：rabbit-vip-basic-4c16g
8C32G：rabbit-vip-basic-8c32g
16C32G：rabbit-vip-basic-4
16C64G：rabbit-vip-basic-16c64g
2C4G：rabbit-vip-basic-5
4C8G：rabbit-vip-basic-1
8C16G（已售罄）：rabbit-vip-basic-2
不传默认为 4C8G：rabbit-vip-basic-1
                     */
                    std::string m_nodeSpec;
                    bool m_nodeSpecHasBeenSet;

                    /**
                     * 节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 单节点存储规格,不传默认为200G
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 是否开启默认镜像队列，true 表示为开启，false 表示为不开启。不传默认为 false
                     */
                    bool m_enableCreateDefaultHaMirrorQueue;
                    bool m_enableCreateDefaultHaMirrorQueueHasBeenSet;

                    /**
                     * 仅预付费集群（PayMode 参数为 1 时）使用该参数，表示是否自动续费，true 表示打开自动续费。不传默认为 true
                     */
                    bool m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 购买时长,不传默认为1(月)
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 付费方式，0 为后付费，即按量计费；1 为预付费，即包年包月。默认包年包月
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 集群版本，不传默认为 3.8.30，可选值为 3.8.30 和 3.11.8
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 是否国际站请求，默认 false
                     */
                    bool m_isIntl;
                    bool m_isIntlHasBeenSet;

                    /**
                     * 资源标签列表
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 公网带宽大小，单位 Mbps
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 是否打开公网接入，不传默认为false
                     */
                    bool m_enablePublicAccess;
                    bool m_enablePublicAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIPINSTANCEREQUEST_H_
