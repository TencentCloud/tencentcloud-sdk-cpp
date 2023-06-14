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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_HOSTDETAIL_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_HOSTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * 主机详情
                */
                class HostDetail : public AbstractModel
                {
                public:
                    HostDetail();
                    ~HostDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机Id
                     * @return HostId 主机Id
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置主机Id
                     * @param _hostId 主机Id
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param _hostName 主机名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

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
                     * 获取主机状态
                     * @return Status 主机状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置主机状态
                     * @param _status 主机状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取分配DB实例状态,0:可分配,1:不可分配
                     * @return AssignStatus 分配DB实例状态,0:可分配,1:不可分配
                     * 
                     */
                    int64_t GetAssignStatus() const;

                    /**
                     * 设置分配DB实例状态,0:可分配,1:不可分配
                     * @param _assignStatus 分配DB实例状态,0:可分配,1:不可分配
                     * 
                     */
                    void SetAssignStatus(const int64_t& _assignStatus);

                    /**
                     * 判断参数 AssignStatus 是否已赋值
                     * @return AssignStatus 是否已赋值
                     * 
                     */
                    bool AssignStatusHasBeenSet() const;

                    /**
                     * 获取主机类型, 0:物理机, 1:cvm本地盘, 2:cvm云盘
                     * @return HostType 主机类型, 0:物理机, 1:cvm本地盘, 2:cvm云盘
                     * 
                     */
                    int64_t GetHostType() const;

                    /**
                     * 设置主机类型, 0:物理机, 1:cvm本地盘, 2:cvm云盘
                     * @param _hostType 主机类型, 0:物理机, 1:cvm本地盘, 2:cvm云盘
                     * 
                     */
                    void SetHostType(const int64_t& _hostType);

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     * 
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取DB实例数
                     * @return DbNum DB实例数
                     * 
                     */
                    int64_t GetDbNum() const;

                    /**
                     * 设置DB实例数
                     * @param _dbNum DB实例数
                     * 
                     */
                    void SetDbNum(const int64_t& _dbNum);

                    /**
                     * 判断参数 DbNum 是否已赋值
                     * @return DbNum 是否已赋值
                     * 
                     */
                    bool DbNumHasBeenSet() const;

                    /**
                     * 获取主机CPU(单位:核数)
                     * @return CpuSpec 主机CPU(单位:核数)
                     * 
                     */
                    int64_t GetCpuSpec() const;

                    /**
                     * 设置主机CPU(单位:核数)
                     * @param _cpuSpec 主机CPU(单位:核数)
                     * 
                     */
                    void SetCpuSpec(const int64_t& _cpuSpec);

                    /**
                     * 判断参数 CpuSpec 是否已赋值
                     * @return CpuSpec 是否已赋值
                     * 
                     */
                    bool CpuSpecHasBeenSet() const;

                    /**
                     * 获取已分配CPU(单位:核数)
                     * @return CpuAssigned 已分配CPU(单位:核数)
                     * 
                     */
                    int64_t GetCpuAssigned() const;

                    /**
                     * 设置已分配CPU(单位:核数)
                     * @param _cpuAssigned 已分配CPU(单位:核数)
                     * 
                     */
                    void SetCpuAssigned(const int64_t& _cpuAssigned);

                    /**
                     * 判断参数 CpuAssigned 是否已赋值
                     * @return CpuAssigned 是否已赋值
                     * 
                     */
                    bool CpuAssignedHasBeenSet() const;

                    /**
                     * 获取可分配CPU(单位:核数)
                     * @return CpuAssignable 可分配CPU(单位:核数)
                     * 
                     */
                    int64_t GetCpuAssignable() const;

                    /**
                     * 设置可分配CPU(单位:核数)
                     * @param _cpuAssignable 可分配CPU(单位:核数)
                     * 
                     */
                    void SetCpuAssignable(const int64_t& _cpuAssignable);

                    /**
                     * 判断参数 CpuAssignable 是否已赋值
                     * @return CpuAssignable 是否已赋值
                     * 
                     */
                    bool CpuAssignableHasBeenSet() const;

                    /**
                     * 获取主机内存(单位:GB)
                     * @return MemorySpec 主机内存(单位:GB)
                     * 
                     */
                    int64_t GetMemorySpec() const;

                    /**
                     * 设置主机内存(单位:GB)
                     * @param _memorySpec 主机内存(单位:GB)
                     * 
                     */
                    void SetMemorySpec(const int64_t& _memorySpec);

                    /**
                     * 判断参数 MemorySpec 是否已赋值
                     * @return MemorySpec 是否已赋值
                     * 
                     */
                    bool MemorySpecHasBeenSet() const;

                    /**
                     * 获取已分配内存(单位:GB)
                     * @return MemoryAssigned 已分配内存(单位:GB)
                     * 
                     */
                    int64_t GetMemoryAssigned() const;

                    /**
                     * 设置已分配内存(单位:GB)
                     * @param _memoryAssigned 已分配内存(单位:GB)
                     * 
                     */
                    void SetMemoryAssigned(const int64_t& _memoryAssigned);

                    /**
                     * 判断参数 MemoryAssigned 是否已赋值
                     * @return MemoryAssigned 是否已赋值
                     * 
                     */
                    bool MemoryAssignedHasBeenSet() const;

                    /**
                     * 获取可分配内存(单位:GB)
                     * @return MemoryAssignable 可分配内存(单位:GB)
                     * 
                     */
                    int64_t GetMemoryAssignable() const;

                    /**
                     * 设置可分配内存(单位:GB)
                     * @param _memoryAssignable 可分配内存(单位:GB)
                     * 
                     */
                    void SetMemoryAssignable(const int64_t& _memoryAssignable);

                    /**
                     * 判断参数 MemoryAssignable 是否已赋值
                     * @return MemoryAssignable 是否已赋值
                     * 
                     */
                    bool MemoryAssignableHasBeenSet() const;

                    /**
                     * 获取主机磁盘(单位:GB)
                     * @return DiskSpec 主机磁盘(单位:GB)
                     * 
                     */
                    int64_t GetDiskSpec() const;

                    /**
                     * 设置主机磁盘(单位:GB)
                     * @param _diskSpec 主机磁盘(单位:GB)
                     * 
                     */
                    void SetDiskSpec(const int64_t& _diskSpec);

                    /**
                     * 判断参数 DiskSpec 是否已赋值
                     * @return DiskSpec 是否已赋值
                     * 
                     */
                    bool DiskSpecHasBeenSet() const;

                    /**
                     * 获取已分配磁盘(单位:GB)
                     * @return DiskAssigned 已分配磁盘(单位:GB)
                     * 
                     */
                    int64_t GetDiskAssigned() const;

                    /**
                     * 设置已分配磁盘(单位:GB)
                     * @param _diskAssigned 已分配磁盘(单位:GB)
                     * 
                     */
                    void SetDiskAssigned(const int64_t& _diskAssigned);

                    /**
                     * 判断参数 DiskAssigned 是否已赋值
                     * @return DiskAssigned 是否已赋值
                     * 
                     */
                    bool DiskAssignedHasBeenSet() const;

                    /**
                     * 获取可分配磁盘(GB)
                     * @return DiskAssignable 可分配磁盘(GB)
                     * 
                     */
                    int64_t GetDiskAssignable() const;

                    /**
                     * 设置可分配磁盘(GB)
                     * @param _diskAssignable 可分配磁盘(GB)
                     * 
                     */
                    void SetDiskAssignable(const int64_t& _diskAssignable);

                    /**
                     * 判断参数 DiskAssignable 是否已赋值
                     * @return DiskAssignable 是否已赋值
                     * 
                     */
                    bool DiskAssignableHasBeenSet() const;

                    /**
                     * 获取CPU分配比
                     * @return CpuRatio CPU分配比
                     * 
                     */
                    double GetCpuRatio() const;

                    /**
                     * 设置CPU分配比
                     * @param _cpuRatio CPU分配比
                     * 
                     */
                    void SetCpuRatio(const double& _cpuRatio);

                    /**
                     * 判断参数 CpuRatio 是否已赋值
                     * @return CpuRatio 是否已赋值
                     * 
                     */
                    bool CpuRatioHasBeenSet() const;

                    /**
                     * 获取内存分配比
                     * @return MemoryRatio 内存分配比
                     * 
                     */
                    double GetMemoryRatio() const;

                    /**
                     * 设置内存分配比
                     * @param _memoryRatio 内存分配比
                     * 
                     */
                    void SetMemoryRatio(const double& _memoryRatio);

                    /**
                     * 判断参数 MemoryRatio 是否已赋值
                     * @return MemoryRatio 是否已赋值
                     * 
                     */
                    bool MemoryRatioHasBeenSet() const;

                    /**
                     * 获取磁盘分配比
                     * @return DiskRatio 磁盘分配比
                     * 
                     */
                    double GetDiskRatio() const;

                    /**
                     * 设置磁盘分配比
                     * @param _diskRatio 磁盘分配比
                     * 
                     */
                    void SetDiskRatio(const double& _diskRatio);

                    /**
                     * 判断参数 DiskRatio 是否已赋值
                     * @return DiskRatio 是否已赋值
                     * 
                     */
                    bool DiskRatioHasBeenSet() const;

                    /**
                     * 获取机型名称
                     * @return MachineName 机型名称
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置机型名称
                     * @param _machineName 机型名称
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
                     * 获取机型类别
                     * @return MachineType 机型类别
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置机型类别
                     * @param _machineType 机型类别
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取计费标签
                     * @return PidTag 计费标签
                     * 
                     */
                    std::string GetPidTag() const;

                    /**
                     * 设置计费标签
                     * @param _pidTag 计费标签
                     * 
                     */
                    void SetPidTag(const std::string& _pidTag);

                    /**
                     * 判断参数 PidTag 是否已赋值
                     * @return PidTag 是否已赋值
                     * 
                     */
                    bool PidTagHasBeenSet() const;

                    /**
                     * 获取计费ID
                     * @return Pid 计费ID
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置计费ID
                     * @param _pid 计费ID
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取独享集群实例Id
                     * @return InstanceId 独享集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置独享集群实例Id
                     * @param _instanceId 独享集群实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 主机Id
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 主机状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分配DB实例状态,0:可分配,1:不可分配
                     */
                    int64_t m_assignStatus;
                    bool m_assignStatusHasBeenSet;

                    /**
                     * 主机类型, 0:物理机, 1:cvm本地盘, 2:cvm云盘
                     */
                    int64_t m_hostType;
                    bool m_hostTypeHasBeenSet;

                    /**
                     * DB实例数
                     */
                    int64_t m_dbNum;
                    bool m_dbNumHasBeenSet;

                    /**
                     * 主机CPU(单位:核数)
                     */
                    int64_t m_cpuSpec;
                    bool m_cpuSpecHasBeenSet;

                    /**
                     * 已分配CPU(单位:核数)
                     */
                    int64_t m_cpuAssigned;
                    bool m_cpuAssignedHasBeenSet;

                    /**
                     * 可分配CPU(单位:核数)
                     */
                    int64_t m_cpuAssignable;
                    bool m_cpuAssignableHasBeenSet;

                    /**
                     * 主机内存(单位:GB)
                     */
                    int64_t m_memorySpec;
                    bool m_memorySpecHasBeenSet;

                    /**
                     * 已分配内存(单位:GB)
                     */
                    int64_t m_memoryAssigned;
                    bool m_memoryAssignedHasBeenSet;

                    /**
                     * 可分配内存(单位:GB)
                     */
                    int64_t m_memoryAssignable;
                    bool m_memoryAssignableHasBeenSet;

                    /**
                     * 主机磁盘(单位:GB)
                     */
                    int64_t m_diskSpec;
                    bool m_diskSpecHasBeenSet;

                    /**
                     * 已分配磁盘(单位:GB)
                     */
                    int64_t m_diskAssigned;
                    bool m_diskAssignedHasBeenSet;

                    /**
                     * 可分配磁盘(GB)
                     */
                    int64_t m_diskAssignable;
                    bool m_diskAssignableHasBeenSet;

                    /**
                     * CPU分配比
                     */
                    double m_cpuRatio;
                    bool m_cpuRatioHasBeenSet;

                    /**
                     * 内存分配比
                     */
                    double m_memoryRatio;
                    bool m_memoryRatioHasBeenSet;

                    /**
                     * 磁盘分配比
                     */
                    double m_diskRatio;
                    bool m_diskRatioHasBeenSet;

                    /**
                     * 机型名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 机型类别
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 计费标签
                     */
                    std::string m_pidTag;
                    bool m_pidTagHasBeenSet;

                    /**
                     * 计费ID
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 独享集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_HOSTDETAIL_H_
