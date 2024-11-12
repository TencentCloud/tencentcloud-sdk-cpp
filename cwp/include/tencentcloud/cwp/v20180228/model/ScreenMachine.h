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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENMACHINE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENMACHINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 大屏主机列表数据
                */
                class ScreenMachine : public AbstractModel
                {
                public:
                    ScreenMachine();
                    ~ScreenMachine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机名称。
                     * @return MachineName 主机名称。
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名称。
                     * @param _machineName 主机名称。
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
                     * 获取主机系统。
                     * @return MachineOs 主机系统。
                     * 
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 设置主机系统。
                     * @param _machineOs 主机系统。
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
                     * 获取主机安全Uuid，若客户端长时间不在线将返回空字符。
                     * @return Uuid 主机安全Uuid，若客户端长时间不在线将返回空字符。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全Uuid，若客户端长时间不在线将返回空字符。
                     * @param _uuid 主机安全Uuid，若客户端长时间不在线将返回空字符。
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
                     * 获取大屏主机状态 0：未安装agent，1：离线状态，2:离线-风险，3：离线-严重
4：安装设备-正常，5：安装设备-正常 且是专业版或旗舰版，6：安装设备-风险（网络攻击事件>0） ，
 7：安装设备-风险（网络攻击事件>0 且是专业版或旗舰版，8：安装设备-严重（入侵检测事件>0），
9：安装设备-严重（入侵检测事件>0）且是专业版或旗舰版
                     * @return MachineStatus 大屏主机状态 0：未安装agent，1：离线状态，2:离线-风险，3：离线-严重
4：安装设备-正常，5：安装设备-正常 且是专业版或旗舰版，6：安装设备-风险（网络攻击事件>0） ，
 7：安装设备-风险（网络攻击事件>0 且是专业版或旗舰版，8：安装设备-严重（入侵检测事件>0），
9：安装设备-严重（入侵检测事件>0）且是专业版或旗舰版
                     * 
                     */
                    uint64_t GetMachineStatus() const;

                    /**
                     * 设置大屏主机状态 0：未安装agent，1：离线状态，2:离线-风险，3：离线-严重
4：安装设备-正常，5：安装设备-正常 且是专业版或旗舰版，6：安装设备-风险（网络攻击事件>0） ，
 7：安装设备-风险（网络攻击事件>0 且是专业版或旗舰版，8：安装设备-严重（入侵检测事件>0），
9：安装设备-严重（入侵检测事件>0）且是专业版或旗舰版
                     * @param _machineStatus 大屏主机状态 0：未安装agent，1：离线状态，2:离线-风险，3：离线-严重
4：安装设备-正常，5：安装设备-正常 且是专业版或旗舰版，6：安装设备-风险（网络攻击事件>0） ，
 7：安装设备-风险（网络攻击事件>0 且是专业版或旗舰版，8：安装设备-严重（入侵检测事件>0），
9：安装设备-严重（入侵检测事件>0）且是专业版或旗舰版
                     * 
                     */
                    void SetMachineStatus(const uint64_t& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取CVM或BM机器唯一Uuid。
                     * @return Quuid CVM或BM机器唯一Uuid。
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置CVM或BM机器唯一Uuid。
                     * @param _quuid CVM或BM机器唯一Uuid。
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
                     * 获取漏洞数。
                     * @return VulNum 漏洞数。
                     * 
                     */
                    int64_t GetVulNum() const;

                    /**
                     * 设置漏洞数。
                     * @param _vulNum 漏洞数。
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
                     * 获取主机IP。
                     * @return MachineIp 主机IP。
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机IP。
                     * @param _machineIp 主机IP。
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
                     * 获取主机外网IP。
                     * @return MachineWanIp 主机外网IP。
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置主机外网IP。
                     * @param _machineWanIp 主机外网IP。
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
                     * 获取基线风险数。
                     * @return BaselineNum 基线风险数。
                     * 
                     */
                    int64_t GetBaselineNum() const;

                    /**
                     * 设置基线风险数。
                     * @param _baselineNum 基线风险数。
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
                     * 获取网络风险数。
                     * @return CyberAttackNum 网络风险数。
                     * 
                     */
                    int64_t GetCyberAttackNum() const;

                    /**
                     * 设置网络风险数。
                     * @param _cyberAttackNum 网络风险数。
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
                     * 获取风险状态。
<li>SAFE：安全</li>
<li>RISK：风险</li>
<li>UNKNOWN：未知</li>
                     * @return SecurityStatus 风险状态。
<li>SAFE：安全</li>
<li>RISK：风险</li>
<li>UNKNOWN：未知</li>
                     * 
                     */
                    std::string GetSecurityStatus() const;

                    /**
                     * 设置风险状态。
<li>SAFE：安全</li>
<li>RISK：风险</li>
<li>UNKNOWN：未知</li>
                     * @param _securityStatus 风险状态。
<li>SAFE：安全</li>
<li>RISK：风险</li>
<li>UNKNOWN：未知</li>
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
                     * 获取入侵事件数
                     * @return InvasionNum 入侵事件数
                     * 
                     */
                    int64_t GetInvasionNum() const;

                    /**
                     * 设置入侵事件数
                     * @param _invasionNum 入侵事件数
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
                     * 获取机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     * @return MachineType 机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     * @param _machineType 机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
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
                     * 获取cpu 负载状态
                     * @return CpuLoad cpu 负载状态
                     * 
                     */
                    std::string GetCpuLoad() const;

                    /**
                     * 设置cpu 负载状态
                     * @param _cpuLoad cpu 负载状态
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
                     * 获取cpu 核数
                     * @return CpuSize cpu 核数
                     * 
                     */
                    double GetCpuSize() const;

                    /**
                     * 设置cpu 核数
                     * @param _cpuSize cpu 核数
                     * 
                     */
                    void SetCpuSize(const double& _cpuSize);

                    /**
                     * 判断参数 CpuSize 是否已赋值
                     * @return CpuSize 是否已赋值
                     * 
                     */
                    bool CpuSizeHasBeenSet() const;

                    /**
                     * 获取硬盘使用率 %
                     * @return DiskLoad 硬盘使用率 %
                     * 
                     */
                    std::string GetDiskLoad() const;

                    /**
                     * 设置硬盘使用率 %
                     * @param _diskLoad 硬盘使用率 %
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
                     * 获取硬盘容量GB
                     * @return DiskSize 硬盘容量GB
                     * 
                     */
                    double GetDiskSize() const;

                    /**
                     * 设置硬盘容量GB
                     * @param _diskSize 硬盘容量GB
                     * 
                     */
                    void SetDiskSize(const double& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取内存负载率%
                     * @return MemLoad 内存负载率%
                     * 
                     */
                    std::string GetMemLoad() const;

                    /**
                     * 设置内存负载率%
                     * @param _memLoad 内存负载率%
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
                     * 获取内存容量 GB
                     * @return MemSize 内存容量 GB
                     * 
                     */
                    double GetMemSize() const;

                    /**
                     * 设置内存容量 GB
                     * @param _memSize 内存容量 GB
                     * 
                     */
                    void SetMemSize(const double& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

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

                private:

                    /**
                     * 主机名称。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 主机系统。
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * 主机安全Uuid，若客户端长时间不在线将返回空字符。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 大屏主机状态 0：未安装agent，1：离线状态，2:离线-风险，3：离线-严重
4：安装设备-正常，5：安装设备-正常 且是专业版或旗舰版，6：安装设备-风险（网络攻击事件>0） ，
 7：安装设备-风险（网络攻击事件>0 且是专业版或旗舰版，8：安装设备-严重（入侵检测事件>0），
9：安装设备-严重（入侵检测事件>0）且是专业版或旗舰版
                     */
                    uint64_t m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * CVM或BM机器唯一Uuid。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 漏洞数。
                     */
                    int64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * 主机IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机外网IP。
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 基线风险数。
                     */
                    int64_t m_baselineNum;
                    bool m_baselineNumHasBeenSet;

                    /**
                     * 网络风险数。
                     */
                    int64_t m_cyberAttackNum;
                    bool m_cyberAttackNumHasBeenSet;

                    /**
                     * 风险状态。
<li>SAFE：安全</li>
<li>RISK：风险</li>
<li>UNKNOWN：未知</li>
                     */
                    std::string m_securityStatus;
                    bool m_securityStatusHasBeenSet;

                    /**
                     * 入侵事件数
                     */
                    int64_t m_invasionNum;
                    bool m_invasionNumHasBeenSet;

                    /**
                     * 机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * cpu 负载状态
                     */
                    std::string m_cpuLoad;
                    bool m_cpuLoadHasBeenSet;

                    /**
                     * cpu 核数
                     */
                    double m_cpuSize;
                    bool m_cpuSizeHasBeenSet;

                    /**
                     * 硬盘使用率 %
                     */
                    std::string m_diskLoad;
                    bool m_diskLoadHasBeenSet;

                    /**
                     * 硬盘容量GB
                     */
                    double m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 内存负载率%
                     */
                    std::string m_memLoad;
                    bool m_memLoadHasBeenSet;

                    /**
                     * 内存容量 GB
                     */
                    double m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 内核版本
                     */
                    std::string m_coreVersion;
                    bool m_coreVersionHasBeenSet;

                    /**
                     * 附加信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENMACHINE_H_
