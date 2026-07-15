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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHNODEVIEW_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHNODEVIEW_H_

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
                * Logstash节点维度视图数据
                */
                class LogstashNodeView : public AbstractModel
                {
                public:
                    LogstashNodeView();
                    ~LogstashNodeView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeId 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeId 节点ID
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeIp 节点IP	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置节点IP	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeIp 节点IP	
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取节点HTTP IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeHttpIp 节点HTTP IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeHttpIp() const;

                    /**
                     * 设置节点HTTP IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeHttpIp 节点HTTP IP
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取节点总磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskSize 节点总磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置节点总磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskSize 节点总磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskUsage 磁盘使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDiskUsage() const;

                    /**
                     * 设置磁盘使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskUsage 磁盘使用率
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemSize 节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memSize 节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemUsage 内存使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMemUsage() const;

                    /**
                     * 设置内存使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memUsage 内存使用率
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取JVM内存使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JvmMemUsage JVM内存使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetJvmMemUsage() const;

                    /**
                     * 设置JVM内存使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jvmMemUsage JVM内存使用率
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取节点cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuNum 节点cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置节点cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuNum 节点cpu个数
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuUsage cpu使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCpuUsage() const;

                    /**
                     * 设置cpu使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuUsage cpu使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuUsage(const double& _cpuUsage);

                    /**
                     * 判断参数 CpuUsage 是否已赋值
                     * @return CpuUsage 是否已赋值
                     * 
                     */
                    bool CpuUsageHasBeenSet() const;

                private:

                    /**
                     * 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点IP	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * 节点HTTP IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeHttpIp;
                    bool m_nodeHttpIpHasBeenSet;

                    /**
                     * 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 节点总磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 磁盘使用率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * 节点内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 内存使用率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * JVM内存使用率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_jvmMemUsage;
                    bool m_jvmMemUsageHasBeenSet;

                    /**
                     * 节点cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * cpu使用率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cpuUsage;
                    bool m_cpuUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHNODEVIEW_H_
