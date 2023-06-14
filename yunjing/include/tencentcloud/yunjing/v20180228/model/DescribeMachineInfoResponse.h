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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEMACHINEINFORESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEMACHINEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeMachineInfo返回参数结构体
                */
                class DescribeMachineInfoResponse : public AbstractModel
                {
                public:
                    DescribeMachineInfoResponse();
                    ~DescribeMachineInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取机器ip。
                     * @return MachineIp 机器ip。
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取受云镜保护天数。
                     * @return ProtectDays 受云镜保护天数。
                     * 
                     */
                    uint64_t GetProtectDays() const;

                    /**
                     * 判断参数 ProtectDays 是否已赋值
                     * @return ProtectDays 是否已赋值
                     * 
                     */
                    bool ProtectDaysHasBeenSet() const;

                    /**
                     * 获取操作系统。
                     * @return MachineOs 操作系统。
                     * 
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 判断参数 MachineOs 是否已赋值
                     * @return MachineOs 是否已赋值
                     * 
                     */
                    bool MachineOsHasBeenSet() const;

                    /**
                     * 获取主机名称。
                     * @return MachineName 主机名称。
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取在线状态。
<li>ONLINE： 在线</li>
<li>OFFLINE：离线</li>
                     * @return MachineStatus 在线状态。
<li>ONLINE： 在线</li>
<li>OFFLINE：离线</li>
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取CVM或BM主机唯一标识。
                     * @return InstanceId CVM或BM主机唯一标识。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取主机外网IP。
                     * @return MachineWanIp 主机外网IP。
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取CVM或BM主机唯一Uuid。
                     * @return Quuid CVM或BM主机唯一Uuid。
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取云镜客户端唯一Uuid。
                     * @return Uuid 云镜客户端唯一Uuid。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取是否开通专业版。
<li>true：是</li>
<li>false：否</li>
                     * @return IsProVersion 是否开通专业版。
<li>true：是</li>
<li>false：否</li>
                     * 
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     * 
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取专业版开通时间。
                     * @return ProVersionOpenDate 专业版开通时间。
                     * 
                     */
                    std::string GetProVersionOpenDate() const;

                    /**
                     * 判断参数 ProVersionOpenDate 是否已赋值
                     * @return ProVersionOpenDate 是否已赋值
                     * 
                     */
                    bool ProVersionOpenDateHasBeenSet() const;

                    /**
                     * 获取云主机类型。
<li>CVM: 虚拟主机</li>
<li>BM: 黑石物理机</li>
                     * @return MachineType 云主机类型。
<li>CVM: 虚拟主机</li>
<li>BM: 黑石物理机</li>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取机器所属地域。如：ap-guangzhou，ap-shanghai
                     * @return MachineRegion 机器所属地域。如：ap-guangzhou，ap-shanghai
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 判断参数 MachineRegion 是否已赋值
                     * @return MachineRegion 是否已赋值
                     * 
                     */
                    bool MachineRegionHasBeenSet() const;

                    /**
                     * 获取主机状态。
<li>POSTPAY: 表示后付费，即按量计费  </li>
<li>PREPAY: 表示预付费，即包年包月</li>
                     * @return PayMode 主机状态。
<li>POSTPAY: 表示后付费，即按量计费  </li>
<li>PREPAY: 表示预付费，即包年包月</li>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取免费木马剩余检测数量。
                     * @return FreeMalwaresLeft 免费木马剩余检测数量。
                     * 
                     */
                    uint64_t GetFreeMalwaresLeft() const;

                    /**
                     * 判断参数 FreeMalwaresLeft 是否已赋值
                     * @return FreeMalwaresLeft 是否已赋值
                     * 
                     */
                    bool FreeMalwaresLeftHasBeenSet() const;

                    /**
                     * 获取免费漏洞剩余检测数量。
                     * @return FreeVulsLeft 免费漏洞剩余检测数量。
                     * 
                     */
                    uint64_t GetFreeVulsLeft() const;

                    /**
                     * 判断参数 FreeVulsLeft 是否已赋值
                     * @return FreeVulsLeft 是否已赋值
                     * 
                     */
                    bool FreeVulsLeftHasBeenSet() const;

                private:

                    /**
                     * 机器ip。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 受云镜保护天数。
                     */
                    uint64_t m_protectDays;
                    bool m_protectDaysHasBeenSet;

                    /**
                     * 操作系统。
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * 主机名称。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 在线状态。
<li>ONLINE： 在线</li>
<li>OFFLINE：离线</li>
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * CVM或BM主机唯一标识。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主机外网IP。
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * CVM或BM主机唯一Uuid。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 云镜客户端唯一Uuid。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 是否开通专业版。
<li>true：是</li>
<li>false：否</li>
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * 专业版开通时间。
                     */
                    std::string m_proVersionOpenDate;
                    bool m_proVersionOpenDateHasBeenSet;

                    /**
                     * 云主机类型。
<li>CVM: 虚拟主机</li>
<li>BM: 黑石物理机</li>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 机器所属地域。如：ap-guangzhou，ap-shanghai
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * 主机状态。
<li>POSTPAY: 表示后付费，即按量计费  </li>
<li>PREPAY: 表示预付费，即包年包月</li>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 免费木马剩余检测数量。
                     */
                    uint64_t m_freeMalwaresLeft;
                    bool m_freeMalwaresLeftHasBeenSet;

                    /**
                     * 免费漏洞剩余检测数量。
                     */
                    uint64_t m_freeVulsLeft;
                    bool m_freeVulsLeftHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEMACHINEINFORESPONSE_H_
