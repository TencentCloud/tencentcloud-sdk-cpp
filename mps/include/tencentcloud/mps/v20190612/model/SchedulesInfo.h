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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULESINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 编排详情。
                */
                class SchedulesInfo : public AbstractModel
                {
                public:
                    SchedulesInfo();
                    ~SchedulesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleName 编排名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleName() const;

                    /**
                     * 设置编排名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleName 编排名称。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取编排类型，可选值：
 <li>Preset：系统预置编排；</li>
<li>Custom：用户自定义编排。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 编排类型，可选值：
 <li>Preset：系统预置编排；</li>
<li>Custom：用户自定义编排。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置编排类型，可选值：
 <li>Preset：系统预置编排；</li>
<li>Custom：用户自定义编排。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 编排类型，可选值：
 <li>Preset：系统预置编排；</li>
<li>Custom：用户自定义编排。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取编排状态，取值范围：
Enabled：已启用，
Disabled：已禁用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 编排状态，取值范围：
Enabled：已启用，
Disabled：已禁用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置编排状态，取值范围：
Enabled：已启用，
Disabled：已禁用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 编排状态，取值范围：
Enabled：已启用，
Disabled：已禁用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取编排绑定的触发规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Trigger 编排绑定的触发规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkflowTrigger GetTrigger() const;

                    /**
                     * 设置编排绑定的触发规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trigger 编排绑定的触发规则。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Activities 编排任务列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Activity> GetActivities() const;

                    /**
                     * 设置编排任务列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activities 编排任务列表。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage 媒体处理的文件输出存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置媒体处理的文件输出存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputStorage 媒体处理的文件输出存储位置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取媒体处理生成的文件输出的目标目录。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputDir 媒体处理生成的文件输出的目标目录。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置媒体处理生成的文件输出的目标目录。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputDir 媒体处理生成的文件输出的目标目录。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskNotifyConfig 任务的事件通知配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置任务的事件通知配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskNotifyConfig 任务的事件通知配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后编辑时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 最后编辑时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后编辑时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 最后编辑时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取资源ID，对于没有关联资源ID的，用账号主资源ID填充。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源ID，对于没有关联资源ID的，用账号主资源ID填充。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID，对于没有关联资源ID的，用账号主资源ID填充。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源ID，对于没有关联资源ID的，用账号主资源ID填充。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleName;
                    bool m_scheduleNameHasBeenSet;

                    /**
                     * 编排类型，可选值：
 <li>Preset：系统预置编排；</li>
<li>Custom：用户自定义编排。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 编排状态，取值范围：
Enabled：已启用，
Disabled：已禁用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 编排绑定的触发规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkflowTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * 编排任务列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Activity> m_activities;
                    bool m_activitiesHasBeenSet;

                    /**
                     * 媒体处理的文件输出存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 媒体处理生成的文件输出的目标目录。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * 任务的事件通知配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * 创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后编辑时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 资源ID，对于没有关联资源ID的，用账号主资源ID填充。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULESINFO_H_
