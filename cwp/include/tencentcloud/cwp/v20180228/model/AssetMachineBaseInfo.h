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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 资产指纹中服务器列表的基本信息
                */
                class AssetMachineBaseInfo : public AbstractModel
                {
                public:
                    AssetMachineBaseInfo();
                    ~AssetMachineBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务器Quuid
                     * @return Quuid 服务器Quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置服务器Quuid
                     * @param _quuid 服务器Quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取服务器uuid
                     * @return Uuid 服务器uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置服务器uuid
                     * @param _uuid 服务器uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取服务器内网IP
                     * @return MachineIp 服务器内网IP
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置服务器内网IP
                     * @param _machineIp 服务器内网IP
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取服务器名称
                     * @return MachineName 服务器名称
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置服务器名称
                     * @param _machineName 服务器名称
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取操作系统名称
                     * @return OsInfo 操作系统名称
                     * 
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置操作系统名称
                     * @param _osInfo 操作系统名称
                     * 
                     */
                    void SetOsInfo(const std::string& _osInfo);

                    /**
                     * 判断参数 OsInfo 是否已赋值
                     * @return OsInfo 是否已赋值
                     * 
                     */
                    bool OsInfoHasBeenSet() const;

                    /**
                     * 获取CPU信息
                     * @return Cpu CPU信息
                     * 
                     */
                    std::string GetCpu() const;

                    /**
                     * 设置CPU信息
                     * @param _cpu CPU信息
                     * 
                     */
                    void SetCpu(const std::string& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存容量：单位G
                     * @return MemSize 内存容量：单位G
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置内存容量：单位G
                     * @param _memSize 内存容量：单位G
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取内存使用率百分比
                     * @return MemLoad 内存使用率百分比
                     * 
                     */
                    std::string GetMemLoad() const;

                    /**
                     * 设置内存使用率百分比
                     * @param _memLoad 内存使用率百分比
                     * 
                     */
                    void SetMemLoad(const std::string& _memLoad);

                    /**
                     * 判断参数 MemLoad 是否已赋值
                     * @return MemLoad 是否已赋值
                     * 
                     */
                    bool MemLoadHasBeenSet() const;

                    /**
                     * 获取硬盘容量：单位G
                     * @return DiskSize 硬盘容量：单位G
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置硬盘容量：单位G
                     * @param _diskSize 硬盘容量：单位G
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取硬盘使用率百分比
                     * @return DiskLoad 硬盘使用率百分比
                     * 
                     */
                    std::string GetDiskLoad() const;

                    /**
                     * 设置硬盘使用率百分比
                     * @param _diskLoad 硬盘使用率百分比
                     * 
                     */
                    void SetDiskLoad(const std::string& _diskLoad);

                    /**
                     * 判断参数 DiskLoad 是否已赋值
                     * @return DiskLoad 是否已赋值
                     * 
                     */
                    bool DiskLoadHasBeenSet() const;

                    /**
                     * 获取分区数
                     * @return PartitionCount 分区数
                     * 
                     */
                    uint64_t GetPartitionCount() const;

                    /**
                     * 设置分区数
                     * @param _partitionCount 分区数
                     * 
                     */
                    void SetPartitionCount(const uint64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取主机外网IP
                     * @return MachineWanIp 主机外网IP
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置主机外网IP
                     * @param _machineWanIp 主机外网IP
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取业务组ID
                     * @return ProjectId 业务组ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置业务组ID
                     * @param _projectId 业务组ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Cpu数量
                     * @return CpuSize Cpu数量
                     * 
                     */
                    uint64_t GetCpuSize() const;

                    /**
                     * 设置Cpu数量
                     * @param _cpuSize Cpu数量
                     * 
                     */
                    void SetCpuSize(const uint64_t& _cpuSize);

                    /**
                     * 判断参数 CpuSize 是否已赋值
                     * @return CpuSize 是否已赋值
                     * 
                     */
                    bool CpuSizeHasBeenSet() const;

                    /**
                     * 获取Cpu使用率百分比
                     * @return CpuLoad Cpu使用率百分比
                     * 
                     */
                    std::string GetCpuLoad() const;

                    /**
                     * 设置Cpu使用率百分比
                     * @param _cpuLoad Cpu使用率百分比
                     * 
                     */
                    void SetCpuLoad(const std::string& _cpuLoad);

                    /**
                     * 判断参数 CpuLoad 是否已赋值
                     * @return CpuLoad 是否已赋值
                     * 
                     */
                    bool CpuLoadHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tag 标签
                     * 
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置标签
                     * @param _tag 标签
                     * 
                     */
                    void SetTag(const std::vector<MachineTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取数据更新时间
                     * @return UpdateTime 数据更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置数据更新时间
                     * @param _updateTime 数据更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取是否新增[0:否|1:是]
                     * @return IsNew 是否新增[0:否|1:是]
                     * 
                     */
                    int64_t GetIsNew() const;

                    /**
                     * 设置是否新增[0:否|1:是]
                     * @param _isNew 是否新增[0:否|1:是]
                     * 
                     */
                    void SetIsNew(const int64_t& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取首次采集时间
                     * @return FirstTime 首次采集时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置首次采集时间
                     * @param _firstTime 首次采集时间
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取附加信息
                     * @return MachineExtraInfo 附加信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置附加信息
                     * @param _machineExtraInfo 附加信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取cpu负载读数（仅linux系统有效）
                     * @return CpuLoadNum cpu负载读数（仅linux系统有效）
                     * 
                     */
                    std::string GetCpuLoadNum() const;

                    /**
                     * 设置cpu负载读数（仅linux系统有效）
                     * @param _cpuLoadNum cpu负载读数（仅linux系统有效）
                     * 
                     */
                    void SetCpuLoadNum(const std::string& _cpuLoadNum);

                    /**
                     * 判断参数 CpuLoadNum 是否已赋值
                     * @return CpuLoadNum 是否已赋值
                     * 
                     */
                    bool CpuLoadNumHasBeenSet() const;

                private:

                    /**
                     * 服务器Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 服务器uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 服务器内网IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 服务器名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 操作系统名称
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * CPU信息
                     */
                    std::string m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存容量：单位G
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 内存使用率百分比
                     */
                    std::string m_memLoad;
                    bool m_memLoadHasBeenSet;

                    /**
                     * 硬盘容量：单位G
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 硬盘使用率百分比
                     */
                    std::string m_diskLoad;
                    bool m_diskLoadHasBeenSet;

                    /**
                     * 分区数
                     */
                    uint64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * 主机外网IP
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 业务组ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Cpu数量
                     */
                    uint64_t m_cpuSize;
                    bool m_cpuSizeHasBeenSet;

                    /**
                     * Cpu使用率百分比
                     */
                    std::string m_cpuLoad;
                    bool m_cpuLoadHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 数据更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否新增[0:否|1:是]
                     */
                    int64_t m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * 首次采集时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 附加信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * cpu负载读数（仅linux系统有效）
                     */
                    std::string m_cpuLoadNum;
                    bool m_cpuLoadNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEBASEINFO_H_
