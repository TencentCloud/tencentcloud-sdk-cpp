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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATETIMERTASKREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATETIMERTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/TimerPushConfig.h>
#include <tencentcloud/adp/v20260520/model/TimerScheduleConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateTimerTask请求参数结构体
                */
                class CreateTimerTaskRequest : public AbstractModel
                {
                public:
                    CreateTimerTaskRequest();
                    ~CreateTimerTaskRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取输入上下文
                     * @return InputContextSnapshot 输入上下文
                     * 
                     */
                    std::string GetInputContextSnapshot() const;

                    /**
                     * 设置输入上下文
                     * @param _inputContextSnapshot 输入上下文
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
                     * 获取推送配置
                     * @return PushConfig 推送配置
                     * 
                     */
                    TimerPushConfig GetPushConfig() const;

                    /**
                     * 设置推送配置
                     * @param _pushConfig 推送配置
                     * 
                     */
                    void SetPushConfig(const TimerPushConfig& _pushConfig);

                    /**
                     * 判断参数 PushConfig 是否已赋值
                     * @return PushConfig 是否已赋值
                     * 
                     */
                    bool PushConfigHasBeenSet() const;

                    /**
                     * 获取定时配置
                     * @return Schedule 定时配置
                     * 
                     */
                    TimerScheduleConfig GetSchedule() const;

                    /**
                     * 设置定时配置
                     * @param _schedule 定时配置
                     * 
                     */
                    void SetSchedule(const TimerScheduleConfig& _schedule);

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取skill
                     * @return SkillSnapshot skill
                     * 
                     */
                    std::string GetSkillSnapshot() const;

                    /**
                     * 设置skill
                     * @param _skillSnapshot skill
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
                     * 获取空间
                     * @return SpaceId 空间
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置空间
                     * @param _spaceId 空间
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

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
                     * 获取工具
                     * @return ToolSnapshot 工具
                     * 
                     */
                    std::string GetToolSnapshot() const;

                    /**
                     * 设置工具
                     * @param _toolSnapshot 工具
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
                     * 获取工作空间
                     * @return WorkspaceId 工作空间
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置工作空间
                     * @param _workspaceId 工作空间
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取主用户
                     * @return LoginUin 主用户
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置主用户
                     * @param _loginUin 主用户
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取子用户
                     * @return LoginSubAccountUin 子用户
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置子用户
                     * @param _loginSubAccountUin 子用户
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

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
                     * 输入上下文
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
                     * 推送配置
                     */
                    TimerPushConfig m_pushConfig;
                    bool m_pushConfigHasBeenSet;

                    /**
                     * 定时配置
                     */
                    TimerScheduleConfig m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * skill
                     */
                    std::string m_skillSnapshot;
                    bool m_skillSnapshotHasBeenSet;

                    /**
                     * 空间
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 工具
                     */
                    std::string m_toolSnapshot;
                    bool m_toolSnapshotHasBeenSet;

                    /**
                     * 工作空间
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 主用户
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * 子用户
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATETIMERTASKREQUEST_H_
