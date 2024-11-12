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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EFFECTIVEMACHINEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EFFECTIVEMACHINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>
#include <tencentcloud/cwp/v20180228/model/LicenseOrder.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 批量导入机器信息.
                */
                class EffectiveMachineInfo : public AbstractModel
                {
                public:
                    EffectiveMachineInfo();
                    ~EffectiveMachineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器名称
                     * @return MachineName 机器名称
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置机器名称
                     * @param _machineName 机器名称
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
                     * 获取机器公网ip
                     * @return MachinePublicIp 机器公网ip
                     * 
                     */
                    std::string GetMachinePublicIp() const;

                    /**
                     * 设置机器公网ip
                     * @param _machinePublicIp 机器公网ip
                     * 
                     */
                    void SetMachinePublicIp(const std::string& _machinePublicIp);

                    /**
                     * 判断参数 MachinePublicIp 是否已赋值
                     * @return MachinePublicIp 是否已赋值
                     * 
                     */
                    bool MachinePublicIpHasBeenSet() const;

                    /**
                     * 获取机器内网ip
                     * @return MachinePrivateIp 机器内网ip
                     * 
                     */
                    std::string GetMachinePrivateIp() const;

                    /**
                     * 设置机器内网ip
                     * @param _machinePrivateIp 机器内网ip
                     * 
                     */
                    void SetMachinePrivateIp(const std::string& _machinePrivateIp);

                    /**
                     * 判断参数 MachinePrivateIp 是否已赋值
                     * @return MachinePrivateIp 是否已赋值
                     * 
                     */
                    bool MachinePrivateIpHasBeenSet() const;

                    /**
                     * 获取机器标签
                     * @return MachineTag 机器标签
                     * 
                     */
                    std::vector<MachineTag> GetMachineTag() const;

                    /**
                     * 设置机器标签
                     * @param _machineTag 机器标签
                     * 
                     */
                    void SetMachineTag(const std::vector<MachineTag>& _machineTag);

                    /**
                     * 判断参数 MachineTag 是否已赋值
                     * @return MachineTag 是否已赋值
                     * 
                     */
                    bool MachineTagHasBeenSet() const;

                    /**
                     * 获取机器Quuid
                     * @return Quuid 机器Quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置机器Quuid
                     * @param _quuid 机器Quuid
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
                     * 获取主机Uuid
                     * @return Uuid 主机Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机Uuid
                     * @param _uuid 主机Uuid
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
                     * 获取内核版本号
                     * @return KernelVersion 内核版本号
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置内核版本号
                     * @param _kernelVersion 内核版本号
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
                     * 获取在线状态 OFFLINE，ONLINE
                     * @return MachineStatus 在线状态 OFFLINE，ONLINE
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置在线状态 OFFLINE，ONLINE
                     * @param _machineStatus 在线状态 OFFLINE，ONLINE
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
                     * 获取授权订单对象
                     * @return LicenseOrder 授权订单对象
                     * 
                     */
                    LicenseOrder GetLicenseOrder() const;

                    /**
                     * 设置授权订单对象
                     * @param _licenseOrder 授权订单对象
                     * 
                     */
                    void SetLicenseOrder(const LicenseOrder& _licenseOrder);

                    /**
                     * 判断参数 LicenseOrder 是否已赋值
                     * @return LicenseOrder 是否已赋值
                     * 
                     */
                    bool LicenseOrderHasBeenSet() const;

                    /**
                     * 获取漏洞数量
                     * @return VulNum 漏洞数量
                     * 
                     */
                    uint64_t GetVulNum() const;

                    /**
                     * 设置漏洞数量
                     * @param _vulNum 漏洞数量
                     * 
                     */
                    void SetVulNum(const uint64_t& _vulNum);

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     * 
                     */
                    bool VulNumHasBeenSet() const;

                    /**
                     * 获取云标签信息
                     * @return CloudTags 云标签信息
                     * 
                     */
                    std::vector<Tags> GetCloudTags() const;

                    /**
                     * 设置云标签信息
                     * @param _cloudTags 云标签信息
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
                     * 获取机器instance ID
                     * @return InstanceID 机器instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置机器instance ID
                     * @param _instanceID 机器instance ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * 机器名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 机器公网ip
                     */
                    std::string m_machinePublicIp;
                    bool m_machinePublicIpHasBeenSet;

                    /**
                     * 机器内网ip
                     */
                    std::string m_machinePrivateIp;
                    bool m_machinePrivateIpHasBeenSet;

                    /**
                     * 机器标签
                     */
                    std::vector<MachineTag> m_machineTag;
                    bool m_machineTagHasBeenSet;

                    /**
                     * 机器Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 内核版本号
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * 在线状态 OFFLINE，ONLINE
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * 授权订单对象
                     */
                    LicenseOrder m_licenseOrder;
                    bool m_licenseOrderHasBeenSet;

                    /**
                     * 漏洞数量
                     */
                    uint64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * 云标签信息
                     */
                    std::vector<Tags> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * 机器instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EFFECTIVEMACHINEINFO_H_
