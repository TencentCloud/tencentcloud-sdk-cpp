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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetNetworkCardInfo.h>
#include <tencentcloud/cwp/v20180228/model/AssetDiskPartitionInfo.h>
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
                class AssetMachineDetail : public AbstractModel
                {
                public:
                    AssetMachineDetail();
                    ~AssetMachineDetail() = default;
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
                     * 获取Cpu负载
                     * @return CpuLoad Cpu负载
                     * 
                     */
                    std::string GetCpuLoad() const;

                    /**
                     * 设置Cpu负载
                     * @param _cpuLoad Cpu负载
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
                     * 获取防护级别：0基础版，1专业版，2旗舰版，3轻量版
                     * @return ProtectLevel 防护级别：0基础版，1专业版，2旗舰版，3轻量版
                     * 
                     */
                    uint64_t GetProtectLevel() const;

                    /**
                     * 设置防护级别：0基础版，1专业版，2旗舰版，3轻量版
                     * @param _protectLevel 防护级别：0基础版，1专业版，2旗舰版，3轻量版
                     * 
                     */
                    void SetProtectLevel(const uint64_t& _protectLevel);

                    /**
                     * 判断参数 ProtectLevel 是否已赋值
                     * @return ProtectLevel 是否已赋值
                     * 
                     */
                    bool ProtectLevelHasBeenSet() const;

                    /**
                     * 获取风险状态：UNKNOW-未知，RISK-风险，SAFT-安全
                     * @return RiskStatus 风险状态：UNKNOW-未知，RISK-风险，SAFT-安全
                     * 
                     */
                    std::string GetRiskStatus() const;

                    /**
                     * 设置风险状态：UNKNOW-未知，RISK-风险，SAFT-安全
                     * @param _riskStatus 风险状态：UNKNOW-未知，RISK-风险，SAFT-安全
                     * 
                     */
                    void SetRiskStatus(const std::string& _riskStatus);

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                    /**
                     * 获取已防护天数
                     * @return ProtectDays 已防护天数
                     * 
                     */
                    uint64_t GetProtectDays() const;

                    /**
                     * 设置已防护天数
                     * @param _protectDays 已防护天数
                     * 
                     */
                    void SetProtectDays(const uint64_t& _protectDays);

                    /**
                     * 判断参数 ProtectDays 是否已赋值
                     * @return ProtectDays 是否已赋值
                     * 
                     */
                    bool ProtectDaysHasBeenSet() const;

                    /**
                     * 获取专业版开通时间
                     * @return BuyTime 专业版开通时间
                     * 
                     */
                    std::string GetBuyTime() const;

                    /**
                     * 设置专业版开通时间
                     * @param _buyTime 专业版开通时间
                     * 
                     */
                    void SetBuyTime(const std::string& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     * 
                     */
                    bool BuyTimeHasBeenSet() const;

                    /**
                     * 获取专业版到期时间
                     * @return EndTime 专业版到期时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置专业版到期时间
                     * @param _endTime 专业版到期时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取内核版本
                     * @return CoreVersion 内核版本
                     * 
                     */
                    std::string GetCoreVersion() const;

                    /**
                     * 设置内核版本
                     * @param _coreVersion 内核版本
                     * 
                     */
                    void SetCoreVersion(const std::string& _coreVersion);

                    /**
                     * 判断参数 CoreVersion 是否已赋值
                     * @return CoreVersion 是否已赋值
                     * 
                     */
                    bool CoreVersionHasBeenSet() const;

                    /**
                     * 获取Linux/Windows
                     * @return OsType Linux/Windows
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置Linux/Windows
                     * @param _osType Linux/Windows
                     * 
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取agent版本
                     * @return AgentVersion agent版本
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置agent版本
                     * @param _agentVersion agent版本
                     * 
                     */
                    void SetAgentVersion(const std::string& _agentVersion);

                    /**
                     * 判断参数 AgentVersion 是否已赋值
                     * @return AgentVersion 是否已赋值
                     * 
                     */
                    bool AgentVersionHasBeenSet() const;

                    /**
                     * 获取安装时间
                     * @return InstallTime 安装时间
                     * 
                     */
                    std::string GetInstallTime() const;

                    /**
                     * 设置安装时间
                     * @param _installTime 安装时间
                     * 
                     */
                    void SetInstallTime(const std::string& _installTime);

                    /**
                     * 判断参数 InstallTime 是否已赋值
                     * @return InstallTime 是否已赋值
                     * 
                     */
                    bool InstallTimeHasBeenSet() const;

                    /**
                     * 获取系统启动时间
                     * @return BootTime 系统启动时间
                     * 
                     */
                    std::string GetBootTime() const;

                    /**
                     * 设置系统启动时间
                     * @param _bootTime 系统启动时间
                     * 
                     */
                    void SetBootTime(const std::string& _bootTime);

                    /**
                     * 判断参数 BootTime 是否已赋值
                     * @return BootTime 是否已赋值
                     * 
                     */
                    bool BootTimeHasBeenSet() const;

                    /**
                     * 获取最后上线时间
                     * @return LastLiveTime 最后上线时间
                     * 
                     */
                    std::string GetLastLiveTime() const;

                    /**
                     * 设置最后上线时间
                     * @param _lastLiveTime 最后上线时间
                     * 
                     */
                    void SetLastLiveTime(const std::string& _lastLiveTime);

                    /**
                     * 判断参数 LastLiveTime 是否已赋值
                     * @return LastLiveTime 是否已赋值
                     * 
                     */
                    bool LastLiveTimeHasBeenSet() const;

                    /**
                     * 获取生产商
                     * @return Producer 生产商
                     * 
                     */
                    std::string GetProducer() const;

                    /**
                     * 设置生产商
                     * @param _producer 生产商
                     * 
                     */
                    void SetProducer(const std::string& _producer);

                    /**
                     * 判断参数 Producer 是否已赋值
                     * @return Producer 是否已赋值
                     * 
                     */
                    bool ProducerHasBeenSet() const;

                    /**
                     * 获取序列号
                     * @return SerialNumber 序列号
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置序列号
                     * @param _serialNumber 序列号
                     * 
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取网卡
                     * @return NetCards 网卡
                     * 
                     */
                    std::vector<AssetNetworkCardInfo> GetNetCards() const;

                    /**
                     * 设置网卡
                     * @param _netCards 网卡
                     * 
                     */
                    void SetNetCards(const std::vector<AssetNetworkCardInfo>& _netCards);

                    /**
                     * 判断参数 NetCards 是否已赋值
                     * @return NetCards 是否已赋值
                     * 
                     */
                    bool NetCardsHasBeenSet() const;

                    /**
                     * 获取分区
                     * @return Disks 分区
                     * 
                     */
                    std::vector<AssetDiskPartitionInfo> GetDisks() const;

                    /**
                     * 设置分区
                     * @param _disks 分区
                     * 
                     */
                    void SetDisks(const std::vector<AssetDiskPartitionInfo>& _disks);

                    /**
                     * 判断参数 Disks 是否已赋值
                     * @return Disks 是否已赋值
                     * 
                     */
                    bool DisksHasBeenSet() const;

                    /**
                     * 获取0在线，1已离线
                     * @return Status 0在线，1已离线
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0在线，1已离线
                     * @param _status 0在线，1已离线
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取设备型号
                     * @return DeviceVersion 设备型号
                     * 
                     */
                    std::string GetDeviceVersion() const;

                    /**
                     * 设置设备型号
                     * @param _deviceVersion 设备型号
                     * 
                     */
                    void SetDeviceVersion(const std::string& _deviceVersion);

                    /**
                     * 判断参数 DeviceVersion 是否已赋值
                     * @return DeviceVersion 是否已赋值
                     * 
                     */
                    bool DeviceVersionHasBeenSet() const;

                    /**
                     * 获取离线时间
                     * @return OfflineTime 离线时间
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置离线时间
                     * @param _offlineTime 离线时间
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取主机ID
                     * @return InstanceId 主机ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置主机ID
                     * @param _instanceId 主机ID
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
                     * 获取主机二外信息
                     * @return MachineExtraInfo 主机二外信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置主机二外信息
                     * @param _machineExtraInfo 主机二外信息
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
                     * 获取CpuLoadVul
                     * @return CpuLoadVul CpuLoadVul
                     * 
                     */
                    std::string GetCpuLoadVul() const;

                    /**
                     * 设置CpuLoadVul
                     * @param _cpuLoadVul CpuLoadVul
                     * 
                     */
                    void SetCpuLoadVul(const std::string& _cpuLoadVul);

                    /**
                     * 判断参数 CpuLoadVul 是否已赋值
                     * @return CpuLoadVul 是否已赋值
                     * 
                     */
                    bool CpuLoadVulHasBeenSet() const;

                    /**
                     * 获取时间
                     * @return FirstTime 时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置时间
                     * @param _firstTime 时间
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

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
                     * Cpu数量
                     */
                    uint64_t m_cpuSize;
                    bool m_cpuSizeHasBeenSet;

                    /**
                     * Cpu负载
                     */
                    std::string m_cpuLoad;
                    bool m_cpuLoadHasBeenSet;

                    /**
                     * 防护级别：0基础版，1专业版，2旗舰版，3轻量版
                     */
                    uint64_t m_protectLevel;
                    bool m_protectLevelHasBeenSet;

                    /**
                     * 风险状态：UNKNOW-未知，RISK-风险，SAFT-安全
                     */
                    std::string m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * 已防护天数
                     */
                    uint64_t m_protectDays;
                    bool m_protectDaysHasBeenSet;

                    /**
                     * 专业版开通时间
                     */
                    std::string m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * 专业版到期时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 内核版本
                     */
                    std::string m_coreVersion;
                    bool m_coreVersionHasBeenSet;

                    /**
                     * Linux/Windows
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * agent版本
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * 安装时间
                     */
                    std::string m_installTime;
                    bool m_installTimeHasBeenSet;

                    /**
                     * 系统启动时间
                     */
                    std::string m_bootTime;
                    bool m_bootTimeHasBeenSet;

                    /**
                     * 最后上线时间
                     */
                    std::string m_lastLiveTime;
                    bool m_lastLiveTimeHasBeenSet;

                    /**
                     * 生产商
                     */
                    std::string m_producer;
                    bool m_producerHasBeenSet;

                    /**
                     * 序列号
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * 网卡
                     */
                    std::vector<AssetNetworkCardInfo> m_netCards;
                    bool m_netCardsHasBeenSet;

                    /**
                     * 分区
                     */
                    std::vector<AssetDiskPartitionInfo> m_disks;
                    bool m_disksHasBeenSet;

                    /**
                     * 0在线，1已离线
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 业务组ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 设备型号
                     */
                    std::string m_deviceVersion;
                    bool m_deviceVersionHasBeenSet;

                    /**
                     * 离线时间
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * 主机ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 主机二外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * CpuLoadVul
                     */
                    std::string m_cpuLoadVul;
                    bool m_cpuLoadVulHasBeenSet;

                    /**
                     * 时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEDETAIL_H_
