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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETRIGGERWORKFLOWPARTIALLYREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETRIGGERWORKFLOWPARTIALLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/UpdateTriggerWorkflowPartially.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateTriggerWorkflowPartially请求参数结构体
                */
                class UpdateTriggerWorkflowPartiallyRequest : public AbstractModel
                {
                public:
                    UpdateTriggerWorkflowPartiallyRequest();
                    ~UpdateTriggerWorkflowPartiallyRequest() = default;
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
                     * 获取工作流ID
                     * @return WorkflowId 工作流ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
                     * @param _workflowId 工作流ID
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取责任人ID
                     * @return NewSetting 责任人ID
                     * 
                     */
                    UpdateTriggerWorkflowPartially GetNewSetting() const;

                    /**
                     * 设置责任人ID
                     * @param _newSetting 责任人ID
                     * 
                     */
                    void SetNewSetting(const UpdateTriggerWorkflowPartially& _newSetting);

                    /**
                     * 判断参数 NewSetting 是否已赋值
                     * @return NewSetting 是否已赋值
                     * 
                     */
                    bool NewSettingHasBeenSet() const;

                    /**
                     * 获取删除字段内容，采用属性路径的形式标识，删除的值以":"分割，多个值以","分割
 // 删除调度参数中 ParamKey 为 aa,bb 的属性 "WorkflowParams:aa,bb"
 // 删除配置的 TriggerId 为 da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0 的调度配置"TriggerWorkflowSchedulerConfigurations :da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0" 
// 删除spark sql通用参数 "GeneralTaskParams: SPARK_SQL" 

                     * @return FieldToRemoveList 删除字段内容，采用属性路径的形式标识，删除的值以":"分割，多个值以","分割
 // 删除调度参数中 ParamKey 为 aa,bb 的属性 "WorkflowParams:aa,bb"
 // 删除配置的 TriggerId 为 da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0 的调度配置"TriggerWorkflowSchedulerConfigurations :da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0" 
// 删除spark sql通用参数 "GeneralTaskParams: SPARK_SQL" 

                     * 
                     */
                    std::vector<std::string> GetFieldToRemoveList() const;

                    /**
                     * 设置删除字段内容，采用属性路径的形式标识，删除的值以":"分割，多个值以","分割
 // 删除调度参数中 ParamKey 为 aa,bb 的属性 "WorkflowParams:aa,bb"
 // 删除配置的 TriggerId 为 da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0 的调度配置"TriggerWorkflowSchedulerConfigurations :da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0" 
// 删除spark sql通用参数 "GeneralTaskParams: SPARK_SQL" 

                     * @param _fieldToRemoveList 删除字段内容，采用属性路径的形式标识，删除的值以":"分割，多个值以","分割
 // 删除调度参数中 ParamKey 为 aa,bb 的属性 "WorkflowParams:aa,bb"
 // 删除配置的 TriggerId 为 da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0 的调度配置"TriggerWorkflowSchedulerConfigurations :da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0" 
// 删除spark sql通用参数 "GeneralTaskParams: SPARK_SQL" 

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
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 责任人ID
                     */
                    UpdateTriggerWorkflowPartially m_newSetting;
                    bool m_newSettingHasBeenSet;

                    /**
                     * 删除字段内容，采用属性路径的形式标识，删除的值以":"分割，多个值以","分割
 // 删除调度参数中 ParamKey 为 aa,bb 的属性 "WorkflowParams:aa,bb"
 // 删除配置的 TriggerId 为 da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0 的调度配置"TriggerWorkflowSchedulerConfigurations :da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0" 
// 删除spark sql通用参数 "GeneralTaskParams: SPARK_SQL" 

                     */
                    std::vector<std::string> m_fieldToRemoveList;
                    bool m_fieldToRemoveListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETRIGGERWORKFLOWPARTIALLYREQUEST_H_
