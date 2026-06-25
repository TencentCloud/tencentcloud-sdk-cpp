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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>
#include <tencentcloud/csip/v20221121/model/RegionInfo.h>
#include <tencentcloud/csip/v20221121/model/MiniTagItem.h>
#include <tencentcloud/csip/v20221121/model/AssetTagModifyAssetItem.h>


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
                class Machine : public AbstractModel
                {
                public:
                    Machine();
                    ~Machine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Agent状态，取值：ONLINE-在线，OFFLINE-离线，UNINSTALL-未安装</p>
                     * @return AgentStatus <p>Agent状态，取值：ONLINE-在线，OFFLINE-离线，UNINSTALL-未安装</p>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>Agent状态，取值：ONLINE-在线，OFFLINE-离线，UNINSTALL-未安装</p>
                     * @param _agentStatus <p>Agent状态，取值：ONLINE-在线，OFFLINE-离线，UNINSTALL-未安装</p>
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
                    std::vector<Tag> GetCloudTags() const;

                    /**
                     * 设置<p>云标签列表</p>
                     * @param _cloudTags <p>云标签列表</p>
                     * 
                     */
                    void SetCloudTags(const std::vector<Tag>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取<p>CSIP防护类型，取值：BASIC-基础版，PRO-专业版，ULTIMATE-旗舰版</p>
                     * @return CsipProtectType <p>CSIP防护类型，取值：BASIC-基础版，PRO-专业版，ULTIMATE-旗舰版</p>
                     * 
                     */
                    std::string GetCsipProtectType() const;

                    /**
                     * 设置<p>CSIP防护类型，取值：BASIC-基础版，PRO-专业版，ULTIMATE-旗舰版</p>
                     * @param _csipProtectType <p>CSIP防护类型，取值：BASIC-基础版，PRO-专业版，ULTIMATE-旗舰版</p>
                     * 
                     */
                    void SetCsipProtectType(const std::string& _csipProtectType);

                    /**
                     * 判断参数 CsipProtectType 是否已赋值
                     * @return CsipProtectType 是否已赋值
                     * 
                     */
                    bool CsipProtectTypeHasBeenSet() const;

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
                     * 获取<p>实例状态，取值：RUNNING-运行中，STOPPED-已关机，EXPIRED-待回收</p>
                     * @return InstanceStatus <p>实例状态，取值：RUNNING-运行中，STOPPED-已关机，EXPIRED-待回收</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>实例状态，取值：RUNNING-运行中，STOPPED-已关机，EXPIRED-待回收</p>
                     * @param _instanceStatus <p>实例状态，取值：RUNNING-运行中，STOPPED-已关机，EXPIRED-待回收</p>
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
                     * 获取<p>网卡IP列表</p>
                     * @return IpList <p>网卡IP列表</p>
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置<p>网卡IP列表</p>
                     * @param _ipList <p>网卡IP列表</p>
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取<p>是否为新增主机（15天内新增）</p>
                     * @return IsNew <p>是否为新增主机（15天内新增）</p>
                     * 
                     */
                    bool GetIsNew() const;

                    /**
                     * 设置<p>是否为新增主机（15天内新增）</p>
                     * @param _isNew <p>是否为新增主机（15天内新增）</p>
                     * 
                     */
                    void SetIsNew(const bool& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

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
                     * 获取<p>操作系统</p>
                     * @return MachineOs <p>操作系统</p>
                     * 
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 设置<p>操作系统</p>
                     * @param _machineOs <p>操作系统</p>
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
                     * 获取<p>付费模式，取值：PREPAID-预付费，POSTPAID-后付费</p>
                     * @return PayMode <p>付费模式，取值：PREPAID-预付费，POSTPAID-后付费</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>付费模式，取值：PREPAID-预付费，POSTPAID-后付费</p>
                     * @param _payMode <p>付费模式，取值：PREPAID-预付费，POSTPAID-后付费</p>
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
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>防护类型，取值：NONE-无防护，BASIC-基础版，PRO-专业版，ULTIMATE-旗舰版，PRO_LH-轻量版</p>
                     * @return ProtectType <p>防护类型，取值：NONE-无防护，BASIC-基础版，PRO-专业版，ULTIMATE-旗舰版，PRO_LH-轻量版</p>
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置<p>防护类型，取值：NONE-无防护，BASIC-基础版，PRO-专业版，ULTIMATE-旗舰版，PRO_LH-轻量版</p>
                     * @param _protectType <p>防护类型，取值：NONE-无防护，BASIC-基础版，PRO-专业版，ULTIMATE-旗舰版，PRO_LH-轻量版</p>
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
                     * 获取<p>TAT状态，取值：ONLINE-在线，OFFLINE-离线</p>
                     * @return TatStatus <p>TAT状态，取值：ONLINE-在线，OFFLINE-离线</p>
                     * 
                     */
                    std::string GetTatStatus() const;

                    /**
                     * 设置<p>TAT状态，取值：ONLINE-在线，OFFLINE-离线</p>
                     * @param _tatStatus <p>TAT状态，取值：ONLINE-在线，OFFLINE-离线</p>
                     * 
                     */
                    void SetTatStatus(const std::string& _tatStatus);

                    /**
                     * 判断参数 TatStatus 是否已赋值
                     * @return TatStatus 是否已赋值
                     * 
                     */
                    bool TatStatusHasBeenSet() const;

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
                     * 获取<p>容器数量</p>
                     * @return ContainerCount <p>容器数量</p>
                     * 
                     */
                    uint64_t GetContainerCount() const;

                    /**
                     * 设置<p>容器数量</p>
                     * @param _containerCount <p>容器数量</p>
                     * 
                     */
                    void SetContainerCount(const uint64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取<p>核数</p>
                     * @return CpuCoreCount <p>核数</p>
                     * 
                     */
                    uint64_t GetCpuCoreCount() const;

                    /**
                     * 设置<p>核数</p>
                     * @param _cpuCoreCount <p>核数</p>
                     * 
                     */
                    void SetCpuCoreCount(const uint64_t& _cpuCoreCount);

                    /**
                     * 判断参数 CpuCoreCount 是否已赋值
                     * @return CpuCoreCount 是否已赋值
                     * 
                     */
                    bool CpuCoreCountHasBeenSet() const;

                private:

                    /**
                     * <p>Agent状态，取值：ONLINE-在线，OFFLINE-离线，UNINSTALL-未安装</p>
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
                     * <p>云服务商</p>
                     */
                    std::string m_cloudFromEnum;
                    bool m_cloudFromEnumHasBeenSet;

                    /**
                     * <p>云标签列表</p>
                     */
                    std::vector<Tag> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * <p>CSIP防护类型，取值：BASIC-基础版，PRO-专业版，ULTIMATE-旗舰版</p>
                     */
                    std::string m_csipProtectType;
                    bool m_csipProtectTypeHasBeenSet;

                    /**
                     * <p>暴露状态</p>
                     */
                    std::string m_exposedStatus;
                    bool m_exposedStatusHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>实例状态，取值：RUNNING-运行中，STOPPED-已关机，EXPIRED-待回收</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>网卡IP列表</p>
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * <p>是否为新增主机（15天内新增）</p>
                     */
                    bool m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * <p>内核版本</p>
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

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
                     * <p>操作系统</p>
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * <p>外网IP</p>
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * <p>付费模式，取值：PREPAID-预付费，POSTPAID-后付费</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>防护类型，取值：NONE-无防护，BASIC-基础版，PRO-专业版，ULTIMATE-旗舰版，PRO_LH-轻量版</p>
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
                     * <p>TAT状态，取值：ONLINE-在线，OFFLINE-离线</p>
                     */
                    std::string m_tatStatus;
                    bool m_tatStatusHasBeenSet;

                    /**
                     * <p>Agent唯一标识</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

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
                     * <p>容器数量</p>
                     */
                    uint64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * <p>核数</p>
                     */
                    uint64_t m_cpuCoreCount;
                    bool m_cpuCoreCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINE_H_
