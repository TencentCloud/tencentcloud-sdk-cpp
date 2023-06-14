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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_AGENTVUL_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_AGENTVUL_H_

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
                * 主机漏洞信息
                */
                class AgentVul : public AbstractModel
                {
                public:
                    AgentVul();
                    ~AgentVul() = default;
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
                     * 获取漏洞危害等级。
<li>HIGH：高危</li>
<li>MIDDLE：中危</li>
<li>LOW：低危</li>
<li>NOTICE：提示</li>
                     * @return VulLevel 漏洞危害等级。
<li>HIGH：高危</li>
<li>MIDDLE：中危</li>
<li>LOW：低危</li>
<li>NOTICE：提示</li>
                     * 
                     */
                    std::string GetVulLevel() const;

                    /**
                     * 设置漏洞危害等级。
<li>HIGH：高危</li>
<li>MIDDLE：中危</li>
<li>LOW：低危</li>
<li>NOTICE：提示</li>
                     * @param _vulLevel 漏洞危害等级。
<li>HIGH：高危</li>
<li>MIDDLE：中危</li>
<li>LOW：低危</li>
<li>NOTICE：提示</li>
                     * 
                     */
                    void SetVulLevel(const std::string& _vulLevel);

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     * 
                     */
                    bool VulLevelHasBeenSet() const;

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
                     * 获取漏洞状态。
<li>UN_OPERATED : 待处理</li>
<li>FIXED : 已修复</li>
                     * @return VulStatus 漏洞状态。
<li>UN_OPERATED : 待处理</li>
<li>FIXED : 已修复</li>
                     * 
                     */
                    std::string GetVulStatus() const;

                    /**
                     * 设置漏洞状态。
<li>UN_OPERATED : 待处理</li>
<li>FIXED : 已修复</li>
                     * @param _vulStatus 漏洞状态。
<li>UN_OPERATED : 待处理</li>
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
                     * 漏洞名称。
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 漏洞危害等级。
<li>HIGH：高危</li>
<li>MIDDLE：中危</li>
<li>LOW：低危</li>
<li>NOTICE：提示</li>
                     */
                    std::string m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * 最后扫描时间。
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

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
                     * 漏洞状态。
<li>UN_OPERATED : 待处理</li>
<li>FIXED : 已修复</li>
                     */
                    std::string m_vulStatus;
                    bool m_vulStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_AGENTVUL_H_
