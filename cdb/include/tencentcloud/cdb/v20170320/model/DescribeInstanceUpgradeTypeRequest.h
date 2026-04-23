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
                     * 获取<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @return InstanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @param _instanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
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
                     * 获取<p>目标实例 CPU 的核数。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的 CPU 值范围。</p>
                     * @return DstCpu <p>目标实例 CPU 的核数。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的 CPU 值范围。</p>
                     * 
                     */
                    double GetDstCpu() const;

                    /**
                     * 设置<p>目标实例 CPU 的核数。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的 CPU 值范围。</p>
                     * @param _dstCpu <p>目标实例 CPU 的核数。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的 CPU 值范围。</p>
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
                     * 获取<p>目标实例内存大小，单位：MB。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的内存大小范围。</p>
                     * @return DstMemory <p>目标实例内存大小，单位：MB。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的内存大小范围。</p>
                     * 
                     */
                    uint64_t GetDstMemory() const;

                    /**
                     * 设置<p>目标实例内存大小，单位：MB。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的内存大小范围。</p>
                     * @param _dstMemory <p>目标实例内存大小，单位：MB。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的内存大小范围。</p>
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
                     * 获取<p>目标实例磁盘大小，单位：GB。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的磁盘大小范围。</p>
                     * @return DstDisk <p>目标实例磁盘大小，单位：GB。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的磁盘大小范围。</p>
                     * 
                     */
                    uint64_t GetDstDisk() const;

                    /**
                     * 设置<p>目标实例磁盘大小，单位：GB。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的磁盘大小范围。</p>
                     * @param _dstDisk <p>目标实例磁盘大小，单位：GB。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的磁盘大小范围。</p>
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
                     * 获取<p>目标实例数据库版本。可选值：5.6，5.7，8.0。</p>
                     * @return DstVersion <p>目标实例数据库版本。可选值：5.6，5.7，8.0。</p>
                     * 
                     */
                    std::string GetDstVersion() const;

                    /**
                     * 设置<p>目标实例数据库版本。可选值：5.6，5.7，8.0。</p>
                     * @param _dstVersion <p>目标实例数据库版本。可选值：5.6，5.7，8.0。</p>
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
                     * 获取<p>目标实例部署模型。默认为0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。</p>
                     * @return DstDeployMode <p>目标实例部署模型。默认为0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。</p>
                     * 
                     */
                    int64_t GetDstDeployMode() const;

                    /**
                     * 设置<p>目标实例部署模型。默认为0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。</p>
                     * @param _dstDeployMode <p>目标实例部署模型。默认为0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。</p>
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
                     * 获取<p>目标实例复制类型，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
                     * @return DstProtectMode <p>目标实例复制类型，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
                     * 
                     */
                    int64_t GetDstProtectMode() const;

                    /**
                     * 设置<p>目标实例复制类型，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
                     * @param _dstProtectMode <p>目标实例复制类型，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
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
                     * 获取<p>目标实例备机1可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
                     * @return DstSlaveZone <p>目标实例备机1可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
                     * 
                     */
                    int64_t GetDstSlaveZone() const;

                    /**
                     * 设置<p>目标实例备机1可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
                     * @param _dstSlaveZone <p>目标实例备机1可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
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
                     * 获取<p>目标实例备机2可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
                     * @return DstBackupZone <p>目标实例备机2可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
                     * 
                     */
                    int64_t GetDstBackupZone() const;

                    /**
                     * 设置<p>目标实例备机2可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
                     * @param _dstBackupZone <p>目标实例备机2可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
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
                     * 获取<p>目标实例类型。支持值包括：&quot;CUSTOM&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;ONTKE&quot; - ONTKE 单节点实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。</p>
                     * @return DstCdbType <p>目标实例类型。支持值包括：&quot;CUSTOM&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;ONTKE&quot; - ONTKE 单节点实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。</p>
                     * 
                     */
                    std::string GetDstCdbType() const;

                    /**
                     * 设置<p>目标实例类型。支持值包括：&quot;CUSTOM&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;ONTKE&quot; - ONTKE 单节点实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。</p>
                     * @param _dstCdbType <p>目标实例类型。支持值包括：&quot;CUSTOM&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;ONTKE&quot; - ONTKE 单节点实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。</p>
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
                     * 获取<p>目标实例主可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
                     * @return DstZoneId <p>目标实例主可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
                     * 
                     */
                    int64_t GetDstZoneId() const;

                    /**
                     * 设置<p>目标实例主可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
                     * @param _dstZoneId <p>目标实例主可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
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
                     * 获取<p>独享集群 CDB 实例的节点分布情况。</p>
                     * @return NodeDistribution <p>独享集群 CDB 实例的节点分布情况。</p>
                     * 
                     */
                    NodeDistribution GetNodeDistribution() const;

                    /**
                     * 设置<p>独享集群 CDB 实例的节点分布情况。</p>
                     * @param _nodeDistribution <p>独享集群 CDB 实例的节点分布情况。</p>
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
                     * 获取<p>云盘版的节点拓扑配置。Nodeld 信息可通过 <a href="https://cloud.tencent.com/document/api/236/105116">DescribeClusterInfo</a> 接口获取。</p>
                     * @return ClusterTopology <p>云盘版的节点拓扑配置。Nodeld 信息可通过 <a href="https://cloud.tencent.com/document/api/236/105116">DescribeClusterInfo</a> 接口获取。</p>
                     * 
                     */
                    ClusterTopology GetClusterTopology() const;

                    /**
                     * 设置<p>云盘版的节点拓扑配置。Nodeld 信息可通过 <a href="https://cloud.tencent.com/document/api/236/105116">DescribeClusterInfo</a> 接口获取。</p>
                     * @param _clusterTopology <p>云盘版的节点拓扑配置。Nodeld 信息可通过 <a href="https://cloud.tencent.com/document/api/236/105116">DescribeClusterInfo</a> 接口获取。</p>
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
                     * <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>目标实例 CPU 的核数。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的 CPU 值范围。</p>
                     */
                    double m_dstCpu;
                    bool m_dstCpuHasBeenSet;

                    /**
                     * <p>目标实例内存大小，单位：MB。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的内存大小范围。</p>
                     */
                    uint64_t m_dstMemory;
                    bool m_dstMemoryHasBeenSet;

                    /**
                     * <p>目标实例磁盘大小，单位：GB。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取实例可售卖的磁盘大小范围。</p>
                     */
                    uint64_t m_dstDisk;
                    bool m_dstDiskHasBeenSet;

                    /**
                     * <p>目标实例数据库版本。可选值：5.6，5.7，8.0。</p>
                     */
                    std::string m_dstVersion;
                    bool m_dstVersionHasBeenSet;

                    /**
                     * <p>目标实例部署模型。默认为0，支持值包括：0 - 表示单可用区，1 - 表示多可用区。</p>
                     */
                    int64_t m_dstDeployMode;
                    bool m_dstDeployModeHasBeenSet;

                    /**
                     * <p>目标实例复制类型，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
                     */
                    int64_t m_dstProtectMode;
                    bool m_dstProtectModeHasBeenSet;

                    /**
                     * <p>目标实例备机1可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
                     */
                    int64_t m_dstSlaveZone;
                    bool m_dstSlaveZoneHasBeenSet;

                    /**
                     * <p>目标实例备机2可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
                     */
                    int64_t m_dstBackupZone;
                    bool m_dstBackupZoneHasBeenSet;

                    /**
                     * <p>目标实例类型。支持值包括：&quot;CUSTOM&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;ONTKE&quot; - ONTKE 单节点实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。</p>
                     */
                    std::string m_dstCdbType;
                    bool m_dstCdbTypeHasBeenSet;

                    /**
                     * <p>目标实例主可用区 ID。可使用 <a href="https://cloud.tencent.com/document/product/236/80281">DescribeCdbZoneConfig</a> 获取可用区 ID。</p>
                     */
                    int64_t m_dstZoneId;
                    bool m_dstZoneIdHasBeenSet;

                    /**
                     * <p>独享集群 CDB 实例的节点分布情况。</p>
                     */
                    NodeDistribution m_nodeDistribution;
                    bool m_nodeDistributionHasBeenSet;

                    /**
                     * <p>云盘版的节点拓扑配置。Nodeld 信息可通过 <a href="https://cloud.tencent.com/document/api/236/105116">DescribeClusterInfo</a> 接口获取。</p>
                     */
                    ClusterTopology m_clusterTopology;
                    bool m_clusterTopologyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEUPGRADETYPEREQUEST_H_
