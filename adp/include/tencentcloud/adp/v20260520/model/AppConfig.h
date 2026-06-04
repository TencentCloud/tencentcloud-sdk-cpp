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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppExperienceConfig.h>
#include <tencentcloud/adp/v20260520/model/AppGreetingConfig.h>
#include <tencentcloud/adp/v20260520/model/AppMemoryConfig.h>
#include <tencentcloud/adp/v20260520/model/AppModeConfig.h>
#include <tencentcloud/adp/v20260520/model/AppModelConfig.h>
#include <tencentcloud/adp/v20260520/model/AppWebSearchConfig.h>
#include <tencentcloud/adp/v20260520/model/AppWorkflowConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 应用配置 - 用户可修改的所有配置
                */
                class AppConfig : public AbstractModel
                {
                public:
                    AppConfig();
                    ~AppConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取体验配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Experience 体验配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppExperienceConfig GetExperience() const;

                    /**
                     * 设置体验配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _experience 体验配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExperience(const AppExperienceConfig& _experience);

                    /**
                     * 判断参数 Experience 是否已赋值
                     * @return Experience 是否已赋值
                     * 
                     */
                    bool ExperienceHasBeenSet() const;

                    /**
                     * 获取欢迎语配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Greeting 欢迎语配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppGreetingConfig GetGreeting() const;

                    /**
                     * 设置欢迎语配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _greeting 欢迎语配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGreeting(const AppGreetingConfig& _greeting);

                    /**
                     * 判断参数 Greeting 是否已赋值
                     * @return Greeting 是否已赋值
                     * 
                     */
                    bool GreetingHasBeenSet() const;

                    /**
                     * 获取记忆配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 记忆配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppMemoryConfig GetMemory() const;

                    /**
                     * 设置记忆配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory 记忆配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemory(const AppMemoryConfig& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取模式相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mode 模式相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppModeConfig GetMode() const;

                    /**
                     * 设置模式相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mode 模式相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMode(const AppModeConfig& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Model 模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppModelConfig GetModel() const;

                    /**
                     * 设置模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _model 模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModel(const AppModelConfig& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取联网搜索配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebSearch 联网搜索配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppWebSearchConfig GetWebSearch() const;

                    /**
                     * 设置联网搜索配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webSearch 联网搜索配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebSearch(const AppWebSearchConfig& _webSearch);

                    /**
                     * 判断参数 WebSearch 是否已赋值
                     * @return WebSearch 是否已赋值
                     * 
                     */
                    bool WebSearchHasBeenSet() const;

                    /**
                     * 获取工作流配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Workflow 工作流配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppWorkflowConfig GetWorkflow() const;

                    /**
                     * 设置工作流配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflow 工作流配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflow(const AppWorkflowConfig& _workflow);

                    /**
                     * 判断参数 Workflow 是否已赋值
                     * @return Workflow 是否已赋值
                     * 
                     */
                    bool WorkflowHasBeenSet() const;

                private:

                    /**
                     * 体验配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppExperienceConfig m_experience;
                    bool m_experienceHasBeenSet;

                    /**
                     * 欢迎语配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppGreetingConfig m_greeting;
                    bool m_greetingHasBeenSet;

                    /**
                     * 记忆配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppMemoryConfig m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 模式相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppModeConfig m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppModelConfig m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 联网搜索配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppWebSearchConfig m_webSearch;
                    bool m_webSearchHasBeenSet;

                    /**
                     * 工作流配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppWorkflowConfig m_workflow;
                    bool m_workflowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPCONFIG_H_
