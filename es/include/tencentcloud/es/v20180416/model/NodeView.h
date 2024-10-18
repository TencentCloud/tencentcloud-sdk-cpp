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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_NODEVIEW_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_NODEVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 节点维度视图数据
                */
                class NodeView : public AbstractModel
                {
                public:
                    NodeView();
                    ~NodeView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点ID
                     * @return NodeId 节点ID
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点ID
                     * @param _nodeId 节点ID
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取节点IP
                     * @return NodeIp 节点IP
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置节点IP
                     * @param _nodeIp 节点IP
                     * 
                     */
                    void SetNodeIp(const std::string& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     * 
                     */
                    bool NodeIpHasBeenSet() const;

                    /**
                     * 获取节点是否可见
                     * @return Visible 节点是否可见
                     * 
                     */
                    double GetVisible() const;

                    /**
                     * 设置节点是否可见
                     * @param _visible 节点是否可见
                     * 
                     */
                    void SetVisible(const double& _visible);

                    /**
                     * 判断参数 Visible 是否已赋值
                     * @return Visible 是否已赋值
                     * 
                     */
                    bool VisibleHasBeenSet() const;

                    /**
                     * 获取是否熔断
                     * @return Break 是否熔断
                     * 
                     */
                    double GetBreak() const;

                    /**
                     * 设置是否熔断
                     * @param _break 是否熔断
                     * 
                     */
                    void SetBreak(const double& _break);

                    /**
                     * 判断参数 Break 是否已赋值
                     * @return Break 是否已赋值
                     * 
                     */
                    bool BreakHasBeenSet() const;

                    /**
                     * 获取节点总磁盘大小
                     * @return DiskSize 节点总磁盘大小
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置节点总磁盘大小
                     * @param _diskSize 节点总磁盘大小
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取磁盘使用率
                     * @return DiskUsage 磁盘使用率
                     * 
                     */
                    double GetDiskUsage() const;

                    /**
                     * 设置磁盘使用率
                     * @param _diskUsage 磁盘使用率
                     * 
                     */
                    void SetDiskUsage(const double& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取节点内存大小，单位GB
                     * @return MemSize 节点内存大小，单位GB
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置节点内存大小，单位GB
                     * @param _memSize 节点内存大小，单位GB
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取内存使用率
                     * @return MemUsage 内存使用率
                     * 
                     */
                    double GetMemUsage() const;

                    /**
                     * 设置内存使用率
                     * @param _memUsage 内存使用率
                     * 
                     */
                    void SetMemUsage(const double& _memUsage);

                    /**
                     * 判断参数 MemUsage 是否已赋值
                     * @return MemUsage 是否已赋值
                     * 
                     */
                    bool MemUsageHasBeenSet() const;

                    /**
                     * 获取节点cpu个数
                     * @return CpuNum 节点cpu个数
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置节点cpu个数
                     * @param _cpuNum 节点cpu个数
                     * 
                     */
                    void SetCpuNum(const int64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取cpu使用率
                     * @return CpuUsage cpu使用率
                     * 
                     */
                    double GetCpuUsage() const;

                    /**
                     * 设置cpu使用率
                     * @param _cpuUsage cpu使用率
                     * 
                     */
                    void SetCpuUsage(const double& _cpuUsage);

                    /**
                     * 判断参数 CpuUsage 是否已赋值
                     * @return CpuUsage 是否已赋值
                     * 
                     */
                    bool CpuUsageHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取节点角色
                     * @return NodeRole 节点角色
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置节点角色
                     * @param _nodeRole 节点角色
                     * 
                     */
                    void SetNodeRole(const std::string& _nodeRole);

                    /**
                     * 判断参数 NodeRole 是否已赋值
                     * @return NodeRole 是否已赋值
                     * 
                     */
                    bool NodeRoleHasBeenSet() const;

                    /**
                     * 获取节点HTTP IP
                     * @return NodeHttpIp 节点HTTP IP
                     * 
                     */
                    std::string GetNodeHttpIp() const;

                    /**
                     * 设置节点HTTP IP
                     * @param _nodeHttpIp 节点HTTP IP
                     * 
                     */
                    void SetNodeHttpIp(const std::string& _nodeHttpIp);

                    /**
                     * 判断参数 NodeHttpIp 是否已赋值
                     * @return NodeHttpIp 是否已赋值
                     * 
                     */
                    bool NodeHttpIpHasBeenSet() const;

                    /**
                     * 获取JVM内存使用率
                     * @return JvmMemUsage JVM内存使用率
                     * 
                     */
                    double GetJvmMemUsage() const;

                    /**
                     * 设置JVM内存使用率
                     * @param _jvmMemUsage JVM内存使用率
                     * 
                     */
                    void SetJvmMemUsage(const double& _jvmMemUsage);

                    /**
                     * 判断参数 JvmMemUsage 是否已赋值
                     * @return JvmMemUsage 是否已赋值
                     * 
                     */
                    bool JvmMemUsageHasBeenSet() const;

                    /**
                     * 获取节点分片数
                     * @return ShardNum 节点分片数
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 设置节点分片数
                     * @param _shardNum 节点分片数
                     * 
                     */
                    void SetShardNum(const int64_t& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取节点上磁盘ID列表
                     * @return DiskIds 节点上磁盘ID列表
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置节点上磁盘ID列表
                     * @param _diskIds 节点上磁盘ID列表
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取是否为隐藏可用区
                     * @return Hidden 是否为隐藏可用区
                     * 
                     */
                    bool GetHidden() const;

                    /**
                     * 设置是否为隐藏可用区
                     * @param _hidden 是否为隐藏可用区
                     * 
                     */
                    void SetHidden(const bool& _hidden);

                    /**
                     * 判断参数 Hidden 是否已赋值
                     * @return Hidden 是否已赋值
                     * 
                     */
                    bool HiddenHasBeenSet() const;

                    /**
                     * 获取是否充当协调节点的角色
                     * @return IsCoordinationNode 是否充当协调节点的角色
                     * 
                     */
                    bool GetIsCoordinationNode() const;

                    /**
                     * 设置是否充当协调节点的角色
                     * @param _isCoordinationNode 是否充当协调节点的角色
                     * 
                     */
                    void SetIsCoordinationNode(const bool& _isCoordinationNode);

                    /**
                     * 判断参数 IsCoordinationNode 是否已赋值
                     * @return IsCoordinationNode 是否已赋值
                     * 
                     */
                    bool IsCoordinationNodeHasBeenSet() const;

                    /**
                     * 获取CVM运行状态
                     * @return CVMStatus CVM运行状态
                     * 
                     */
                    std::string GetCVMStatus() const;

                    /**
                     * 设置CVM运行状态
                     * @param _cVMStatus CVM运行状态
                     * 
                     */
                    void SetCVMStatus(const std::string& _cVMStatus);

                    /**
                     * 判断参数 CVMStatus 是否已赋值
                     * @return CVMStatus 是否已赋值
                     * 
                     */
                    bool CVMStatusHasBeenSet() const;

                    /**
                     * 获取cvm绑定的置放群组的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CVMDisasterRecoverGroupId cvm绑定的置放群组的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCVMDisasterRecoverGroupId() const;

                    /**
                     * 设置cvm绑定的置放群组的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cVMDisasterRecoverGroupId cvm绑定的置放群组的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCVMDisasterRecoverGroupId(const std::string& _cVMDisasterRecoverGroupId);

                    /**
                     * 判断参数 CVMDisasterRecoverGroupId 是否已赋值
                     * @return CVMDisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool CVMDisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取cvm绑定置放群组的状态。2: 已绑定；1: 绑定中；0: 未开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CVMDisasterRecoverGroupStatus cvm绑定置放群组的状态。2: 已绑定；1: 绑定中；0: 未开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCVMDisasterRecoverGroupStatus() const;

                    /**
                     * 设置cvm绑定置放群组的状态。2: 已绑定；1: 绑定中；0: 未开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cVMDisasterRecoverGroupStatus cvm绑定置放群组的状态。2: 已绑定；1: 绑定中；0: 未开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCVMDisasterRecoverGroupStatus(const int64_t& _cVMDisasterRecoverGroupStatus);

                    /**
                     * 判断参数 CVMDisasterRecoverGroupStatus 是否已赋值
                     * @return CVMDisasterRecoverGroupStatus 是否已赋值
                     * 
                     */
                    bool CVMDisasterRecoverGroupStatusHasBeenSet() const;

                private:

                    /**
                     * 节点ID
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点IP
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * 节点是否可见
                     */
                    double m_visible;
                    bool m_visibleHasBeenSet;

                    /**
                     * 是否熔断
                     */
                    double m_break;
                    bool m_breakHasBeenSet;

                    /**
                     * 节点总磁盘大小
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 磁盘使用率
                     */
                    double m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * 节点内存大小，单位GB
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 内存使用率
                     */
                    double m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * 节点cpu个数
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * cpu使用率
                     */
                    double m_cpuUsage;
                    bool m_cpuUsageHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 节点角色
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * 节点HTTP IP
                     */
                    std::string m_nodeHttpIp;
                    bool m_nodeHttpIpHasBeenSet;

                    /**
                     * JVM内存使用率
                     */
                    double m_jvmMemUsage;
                    bool m_jvmMemUsageHasBeenSet;

                    /**
                     * 节点分片数
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * 节点上磁盘ID列表
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * 是否为隐藏可用区
                     */
                    bool m_hidden;
                    bool m_hiddenHasBeenSet;

                    /**
                     * 是否充当协调节点的角色
                     */
                    bool m_isCoordinationNode;
                    bool m_isCoordinationNodeHasBeenSet;

                    /**
                     * CVM运行状态
                     */
                    std::string m_cVMStatus;
                    bool m_cVMStatusHasBeenSet;

                    /**
                     * cvm绑定的置放群组的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cVMDisasterRecoverGroupId;
                    bool m_cVMDisasterRecoverGroupIdHasBeenSet;

                    /**
                     * cvm绑定置放群组的状态。2: 已绑定；1: 绑定中；0: 未开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cVMDisasterRecoverGroupStatus;
                    bool m_cVMDisasterRecoverGroupStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_NODEVIEW_H_
