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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MACHINE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MACHINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>
#include <tencentcloud/cwp/v20180228/model/RegionInfo.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>
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
                     * 获取<p>主机名称。</p>
                     * @return MachineName <p>主机名称。</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>主机名称。</p>
                     * @param _machineName <p>主机名称。</p>
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
                     * 获取<p>主机系统。</p>
                     * @return MachineOs <p>主机系统。</p>
                     * 
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 设置<p>主机系统。</p>
                     * @param _machineOs <p>主机系统。</p>
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
                     * 获取<p>主机状态。 <li>OFFLINE: 离线 </li> <li>ONLINE: 在线</li> <li>SHUTDOWN: 已关机</li> <li>UNINSTALLED: 未防护</li></p>
                     * @return MachineStatus <p>主机状态。 <li>OFFLINE: 离线 </li> <li>ONLINE: 在线</li> <li>SHUTDOWN: 已关机</li> <li>UNINSTALLED: 未防护</li></p>
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置<p>主机状态。 <li>OFFLINE: 离线 </li> <li>ONLINE: 在线</li> <li>SHUTDOWN: 已关机</li> <li>UNINSTALLED: 未防护</li></p>
                     * @param _machineStatus <p>主机状态。 <li>OFFLINE: 离线 </li> <li>ONLINE: 在线</li> <li>SHUTDOWN: 已关机</li> <li>UNINSTALLED: 未防护</li></p>
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
                     * 获取<p>ONLINE 防护中; OFFLINE 已离线;UNINStALLED 未安装</p>
                     * @return AgentStatus <p>ONLINE 防护中; OFFLINE 已离线;UNINStALLED 未安装</p>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>ONLINE 防护中; OFFLINE 已离线;UNINStALLED 未安装</p>
                     * @param _agentStatus <p>ONLINE 防护中; OFFLINE 已离线;UNINStALLED 未安装</p>
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
                     * 获取<p>RUNNING 运行中; STOPED 已关机; EXPIRED 待回收</p>
                     * @return InstanceStatus <p>RUNNING 运行中; STOPED 已关机; EXPIRED 待回收</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>RUNNING 运行中; STOPED 已关机; EXPIRED 待回收</p>
                     * @param _instanceStatus <p>RUNNING 运行中; STOPED 已关机; EXPIRED 待回收</p>
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
                     * 获取<p>主机安全Uuid，若客户端长时间不在线将返回空字符。</p>
                     * @return Uuid <p>主机安全Uuid，若客户端长时间不在线将返回空字符。</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>主机安全Uuid，若客户端长时间不在线将返回空字符。</p>
                     * @param _uuid <p>主机安全Uuid，若客户端长时间不在线将返回空字符。</p>
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
                     * 获取<p>CVM或BM机器唯一Uuid。</p>
                     * @return Quuid <p>CVM或BM机器唯一Uuid。</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>CVM或BM机器唯一Uuid。</p>
                     * @param _quuid <p>CVM或BM机器唯一Uuid。</p>
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
                     * 获取<p>漏洞数。</p>
                     * @return VulNum <p>漏洞数。</p>
                     * 
                     */
                    int64_t GetVulNum() const;

                    /**
                     * 设置<p>漏洞数。</p>
                     * @param _vulNum <p>漏洞数。</p>
                     * 
                     */
                    void SetVulNum(const int64_t& _vulNum);

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     * 
                     */
                    bool VulNumHasBeenSet() const;

                    /**
                     * 获取<p>主机IP。</p>
                     * @return MachineIp <p>主机IP。</p>
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置<p>主机IP。</p>
                     * @param _machineIp <p>主机IP。</p>
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
                     * 获取<p>是否是专业版。</p><li>true： 是</li><li>false：否</li>
                     * @return IsProVersion <p>是否是专业版。</p><li>true： 是</li><li>false：否</li>
                     * 
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置<p>是否是专业版。</p><li>true： 是</li><li>false：否</li>
                     * @param _isProVersion <p>是否是专业版。</p><li>true： 是</li><li>false：否</li>
                     * 
                     */
                    void SetIsProVersion(const bool& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     * 
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取<p>主机外网IP。</p>
                     * @return MachineWanIp <p>主机外网IP。</p>
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置<p>主机外网IP。</p>
                     * @param _machineWanIp <p>主机外网IP。</p>
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
                     * 获取<p>主机状态。</p><li>POSTPAY: 表示后付费，即按量计费  </li><li>PREPAY: 表示预付费，即包年包月</li>
                     * @return PayMode <p>主机状态。</p><li>POSTPAY: 表示后付费，即按量计费  </li><li>PREPAY: 表示预付费，即包年包月</li>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>主机状态。</p><li>POSTPAY: 表示后付费，即按量计费  </li><li>PREPAY: 表示预付费，即包年包月</li>
                     * @param _payMode <p>主机状态。</p><li>POSTPAY: 表示后付费，即按量计费  </li><li>PREPAY: 表示预付费，即包年包月</li>
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
                     * 获取<p>木马数。</p>
                     * @return MalwareNum <p>木马数。</p>
                     * 
                     */
                    int64_t GetMalwareNum() const;

                    /**
                     * 设置<p>木马数。</p>
                     * @param _malwareNum <p>木马数。</p>
                     * 
                     */
                    void SetMalwareNum(const int64_t& _malwareNum);

                    /**
                     * 判断参数 MalwareNum 是否已赋值
                     * @return MalwareNum 是否已赋值
                     * 
                     */
                    bool MalwareNumHasBeenSet() const;

                    /**
                     * 获取<p>标签信息</p>
                     * @return Tag <p>标签信息</p>
                     * 
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置<p>标签信息</p>
                     * @param _tag <p>标签信息</p>
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
                     * 获取<p>基线风险数。</p>
                     * @return BaselineNum <p>基线风险数。</p>
                     * 
                     */
                    int64_t GetBaselineNum() const;

                    /**
                     * 设置<p>基线风险数。</p>
                     * @param _baselineNum <p>基线风险数。</p>
                     * 
                     */
                    void SetBaselineNum(const int64_t& _baselineNum);

                    /**
                     * 判断参数 BaselineNum 是否已赋值
                     * @return BaselineNum 是否已赋值
                     * 
                     */
                    bool BaselineNumHasBeenSet() const;

                    /**
                     * 获取<p>网络风险数。</p>
                     * @return CyberAttackNum <p>网络风险数。</p>
                     * 
                     */
                    int64_t GetCyberAttackNum() const;

                    /**
                     * 设置<p>网络风险数。</p>
                     * @param _cyberAttackNum <p>网络风险数。</p>
                     * 
                     */
                    void SetCyberAttackNum(const int64_t& _cyberAttackNum);

                    /**
                     * 判断参数 CyberAttackNum 是否已赋值
                     * @return CyberAttackNum 是否已赋值
                     * 
                     */
                    bool CyberAttackNumHasBeenSet() const;

                    /**
                     * 获取<p>风险状态。</p><li>SAFE：安全</li><li>RISK：风险</li><li>UNKNOWN：未知</li>
                     * @return SecurityStatus <p>风险状态。</p><li>SAFE：安全</li><li>RISK：风险</li><li>UNKNOWN：未知</li>
                     * 
                     */
                    std::string GetSecurityStatus() const;

                    /**
                     * 设置<p>风险状态。</p><li>SAFE：安全</li><li>RISK：风险</li><li>UNKNOWN：未知</li>
                     * @param _securityStatus <p>风险状态。</p><li>SAFE：安全</li><li>RISK：风险</li><li>UNKNOWN：未知</li>
                     * 
                     */
                    void SetSecurityStatus(const std::string& _securityStatus);

                    /**
                     * 判断参数 SecurityStatus 是否已赋值
                     * @return SecurityStatus 是否已赋值
                     * 
                     */
                    bool SecurityStatusHasBeenSet() const;

                    /**
                     * 获取<p>入侵事件数</p>
                     * @return InvasionNum <p>入侵事件数</p>
                     * 
                     */
                    int64_t GetInvasionNum() const;

                    /**
                     * 设置<p>入侵事件数</p>
                     * @param _invasionNum <p>入侵事件数</p>
                     * 
                     */
                    void SetInvasionNum(const int64_t& _invasionNum);

                    /**
                     * 判断参数 InvasionNum 是否已赋值
                     * @return InvasionNum 是否已赋值
                     * 
                     */
                    bool InvasionNumHasBeenSet() const;

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
                     * 获取<p>实例状态 TERMINATED_PRO_VERSION 已销毁</p>
                     * @return InstanceState <p>实例状态 TERMINATED_PRO_VERSION 已销毁</p>
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置<p>实例状态 TERMINATED_PRO_VERSION 已销毁</p>
                     * @param _instanceState <p>实例状态 TERMINATED_PRO_VERSION 已销毁</p>
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取<p>防篡改 授权状态 1 授权 0 未授权</p>
                     * @return LicenseStatus <p>防篡改 授权状态 1 授权 0 未授权</p>
                     * 
                     */
                    uint64_t GetLicenseStatus() const;

                    /**
                     * 设置<p>防篡改 授权状态 1 授权 0 未授权</p>
                     * @param _licenseStatus <p>防篡改 授权状态 1 授权 0 未授权</p>
                     * 
                     */
                    void SetLicenseStatus(const uint64_t& _licenseStatus);

                    /**
                     * 判断参数 LicenseStatus 是否已赋值
                     * @return LicenseStatus 是否已赋值
                     * 
                     */
                    bool LicenseStatusHasBeenSet() const;

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
                     * 获取<p>是否有资产扫描接口，0无，1有</p>
                     * @return HasAssetScan <p>是否有资产扫描接口，0无，1有</p>
                     * 
                     */
                    uint64_t GetHasAssetScan() const;

                    /**
                     * 设置<p>是否有资产扫描接口，0无，1有</p>
                     * @param _hasAssetScan <p>是否有资产扫描接口，0无，1有</p>
                     * 
                     */
                    void SetHasAssetScan(const uint64_t& _hasAssetScan);

                    /**
                     * 判断参数 HasAssetScan 是否已赋值
                     * @return HasAssetScan 是否已赋值
                     * 
                     */
                    bool HasAssetScanHasBeenSet() const;

                    /**
                     * 获取<p>机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区</p>
                     * @return MachineType <p>机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区</p>
                     * @param _machineType <p>机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区</p>
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
                     * 获取<p>防护版本：BASIC_VERSION 基础版， PRO_VERSION 专业版，Flagship 旗舰版，GENERAL_DISCOUNT 轻量版</p>
                     * @return ProtectType <p>防护版本：BASIC_VERSION 基础版， PRO_VERSION 专业版，Flagship 旗舰版，GENERAL_DISCOUNT 轻量版</p>
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置<p>防护版本：BASIC_VERSION 基础版， PRO_VERSION 专业版，Flagship 旗舰版，GENERAL_DISCOUNT 轻量版</p>
                     * @param _protectType <p>防护版本：BASIC_VERSION 基础版， PRO_VERSION 专业版，Flagship 旗舰版，GENERAL_DISCOUNT 轻量版</p>
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
                     * 获取<p>云标签信息</p>
                     * @return CloudTags <p>云标签信息</p>
                     * 
                     */
                    std::vector<Tags> GetCloudTags() const;

                    /**
                     * 设置<p>云标签信息</p>
                     * @param _cloudTags <p>云标签信息</p>
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
                     * 获取<p>是否15天内新增的主机 0：非15天内新增的主机，1：15天内增加的主机</p>
                     * @return IsAddedOnTheFifteen <p>是否15天内新增的主机 0：非15天内新增的主机，1：15天内增加的主机</p>
                     * 
                     */
                    uint64_t GetIsAddedOnTheFifteen() const;

                    /**
                     * 设置<p>是否15天内新增的主机 0：非15天内新增的主机，1：15天内增加的主机</p>
                     * @param _isAddedOnTheFifteen <p>是否15天内新增的主机 0：非15天内新增的主机，1：15天内增加的主机</p>
                     * 
                     */
                    void SetIsAddedOnTheFifteen(const uint64_t& _isAddedOnTheFifteen);

                    /**
                     * 判断参数 IsAddedOnTheFifteen 是否已赋值
                     * @return IsAddedOnTheFifteen 是否已赋值
                     * 
                     */
                    bool IsAddedOnTheFifteenHasBeenSet() const;

                    /**
                     * 获取<p>主机ip列表</p>
                     * @return IpList <p>主机ip列表</p>
                     * 
                     */
                    std::string GetIpList() const;

                    /**
                     * 设置<p>主机ip列表</p>
                     * @param _ipList <p>主机ip列表</p>
                     * 
                     */
                    void SetIpList(const std::string& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取<p>所属网络</p>
                     * @return VpcId <p>所属网络</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>所属网络</p>
                     * @param _vpcId <p>所属网络</p>
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
                     * 获取<p>附加信息</p>
                     * @return MachineExtraInfo <p>附加信息</p>
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置<p>附加信息</p>
                     * @param _machineExtraInfo <p>附加信息</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>备注信息</p>
                     * @return Remark <p>备注信息</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注信息</p>
                     * @param _remark <p>备注信息</p>
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
                     * 获取<p>主机安全agent版本</p>
                     * @return AgentVersion <p>主机安全agent版本</p>
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置<p>主机安全agent版本</p>
                     * @param _agentVersion <p>主机安全agent版本</p>
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
                     * 获取<p>机器对应APPID</p>
                     * @return AppId <p>机器对应APPID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>机器对应APPID</p>
                     * @param _appId <p>机器对应APPID</p>
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
                     * 获取<p>安全中心付费版本</p>
                     * @return CSIPProtectType <p>安全中心付费版本</p>
                     * 
                     */
                    std::string GetCSIPProtectType() const;

                    /**
                     * 设置<p>安全中心付费版本</p>
                     * @param _cSIPProtectType <p>安全中心付费版本</p>
                     * 
                     */
                    void SetCSIPProtectType(const std::string& _cSIPProtectType);

                    /**
                     * 判断参数 CSIPProtectType 是否已赋值
                     * @return CSIPProtectType 是否已赋值
                     * 
                     */
                    bool CSIPProtectTypeHasBeenSet() const;

                private:

                    /**
                     * <p>主机名称。</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>主机系统。</p>
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * <p>主机状态。 <li>OFFLINE: 离线 </li> <li>ONLINE: 在线</li> <li>SHUTDOWN: 已关机</li> <li>UNINSTALLED: 未防护</li></p>
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * <p>ONLINE 防护中; OFFLINE 已离线;UNINStALLED 未安装</p>
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * <p>RUNNING 运行中; STOPED 已关机; EXPIRED 待回收</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>主机安全Uuid，若客户端长时间不在线将返回空字符。</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>CVM或BM机器唯一Uuid。</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>漏洞数。</p>
                     */
                    int64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * <p>主机IP。</p>
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * <p>是否是专业版。</p><li>true： 是</li><li>false：否</li>
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * <p>主机外网IP。</p>
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * <p>主机状态。</p><li>POSTPAY: 表示后付费，即按量计费  </li><li>PREPAY: 表示预付费，即包年包月</li>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>木马数。</p>
                     */
                    int64_t m_malwareNum;
                    bool m_malwareNumHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>基线风险数。</p>
                     */
                    int64_t m_baselineNum;
                    bool m_baselineNumHasBeenSet;

                    /**
                     * <p>网络风险数。</p>
                     */
                    int64_t m_cyberAttackNum;
                    bool m_cyberAttackNumHasBeenSet;

                    /**
                     * <p>风险状态。</p><li>SAFE：安全</li><li>RISK：风险</li><li>UNKNOWN：未知</li>
                     */
                    std::string m_securityStatus;
                    bool m_securityStatusHasBeenSet;

                    /**
                     * <p>入侵事件数</p>
                     */
                    int64_t m_invasionNum;
                    bool m_invasionNumHasBeenSet;

                    /**
                     * <p>地域信息</p>
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * <p>实例状态 TERMINATED_PRO_VERSION 已销毁</p>
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * <p>防篡改 授权状态 1 授权 0 未授权</p>
                     */
                    uint64_t m_licenseStatus;
                    bool m_licenseStatusHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>是否有资产扫描接口，0无，1有</p>
                     */
                    uint64_t m_hasAssetScan;
                    bool m_hasAssetScanHasBeenSet;

                    /**
                     * <p>机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>内核版本</p>
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * <p>防护版本：BASIC_VERSION 基础版， PRO_VERSION 专业版，Flagship 旗舰版，GENERAL_DISCOUNT 轻量版</p>
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * <p>云标签信息</p>
                     */
                    std::vector<Tags> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * <p>是否15天内新增的主机 0：非15天内新增的主机，1：15天内增加的主机</p>
                     */
                    uint64_t m_isAddedOnTheFifteen;
                    bool m_isAddedOnTheFifteenHasBeenSet;

                    /**
                     * <p>主机ip列表</p>
                     */
                    std::string m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * <p>所属网络</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>附加信息</p>
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>备注信息</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>主机安全agent版本</p>
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * <p>机器对应APPID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>安全中心付费版本</p>
                     */
                    std::string m_cSIPProtectType;
                    bool m_cSIPProtectTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MACHINE_H_
