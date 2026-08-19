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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTING_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 防护设置对象
                */
                class ModifyProtectionSetting : public AbstractModel
                {
                public:
                    ModifyProtectionSetting();
                    ~ModifyProtectionSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产唯一ID
                     * @return QUUID 资产唯一ID
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置资产唯一ID
                     * @param _qUUID 资产唯一ID
                     * 
                     */
                    void SetQUUID(const std::string& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取总开关 0关闭 1开启
                     * @return Enable 总开关 0关闭 1开启
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置总开关 0关闭 1开启
                     * @param _enable 总开关 0关闭 1开启
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取漏洞防护开关 0: 关闭 1:开启
                     * @return VulDefEnable 漏洞防护开关 0: 关闭 1:开启
                     * 
                     */
                    uint64_t GetVulDefEnable() const;

                    /**
                     * 设置漏洞防护开关 0: 关闭 1:开启
                     * @param _vulDefEnable 漏洞防护开关 0: 关闭 1:开启
                     * 
                     */
                    void SetVulDefEnable(const uint64_t& _vulDefEnable);

                    /**
                     * 判断参数 VulDefEnable 是否已赋值
                     * @return VulDefEnable 是否已赋值
                     * 
                     */
                    bool VulDefEnableHasBeenSet() const;

                    /**
                     * 获取漏洞防护模式 0: 标准 1: 重保
                     * @return VulDefMode 漏洞防护模式 0: 标准 1: 重保
                     * 
                     */
                    uint64_t GetVulDefMode() const;

                    /**
                     * 设置漏洞防护模式 0: 标准 1: 重保
                     * @param _vulDefMode 漏洞防护模式 0: 标准 1: 重保
                     * 
                     */
                    void SetVulDefMode(const uint64_t& _vulDefMode);

                    /**
                     * 判断参数 VulDefMode 是否已赋值
                     * @return VulDefMode 是否已赋值
                     * 
                     */
                    bool VulDefModeHasBeenSet() const;

                    /**
                     * 获取漏洞防护动作 0: 仅检测 1: 检测+防御
                     * @return VulDefAction 漏洞防护动作 0: 仅检测 1: 检测+防御
                     * 
                     */
                    uint64_t GetVulDefAction() const;

                    /**
                     * 设置漏洞防护动作 0: 仅检测 1: 检测+防御
                     * @param _vulDefAction 漏洞防护动作 0: 仅检测 1: 检测+防御
                     * 
                     */
                    void SetVulDefAction(const uint64_t& _vulDefAction);

                    /**
                     * 判断参数 VulDefAction 是否已赋值
                     * @return VulDefAction 是否已赋值
                     * 
                     */
                    bool VulDefActionHasBeenSet() const;

                    /**
                     * 获取内存马防御开关 0: 关闭 1:开启
                     * @return MemShellDefEnable 内存马防御开关 0: 关闭 1:开启
                     * 
                     */
                    uint64_t GetMemShellDefEnable() const;

                    /**
                     * 设置内存马防御开关 0: 关闭 1:开启
                     * @param _memShellDefEnable 内存马防御开关 0: 关闭 1:开启
                     * 
                     */
                    void SetMemShellDefEnable(const uint64_t& _memShellDefEnable);

                    /**
                     * 判断参数 MemShellDefEnable 是否已赋值
                     * @return MemShellDefEnable 是否已赋值
                     * 
                     */
                    bool MemShellDefEnableHasBeenSet() const;

                    /**
                     * 获取性能限制开关 0: 关闭 1:开启
                     * @return PerformanceLimit 性能限制开关 0: 关闭 1:开启
                     * 
                     */
                    uint64_t GetPerformanceLimit() const;

                    /**
                     * 设置性能限制开关 0: 关闭 1:开启
                     * @param _performanceLimit 性能限制开关 0: 关闭 1:开启
                     * 
                     */
                    void SetPerformanceLimit(const uint64_t& _performanceLimit);

                    /**
                     * 判断参数 PerformanceLimit 是否已赋值
                     * @return PerformanceLimit 是否已赋值
                     * 
                     */
                    bool PerformanceLimitHasBeenSet() const;

                    /**
                     * 获取CPU阈值 取值1-99
                     * @return PerformanceLimitCpu CPU阈值 取值1-99
                     * 
                     */
                    uint64_t GetPerformanceLimitCpu() const;

                    /**
                     * 设置CPU阈值 取值1-99
                     * @param _performanceLimitCpu CPU阈值 取值1-99
                     * 
                     */
                    void SetPerformanceLimitCpu(const uint64_t& _performanceLimitCpu);

                    /**
                     * 判断参数 PerformanceLimitCpu 是否已赋值
                     * @return PerformanceLimitCpu 是否已赋值
                     * 
                     */
                    bool PerformanceLimitCpuHasBeenSet() const;

                    /**
                     * 获取内存阈值 取值1-99
                     * @return PerformanceLimitMem 内存阈值 取值1-99
                     * 
                     */
                    uint64_t GetPerformanceLimitMem() const;

                    /**
                     * 设置内存阈值 取值1-99
                     * @param _performanceLimitMem 内存阈值 取值1-99
                     * 
                     */
                    void SetPerformanceLimitMem(const uint64_t& _performanceLimitMem);

                    /**
                     * 判断参数 PerformanceLimitMem 是否已赋值
                     * @return PerformanceLimitMem 是否已赋值
                     * 
                     */
                    bool PerformanceLimitMemHasBeenSet() const;

                    /**
                     * 获取内存剩余阈值
                     * @return PerformanceLimitMemAmount 内存剩余阈值
                     * 
                     */
                    uint64_t GetPerformanceLimitMemAmount() const;

                    /**
                     * 设置内存剩余阈值
                     * @param _performanceLimitMemAmount 内存剩余阈值
                     * 
                     */
                    void SetPerformanceLimitMemAmount(const uint64_t& _performanceLimitMemAmount);

                    /**
                     * 判断参数 PerformanceLimitMemAmount 是否已赋值
                     * @return PerformanceLimitMemAmount 是否已赋值
                     * 
                     */
                    bool PerformanceLimitMemAmountHasBeenSet() const;

                    /**
                     * 获取更多防护, 0: 不注入会重启的进程 1: 注入会重启的进程
                     * @return SafeInject 更多防护, 0: 不注入会重启的进程 1: 注入会重启的进程
                     * 
                     */
                    uint64_t GetSafeInject() const;

                    /**
                     * 设置更多防护, 0: 不注入会重启的进程 1: 注入会重启的进程
                     * @param _safeInject 更多防护, 0: 不注入会重启的进程 1: 注入会重启的进程
                     * 
                     */
                    void SetSafeInject(const uint64_t& _safeInject);

                    /**
                     * 判断参数 SafeInject 是否已赋值
                     * @return SafeInject 是否已赋值
                     * 
                     */
                    bool SafeInjectHasBeenSet() const;

                private:

                    /**
                     * 资产唯一ID
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * 总开关 0关闭 1开启
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 漏洞防护开关 0: 关闭 1:开启
                     */
                    uint64_t m_vulDefEnable;
                    bool m_vulDefEnableHasBeenSet;

                    /**
                     * 漏洞防护模式 0: 标准 1: 重保
                     */
                    uint64_t m_vulDefMode;
                    bool m_vulDefModeHasBeenSet;

                    /**
                     * 漏洞防护动作 0: 仅检测 1: 检测+防御
                     */
                    uint64_t m_vulDefAction;
                    bool m_vulDefActionHasBeenSet;

                    /**
                     * 内存马防御开关 0: 关闭 1:开启
                     */
                    uint64_t m_memShellDefEnable;
                    bool m_memShellDefEnableHasBeenSet;

                    /**
                     * 性能限制开关 0: 关闭 1:开启
                     */
                    uint64_t m_performanceLimit;
                    bool m_performanceLimitHasBeenSet;

                    /**
                     * CPU阈值 取值1-99
                     */
                    uint64_t m_performanceLimitCpu;
                    bool m_performanceLimitCpuHasBeenSet;

                    /**
                     * 内存阈值 取值1-99
                     */
                    uint64_t m_performanceLimitMem;
                    bool m_performanceLimitMemHasBeenSet;

                    /**
                     * 内存剩余阈值
                     */
                    uint64_t m_performanceLimitMemAmount;
                    bool m_performanceLimitMemAmountHasBeenSet;

                    /**
                     * 更多防护, 0: 不注入会重启的进程 1: 注入会重启的进程
                     */
                    uint64_t m_safeInject;
                    bool m_safeInjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTING_H_
