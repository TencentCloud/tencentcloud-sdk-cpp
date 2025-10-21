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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ManagedRuleAutoUpdate.h>
#include <tencentcloud/teo/v20220901/model/ManagedRuleGroup.h>
#include <tencentcloud/teo/v20220901/model/FrequentScanningProtection.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web安全的托管规则
                */
                class ManagedRules : public AbstractModel
                {
                public:
                    ManagedRules();
                    ~ManagedRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取托管规则是否开启。取值有：<li>on：开启，所有托管规则按配置生效；</li><li>off：关闭，所有托管规则不生效。</li>
                     * @return Enabled 托管规则是否开启。取值有：<li>on：开启，所有托管规则按配置生效；</li><li>off：关闭，所有托管规则不生效。</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置托管规则是否开启。取值有：<li>on：开启，所有托管规则按配置生效；</li><li>off：关闭，所有托管规则不生效。</li>
                     * @param _enabled 托管规则是否开启。取值有：<li>on：开启，所有托管规则按配置生效；</li><li>off：关闭，所有托管规则不生效。</li>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取评估模式是否开启，仅在 Enabled 参数为 on 时有效。取值有：<li>on：开启，表示所有托管规则以观察模式生效；</li><li>off：关闭，表示所有托管规则以实际配置生效。</li>
                     * @return DetectionOnly 评估模式是否开启，仅在 Enabled 参数为 on 时有效。取值有：<li>on：开启，表示所有托管规则以观察模式生效；</li><li>off：关闭，表示所有托管规则以实际配置生效。</li>
                     * 
                     */
                    std::string GetDetectionOnly() const;

                    /**
                     * 设置评估模式是否开启，仅在 Enabled 参数为 on 时有效。取值有：<li>on：开启，表示所有托管规则以观察模式生效；</li><li>off：关闭，表示所有托管规则以实际配置生效。</li>
                     * @param _detectionOnly 评估模式是否开启，仅在 Enabled 参数为 on 时有效。取值有：<li>on：开启，表示所有托管规则以观察模式生效；</li><li>off：关闭，表示所有托管规则以实际配置生效。</li>
                     * 
                     */
                    void SetDetectionOnly(const std::string& _detectionOnly);

                    /**
                     * 判断参数 DetectionOnly 是否已赋值
                     * @return DetectionOnly 是否已赋值
                     * 
                     */
                    bool DetectionOnlyHasBeenSet() const;

                    /**
                     * 获取托管规则语义分析选项是否开启，仅在 Enabled 参数为 on 时有效。取值有：<li>on：开启，对请求进行语义分析后进行处理；</li><li>off：关闭，对请求不进行语义分析，直接进行处理。</li> <br/>默认为 off。
                     * @return SemanticAnalysis 托管规则语义分析选项是否开启，仅在 Enabled 参数为 on 时有效。取值有：<li>on：开启，对请求进行语义分析后进行处理；</li><li>off：关闭，对请求不进行语义分析，直接进行处理。</li> <br/>默认为 off。
                     * 
                     */
                    std::string GetSemanticAnalysis() const;

                    /**
                     * 设置托管规则语义分析选项是否开启，仅在 Enabled 参数为 on 时有效。取值有：<li>on：开启，对请求进行语义分析后进行处理；</li><li>off：关闭，对请求不进行语义分析，直接进行处理。</li> <br/>默认为 off。
                     * @param _semanticAnalysis 托管规则语义分析选项是否开启，仅在 Enabled 参数为 on 时有效。取值有：<li>on：开启，对请求进行语义分析后进行处理；</li><li>off：关闭，对请求不进行语义分析，直接进行处理。</li> <br/>默认为 off。
                     * 
                     */
                    void SetSemanticAnalysis(const std::string& _semanticAnalysis);

                    /**
                     * 判断参数 SemanticAnalysis 是否已赋值
                     * @return SemanticAnalysis 是否已赋值
                     * 
                     */
                    bool SemanticAnalysisHasBeenSet() const;

                    /**
                     * 获取托管规则自动更新选项。
                     * @return AutoUpdate 托管规则自动更新选项。
                     * 
                     */
                    ManagedRuleAutoUpdate GetAutoUpdate() const;

                    /**
                     * 设置托管规则自动更新选项。
                     * @param _autoUpdate 托管规则自动更新选项。
                     * 
                     */
                    void SetAutoUpdate(const ManagedRuleAutoUpdate& _autoUpdate);

                    /**
                     * 判断参数 AutoUpdate 是否已赋值
                     * @return AutoUpdate 是否已赋值
                     * 
                     */
                    bool AutoUpdateHasBeenSet() const;

                    /**
                     * 获取托管规则组的配置。如果此结构传空数组或 GroupId 未包含在列表内将按照默认方式处理。
                     * @return ManagedRuleGroups 托管规则组的配置。如果此结构传空数组或 GroupId 未包含在列表内将按照默认方式处理。
                     * 
                     */
                    std::vector<ManagedRuleGroup> GetManagedRuleGroups() const;

                    /**
                     * 设置托管规则组的配置。如果此结构传空数组或 GroupId 未包含在列表内将按照默认方式处理。
                     * @param _managedRuleGroups 托管规则组的配置。如果此结构传空数组或 GroupId 未包含在列表内将按照默认方式处理。
                     * 
                     */
                    void SetManagedRuleGroups(const std::vector<ManagedRuleGroup>& _managedRuleGroups);

                    /**
                     * 判断参数 ManagedRuleGroups 是否已赋值
                     * @return ManagedRuleGroups 是否已赋值
                     * 
                     */
                    bool ManagedRuleGroupsHasBeenSet() const;

                    /**
                     * 获取高频扫描防护配置选项，当某一访客的请求频繁命中「配置为拦截」的托管规则时，在一段时间内封禁该访客所有请求。
                     * @return FrequentScanningProtection 高频扫描防护配置选项，当某一访客的请求频繁命中「配置为拦截」的托管规则时，在一段时间内封禁该访客所有请求。
                     * 
                     */
                    FrequentScanningProtection GetFrequentScanningProtection() const;

                    /**
                     * 设置高频扫描防护配置选项，当某一访客的请求频繁命中「配置为拦截」的托管规则时，在一段时间内封禁该访客所有请求。
                     * @param _frequentScanningProtection 高频扫描防护配置选项，当某一访客的请求频繁命中「配置为拦截」的托管规则时，在一段时间内封禁该访客所有请求。
                     * 
                     */
                    void SetFrequentScanningProtection(const FrequentScanningProtection& _frequentScanningProtection);

                    /**
                     * 判断参数 FrequentScanningProtection 是否已赋值
                     * @return FrequentScanningProtection 是否已赋值
                     * 
                     */
                    bool FrequentScanningProtectionHasBeenSet() const;

                private:

                    /**
                     * 托管规则是否开启。取值有：<li>on：开启，所有托管规则按配置生效；</li><li>off：关闭，所有托管规则不生效。</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 评估模式是否开启，仅在 Enabled 参数为 on 时有效。取值有：<li>on：开启，表示所有托管规则以观察模式生效；</li><li>off：关闭，表示所有托管规则以实际配置生效。</li>
                     */
                    std::string m_detectionOnly;
                    bool m_detectionOnlyHasBeenSet;

                    /**
                     * 托管规则语义分析选项是否开启，仅在 Enabled 参数为 on 时有效。取值有：<li>on：开启，对请求进行语义分析后进行处理；</li><li>off：关闭，对请求不进行语义分析，直接进行处理。</li> <br/>默认为 off。
                     */
                    std::string m_semanticAnalysis;
                    bool m_semanticAnalysisHasBeenSet;

                    /**
                     * 托管规则自动更新选项。
                     */
                    ManagedRuleAutoUpdate m_autoUpdate;
                    bool m_autoUpdateHasBeenSet;

                    /**
                     * 托管规则组的配置。如果此结构传空数组或 GroupId 未包含在列表内将按照默认方式处理。
                     */
                    std::vector<ManagedRuleGroup> m_managedRuleGroups;
                    bool m_managedRuleGroupsHasBeenSet;

                    /**
                     * 高频扫描防护配置选项，当某一访客的请求频繁命中「配置为拦截」的托管规则时，在一段时间内封禁该访客所有请求。
                     */
                    FrequentScanningProtection m_frequentScanningProtection;
                    bool m_frequentScanningProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULES_H_
