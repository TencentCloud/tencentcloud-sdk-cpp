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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CVMASSETVO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CVMASSETVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>
#include <tencentcloud/csip/v20221121/model/Element.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 主机资产信息

主机防护状态枚举，左边是常量，右边是显示
0：未安装
1：基础版防护中
2：普惠版防护中
3：专业版防护中
4：旗舰版防护中
5：已离线
6：已关机
                */
                class CVMAssetVO : public AbstractModel
                {
                public:
                    CVMAssetVO();
                    ~CVMAssetVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产id
                     * @return AssetId 资产id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产id
                     * @param _assetId 资产id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取资产名
                     * @return AssetName 资产名
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名
                     * @param _assetName 资产名
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取防护状态
                     * @return CWPStatus 防护状态
                     * 
                     */
                    uint64_t GetCWPStatus() const;

                    /**
                     * 设置防护状态
                     * @param _cWPStatus 防护状态
                     * 
                     */
                    void SetCWPStatus(const uint64_t& _cWPStatus);

                    /**
                     * 判断参数 CWPStatus 是否已赋值
                     * @return CWPStatus 是否已赋值
                     * 
                     */
                    bool CWPStatusHasBeenSet() const;

                    /**
                     * 获取资产创建时间
                     * @return AssetCreateTime 资产创建时间
                     * 
                     */
                    std::string GetAssetCreateTime() const;

                    /**
                     * 设置资产创建时间
                     * @param _assetCreateTime 资产创建时间
                     * 
                     */
                    void SetAssetCreateTime(const std::string& _assetCreateTime);

                    /**
                     * 判断参数 AssetCreateTime 是否已赋值
                     * @return AssetCreateTime 是否已赋值
                     * 
                     */
                    bool AssetCreateTimeHasBeenSet() const;

                    /**
                     * 获取公网IP
                     * @return PublicIp 公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网IP
                     * @param _publicIp 公网IP
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取私网IP
                     * @return PrivateIp 私网IP
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置私网IP
                     * @param _privateIp 私网IP
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取vpc id
                     * @return VpcId vpc id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
                     * @param _vpcId vpc id
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
                     * 获取vpc 名
                     * @return VpcName vpc 名
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc 名
                     * @param _vpcName vpc 名
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
                     * 获取appid信息
                     * @return AppId appid信息
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置appid信息
                     * @param _appId appid信息
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
                     * 获取用户uin
                     * @return Uin 用户uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
                     * @param _uin 用户uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取昵称
                     * @return NickName 昵称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置昵称
                     * @param _nickName 昵称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return AvailableArea 可用区
                     * 
                     */
                    std::string GetAvailableArea() const;

                    /**
                     * 设置可用区
                     * @param _availableArea 可用区
                     * 
                     */
                    void SetAvailableArea(const std::string& _availableArea);

                    /**
                     * 判断参数 AvailableArea 是否已赋值
                     * @return AvailableArea 是否已赋值
                     * 
                     */
                    bool AvailableAreaHasBeenSet() const;

                    /**
                     * 获取是否核心
                     * @return IsCore 是否核心
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置是否核心
                     * @param _isCore 是否核心
                     * 
                     */
                    void SetIsCore(const uint64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                    /**
                     * 获取子网id
                     * @return SubnetId 子网id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
                     * @param _subnetId 子网id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取子网名
                     * @return SubnetName 子网名
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名
                     * @param _subnetName 子网名
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取主机安全Agent UUID
                     * @return InstanceUuid 主机安全Agent UUID
                     * 
                     */
                    std::string GetInstanceUuid() const;

                    /**
                     * 设置主机安全Agent UUID
                     * @param _instanceUuid 主机安全Agent UUID
                     * 
                     */
                    void SetInstanceUuid(const std::string& _instanceUuid);

                    /**
                     * 判断参数 InstanceUuid 是否已赋值
                     * @return InstanceUuid 是否已赋值
                     * 
                     */
                    bool InstanceUuidHasBeenSet() const;

                    /**
                     * 获取云主机 CVM UUID
                     * @return InstanceQUuid 云主机 CVM UUID
                     * 
                     */
                    std::string GetInstanceQUuid() const;

                    /**
                     * 设置云主机 CVM UUID
                     * @param _instanceQUuid 云主机 CVM UUID
                     * 
                     */
                    void SetInstanceQUuid(const std::string& _instanceQUuid);

                    /**
                     * 判断参数 InstanceQUuid 是否已赋值
                     * @return InstanceQUuid 是否已赋值
                     * 
                     */
                    bool InstanceQUuidHasBeenSet() const;

                    /**
                     * 获取os名
                     * @return OsName os名
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置os名
                     * @param _osName os名
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取分区
                     * @return PartitionCount 分区
                     * 
                     */
                    uint64_t GetPartitionCount() const;

                    /**
                     * 设置分区
                     * @param _partitionCount 分区
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
                     * 获取cpu信息
                     * @return CPUInfo cpu信息
                     * 
                     */
                    std::string GetCPUInfo() const;

                    /**
                     * 设置cpu信息
                     * @param _cPUInfo cpu信息
                     * 
                     */
                    void SetCPUInfo(const std::string& _cPUInfo);

                    /**
                     * 判断参数 CPUInfo 是否已赋值
                     * @return CPUInfo 是否已赋值
                     * 
                     */
                    bool CPUInfoHasBeenSet() const;

                    /**
                     * 获取cpu大小
                     * @return CPUSize cpu大小
                     * 
                     */
                    uint64_t GetCPUSize() const;

                    /**
                     * 设置cpu大小
                     * @param _cPUSize cpu大小
                     * 
                     */
                    void SetCPUSize(const uint64_t& _cPUSize);

                    /**
                     * 判断参数 CPUSize 是否已赋值
                     * @return CPUSize 是否已赋值
                     * 
                     */
                    bool CPUSizeHasBeenSet() const;

                    /**
                     * 获取cpu负载
                     * @return CPULoad cpu负载
                     * 
                     */
                    std::string GetCPULoad() const;

                    /**
                     * 设置cpu负载
                     * @param _cPULoad cpu负载
                     * 
                     */
                    void SetCPULoad(const std::string& _cPULoad);

                    /**
                     * 判断参数 CPULoad 是否已赋值
                     * @return CPULoad 是否已赋值
                     * 
                     */
                    bool CPULoadHasBeenSet() const;

                    /**
                     * 获取内存大小
                     * @return MemorySize 内存大小
                     * 
                     */
                    std::string GetMemorySize() const;

                    /**
                     * 设置内存大小
                     * @param _memorySize 内存大小
                     * 
                     */
                    void SetMemorySize(const std::string& _memorySize);

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     * 
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取内存负载
                     * @return MemoryLoad 内存负载
                     * 
                     */
                    std::string GetMemoryLoad() const;

                    /**
                     * 设置内存负载
                     * @param _memoryLoad 内存负载
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
                     * 获取硬盘大小
                     * @return DiskSize 硬盘大小
                     * 
                     */
                    std::string GetDiskSize() const;

                    /**
                     * 设置硬盘大小
                     * @param _diskSize 硬盘大小
                     * 
                     */
                    void SetDiskSize(const std::string& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取硬盘负载
                     * @return DiskLoad 硬盘负载
                     * 
                     */
                    std::string GetDiskLoad() const;

                    /**
                     * 设置硬盘负载
                     * @param _diskLoad 硬盘负载
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
                     * 获取账号数
                     * @return AccountCount 账号数
                     * 
                     */
                    std::string GetAccountCount() const;

                    /**
                     * 设置账号数
                     * @param _accountCount 账号数
                     * 
                     */
                    void SetAccountCount(const std::string& _accountCount);

                    /**
                     * 判断参数 AccountCount 是否已赋值
                     * @return AccountCount 是否已赋值
                     * 
                     */
                    bool AccountCountHasBeenSet() const;

                    /**
                     * 获取进程数
                     * @return ProcessCount 进程数
                     * 
                     */
                    std::string GetProcessCount() const;

                    /**
                     * 设置进程数
                     * @param _processCount 进程数
                     * 
                     */
                    void SetProcessCount(const std::string& _processCount);

                    /**
                     * 判断参数 ProcessCount 是否已赋值
                     * @return ProcessCount 是否已赋值
                     * 
                     */
                    bool ProcessCountHasBeenSet() const;

                    /**
                     * 获取软件应用
                     * @return AppCount 软件应用
                     * 
                     */
                    std::string GetAppCount() const;

                    /**
                     * 设置软件应用
                     * @param _appCount 软件应用
                     * 
                     */
                    void SetAppCount(const std::string& _appCount);

                    /**
                     * 判断参数 AppCount 是否已赋值
                     * @return AppCount 是否已赋值
                     * 
                     */
                    bool AppCountHasBeenSet() const;

                    /**
                     * 获取监听端口
                     * @return PortCount 监听端口
                     * 
                     */
                    uint64_t GetPortCount() const;

                    /**
                     * 设置监听端口
                     * @param _portCount 监听端口
                     * 
                     */
                    void SetPortCount(const uint64_t& _portCount);

                    /**
                     * 判断参数 PortCount 是否已赋值
                     * @return PortCount 是否已赋值
                     * 
                     */
                    bool PortCountHasBeenSet() const;

                    /**
                     * 获取网络攻击
                     * @return Attack 网络攻击
                     * 
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 设置网络攻击
                     * @param _attack 网络攻击
                     * 
                     */
                    void SetAttack(const uint64_t& _attack);

                    /**
                     * 判断参数 Attack 是否已赋值
                     * @return Attack 是否已赋值
                     * 
                     */
                    bool AttackHasBeenSet() const;

                    /**
                     * 获取网络访问
                     * @return Access 网络访问
                     * 
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 设置网络访问
                     * @param _access 网络访问
                     * 
                     */
                    void SetAccess(const uint64_t& _access);

                    /**
                     * 判断参数 Access 是否已赋值
                     * @return Access 是否已赋值
                     * 
                     */
                    bool AccessHasBeenSet() const;

                    /**
                     * 获取网络拦截
                     * @return Intercept 网络拦截
                     * 
                     */
                    uint64_t GetIntercept() const;

                    /**
                     * 设置网络拦截
                     * @param _intercept 网络拦截
                     * 
                     */
                    void SetIntercept(const uint64_t& _intercept);

                    /**
                     * 判断参数 Intercept 是否已赋值
                     * @return Intercept 是否已赋值
                     * 
                     */
                    bool InterceptHasBeenSet() const;

                    /**
                     * 获取入向峰值带宽
                     * @return InBandwidth 入向峰值带宽
                     * 
                     */
                    std::string GetInBandwidth() const;

                    /**
                     * 设置入向峰值带宽
                     * @param _inBandwidth 入向峰值带宽
                     * 
                     */
                    void SetInBandwidth(const std::string& _inBandwidth);

                    /**
                     * 判断参数 InBandwidth 是否已赋值
                     * @return InBandwidth 是否已赋值
                     * 
                     */
                    bool InBandwidthHasBeenSet() const;

                    /**
                     * 获取出向峰值带宽
                     * @return OutBandwidth 出向峰值带宽
                     * 
                     */
                    std::string GetOutBandwidth() const;

                    /**
                     * 设置出向峰值带宽
                     * @param _outBandwidth 出向峰值带宽
                     * 
                     */
                    void SetOutBandwidth(const std::string& _outBandwidth);

                    /**
                     * 判断参数 OutBandwidth 是否已赋值
                     * @return OutBandwidth 是否已赋值
                     * 
                     */
                    bool OutBandwidthHasBeenSet() const;

                    /**
                     * 获取入向累计流量
                     * @return InFlow 入向累计流量
                     * 
                     */
                    std::string GetInFlow() const;

                    /**
                     * 设置入向累计流量
                     * @param _inFlow 入向累计流量
                     * 
                     */
                    void SetInFlow(const std::string& _inFlow);

                    /**
                     * 判断参数 InFlow 是否已赋值
                     * @return InFlow 是否已赋值
                     * 
                     */
                    bool InFlowHasBeenSet() const;

                    /**
                     * 获取出向累计流量
                     * @return OutFlow 出向累计流量
                     * 
                     */
                    std::string GetOutFlow() const;

                    /**
                     * 设置出向累计流量
                     * @param _outFlow 出向累计流量
                     * 
                     */
                    void SetOutFlow(const std::string& _outFlow);

                    /**
                     * 判断参数 OutFlow 是否已赋值
                     * @return OutFlow 是否已赋值
                     * 
                     */
                    bool OutFlowHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
                     * @return LastScanTime 最近扫描时间
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最近扫描时间
                     * @param _lastScanTime 最近扫描时间
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取恶意主动外联
                     * @return NetWorkOut 恶意主动外联
                     * 
                     */
                    uint64_t GetNetWorkOut() const;

                    /**
                     * 设置恶意主动外联
                     * @param _netWorkOut 恶意主动外联
                     * 
                     */
                    void SetNetWorkOut(const uint64_t& _netWorkOut);

                    /**
                     * 判断参数 NetWorkOut 是否已赋值
                     * @return NetWorkOut 是否已赋值
                     * 
                     */
                    bool NetWorkOutHasBeenSet() const;

                    /**
                     * 获取端口风险
                     * @return PortRisk 端口风险
                     * 
                     */
                    uint64_t GetPortRisk() const;

                    /**
                     * 设置端口风险
                     * @param _portRisk 端口风险
                     * 
                     */
                    void SetPortRisk(const uint64_t& _portRisk);

                    /**
                     * 判断参数 PortRisk 是否已赋值
                     * @return PortRisk 是否已赋值
                     * 
                     */
                    bool PortRiskHasBeenSet() const;

                    /**
                     * 获取漏洞风险
                     * @return VulnerabilityRisk 漏洞风险
                     * 
                     */
                    uint64_t GetVulnerabilityRisk() const;

                    /**
                     * 设置漏洞风险
                     * @param _vulnerabilityRisk 漏洞风险
                     * 
                     */
                    void SetVulnerabilityRisk(const uint64_t& _vulnerabilityRisk);

                    /**
                     * 判断参数 VulnerabilityRisk 是否已赋值
                     * @return VulnerabilityRisk 是否已赋值
                     * 
                     */
                    bool VulnerabilityRiskHasBeenSet() const;

                    /**
                     * 获取配置风险
                     * @return ConfigurationRisk 配置风险
                     * 
                     */
                    uint64_t GetConfigurationRisk() const;

                    /**
                     * 设置配置风险
                     * @param _configurationRisk 配置风险
                     * 
                     */
                    void SetConfigurationRisk(const uint64_t& _configurationRisk);

                    /**
                     * 判断参数 ConfigurationRisk 是否已赋值
                     * @return ConfigurationRisk 是否已赋值
                     * 
                     */
                    bool ConfigurationRiskHasBeenSet() const;

                    /**
                     * 获取扫描任务数
                     * @return ScanTask 扫描任务数
                     * 
                     */
                    uint64_t GetScanTask() const;

                    /**
                     * 设置扫描任务数
                     * @param _scanTask 扫描任务数
                     * 
                     */
                    void SetScanTask(const uint64_t& _scanTask);

                    /**
                     * 判断参数 ScanTask 是否已赋值
                     * @return ScanTask 是否已赋值
                     * 
                     */
                    bool ScanTaskHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tag 标签
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置标签
                     * @param _tag 标签
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取memberId
                     * @return MemberId memberId
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置memberId
                     * @param _memberId memberId
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取os全称
                     * @return Os os全称
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置os全称
                     * @param _os os全称
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                    /**
                     * 获取风险服务暴露
                     * @return RiskExposure 风险服务暴露
                     * 
                     */
                    int64_t GetRiskExposure() const;

                    /**
                     * 设置风险服务暴露
                     * @param _riskExposure 风险服务暴露
                     * 
                     */
                    void SetRiskExposure(const int64_t& _riskExposure);

                    /**
                     * 判断参数 RiskExposure 是否已赋值
                     * @return RiskExposure 是否已赋值
                     * 
                     */
                    bool RiskExposureHasBeenSet() const;

                    /**
                     * 获取模拟攻击工具状态。0代表未安装，1代表已安装，2代表已离线
                     * @return BASAgentStatus 模拟攻击工具状态。0代表未安装，1代表已安装，2代表已离线
                     * 
                     */
                    int64_t GetBASAgentStatus() const;

                    /**
                     * 设置模拟攻击工具状态。0代表未安装，1代表已安装，2代表已离线
                     * @param _bASAgentStatus 模拟攻击工具状态。0代表未安装，1代表已安装，2代表已离线
                     * 
                     */
                    void SetBASAgentStatus(const int64_t& _bASAgentStatus);

                    /**
                     * 判断参数 BASAgentStatus 是否已赋值
                     * @return BASAgentStatus 是否已赋值
                     * 
                     */
                    bool BASAgentStatusHasBeenSet() const;

                    /**
                     * 获取1新资产；0 非新资产
                     * @return IsNewAsset 1新资产；0 非新资产
                     * 
                     */
                    uint64_t GetIsNewAsset() const;

                    /**
                     * 设置1新资产；0 非新资产
                     * @param _isNewAsset 1新资产；0 非新资产
                     * 
                     */
                    void SetIsNewAsset(const uint64_t& _isNewAsset);

                    /**
                     * 判断参数 IsNewAsset 是否已赋值
                     * @return IsNewAsset 是否已赋值
                     * 
                     */
                    bool IsNewAssetHasBeenSet() const;

                    /**
                     * 获取0 未安装  1安装 2:安装中
                     * @return CVMAgentStatus 0 未安装  1安装 2:安装中
                     * 
                     */
                    int64_t GetCVMAgentStatus() const;

                    /**
                     * 设置0 未安装  1安装 2:安装中
                     * @param _cVMAgentStatus 0 未安装  1安装 2:安装中
                     * 
                     */
                    void SetCVMAgentStatus(const int64_t& _cVMAgentStatus);

                    /**
                     * 判断参数 CVMAgentStatus 是否已赋值
                     * @return CVMAgentStatus 是否已赋值
                     * 
                     */
                    bool CVMAgentStatusHasBeenSet() const;

                    /**
                     * 获取1:开启 0:未开启
                     * @return CVMStatus 1:开启 0:未开启
                     * 
                     */
                    int64_t GetCVMStatus() const;

                    /**
                     * 设置1:开启 0:未开启
                     * @param _cVMStatus 1:开启 0:未开启
                     * 
                     */
                    void SetCVMStatus(const int64_t& _cVMStatus);

                    /**
                     * 判断参数 CVMStatus 是否已赋值
                     * @return CVMStatus 是否已赋值
                     * 
                     */
                    bool CVMStatusHasBeenSet() const;

                    /**
                     * 获取1:客户端已安装 0：未安装 2: Agentless
                     * @return DefenseModel 1:客户端已安装 0：未安装 2: Agentless
                     * 
                     */
                    int64_t GetDefenseModel() const;

                    /**
                     * 设置1:客户端已安装 0：未安装 2: Agentless
                     * @param _defenseModel 1:客户端已安装 0：未安装 2: Agentless
                     * 
                     */
                    void SetDefenseModel(const int64_t& _defenseModel);

                    /**
                     * 判断参数 DefenseModel 是否已赋值
                     * @return DefenseModel 是否已赋值
                     * 
                     */
                    bool DefenseModelHasBeenSet() const;

                    /**
                     * 获取1:已安装 0:未安装
                     * @return TatStatus 1:已安装 0:未安装
                     * 
                     */
                    int64_t GetTatStatus() const;

                    /**
                     * 设置1:已安装 0:未安装
                     * @param _tatStatus 1:已安装 0:未安装
                     * 
                     */
                    void SetTatStatus(const int64_t& _tatStatus);

                    /**
                     * 判断参数 TatStatus 是否已赋值
                     * @return TatStatus 是否已赋值
                     * 
                     */
                    bool TatStatusHasBeenSet() const;

                    /**
                     * 获取cpu趋势图
                     * @return CpuTrend cpu趋势图
                     * 
                     */
                    std::vector<Element> GetCpuTrend() const;

                    /**
                     * 设置cpu趋势图
                     * @param _cpuTrend cpu趋势图
                     * 
                     */
                    void SetCpuTrend(const std::vector<Element>& _cpuTrend);

                    /**
                     * 判断参数 CpuTrend 是否已赋值
                     * @return CpuTrend 是否已赋值
                     * 
                     */
                    bool CpuTrendHasBeenSet() const;

                    /**
                     * 获取内存趋势图
                     * @return MemoryTrend 内存趋势图
                     * 
                     */
                    std::vector<Element> GetMemoryTrend() const;

                    /**
                     * 设置内存趋势图
                     * @param _memoryTrend 内存趋势图
                     * 
                     */
                    void SetMemoryTrend(const std::vector<Element>& _memoryTrend);

                    /**
                     * 判断参数 MemoryTrend 是否已赋值
                     * @return MemoryTrend 是否已赋值
                     * 
                     */
                    bool MemoryTrendHasBeenSet() const;

                    /**
                     * 获取1:agent在线 0:agent离线 2:主机离线
                     * @return AgentStatus 1:agent在线 0:agent离线 2:主机离线
                     * 
                     */
                    int64_t GetAgentStatus() const;

                    /**
                     * 设置1:agent在线 0:agent离线 2:主机离线
                     * @param _agentStatus 1:agent在线 0:agent离线 2:主机离线
                     * 
                     */
                    void SetAgentStatus(const int64_t& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取本月防护关闭次数
                     * @return CloseDefenseCount 本月防护关闭次数
                     * 
                     */
                    int64_t GetCloseDefenseCount() const;

                    /**
                     * 设置本月防护关闭次数
                     * @param _closeDefenseCount 本月防护关闭次数
                     * 
                     */
                    void SetCloseDefenseCount(const int64_t& _closeDefenseCount);

                    /**
                     * 判断参数 CloseDefenseCount 是否已赋值
                     * @return CloseDefenseCount 是否已赋值
                     * 
                     */
                    bool CloseDefenseCountHasBeenSet() const;

                    /**
                     * 获取运行状态
                     * @return InstanceState 运行状态
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置运行状态
                     * @param _instanceState 运行状态
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
                     * 获取安全组数据
                     * @return SecurityGroupIds 安全组数据
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组数据
                     * @param _securityGroupIds 安全组数据
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取物理内存占用KB
                     * @return AgentMemRss 物理内存占用KB
                     * 
                     */
                    int64_t GetAgentMemRss() const;

                    /**
                     * 设置物理内存占用KB
                     * @param _agentMemRss 物理内存占用KB
                     * 
                     */
                    void SetAgentMemRss(const int64_t& _agentMemRss);

                    /**
                     * 判断参数 AgentMemRss 是否已赋值
                     * @return AgentMemRss 是否已赋值
                     * 
                     */
                    bool AgentMemRssHasBeenSet() const;

                    /**
                     * 获取CPU使用率百分比
                     * @return AgentCpuPer CPU使用率百分比
                     * 
                     */
                    double GetAgentCpuPer() const;

                    /**
                     * 设置CPU使用率百分比
                     * @param _agentCpuPer CPU使用率百分比
                     * 
                     */
                    void SetAgentCpuPer(const double& _agentCpuPer);

                    /**
                     * 判断参数 AgentCpuPer 是否已赋值
                     * @return AgentCpuPer 是否已赋值
                     * 
                     */
                    bool AgentCpuPerHasBeenSet() const;

                    /**
                     * 获取cvm真正所属的appid
                     * @return RealAppid cvm真正所属的appid
                     * 
                     */
                    int64_t GetRealAppid() const;

                    /**
                     * 设置cvm真正所属的appid
                     * @param _realAppid cvm真正所属的appid
                     * 
                     */
                    void SetRealAppid(const int64_t& _realAppid);

                    /**
                     * 判断参数 RealAppid 是否已赋值
                     * @return RealAppid 是否已赋值
                     * 
                     */
                    bool RealAppidHasBeenSet() const;

                    /**
                     * 获取云资产类型：0：腾讯云，1：aws，2：azure
                     * @return CloudType 云资产类型：0：腾讯云，1：aws，2：azure
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置云资产类型：0：腾讯云，1：aws，2：azure
                     * @param _cloudType 云资产类型：0：腾讯云，1：aws，2：azure
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取主机防护状态枚举
0：未安装
1：基础版防护中
2：普惠版防护中
3：专业版防护中
4：旗舰版防护中
5：已离线
6：已关机
                     * @return ProtectStatus 主机防护状态枚举
0：未安装
1：基础版防护中
2：普惠版防护中
3：专业版防护中
4：旗舰版防护中
5：已离线
6：已关机
                     * 
                     */
                    int64_t GetProtectStatus() const;

                    /**
                     * 设置主机防护状态枚举
0：未安装
1：基础版防护中
2：普惠版防护中
3：专业版防护中
4：旗舰版防护中
5：已离线
6：已关机
                     * @param _protectStatus 主机防护状态枚举
0：未安装
1：基础版防护中
2：普惠版防护中
3：专业版防护中
4：旗舰版防护中
5：已离线
6：已关机
                     * 
                     */
                    void SetProtectStatus(const int64_t& _protectStatus);

                    /**
                     * 判断参数 ProtectStatus 是否已赋值
                     * @return ProtectStatus 是否已赋值
                     * 
                     */
                    bool ProtectStatusHasBeenSet() const;

                    /**
                     * 获取最后离线时间
                     * @return OfflineTime 最后离线时间
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置最后离线时间
                     * @param _offlineTime 最后离线时间
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                private:

                    /**
                     * 资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 资产名
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 防护状态
                     */
                    uint64_t m_cWPStatus;
                    bool m_cWPStatusHasBeenSet;

                    /**
                     * 资产创建时间
                     */
                    std::string m_assetCreateTime;
                    bool m_assetCreateTimeHasBeenSet;

                    /**
                     * 公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 私网IP
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * vpc id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc 名
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * appid信息
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_availableArea;
                    bool m_availableAreaHasBeenSet;

                    /**
                     * 是否核心
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网名
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 主机安全Agent UUID
                     */
                    std::string m_instanceUuid;
                    bool m_instanceUuidHasBeenSet;

                    /**
                     * 云主机 CVM UUID
                     */
                    std::string m_instanceQUuid;
                    bool m_instanceQUuidHasBeenSet;

                    /**
                     * os名
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 分区
                     */
                    uint64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * cpu信息
                     */
                    std::string m_cPUInfo;
                    bool m_cPUInfoHasBeenSet;

                    /**
                     * cpu大小
                     */
                    uint64_t m_cPUSize;
                    bool m_cPUSizeHasBeenSet;

                    /**
                     * cpu负载
                     */
                    std::string m_cPULoad;
                    bool m_cPULoadHasBeenSet;

                    /**
                     * 内存大小
                     */
                    std::string m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * 内存负载
                     */
                    std::string m_memoryLoad;
                    bool m_memoryLoadHasBeenSet;

                    /**
                     * 硬盘大小
                     */
                    std::string m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 硬盘负载
                     */
                    std::string m_diskLoad;
                    bool m_diskLoadHasBeenSet;

                    /**
                     * 账号数
                     */
                    std::string m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * 进程数
                     */
                    std::string m_processCount;
                    bool m_processCountHasBeenSet;

                    /**
                     * 软件应用
                     */
                    std::string m_appCount;
                    bool m_appCountHasBeenSet;

                    /**
                     * 监听端口
                     */
                    uint64_t m_portCount;
                    bool m_portCountHasBeenSet;

                    /**
                     * 网络攻击
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * 网络访问
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * 网络拦截
                     */
                    uint64_t m_intercept;
                    bool m_interceptHasBeenSet;

                    /**
                     * 入向峰值带宽
                     */
                    std::string m_inBandwidth;
                    bool m_inBandwidthHasBeenSet;

                    /**
                     * 出向峰值带宽
                     */
                    std::string m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * 入向累计流量
                     */
                    std::string m_inFlow;
                    bool m_inFlowHasBeenSet;

                    /**
                     * 出向累计流量
                     */
                    std::string m_outFlow;
                    bool m_outFlowHasBeenSet;

                    /**
                     * 最近扫描时间
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 恶意主动外联
                     */
                    uint64_t m_netWorkOut;
                    bool m_netWorkOutHasBeenSet;

                    /**
                     * 端口风险
                     */
                    uint64_t m_portRisk;
                    bool m_portRiskHasBeenSet;

                    /**
                     * 漏洞风险
                     */
                    uint64_t m_vulnerabilityRisk;
                    bool m_vulnerabilityRiskHasBeenSet;

                    /**
                     * 配置风险
                     */
                    uint64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * 扫描任务数
                     */
                    uint64_t m_scanTask;
                    bool m_scanTaskHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * memberId
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * os全称
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * 风险服务暴露
                     */
                    int64_t m_riskExposure;
                    bool m_riskExposureHasBeenSet;

                    /**
                     * 模拟攻击工具状态。0代表未安装，1代表已安装，2代表已离线
                     */
                    int64_t m_bASAgentStatus;
                    bool m_bASAgentStatusHasBeenSet;

                    /**
                     * 1新资产；0 非新资产
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                    /**
                     * 0 未安装  1安装 2:安装中
                     */
                    int64_t m_cVMAgentStatus;
                    bool m_cVMAgentStatusHasBeenSet;

                    /**
                     * 1:开启 0:未开启
                     */
                    int64_t m_cVMStatus;
                    bool m_cVMStatusHasBeenSet;

                    /**
                     * 1:客户端已安装 0：未安装 2: Agentless
                     */
                    int64_t m_defenseModel;
                    bool m_defenseModelHasBeenSet;

                    /**
                     * 1:已安装 0:未安装
                     */
                    int64_t m_tatStatus;
                    bool m_tatStatusHasBeenSet;

                    /**
                     * cpu趋势图
                     */
                    std::vector<Element> m_cpuTrend;
                    bool m_cpuTrendHasBeenSet;

                    /**
                     * 内存趋势图
                     */
                    std::vector<Element> m_memoryTrend;
                    bool m_memoryTrendHasBeenSet;

                    /**
                     * 1:agent在线 0:agent离线 2:主机离线
                     */
                    int64_t m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * 本月防护关闭次数
                     */
                    int64_t m_closeDefenseCount;
                    bool m_closeDefenseCountHasBeenSet;

                    /**
                     * 运行状态
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 安全组数据
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 物理内存占用KB
                     */
                    int64_t m_agentMemRss;
                    bool m_agentMemRssHasBeenSet;

                    /**
                     * CPU使用率百分比
                     */
                    double m_agentCpuPer;
                    bool m_agentCpuPerHasBeenSet;

                    /**
                     * cvm真正所属的appid
                     */
                    int64_t m_realAppid;
                    bool m_realAppidHasBeenSet;

                    /**
                     * 云资产类型：0：腾讯云，1：aws，2：azure
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * 主机防护状态枚举
0：未安装
1：基础版防护中
2：普惠版防护中
3：专业版防护中
4：旗舰版防护中
5：已离线
6：已关机
                     */
                    int64_t m_protectStatus;
                    bool m_protectStatusHasBeenSet;

                    /**
                     * 最后离线时间
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CVMASSETVO_H_
