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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_IMPACTEDHOST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_IMPACTEDHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 受影响主机信息
                */
                class ImpactedHost : public AbstractModel
                {
                public:
                    ImpactedHost();
                    ~ImpactedHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞ID。
                     * @return Id 漏洞ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置漏洞ID。
                     * @param _id 漏洞ID。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取最后检测时间。
                     * @return LastScanTime 最后检测时间。
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最后检测时间。
                     * @param _lastScanTime 最后检测时间。
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
                     * 获取漏洞状态。
<li>UN_OPERATED ：待处理</li>
<li>SCANING : 扫描中</li>
<li>FIXED : 已修复</li>
                     * @return VulStatus 漏洞状态。
<li>UN_OPERATED ：待处理</li>
<li>SCANING : 扫描中</li>
<li>FIXED : 已修复</li>
                     * 
                     */
                    std::string GetVulStatus() const;

                    /**
                     * 设置漏洞状态。
<li>UN_OPERATED ：待处理</li>
<li>SCANING : 扫描中</li>
<li>FIXED : 已修复</li>
                     * @param _vulStatus 漏洞状态。
<li>UN_OPERATED ：待处理</li>
<li>SCANING : 扫描中</li>
<li>FIXED : 已修复</li>
                     * 
                     */
                    void SetVulStatus(const std::string& _vulStatus);

                    /**
                     * 判断参数 VulStatus 是否已赋值
                     * @return VulStatus 是否已赋值
                     * 
                     */
                    bool VulStatusHasBeenSet() const;

                    /**
                     * 获取云镜客户端唯一标识UUID。
                     * @return Uuid 云镜客户端唯一标识UUID。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端唯一标识UUID。
                     * @param _uuid 云镜客户端唯一标识UUID。
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
                     * 获取漏洞描述。
                     * @return Description 漏洞描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置漏洞描述。
                     * @param _description 漏洞描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取漏洞种类ID。
                     * @return VulId 漏洞种类ID。
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞种类ID。
                     * @param _vulId 漏洞种类ID。
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取是否为专业版。
                     * @return IsProVersion 是否为专业版。
                     * 
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置是否为专业版。
                     * @param _isProVersion 是否为专业版。
                     * 
                     */
                    void SetIsProVersion(const bool& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     * 
                     */
                    bool IsProVersionHasBeenSet() const;

                private:

                    /**
                     * 漏洞ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机名称。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 最后检测时间。
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 漏洞状态。
<li>UN_OPERATED ：待处理</li>
<li>SCANING : 扫描中</li>
<li>FIXED : 已修复</li>
                     */
                    std::string m_vulStatus;
                    bool m_vulStatusHasBeenSet;

                    /**
                     * 云镜客户端唯一标识UUID。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 漏洞描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 漏洞种类ID。
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 是否为专业版。
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_IMPACTEDHOST_H_
