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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SCHEDULERPOLICYCONFIG_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SCHEDULERPOLICYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/SchedulerPluginConfigs.h>
#include <tencentcloud/tke/v20180525/model/PluginSet.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * SchedulerPolicy配置信息
                */
                class SchedulerPolicyConfig : public AbstractModel
                {
                public:
                    SchedulerPolicyConfig();
                    ~SchedulerPolicyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调度器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerName 调度器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerName() const;

                    /**
                     * 设置调度器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerName 调度器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulerName(const std::string& _schedulerName);

                    /**
                     * 判断参数 SchedulerName 是否已赋值
                     * @return SchedulerName 是否已赋值
                     * 
                     */
                    bool SchedulerNameHasBeenSet() const;

                    /**
                     * 获取调度器plugin配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PluginConfigs 调度器plugin配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SchedulerPluginConfigs> GetPluginConfigs() const;

                    /**
                     * 设置调度器plugin配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pluginConfigs 调度器plugin配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPluginConfigs(const std::vector<SchedulerPluginConfigs>& _pluginConfigs);

                    /**
                     * 判断参数 PluginConfigs 是否已赋值
                     * @return PluginConfigs 是否已赋值
                     * 
                     */
                    bool PluginConfigsHasBeenSet() const;

                    /**
                     * 获取插件配置
                     * @return PluginSet 插件配置
                     * 
                     */
                    PluginSet GetPluginSet() const;

                    /**
                     * 设置插件配置
                     * @param _pluginSet 插件配置
                     * 
                     */
                    void SetPluginSet(const PluginSet& _pluginSet);

                    /**
                     * 判断参数 PluginSet 是否已赋值
                     * @return PluginSet 是否已赋值
                     * 
                     */
                    bool PluginSetHasBeenSet() const;

                private:

                    /**
                     * 调度器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerName;
                    bool m_schedulerNameHasBeenSet;

                    /**
                     * 调度器plugin配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SchedulerPluginConfigs> m_pluginConfigs;
                    bool m_pluginConfigsHasBeenSet;

                    /**
                     * 插件配置
                     */
                    PluginSet m_pluginSet;
                    bool m_pluginSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SCHEDULERPOLICYCONFIG_H_
