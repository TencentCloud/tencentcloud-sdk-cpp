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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCENODE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 节点信息
                */
                class InstanceNode : public AbstractModel
                {
                public:
                    InstanceNode();
                    ~InstanceNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD 主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Node Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeId Node Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeId Node Id
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
                     * 获取实例Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip 实例Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置实例Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip 实例Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取实例EniIp
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EniIp 实例EniIp
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置实例EniIp
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eniIp 实例EniIp
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEniIp(const std::string& _eniIp);

                    /**
                     * 判断参数 EniIp 是否已赋值
                     * @return EniIp 是否已赋值
                     * 
                     */
                    bool EniIpHasBeenSet() const;

                    /**
                     * 获取实例Port
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 实例Port
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置实例Port
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 实例Port
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
                     * 获取实例SpecCode
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecCode 实例SpecCode
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置实例SpecCode
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specCode 实例SpecCode
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取实例NodeName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 实例NodeName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置实例NodeName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName 实例NodeName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取实例Cpu
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu 实例Cpu
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置实例Cpu
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu 实例Cpu
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例Mem
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mem 实例Mem
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置实例Mem
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mem 实例Mem
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例Disk
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Disk 实例Disk
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置实例Disk
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disk 实例Disk
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisk(const int64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 实例类型
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
                     * 获取实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 实例版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置实例版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 实例版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取实例地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 实例地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 实例地域
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
                     * 获取实例LocalDNS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalDNS 实例LocalDNS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocalDNS() const;

                    /**
                     * 设置实例LocalDNS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localDNS 实例LocalDNS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalDNS(const std::string& _localDNS);

                    /**
                     * 判断参数 LocalDNS 是否已赋值
                     * @return LocalDNS 是否已赋值
                     * 
                     */
                    bool LocalDNSHasBeenSet() const;

                    /**
                     * 获取实例Region
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 实例Region
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例Region
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 实例Region
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例日志盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogDisk 实例日志盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLogDisk() const;

                    /**
                     * 设置实例日志盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logDisk 实例日志盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogDisk(const int64_t& _logDisk);

                    /**
                     * 判断参数 LogDisk 是否已赋值
                     * @return LogDisk 是否已赋值
                     * 
                     */
                    bool LogDiskHasBeenSet() const;

                    /**
                     * 获取实例数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDisk 实例数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataDisk() const;

                    /**
                     * 设置实例数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDisk 实例数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDisk(const int64_t& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取实例ZoneID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneID 实例ZoneID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneID() const;

                    /**
                     * 设置实例ZoneID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneID 实例ZoneID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneID(const std::string& _zoneID);

                    /**
                     * 判断参数 ZoneID 是否已赋值
                     * @return ZoneID 是否已赋值
                     * 
                     */
                    bool ZoneIDHasBeenSet() const;

                    /**
                     * 获取实例SpecName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecName 实例SpecName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置实例SpecName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specName 实例SpecName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取实例Replicas
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas 实例Replicas
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置实例Replicas
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicas 实例Replicas
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取实例Shards
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Shards 实例Shards
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetShards() const;

                    /**
                     * 设置实例Shards
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shards 实例Shards
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShards(const int64_t& _shards);

                    /**
                     * 判断参数 Shards 是否已赋值
                     * @return Shards 是否已赋值
                     * 
                     */
                    bool ShardsHasBeenSet() const;

                    /**
                     * 获取实例数据副本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataReplicas 实例数据副本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataReplicas() const;

                    /**
                     * 设置实例数据副本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataReplicas 实例数据副本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataReplicas(const int64_t& _dataReplicas);

                    /**
                     * 判断参数 DataReplicas 是否已赋值
                     * @return DataReplicas 是否已赋值
                     * 
                     */
                    bool DataReplicasHasBeenSet() const;

                    /**
                     * 获取实例初始化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 实例初始化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置实例初始化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 实例初始化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取存储介质, CLOUD_PREMIUM:高性能云盘，CLOUD_SSD: SSD 云盘，CLOUD_HSSD: HSSD 云盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 存储介质, CLOUD_PREMIUM:高性能云盘，CLOUD_SSD: SSD 云盘，CLOUD_HSSD: HSSD 云盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置存储介质, CLOUD_PREMIUM:高性能云盘，CLOUD_SSD: SSD 云盘，CLOUD_HSSD: HSSD 云盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageType 存储介质, CLOUD_PREMIUM:高性能云盘，CLOUD_SSD: SSD 云盘，CLOUD_HSSD: HSSD 云盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * 主键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 实例Ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 实例EniIp
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                    /**
                     * 实例Port
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 实例SpecCode
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * 实例NodeName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 实例Cpu
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例Mem
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 实例Disk
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * 实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 实例地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例LocalDNS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_localDNS;
                    bool m_localDNSHasBeenSet;

                    /**
                     * 实例Region
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例日志盘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logDisk;
                    bool m_logDiskHasBeenSet;

                    /**
                     * 实例数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * 实例ZoneID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneID;
                    bool m_zoneIDHasBeenSet;

                    /**
                     * 实例SpecName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 实例Replicas
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 实例Shards
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_shards;
                    bool m_shardsHasBeenSet;

                    /**
                     * 实例数据副本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataReplicas;
                    bool m_dataReplicasHasBeenSet;

                    /**
                     * 实例初始化参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 存储介质, CLOUD_PREMIUM:高性能云盘，CLOUD_SSD: SSD 云盘，CLOUD_HSSD: HSSD 云盘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCENODE_H_
