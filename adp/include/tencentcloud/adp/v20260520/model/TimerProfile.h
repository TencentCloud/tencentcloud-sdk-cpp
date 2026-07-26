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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TIMERPROFILE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TIMERPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * TimerProfile
                */
                class TimerProfile : public AbstractModel
                {
                public:
                    TimerProfile();
                    ~TimerProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 页面手动创建 |
| 2 | 自然语言对话创建 |
                     * @return CreateSource 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 页面手动创建 |
| 2 | 自然语言对话创建 |
                     * 
                     */
                    int64_t GetCreateSource() const;

                    /**
                     * 设置
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 页面手动创建 |
| 2 | 自然语言对话创建 |
                     * @param _createSource 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 页面手动创建 |
| 2 | 自然语言对话创建 |
                     * 
                     */
                    void SetCreateSource(const int64_t& _createSource);

                    /**
                     * 判断参数 CreateSource 是否已赋值
                     * @return CreateSource 是否已赋值
                     * 
                     */
                    bool CreateSourceHasBeenSet() const;

                    /**
                     * 获取输入上下文快照
                     * @return InputContextSnapshot 输入上下文快照
                     * 
                     */
                    std::string GetInputContextSnapshot() const;

                    /**
                     * 设置输入上下文快照
                     * @param _inputContextSnapshot 输入上下文快照
                     * 
                     */
                    void SetInputContextSnapshot(const std::string& _inputContextSnapshot);

                    /**
                     * 判断参数 InputContextSnapshot 是否已赋值
                     * @return InputContextSnapshot 是否已赋值
                     * 
                     */
                    bool InputContextSnapshotHasBeenSet() const;

                    /**
                     * 获取模型
                     * @return ModelId 模型
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型
                     * @param _modelId 模型
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取提示词
                     * @return Prompt 提示词
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置提示词
                     * @param _prompt 提示词
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取skill快照
                     * @return SkillSnapshot skill快照
                     * 
                     */
                    std::string GetSkillSnapshot() const;

                    /**
                     * 设置skill快照
                     * @param _skillSnapshot skill快照
                     * 
                     */
                    void SetSkillSnapshot(const std::string& _skillSnapshot);

                    /**
                     * 判断参数 SkillSnapshot 是否已赋值
                     * @return SkillSnapshot 是否已赋值
                     * 
                     */
                    bool SkillSnapshotHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取工具快照
                     * @return ToolSnapshot 工具快照
                     * 
                     */
                    std::string GetToolSnapshot() const;

                    /**
                     * 设置工具快照
                     * @param _toolSnapshot 工具快照
                     * 
                     */
                    void SetToolSnapshot(const std::string& _toolSnapshot);

                    /**
                     * 判断参数 ToolSnapshot 是否已赋值
                     * @return ToolSnapshot 是否已赋值
                     * 
                     */
                    bool ToolSnapshotHasBeenSet() const;

                    /**
                     * 获取工作目录
                     * @return WorkspaceId 工作目录
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置工作目录
                     * @param _workspaceId 工作目录
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                private:

                    /**
                     * 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 页面手动创建 |
| 2 | 自然语言对话创建 |
                     */
                    int64_t m_createSource;
                    bool m_createSourceHasBeenSet;

                    /**
                     * 输入上下文快照
                     */
                    std::string m_inputContextSnapshot;
                    bool m_inputContextSnapshotHasBeenSet;

                    /**
                     * 模型
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 提示词
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * skill快照
                     */
                    std::string m_skillSnapshot;
                    bool m_skillSnapshotHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 工具快照
                     */
                    std::string m_toolSnapshot;
                    bool m_toolSnapshotHasBeenSet;

                    /**
                     * 工作目录
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TIMERPROFILE_H_
