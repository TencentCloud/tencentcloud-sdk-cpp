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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKFORMPARAMS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKFORMPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ParamMapDsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务参数
                */
                class TaskFormParams : public AbstractModel
                {
                public:
                    TaskFormParams();
                    ~TaskFormParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MapParamList 参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParamMapDsDto> GetMapParamList() const;

                    /**
                     * 设置参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mapParamList 参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMapParamList(const std::vector<ParamMapDsDto>& _mapParamList);

                    /**
                     * 判断参数 MapParamList 是否已赋值
                     * @return MapParamList 是否已赋值
                     * 
                     */
                    bool MapParamListHasBeenSet() const;

                    /**
                     * 获取工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InChargeId 负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInChargeId() const;

                    /**
                     * 设置负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inChargeId 负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInChargeId(const std::string& _inChargeId);

                    /**
                     * 判断参数 InChargeId 是否已赋值
                     * @return InChargeId 是否已赋值
                     * 
                     */
                    bool InChargeIdHasBeenSet() const;

                    /**
                     * 获取负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCharge 负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inCharge 负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务类型
普通任务：dev
子任务：dev_container
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 任务类型
普通任务：dev
子任务：dev_container
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置任务类型
普通任务：dev
子任务：dev_container
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName 任务类型
普通任务：dev
子任务：dev_container
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取如果最新保存版本和调度版本不一致，显示最新保存版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestSavedVersion 如果最新保存版本和调度版本不一致，显示最新保存版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestSavedVersion() const;

                    /**
                     * 设置如果最新保存版本和调度版本不一致，显示最新保存版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestSavedVersion 如果最新保存版本和调度版本不一致，显示最新保存版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestSavedVersion(const std::string& _latestSavedVersion);

                    /**
                     * 判断参数 LatestSavedVersion 是否已赋值
                     * @return LatestSavedVersion 是否已赋值
                     * 
                     */
                    bool LatestSavedVersionHasBeenSet() const;

                    /**
                     * 获取保存版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestSavedVersionId 保存版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestSavedVersionId() const;

                    /**
                     * 设置保存版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestSavedVersionId 保存版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestSavedVersionId(const std::string& _latestSavedVersionId);

                    /**
                     * 判断参数 LatestSavedVersionId 是否已赋值
                     * @return LatestSavedVersionId 是否已赋值
                     * 
                     */
                    bool LatestSavedVersionIdHasBeenSet() const;

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 参数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParamMapDsDto> m_mapParamList;
                    bool m_mapParamListHasBeenSet;

                    /**
                     * 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inChargeId;
                    bool m_inChargeIdHasBeenSet;

                    /**
                     * 负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务类型
普通任务：dev
子任务：dev_container
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 如果最新保存版本和调度版本不一致，显示最新保存版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestSavedVersion;
                    bool m_latestSavedVersionHasBeenSet;

                    /**
                     * 保存版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestSavedVersionId;
                    bool m_latestSavedVersionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKFORMPARAMS_H_
