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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSCHEDULEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WorkflowTrigger.h>
#include <tencentcloud/mps/v20190612/model/Activity.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifySchedule请求参数结构体
                */
                class ModifyScheduleRequest : public AbstractModel
                {
                public:
                    ModifyScheduleRequest();
                    ~ModifyScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取编排唯一标识。
                     * @return ScheduleId 编排唯一标识。
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置编排唯一标识。
                     * @param _scheduleId 编排唯一标识。
                     * 
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取编排名称。
                     * @return ScheduleName 编排名称。
                     * 
                     */
                    std::string GetScheduleName() const;

                    /**
                     * 设置编排名称。
                     * @param _scheduleName 编排名称。
                     * 
                     */
                    void SetScheduleName(const std::string& _scheduleName);

                    /**
                     * 判断参数 ScheduleName 是否已赋值
                     * @return ScheduleName 是否已赋值
                     * 
                     */
                    bool ScheduleNameHasBeenSet() const;

                    /**
                     * 获取编排绑定的触发规则。
                     * @return Trigger 编排绑定的触发规则。
                     * 
                     */
                    WorkflowTrigger GetTrigger() const;

                    /**
                     * 设置编排绑定的触发规则。
                     * @param _trigger 编排绑定的触发规则。
                     * 
                     */
                    void SetTrigger(const WorkflowTrigger& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取编排任务列表。
注意：内部不允许部分更新，如果需要更新需全量提交编排任务列表。
                     * @return Activities 编排任务列表。
注意：内部不允许部分更新，如果需要更新需全量提交编排任务列表。
                     * 
                     */
                    std::vector<Activity> GetActivities() const;

                    /**
                     * 设置编排任务列表。
注意：内部不允许部分更新，如果需要更新需全量提交编排任务列表。
                     * @param _activities 编排任务列表。
注意：内部不允许部分更新，如果需要更新需全量提交编排任务列表。
                     * 
                     */
                    void SetActivities(const std::vector<Activity>& _activities);

                    /**
                     * 判断参数 Activities 是否已赋值
                     * @return Activities 是否已赋值
                     * 
                     */
                    bool ActivitiesHasBeenSet() const;

                    /**
                     * 获取媒体处理的文件输出存储位置。
                     * @return OutputStorage 媒体处理的文件输出存储位置。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置媒体处理的文件输出存储位置。
                     * @param _outputStorage 媒体处理的文件输出存储位置。
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾。
注意：如果设置为空，则表示取消老配置的OutputDir值。
                     * @return OutputDir 媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾。
注意：如果设置为空，则表示取消老配置的OutputDir值。
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾。
注意：如果设置为空，则表示取消老配置的OutputDir值。
                     * @param _outputDir 媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾。
注意：如果设置为空，则表示取消老配置的OutputDir值。
                     * 
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     * 
                     */
                    bool OutputDirHasBeenSet() const;

                    /**
                     * 获取任务的事件通知配置。
                     * @return TaskNotifyConfig 任务的事件通知配置。
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置任务的事件通知配置。
                     * @param _taskNotifyConfig 任务的事件通知配置。
                     * 
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                    /**
                     * 获取资源ID，需要保证对应资源是开启状态。
                     * @return ResourceId 资源ID，需要保证对应资源是开启状态。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID，需要保证对应资源是开启状态。
                     * @param _resourceId 资源ID，需要保证对应资源是开启状态。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 编排唯一标识。
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * 编排名称。
                     */
                    std::string m_scheduleName;
                    bool m_scheduleNameHasBeenSet;

                    /**
                     * 编排绑定的触发规则。
                     */
                    WorkflowTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * 编排任务列表。
注意：内部不允许部分更新，如果需要更新需全量提交编排任务列表。
                     */
                    std::vector<Activity> m_activities;
                    bool m_activitiesHasBeenSet;

                    /**
                     * 媒体处理的文件输出存储位置。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾。
注意：如果设置为空，则表示取消老配置的OutputDir值。
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * 任务的事件通知配置。
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * 资源ID，需要保证对应资源是开启状态。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSCHEDULEREQUEST_H_
