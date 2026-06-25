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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINEDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tags.h>
#include <tencentcloud/csip/v20221121/model/DiskPartitionInfo.h>
#include <tencentcloud/csip/v20221121/model/NetworkCardInfo.h>
#include <tencentcloud/csip/v20221121/model/RegionInfo.h>
#include <tencentcloud/csip/v20221121/model/MiniTagItem.h>
#include <tencentcloud/csip/v20221121/model/AssetTagModifyAssetItem.h>
#include <tencentcloud/csip/v20221121/model/ContainerEnvInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 主机列表
                */
                class MachineDetail : public AbstractModel
                {
                public:
                    MachineDetail();
                    ~MachineDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Agent状态</p>
                     * @return AgentStatus <p>Agent状态</p>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>Agent状态</p>
                     * @param _agentStatus <p>Agent状态</p>
                     * 
                     */
                    void SetAgentStatus(const std::string& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取<p>Agent版本</p>
                     * @return AgentVersion <p>Agent版本</p>
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置<p>Agent版本</p>
                     * @param _agentVersion <p>Agent版本</p>
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
                     * 获取<p>账号AppId</p>
                     * @return AppId <p>账号AppId</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>账号AppId</p>
                     * @param _appId <p>账号AppId</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>资产类型名称</p>
                     * @return AssetTypeName <p>资产类型名称</p>
                     * 
                     */
                    std::string GetAssetTypeName() const;

                    /**
                     * 设置<p>资产类型名称</p>
                     * @param _assetTypeName <p>资产类型名称</p>
                     * 
                     */
                    void SetAssetTypeName(const std::string& _assetTypeName);

                    /**
                     * 判断参数 AssetTypeName 是否已赋值
                     * @return AssetTypeName 是否已赋值
                     * 
                     */
                    bool AssetTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>系统启动时间（Unix时间戳）</p>
                     * @return BootTime <p>系统启动时间（Unix时间戳）</p>
                     * 
                     */
                    int64_t GetBootTime() const;

                    /**
                     * 设置<p>系统启动时间（Unix时间戳）</p>
                     * @param _bootTime <p>系统启动时间（Unix时间戳）</p>
                     * 
                     */
                    void SetBootTime(const int64_t& _bootTime);

                    /**
                     * 判断参数 BootTime 是否已赋值
                     * @return BootTime 是否已赋值
                     * 
                     */
                    bool BootTimeHasBeenSet() const;

                    /**
                     * 获取<p>购买时间（Unix时间戳）</p>
                     * @return BuyTime <p>购买时间（Unix时间戳）</p>
                     * 
                     */
                    int64_t GetBuyTime() const;

                    /**
                     * 设置<p>购买时间（Unix时间戳）</p>
                     * @param _buyTime <p>购买时间（Unix时间戳）</p>
                     * 
                     */
                    void SetBuyTime(const int64_t& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     * 
                     */
                    bool BuyTimeHasBeenSet() const;

                    /**
                     * 获取<p>云服务商</p>
                     * @return CloudFromEnum <p>云服务商</p>
                     * 
                     */
                    std::string GetCloudFromEnum() const;

                    /**
                     * 设置<p>云服务商</p>
                     * @param _cloudFromEnum <p>云服务商</p>
                     * 
                     */
                    void SetCloudFromEnum(const std::string& _cloudFromEnum);

                    /**
                     * 判断参数 CloudFromEnum 是否已赋值
                     * @return CloudFromEnum 是否已赋值
                     * 
                     */
                    bool CloudFromEnumHasBeenSet() const;

                    /**
                     * 获取<p>云标签列表</p>
                     * @return CloudTags <p>云标签列表</p>
                     * 
                     */
                    std::vector<Tags> GetCloudTags() const;

                    /**
                     * 设置<p>云标签列表</p>
                     * @param _cloudTags <p>云标签列表</p>
                     * 
                     */
                    void SetCloudTags(const std::vector<Tags>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取<p>内核版本</p>
                     * @return CoreVersion <p>内核版本</p>
                     * 
                     */
                    std::string GetCoreVersion() const;

                    /**
                     * 设置<p>内核版本</p>
                     * @param _coreVersion <p>内核版本</p>
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
                     * 获取<p>CPU信息</p>
                     * @return Cpu <p>CPU信息</p>
                     * 
                     */
                    std::string GetCpu() const;

                    /**
                     * 设置<p>CPU信息</p>
                     * @param _cpu <p>CPU信息</p>
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
                     * 获取<p>CPU负载</p>
                     * @return CpuLoad <p>CPU负载</p>
                     * 
                     */
                    std::string GetCpuLoad() const;

                    /**
                     * 设置<p>CPU负载</p>
                     * @param _cpuLoad <p>CPU负载</p>
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
                     * 获取<p>CPU核数</p>
                     * @return CpuSize <p>CPU核数</p>
                     * 
                     */
                    uint64_t GetCpuSize() const;

                    /**
                     * 设置<p>CPU核数</p>
                     * @param _cpuSize <p>CPU核数</p>
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
                     * 获取<p>设备型号</p>
                     * @return DeviceVersion <p>设备型号</p>
                     * 
                     */
                    std::string GetDeviceVersion() const;

                    /**
                     * 设置<p>设备型号</p>
                     * @param _deviceVersion <p>设备型号</p>
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
                     * 获取<p>磁盘分区信息</p>
                     * @return Disks <p>磁盘分区信息</p>
                     * 
                     */
                    std::vector<DiskPartitionInfo> GetDisks() const;

                    /**
                     * 设置<p>磁盘分区信息</p>
                     * @param _disks <p>磁盘分区信息</p>
                     * 
                     */
                    void SetDisks(const std::vector<DiskPartitionInfo>& _disks);

                    /**
                     * 判断参数 Disks 是否已赋值
                     * @return Disks 是否已赋值
                     * 
                     */
                    bool DisksHasBeenSet() const;

                    /**
                     * 获取<p>到期时间（Unix时间戳）</p>
                     * @return EndTime <p>到期时间（Unix时间戳）</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>到期时间（Unix时间戳）</p>
                     * @param _endTime <p>到期时间（Unix时间戳）</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>暴露状态</p>
                     * @return ExposedStatus <p>暴露状态</p>
                     * 
                     */
                    std::string GetExposedStatus() const;

                    /**
                     * 设置<p>暴露状态</p>
                     * @param _exposedStatus <p>暴露状态</p>
                     * 
                     */
                    void SetExposedStatus(const std::string& _exposedStatus);

                    /**
                     * 判断参数 ExposedStatus 是否已赋值
                     * @return ExposedStatus 是否已赋值
                     * 
                     */
                    bool ExposedStatusHasBeenSet() const;

                    /**
                     * 获取<p>安装时间（Unix时间戳）</p>
                     * @return InstallTime <p>安装时间（Unix时间戳）</p>
                     * 
                     */
                    int64_t GetInstallTime() const;

                    /**
                     * 设置<p>安装时间（Unix时间戳）</p>
                     * @param _installTime <p>安装时间（Unix时间戳）</p>
                     * 
                     */
                    void SetInstallTime(const int64_t& _installTime);

                    /**
                     * 判断参数 InstallTime 是否已赋值
                     * @return InstallTime 是否已赋值
                     * 
                     */
                    bool InstallTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceID <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceID <p>实例ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>实例状态</p>
                     * @return InstanceStatus <p>实例状态</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>实例状态</p>
                     * @param _instanceStatus <p>实例状态</p>
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>内核版本</p>
                     * @return KernelVersion <p>内核版本</p>
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置<p>内核版本</p>
                     * @param _kernelVersion <p>内核版本</p>
                     * 
                     */
                    void SetKernelVersion(const std::string& _kernelVersion);

                    /**
                     * 判断参数 KernelVersion 是否已赋值
                     * @return KernelVersion 是否已赋值
                     * 
                     */
                    bool KernelVersionHasBeenSet() const;

                    /**
                     * 获取<p>最近一次在线时间（Unix时间戳）</p>
                     * @return LatestLiveTime <p>最近一次在线时间（Unix时间戳）</p>
                     * 
                     */
                    int64_t GetLatestLiveTime() const;

                    /**
                     * 设置<p>最近一次在线时间（Unix时间戳）</p>
                     * @param _latestLiveTime <p>最近一次在线时间（Unix时间戳）</p>
                     * 
                     */
                    void SetLatestLiveTime(const int64_t& _latestLiveTime);

                    /**
                     * 判断参数 LatestLiveTime 是否已赋值
                     * @return LatestLiveTime 是否已赋值
                     * 
                     */
                    bool LatestLiveTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近一次离线时间（Unix时间戳）</p>
                     * @return LatestOfflineTime <p>最近一次离线时间（Unix时间戳）</p>
                     * 
                     */
                    int64_t GetLatestOfflineTime() const;

                    /**
                     * 设置<p>最近一次离线时间（Unix时间戳）</p>
                     * @param _latestOfflineTime <p>最近一次离线时间（Unix时间戳）</p>
                     * 
                     */
                    void SetLatestOfflineTime(const int64_t& _latestOfflineTime);

                    /**
                     * 判断参数 LatestOfflineTime 是否已赋值
                     * @return LatestOfflineTime 是否已赋值
                     * 
                     */
                    bool LatestOfflineTimeHasBeenSet() const;

                    /**
                     * 获取<p>内网IP</p>
                     * @return MachineIp <p>内网IP</p>
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置<p>内网IP</p>
                     * @param _machineIp <p>内网IP</p>
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
                     * 获取<p>主机名称</p>
                     * @return MachineName <p>主机名称</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>主机名称</p>
                     * @param _machineName <p>主机名称</p>
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
                     * 获取<p>操作系统（云采集）</p>
                     * @return MachineOs <p>操作系统（云采集）</p>
                     * 
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 设置<p>操作系统（云采集）</p>
                     * @param _machineOs <p>操作系统（云采集）</p>
                     * 
                     */
                    void SetMachineOs(const std::string& _machineOs);

                    /**
                     * 判断参数 MachineOs 是否已赋值
                     * @return MachineOs 是否已赋值
                     * 
                     */
                    bool MachineOsHasBeenSet() const;

                    /**
                     * 获取<p>主机状态</p>
                     * @return MachineStatus <p>主机状态</p>
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置<p>主机状态</p>
                     * @param _machineStatus <p>主机状态</p>
                     * 
                     */
                    void SetMachineStatus(const std::string& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取<p>外网IP</p>
                     * @return MachineWanIp <p>外网IP</p>
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置<p>外网IP</p>
                     * @param _machineWanIp <p>外网IP</p>
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
                     * 获取<p>内存大小(MB)</p>
                     * @return MemSize <p>内存大小(MB)</p>
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置<p>内存大小(MB)</p>
                     * @param _memSize <p>内存大小(MB)</p>
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
                     * 获取<p>内存使用率</p>
                     * @return MemoryLoad <p>内存使用率</p>
                     * 
                     */
                    std::string GetMemoryLoad() const;

                    /**
                     * 设置<p>内存使用率</p>
                     * @param _memoryLoad <p>内存使用率</p>
                     * 
                     */
                    void SetMemoryLoad(const std::string& _memoryLoad);

                    /**
                     * 判断参数 MemoryLoad 是否已赋值
                     * @return MemoryLoad 是否已赋值
                     * 
                     */
                    bool MemoryLoadHasBeenSet() const;

                    /**
                     * 获取<p>网卡信息</p>
                     * @return NetCards <p>网卡信息</p>
                     * 
                     */
                    std::vector<NetworkCardInfo> GetNetCards() const;

                    /**
                     * 设置<p>网卡信息</p>
                     * @param _netCards <p>网卡信息</p>
                     * 
                     */
                    void SetNetCards(const std::vector<NetworkCardInfo>& _netCards);

                    /**
                     * 判断参数 NetCards 是否已赋值
                     * @return NetCards 是否已赋值
                     * 
                     */
                    bool NetCardsHasBeenSet() const;

                    /**
                     * 获取<p>操作系统（端采集）</p>
                     * @return OsByAgent <p>操作系统（端采集）</p>
                     * 
                     */
                    std::string GetOsByAgent() const;

                    /**
                     * 设置<p>操作系统（端采集）</p>
                     * @param _osByAgent <p>操作系统（端采集）</p>
                     * 
                     */
                    void SetOsByAgent(const std::string& _osByAgent);

                    /**
                     * 判断参数 OsByAgent 是否已赋值
                     * @return OsByAgent 是否已赋值
                     * 
                     */
                    bool OsByAgentHasBeenSet() const;

                    /**
                     * 获取<p>付费模式</p>
                     * @return PayMode <p>付费模式</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>付费模式</p>
                     * @param _payMode <p>付费模式</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>已防护天数</p>
                     * @return ProtectDays <p>已防护天数</p>
                     * 
                     */
                    uint64_t GetProtectDays() const;

                    /**
                     * 设置<p>已防护天数</p>
                     * @param _protectDays <p>已防护天数</p>
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
                     * 获取<p>防护类型</p>
                     * @return ProtectType <p>防护类型</p>
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置<p>防护类型</p>
                     * @param _protectType <p>防护类型</p>
                     * 
                     */
                    void SetProtectType(const std::string& _protectType);

                    /**
                     * 判断参数 ProtectType 是否已赋值
                     * @return ProtectType 是否已赋值
                     * 
                     */
                    bool ProtectTypeHasBeenSet() const;

                    /**
                     * 获取<p>主机唯一标识</p>
                     * @return Quuid <p>主机唯一标识</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>主机唯一标识</p>
                     * @param _quuid <p>主机唯一标识</p>
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
                     * 获取<p>地域信息</p>
                     * @return RegionInfo <p>地域信息</p>
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置<p>地域信息</p>
                     * @param _regionInfo <p>地域信息</p>
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>序列号</p>
                     * @return SerialNumber <p>序列号</p>
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置<p>序列号</p>
                     * @param _serialNumber <p>序列号</p>
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
                     * 获取<p>资产标签列表</p>
                     * @return TagItems <p>资产标签列表</p>
                     * 
                     */
                    std::vector<MiniTagItem> GetTagItems() const;

                    /**
                     * 设置<p>资产标签列表</p>
                     * @param _tagItems <p>资产标签列表</p>
                     * 
                     */
                    void SetTagItems(const std::vector<MiniTagItem>& _tagItems);

                    /**
                     * 判断参数 TagItems 是否已赋值
                     * @return TagItems 是否已赋值
                     * 
                     */
                    bool TagItemsHasBeenSet() const;

                    /**
                     * 获取<p>标签修改信息</p>
                     * @return TagModifyInfo <p>标签修改信息</p>
                     * 
                     */
                    AssetTagModifyAssetItem GetTagModifyInfo() const;

                    /**
                     * 设置<p>标签修改信息</p>
                     * @param _tagModifyInfo <p>标签修改信息</p>
                     * 
                     */
                    void SetTagModifyInfo(const AssetTagModifyAssetItem& _tagModifyInfo);

                    /**
                     * 判断参数 TagModifyInfo 是否已赋值
                     * @return TagModifyInfo 是否已赋值
                     * 
                     */
                    bool TagModifyInfoHasBeenSet() const;

                    /**
                     * 获取<p>Agent唯一标识</p>
                     * @return Uuid <p>Agent唯一标识</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>Agent唯一标识</p>
                     * @param _uuid <p>Agent唯一标识</p>
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
                     * 获取<p>VPC CIDR</p>
                     * @return VpcCidrBlock <p>VPC CIDR</p>
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置<p>VPC CIDR</p>
                     * @param _vpcCidrBlock <p>VPC CIDR</p>
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID</p>
                     * @return VpcId <p>VPC ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID</p>
                     * @param _vpcId <p>VPC ID</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>VPC名称</p>
                     * @return VpcName <p>VPC名称</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>VPC名称</p>
                     * @param _vpcName <p>VPC名称</p>
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取<p>主机节点类型</p><p>枚举值：</p><ul><li>NONE： 主机节点</li><li>CLUSTER： 集群节点</li><li>CONTAINER： 容器节点</li></ul>
                     * @return NodeType <p>主机节点类型</p><p>枚举值：</p><ul><li>NONE： 主机节点</li><li>CLUSTER： 集群节点</li><li>CONTAINER： 容器节点</li></ul>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>主机节点类型</p><p>枚举值：</p><ul><li>NONE： 主机节点</li><li>CLUSTER： 集群节点</li><li>CONTAINER： 容器节点</li></ul>
                     * @param _nodeType <p>主机节点类型</p><p>枚举值：</p><ul><li>NONE： 主机节点</li><li>CLUSTER： 集群节点</li><li>CONTAINER： 容器节点</li></ul>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>容器防护状态</p><p>枚举值：</p><ul><li>Enabled： 开启防护</li><li>Disabled： 关闭防护</li><li>Unknown： 未知</li></ul>
                     * @return ContainerDefendStatus <p>容器防护状态</p><p>枚举值：</p><ul><li>Enabled： 开启防护</li><li>Disabled： 关闭防护</li><li>Unknown： 未知</li></ul>
                     * 
                     */
                    std::string GetContainerDefendStatus() const;

                    /**
                     * 设置<p>容器防护状态</p><p>枚举值：</p><ul><li>Enabled： 开启防护</li><li>Disabled： 关闭防护</li><li>Unknown： 未知</li></ul>
                     * @param _containerDefendStatus <p>容器防护状态</p><p>枚举值：</p><ul><li>Enabled： 开启防护</li><li>Disabled： 关闭防护</li><li>Unknown： 未知</li></ul>
                     * 
                     */
                    void SetContainerDefendStatus(const std::string& _containerDefendStatus);

                    /**
                     * 判断参数 ContainerDefendStatus 是否已赋值
                     * @return ContainerDefendStatus 是否已赋值
                     * 
                     */
                    bool ContainerDefendStatusHasBeenSet() const;

                    /**
                     * 获取<p>集群签证md5</p>
                     * @return ClusterCaMd5 <p>集群签证md5</p>
                     * 
                     */
                    std::string GetClusterCaMd5() const;

                    /**
                     * 设置<p>集群签证md5</p>
                     * @param _clusterCaMd5 <p>集群签证md5</p>
                     * 
                     */
                    void SetClusterCaMd5(const std::string& _clusterCaMd5);

                    /**
                     * 判断参数 ClusterCaMd5 是否已赋值
                     * @return ClusterCaMd5 是否已赋值
                     * 
                     */
                    bool ClusterCaMd5HasBeenSet() const;

                    /**
                     * 获取<p>容器环境信息</p>
                     * @return ContainerEnvInfo <p>容器环境信息</p>
                     * 
                     */
                    ContainerEnvInfo GetContainerEnvInfo() const;

                    /**
                     * 设置<p>容器环境信息</p>
                     * @param _containerEnvInfo <p>容器环境信息</p>
                     * 
                     */
                    void SetContainerEnvInfo(const ContainerEnvInfo& _containerEnvInfo);

                    /**
                     * 判断参数 ContainerEnvInfo 是否已赋值
                     * @return ContainerEnvInfo 是否已赋值
                     * 
                     */
                    bool ContainerEnvInfoHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
                     * @return ClusterId <p>集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterId <p>集群id</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * <p>Agent状态</p>
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * <p>Agent版本</p>
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * <p>账号AppId</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>资产类型名称</p>
                     */
                    std::string m_assetTypeName;
                    bool m_assetTypeNameHasBeenSet;

                    /**
                     * <p>系统启动时间（Unix时间戳）</p>
                     */
                    int64_t m_bootTime;
                    bool m_bootTimeHasBeenSet;

                    /**
                     * <p>购买时间（Unix时间戳）</p>
                     */
                    int64_t m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * <p>云服务商</p>
                     */
                    std::string m_cloudFromEnum;
                    bool m_cloudFromEnumHasBeenSet;

                    /**
                     * <p>云标签列表</p>
                     */
                    std::vector<Tags> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * <p>内核版本</p>
                     */
                    std::string m_coreVersion;
                    bool m_coreVersionHasBeenSet;

                    /**
                     * <p>CPU信息</p>
                     */
                    std::string m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>CPU负载</p>
                     */
                    std::string m_cpuLoad;
                    bool m_cpuLoadHasBeenSet;

                    /**
                     * <p>CPU核数</p>
                     */
                    uint64_t m_cpuSize;
                    bool m_cpuSizeHasBeenSet;

                    /**
                     * <p>设备型号</p>
                     */
                    std::string m_deviceVersion;
                    bool m_deviceVersionHasBeenSet;

                    /**
                     * <p>磁盘分区信息</p>
                     */
                    std::vector<DiskPartitionInfo> m_disks;
                    bool m_disksHasBeenSet;

                    /**
                     * <p>到期时间（Unix时间戳）</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>暴露状态</p>
                     */
                    std::string m_exposedStatus;
                    bool m_exposedStatusHasBeenSet;

                    /**
                     * <p>安装时间（Unix时间戳）</p>
                     */
                    int64_t m_installTime;
                    bool m_installTimeHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>实例状态</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>内核版本</p>
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * <p>最近一次在线时间（Unix时间戳）</p>
                     */
                    int64_t m_latestLiveTime;
                    bool m_latestLiveTimeHasBeenSet;

                    /**
                     * <p>最近一次离线时间（Unix时间戳）</p>
                     */
                    int64_t m_latestOfflineTime;
                    bool m_latestOfflineTimeHasBeenSet;

                    /**
                     * <p>内网IP</p>
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * <p>主机名称</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>操作系统（云采集）</p>
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * <p>主机状态</p>
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * <p>外网IP</p>
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * <p>内存大小(MB)</p>
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>内存使用率</p>
                     */
                    std::string m_memoryLoad;
                    bool m_memoryLoadHasBeenSet;

                    /**
                     * <p>网卡信息</p>
                     */
                    std::vector<NetworkCardInfo> m_netCards;
                    bool m_netCardsHasBeenSet;

                    /**
                     * <p>操作系统（端采集）</p>
                     */
                    std::string m_osByAgent;
                    bool m_osByAgentHasBeenSet;

                    /**
                     * <p>付费模式</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>已防护天数</p>
                     */
                    uint64_t m_protectDays;
                    bool m_protectDaysHasBeenSet;

                    /**
                     * <p>防护类型</p>
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * <p>主机唯一标识</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>地域信息</p>
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>序列号</p>
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * <p>资产标签列表</p>
                     */
                    std::vector<MiniTagItem> m_tagItems;
                    bool m_tagItemsHasBeenSet;

                    /**
                     * <p>标签修改信息</p>
                     */
                    AssetTagModifyAssetItem m_tagModifyInfo;
                    bool m_tagModifyInfoHasBeenSet;

                    /**
                     * <p>Agent唯一标识</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>VPC CIDR</p>
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>VPC名称</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>主机节点类型</p><p>枚举值：</p><ul><li>NONE： 主机节点</li><li>CLUSTER： 集群节点</li><li>CONTAINER： 容器节点</li></ul>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>容器防护状态</p><p>枚举值：</p><ul><li>Enabled： 开启防护</li><li>Disabled： 关闭防护</li><li>Unknown： 未知</li></ul>
                     */
                    std::string m_containerDefendStatus;
                    bool m_containerDefendStatusHasBeenSet;

                    /**
                     * <p>集群签证md5</p>
                     */
                    std::string m_clusterCaMd5;
                    bool m_clusterCaMd5HasBeenSet;

                    /**
                     * <p>容器环境信息</p>
                     */
                    ContainerEnvInfo m_containerEnvInfo;
                    bool m_containerEnvInfoHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINEDETAIL_H_
