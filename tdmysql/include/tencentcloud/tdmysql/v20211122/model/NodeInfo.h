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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_NODEINFO_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_NODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/BinlogInfo.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 节点信息类型
                */
                class NodeInfo : public AbstractModel
                {
                public:
                    NodeInfo();
                    ~NodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>节点IP信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IP <p>节点IP信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置<p>节点IP信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iP <p>节点IP信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取<p>节点类型，如sqlengine，tdstore，mc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>节点类型，如sqlengine，tdstore，mc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>节点类型，如sqlengine，tdstore，mc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>节点类型，如sqlengine，tdstore，mc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>节点唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeId <p>节点唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>节点唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeId <p>节点唯一标识</p>
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
                     * 获取<p>节点端口信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port <p>节点端口信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>节点端口信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port <p>节点端口信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>节点所属可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone <p>节点所属可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>节点所属可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone <p>节点所属可用区</p>
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
                     * 获取<p>节点所属机器ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Host <p>节点所属机器ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>节点所属机器ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _host <p>节点所属机器ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>节点日志服务信息</p>
                     * @return BinlogInfo <p>节点日志服务信息</p>
                     * 
                     */
                    std::vector<BinlogInfo> GetBinlogInfo() const;

                    /**
                     * 设置<p>节点日志服务信息</p>
                     * @param _binlogInfo <p>节点日志服务信息</p>
                     * 
                     */
                    void SetBinlogInfo(const std::vector<BinlogInfo>& _binlogInfo);

                    /**
                     * 判断参数 BinlogInfo 是否已赋值
                     * @return BinlogInfo 是否已赋值
                     * 
                     */
                    bool BinlogInfoHasBeenSet() const;

                    /**
                     * 获取<p>节点cpu个数</p>
                     * @return Cpu <p>节点cpu个数</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>节点cpu个数</p>
                     * @param _cpu <p>节点cpu个数</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>节点mem大小</p>
                     * @return Mem <p>节点mem大小</p>
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置<p>节点mem大小</p>
                     * @param _mem <p>节点mem大小</p>
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取<p>节点磁盘大小</p>
                     * @return DataDisk <p>节点磁盘大小</p>
                     * 
                     */
                    int64_t GetDataDisk() const;

                    /**
                     * 设置<p>节点磁盘大小</p>
                     * @param _dataDisk <p>节点磁盘大小</p>
                     * 
                     */
                    void SetDataDisk(const int64_t& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                private:

                    /**
                     * <p>节点IP信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * <p>节点类型，如sqlengine，tdstore，mc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>节点唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>节点端口信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>节点所属可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>节点所属机器ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>节点日志服务信息</p>
                     */
                    std::vector<BinlogInfo> m_binlogInfo;
                    bool m_binlogInfoHasBeenSet;

                    /**
                     * <p>节点cpu个数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>节点mem大小</p>
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>节点磁盘大小</p>
                     */
                    int64_t m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_NODEINFO_H_
