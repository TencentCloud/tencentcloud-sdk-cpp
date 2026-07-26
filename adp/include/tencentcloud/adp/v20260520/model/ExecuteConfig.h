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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_EXECUTECONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_EXECUTECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerPromptExecuteConfig.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerWorkflowExecuteConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ExecuteConfig
                */
                class ExecuteConfig : public AbstractModel
                {
                public:
                    ExecuteConfig();
                    ~ExecuteConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Prompt配置</p>
                     * @return PromptConfig <p>Prompt配置</p>
                     * 
                     */
                    AppTriggerPromptExecuteConfig GetPromptConfig() const;

                    /**
                     * 设置<p>Prompt配置</p>
                     * @param _promptConfig <p>Prompt配置</p>
                     * 
                     */
                    void SetPromptConfig(const AppTriggerPromptExecuteConfig& _promptConfig);

                    /**
                     * 判断参数 PromptConfig 是否已赋值
                     * @return PromptConfig 是否已赋值
                     * 
                     */
                    bool PromptConfigHasBeenSet() const;

                    /**
                     * 获取<p>工作流配置</p>
                     * @return WorkflowConfig <p>工作流配置</p>
                     * 
                     */
                    AppTriggerWorkflowExecuteConfig GetWorkflowConfig() const;

                    /**
                     * 设置<p>工作流配置</p>
                     * @param _workflowConfig <p>工作流配置</p>
                     * 
                     */
                    void SetWorkflowConfig(const AppTriggerWorkflowExecuteConfig& _workflowConfig);

                    /**
                     * 判断参数 WorkflowConfig 是否已赋值
                     * @return WorkflowConfig 是否已赋值
                     * 
                     */
                    bool WorkflowConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Prompt配置</p>
                     */
                    AppTriggerPromptExecuteConfig m_promptConfig;
                    bool m_promptConfigHasBeenSet;

                    /**
                     * <p>工作流配置</p>
                     */
                    AppTriggerWorkflowExecuteConfig m_workflowConfig;
                    bool m_workflowConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_EXECUTECONFIG_H_
