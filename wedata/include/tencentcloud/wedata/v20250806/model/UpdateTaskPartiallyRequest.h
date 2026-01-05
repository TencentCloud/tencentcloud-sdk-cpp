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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKPARTIALLYREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKPARTIALLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/UpdateTaskPart.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateTaskPartially请求参数结构体
                */
                class UpdateTaskPartiallyRequest : public AbstractModel
                {
                public:
                    UpdateTaskPartiallyRequest();
                    ~UpdateTaskPartiallyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务基本属性
                     * @return NewSetting 任务基本属性
                     * 
                     */
                    UpdateTaskPart GetNewSetting() const;

                    /**
                     * 设置任务基本属性
                     * @param _newSetting 任务基本属性
                     * 
                     */
                    void SetNewSetting(const UpdateTaskPart& _newSetting);

                    /**
                     * 判断参数 NewSetting 是否已赋值
                     * @return NewSetting 是否已赋值
                     * 
                     */
                    bool NewSettingHasBeenSet() const;

                    /**
                     * 获取删除字段内容，采用属性路径的形式标识，删除的值以":"分割，多个值以","分割 // 删除调度参数中 ParamKey 为 aa,bb 的属性 "TaskConfiguration/TaskSchedulingParameterList:aa,bb" // 删除上游依赖中 TaskId 为 2509162129381111,2509162129381112 的上游依赖 "TaskSchedulerConfiguration/UpstreamDependencyConfigList:2509162129381111,2509162129381112" // 删除下游循环依赖中 TaskId 为 2509162129382222,2509162129382223 的下游依赖 "TaskSchedulerConfiguration/DownStreamDependencyConfigList:2509162129382222,2509162129382223" // 删除事件中 EventName 为 event_250916_213234,event_250916_213235 的事件 "TaskSchedulerConfiguration/EventListenerList:event_250916_213234,event_250916_213235" // 删除传递参数输出中 ParamKey 为 pp_out,pp_1 的参数 "TaskSchedulerConfiguration/ParamTaskOutList:pp_out,pp_1" // 删除传递参数应用中 ParamKey 为 pp_in,pp_1 的参数 "TaskSchedulerConfiguration/ParamTaskInList:pp_in,pp_1" // 删除产品登记中 TablePhysicalId 为6578laxif4d1的产出登记 "TaskSchedulerConfiguration/TaskOutputRegistryList:6578laxif4d1"
                     * @return FieldToRemoveList 删除字段内容，采用属性路径的形式标识，删除的值以":"分割，多个值以","分割 // 删除调度参数中 ParamKey 为 aa,bb 的属性 "TaskConfiguration/TaskSchedulingParameterList:aa,bb" // 删除上游依赖中 TaskId 为 2509162129381111,2509162129381112 的上游依赖 "TaskSchedulerConfiguration/UpstreamDependencyConfigList:2509162129381111,2509162129381112" // 删除下游循环依赖中 TaskId 为 2509162129382222,2509162129382223 的下游依赖 "TaskSchedulerConfiguration/DownStreamDependencyConfigList:2509162129382222,2509162129382223" // 删除事件中 EventName 为 event_250916_213234,event_250916_213235 的事件 "TaskSchedulerConfiguration/EventListenerList:event_250916_213234,event_250916_213235" // 删除传递参数输出中 ParamKey 为 pp_out,pp_1 的参数 "TaskSchedulerConfiguration/ParamTaskOutList:pp_out,pp_1" // 删除传递参数应用中 ParamKey 为 pp_in,pp_1 的参数 "TaskSchedulerConfiguration/ParamTaskInList:pp_in,pp_1" // 删除产品登记中 TablePhysicalId 为6578laxif4d1的产出登记 "TaskSchedulerConfiguration/TaskOutputRegistryList:6578laxif4d1"
                     * 
                     */
                    std::vector<std::string> GetFieldToRemoveList() const;

                    /**
                     * 设置删除字段内容，采用属性路径的形式标识，删除的值以":"分割，多个值以","分割 // 删除调度参数中 ParamKey 为 aa,bb 的属性 "TaskConfiguration/TaskSchedulingParameterList:aa,bb" // 删除上游依赖中 TaskId 为 2509162129381111,2509162129381112 的上游依赖 "TaskSchedulerConfiguration/UpstreamDependencyConfigList:2509162129381111,2509162129381112" // 删除下游循环依赖中 TaskId 为 2509162129382222,2509162129382223 的下游依赖 "TaskSchedulerConfiguration/DownStreamDependencyConfigList:2509162129382222,2509162129382223" // 删除事件中 EventName 为 event_250916_213234,event_250916_213235 的事件 "TaskSchedulerConfiguration/EventListenerList:event_250916_213234,event_250916_213235" // 删除传递参数输出中 ParamKey 为 pp_out,pp_1 的参数 "TaskSchedulerConfiguration/ParamTaskOutList:pp_out,pp_1" // 删除传递参数应用中 ParamKey 为 pp_in,pp_1 的参数 "TaskSchedulerConfiguration/ParamTaskInList:pp_in,pp_1" // 删除产品登记中 TablePhysicalId 为6578laxif4d1的产出登记 "TaskSchedulerConfiguration/TaskOutputRegistryList:6578laxif4d1"
                     * @param _fieldToRemoveList 删除字段内容，采用属性路径的形式标识，删除的值以":"分割，多个值以","分割 // 删除调度参数中 ParamKey 为 aa,bb 的属性 "TaskConfiguration/TaskSchedulingParameterList:aa,bb" // 删除上游依赖中 TaskId 为 2509162129381111,2509162129381112 的上游依赖 "TaskSchedulerConfiguration/UpstreamDependencyConfigList:2509162129381111,2509162129381112" // 删除下游循环依赖中 TaskId 为 2509162129382222,2509162129382223 的下游依赖 "TaskSchedulerConfiguration/DownStreamDependencyConfigList:2509162129382222,2509162129382223" // 删除事件中 EventName 为 event_250916_213234,event_250916_213235 的事件 "TaskSchedulerConfiguration/EventListenerList:event_250916_213234,event_250916_213235" // 删除传递参数输出中 ParamKey 为 pp_out,pp_1 的参数 "TaskSchedulerConfiguration/ParamTaskOutList:pp_out,pp_1" // 删除传递参数应用中 ParamKey 为 pp_in,pp_1 的参数 "TaskSchedulerConfiguration/ParamTaskInList:pp_in,pp_1" // 删除产品登记中 TablePhysicalId 为6578laxif4d1的产出登记 "TaskSchedulerConfiguration/TaskOutputRegistryList:6578laxif4d1"
                     * 
                     */
                    void SetFieldToRemoveList(const std::vector<std::string>& _fieldToRemoveList);

                    /**
                     * 判断参数 FieldToRemoveList 是否已赋值
                     * @return FieldToRemoveList 是否已赋值
                     * 
                     */
                    bool FieldToRemoveListHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务基本属性
                     */
                    UpdateTaskPart m_newSetting;
                    bool m_newSettingHasBeenSet;

                    /**
                     * 删除字段内容，采用属性路径的形式标识，删除的值以":"分割，多个值以","分割 // 删除调度参数中 ParamKey 为 aa,bb 的属性 "TaskConfiguration/TaskSchedulingParameterList:aa,bb" // 删除上游依赖中 TaskId 为 2509162129381111,2509162129381112 的上游依赖 "TaskSchedulerConfiguration/UpstreamDependencyConfigList:2509162129381111,2509162129381112" // 删除下游循环依赖中 TaskId 为 2509162129382222,2509162129382223 的下游依赖 "TaskSchedulerConfiguration/DownStreamDependencyConfigList:2509162129382222,2509162129382223" // 删除事件中 EventName 为 event_250916_213234,event_250916_213235 的事件 "TaskSchedulerConfiguration/EventListenerList:event_250916_213234,event_250916_213235" // 删除传递参数输出中 ParamKey 为 pp_out,pp_1 的参数 "TaskSchedulerConfiguration/ParamTaskOutList:pp_out,pp_1" // 删除传递参数应用中 ParamKey 为 pp_in,pp_1 的参数 "TaskSchedulerConfiguration/ParamTaskInList:pp_in,pp_1" // 删除产品登记中 TablePhysicalId 为6578laxif4d1的产出登记 "TaskSchedulerConfiguration/TaskOutputRegistryList:6578laxif4d1"
                     */
                    std::vector<std::string> m_fieldToRemoveList;
                    bool m_fieldToRemoveListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKPARTIALLYREQUEST_H_
