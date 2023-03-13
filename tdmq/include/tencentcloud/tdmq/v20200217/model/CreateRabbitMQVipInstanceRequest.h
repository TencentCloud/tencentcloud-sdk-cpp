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
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置可用区
                     * @param ZoneIds 可用区
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取私有网络VpcId
                     * @return VpcId 私有网络VpcId
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络VpcId
                     * @param VpcId 私有网络VpcId
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络SubnetId
                     * @return SubnetId 私有网络SubnetId
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络SubnetId
                     * @param SubnetId 私有网络SubnetId
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param ClusterName 集群名称
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取节点规格,基础型rabbit-vip-basic-1,标准型rabbit-vip-basic-2,高阶1型rabbit-vip-basic-3,高阶2型rabbit-vip-basic-4。不传默认为基础型
                     * @return NodeSpec 节点规格,基础型rabbit-vip-basic-1,标准型rabbit-vip-basic-2,高阶1型rabbit-vip-basic-3,高阶2型rabbit-vip-basic-4。不传默认为基础型
                     */
                    std::string GetNodeSpec() const;

                    /**
                     * 设置节点规格,基础型rabbit-vip-basic-1,标准型rabbit-vip-basic-2,高阶1型rabbit-vip-basic-3,高阶2型rabbit-vip-basic-4。不传默认为基础型
                     * @param NodeSpec 节点规格,基础型rabbit-vip-basic-1,标准型rabbit-vip-basic-2,高阶1型rabbit-vip-basic-3,高阶2型rabbit-vip-basic-4。不传默认为基础型
                     */
                    void SetNodeSpec(const std::string& _nodeSpec);

                    /**
                     * 判断参数 NodeSpec 是否已赋值
                     * @return NodeSpec 是否已赋值
                     */
                    bool NodeSpecHasBeenSet() const;

                    /**
                     * 获取节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3
                     * @return NodeNum 节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3
                     * @param NodeNum 节点数量,多可用区最少为3节点。不传默认单可用区为1,多可用区为3
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取单节点存储规格,不传默认为200G
                     * @return StorageSize 单节点存储规格,不传默认为200G
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置单节点存储规格,不传默认为200G
                     * @param StorageSize 单节点存储规格,不传默认为200G
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取镜像队列,不传默认为false
                     * @return EnableCreateDefaultHaMirrorQueue 镜像队列,不传默认为false
                     */
                    bool GetEnableCreateDefaultHaMirrorQueue() const;

                    /**
                     * 设置镜像队列,不传默认为false
                     * @param EnableCreateDefaultHaMirrorQueue 镜像队列,不传默认为false
                     */
                    void SetEnableCreateDefaultHaMirrorQueue(const bool& _enableCreateDefaultHaMirrorQueue);

                    /**
                     * 判断参数 EnableCreateDefaultHaMirrorQueue 是否已赋值
                     * @return EnableCreateDefaultHaMirrorQueue 是否已赋值
                     */
                    bool EnableCreateDefaultHaMirrorQueueHasBeenSet() const;

                    /**
                     * 获取自动续费,不传默认为true
                     * @return AutoRenewFlag 自动续费,不传默认为true
                     */
                    bool GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费,不传默认为true
                     * @param AutoRenewFlag 自动续费,不传默认为true
                     */
                    void SetAutoRenewFlag(const bool& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取购买时长,不传默认为1(月)
                     * @return TimeSpan 购买时长,不传默认为1(月)
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长,不传默认为1(月)
                     * @param TimeSpan 购买时长,不传默认为1(月)
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 私有网络VpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络SubnetId
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 节点规格,基础型rabbit-vip-basic-1,标准型rabbit-vip-basic-2,高阶1型rabbit-vip-basic-3,高阶2型rabbit-vip-basic-4。不传默认为基础型
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
                     * 镜像队列,不传默认为false
                     */
                    bool m_enableCreateDefaultHaMirrorQueue;
                    bool m_enableCreateDefaultHaMirrorQueueHasBeenSet;

                    /**
                     * 自动续费,不传默认为true
                     */
                    bool m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 购买时长,不传默认为1(月)
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIPINSTANCEREQUEST_H_
