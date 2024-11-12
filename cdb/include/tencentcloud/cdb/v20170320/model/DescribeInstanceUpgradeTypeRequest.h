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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEUPGRADETYPEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEUPGRADETYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/NodeDistribution.h>
#include <tencentcloud/cdb/v20170320/model/ClusterTopology.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeInstanceUpgradeType请求参数结构体
                */
                class DescribeInstanceUpgradeTypeRequest : public AbstractModel
                {
                public:
                    DescribeInstanceUpgradeTypeRequest();
                    ~DescribeInstanceUpgradeTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取目标实例 CPU 的核数。
                     * @return DstCpu 目标实例 CPU 的核数。
                     * 
                     */
                    double GetDstCpu() const;

                    /**
                     * 设置目标实例 CPU 的核数。
                     * @param _dstCpu 目标实例 CPU 的核数。
                     * 
                     */
                    void SetDstCpu(const double& _dstCpu);

                    /**
                     * 判断参数 DstCpu 是否已赋值
                     * @return DstCpu 是否已赋值
                     * 
                     */
                    bool DstCpuHasBeenSet() const;

                    /**
                     * 获取目标实例内存大小，单位：MB。
                     * @return DstMemory 目标实例内存大小，单位：MB。
                     * 
                     */
                    uint64_t GetDstMemory() const;

                    /**
                     * 设置目标实例内存大小，单位：MB。
                     * @param _dstMemory 目标实例内存大小，单位：MB。
                     * 
                     */
                    void SetDstMemory(const uint64_t& _dstMemory);

                    /**
                     * 判断参数 DstMemory 是否已赋值
                     * @return DstMemory 是否已赋值
                     * 
                     */
                    bool DstMemoryHasBeenSet() const;

                    /**
                     * 获取目标实例磁盘大小，单位：GB。
                     * @return DstDisk 目标实例磁盘大小，单位：GB。
                     * 
                     */
                    uint64_t GetDstDisk() const;

                    /**
                     * 设置目标实例磁盘大小，单位：GB。
                     * @param _dstDisk 目标实例磁盘大小，单位：GB。
                     * 
                     */
                    void SetDstDisk(const uint64_t& _dstDisk);

                    /**
                     * 判断参数 DstDisk 是否已赋值
                     * @return DstDisk 是否已赋值
                     * 
                     */
                    bool DstDiskHasBeenSet() const;

                    /**
                     * 获取目标实例数据库版本。
                     * @return DstVersion 目标实例数据库版本。
                     * 
                     */
                    std::string GetDstVersion() const;

                    /**
                     * 设置目标实例数据库版本。
                     * @param _dstVersion 目标实例数据库版本。
                     * 
                     */
                    void SetDstVersion(const std::string& _dstVersion);

                    /**
                     * 判断参数 DstVersion 是否已赋值
                     * @return DstVersion 是否已赋值
                     * 
                     */
                    bool DstVersionHasBeenSet() const;

                    /**
                     * 获取目标实例部署模型。
                     * @return DstDeployMode 目标实例部署模型。
                     * 
                     */
                    int64_t GetDstDeployMode() const;

                    /**
                     * 设置目标实例部署模型。
                     * @param _dstDeployMode 目标实例部署模型。
                     * 
                     */
                    void SetDstDeployMode(const int64_t& _dstDeployMode);

                    /**
                     * 判断参数 DstDeployMode 是否已赋值
                     * @return DstDeployMode 是否已赋值
                     * 
                     */
                    bool DstDeployModeHasBeenSet() const;

                    /**
                     * 获取目标实例复制类型。
                     * @return DstProtectMode 目标实例复制类型。
                     * 
                     */
                    int64_t GetDstProtectMode() const;

                    /**
                     * 设置目标实例复制类型。
                     * @param _dstProtectMode 目标实例复制类型。
                     * 
                     */
                    void SetDstProtectMode(const int64_t& _dstProtectMode);

                    /**
                     * 判断参数 DstProtectMode 是否已赋值
                     * @return DstProtectMode 是否已赋值
                     * 
                     */
                    bool DstProtectModeHasBeenSet() const;

                    /**
                     * 获取目标实例备机1可用区。
                     * @return DstSlaveZone 目标实例备机1可用区。
                     * 
                     */
                    int64_t GetDstSlaveZone() const;

                    /**
                     * 设置目标实例备机1可用区。
                     * @param _dstSlaveZone 目标实例备机1可用区。
                     * 
                     */
                    void SetDstSlaveZone(const int64_t& _dstSlaveZone);

                    /**
                     * 判断参数 DstSlaveZone 是否已赋值
                     * @return DstSlaveZone 是否已赋值
                     * 
                     */
                    bool DstSlaveZoneHasBeenSet() const;

                    /**
                     * 获取目标实例备机2可用区。
                     * @return DstBackupZone 目标实例备机2可用区。
                     * 
                     */
                    int64_t GetDstBackupZone() const;

                    /**
                     * 设置目标实例备机2可用区。
                     * @param _dstBackupZone 目标实例备机2可用区。
                     * 
                     */
                    void SetDstBackupZone(const int64_t& _dstBackupZone);

                    /**
                     * 判断参数 DstBackupZone 是否已赋值
                     * @return DstBackupZone 是否已赋值
                     * 
                     */
                    bool DstBackupZoneHasBeenSet() const;

                    /**
                     * 获取目标实例类型。
                     * @return DstCdbType 目标实例类型。
                     * 
                     */
                    std::string GetDstCdbType() const;

                    /**
                     * 设置目标实例类型。
                     * @param _dstCdbType 目标实例类型。
                     * 
                     */
                    void SetDstCdbType(const std::string& _dstCdbType);

                    /**
                     * 判断参数 DstCdbType 是否已赋值
                     * @return DstCdbType 是否已赋值
                     * 
                     */
                    bool DstCdbTypeHasBeenSet() const;

                    /**
                     * 获取目标实例主可用区。
                     * @return DstZoneId 目标实例主可用区。
                     * 
                     */
                    int64_t GetDstZoneId() const;

                    /**
                     * 设置目标实例主可用区。
                     * @param _dstZoneId 目标实例主可用区。
                     * 
                     */
                    void SetDstZoneId(const int64_t& _dstZoneId);

                    /**
                     * 判断参数 DstZoneId 是否已赋值
                     * @return DstZoneId 是否已赋值
                     * 
                     */
                    bool DstZoneIdHasBeenSet() const;

                    /**
                     * 获取独享集群 CDB 实例的节点分布情况。
                     * @return NodeDistribution 独享集群 CDB 实例的节点分布情况。
                     * 
                     */
                    NodeDistribution GetNodeDistribution() const;

                    /**
                     * 设置独享集群 CDB 实例的节点分布情况。
                     * @param _nodeDistribution 独享集群 CDB 实例的节点分布情况。
                     * 
                     */
                    void SetNodeDistribution(const NodeDistribution& _nodeDistribution);

                    /**
                     * 判断参数 NodeDistribution 是否已赋值
                     * @return NodeDistribution 是否已赋值
                     * 
                     */
                    bool NodeDistributionHasBeenSet() const;

                    /**
                     * 获取集群版的节点拓扑配置
                     * @return ClusterTopology 集群版的节点拓扑配置
                     * 
                     */
                    ClusterTopology GetClusterTopology() const;

                    /**
                     * 设置集群版的节点拓扑配置
                     * @param _clusterTopology 集群版的节点拓扑配置
                     * 
                     */
                    void SetClusterTopology(const ClusterTopology& _clusterTopology);

                    /**
                     * 判断参数 ClusterTopology 是否已赋值
                     * @return ClusterTopology 是否已赋值
                     * 
                     */
                    bool ClusterTopologyHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 目标实例 CPU 的核数。
                     */
                    double m_dstCpu;
                    bool m_dstCpuHasBeenSet;

                    /**
                     * 目标实例内存大小，单位：MB。
                     */
                    uint64_t m_dstMemory;
                    bool m_dstMemoryHasBeenSet;

                    /**
                     * 目标实例磁盘大小，单位：GB。
                     */
                    uint64_t m_dstDisk;
                    bool m_dstDiskHasBeenSet;

                    /**
                     * 目标实例数据库版本。
                     */
                    std::string m_dstVersion;
                    bool m_dstVersionHasBeenSet;

                    /**
                     * 目标实例部署模型。
                     */
                    int64_t m_dstDeployMode;
                    bool m_dstDeployModeHasBeenSet;

                    /**
                     * 目标实例复制类型。
                     */
                    int64_t m_dstProtectMode;
                    bool m_dstProtectModeHasBeenSet;

                    /**
                     * 目标实例备机1可用区。
                     */
                    int64_t m_dstSlaveZone;
                    bool m_dstSlaveZoneHasBeenSet;

                    /**
                     * 目标实例备机2可用区。
                     */
                    int64_t m_dstBackupZone;
                    bool m_dstBackupZoneHasBeenSet;

                    /**
                     * 目标实例类型。
                     */
                    std::string m_dstCdbType;
                    bool m_dstCdbTypeHasBeenSet;

                    /**
                     * 目标实例主可用区。
                     */
                    int64_t m_dstZoneId;
                    bool m_dstZoneIdHasBeenSet;

                    /**
                     * 独享集群 CDB 实例的节点分布情况。
                     */
                    NodeDistribution m_nodeDistribution;
                    bool m_nodeDistributionHasBeenSet;

                    /**
                     * 集群版的节点拓扑配置
                     */
                    ClusterTopology m_clusterTopology;
                    bool m_clusterTopologyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEUPGRADETYPEREQUEST_H_
