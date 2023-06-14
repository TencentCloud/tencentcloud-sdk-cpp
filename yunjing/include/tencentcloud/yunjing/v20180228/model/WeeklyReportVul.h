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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTVUL_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTVUL_H_

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
                * 专业版周报漏洞数据。
                */
                class WeeklyReportVul : public AbstractModel
                {
                public:
                    WeeklyReportVul();
                    ~WeeklyReportVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机内网IP。
                     * @return MachineIp 主机内网IP。
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机内网IP。
                     * @param _machineIp 主机内网IP。
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
                     * 获取漏洞名称。
                     * @return VulName 漏洞名称。
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称。
                     * @param _vulName 漏洞名称。
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取漏洞类型。
<li> WEB : Web漏洞</li>
<li> SYSTEM :系统组件漏洞</li>
<li> BASELINE : 安全基线</li>
                     * @return VulType 漏洞类型。
<li> WEB : Web漏洞</li>
<li> SYSTEM :系统组件漏洞</li>
<li> BASELINE : 安全基线</li>
                     * 
                     */
                    std::string GetVulType() const;

                    /**
                     * 设置漏洞类型。
<li> WEB : Web漏洞</li>
<li> SYSTEM :系统组件漏洞</li>
<li> BASELINE : 安全基线</li>
                     * @param _vulType 漏洞类型。
<li> WEB : Web漏洞</li>
<li> SYSTEM :系统组件漏洞</li>
<li> BASELINE : 安全基线</li>
                     * 
                     */
                    void SetVulType(const std::string& _vulType);

                    /**
                     * 判断参数 VulType 是否已赋值
                     * @return VulType 是否已赋值
                     * 
                     */
                    bool VulTypeHasBeenSet() const;

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
                     * 获取漏洞状态。
<li> UN_OPERATED : 待处理</li>
<li> SCANING : 扫描中</li>
<li> FIXED : 已修复</li>
                     * @return VulStatus 漏洞状态。
<li> UN_OPERATED : 待处理</li>
<li> SCANING : 扫描中</li>
<li> FIXED : 已修复</li>
                     * 
                     */
                    std::string GetVulStatus() const;

                    /**
                     * 设置漏洞状态。
<li> UN_OPERATED : 待处理</li>
<li> SCANING : 扫描中</li>
<li> FIXED : 已修复</li>
                     * @param _vulStatus 漏洞状态。
<li> UN_OPERATED : 待处理</li>
<li> SCANING : 扫描中</li>
<li> FIXED : 已修复</li>
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
                     * 获取最后扫描时间。
                     * @return LastScanTime 最后扫描时间。
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最后扫描时间。
                     * @param _lastScanTime 最后扫描时间。
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                private:

                    /**
                     * 主机内网IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 漏洞名称。
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 漏洞类型。
<li> WEB : Web漏洞</li>
<li> SYSTEM :系统组件漏洞</li>
<li> BASELINE : 安全基线</li>
                     */
                    std::string m_vulType;
                    bool m_vulTypeHasBeenSet;

                    /**
                     * 漏洞描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 漏洞状态。
<li> UN_OPERATED : 待处理</li>
<li> SCANING : 扫描中</li>
<li> FIXED : 已修复</li>
                     */
                    std::string m_vulStatus;
                    bool m_vulStatusHasBeenSet;

                    /**
                     * 最后扫描时间。
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTVUL_H_
