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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DATABACKFILL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DATABACKFILL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DataBackfillRange.h>
#include <tencentcloud/wedata/v20250806/model/KVPair.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 补录计划详情
                */
                class DataBackfill : public AbstractModel
                {
                public:
                    DataBackfill();
                    ~DataBackfill() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取数据补录计划id
                     * @return DataBackfillPlanId 数据补录计划id
                     * 
                     */
                    std::string GetDataBackfillPlanId() const;

                    /**
                     * 设置数据补录计划id
                     * @param _dataBackfillPlanId 数据补录计划id
                     * 
                     */
                    void SetDataBackfillPlanId(const std::string& _dataBackfillPlanId);

                    /**
                     * 判断参数 DataBackfillPlanId 是否已赋值
                     * @return DataBackfillPlanId 是否已赋值
                     * 
                     */
                    bool DataBackfillPlanIdHasBeenSet() const;

                    /**
                     * 获取数据补录计划名称
                     * @return DataBackfillPlanName 数据补录计划名称
                     * 
                     */
                    std::string GetDataBackfillPlanName() const;

                    /**
                     * 设置数据补录计划名称
                     * @param _dataBackfillPlanName 数据补录计划名称
                     * 
                     */
                    void SetDataBackfillPlanName(const std::string& _dataBackfillPlanName);

                    /**
                     * 判断参数 DataBackfillPlanName 是否已赋值
                     * @return DataBackfillPlanName 是否已赋值
                     * 
                     */
                    bool DataBackfillPlanNameHasBeenSet() const;

                    /**
                     * 获取补录任务集合
                     * @return TaskIds 补录任务集合
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置补录任务集合
                     * @param _taskIds 补录任务集合
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取补录任务的数据配置列表
                     * @return DataBackfillRangeList 补录任务的数据配置列表
                     * 
                     */
                    std::vector<DataBackfillRange> GetDataBackfillRangeList() const;

                    /**
                     * 设置补录任务的数据配置列表
                     * @param _dataBackfillRangeList 补录任务的数据配置列表
                     * 
                     */
                    void SetDataBackfillRangeList(const std::vector<DataBackfillRange>& _dataBackfillRangeList);

                    /**
                     * 判断参数 DataBackfillRangeList 是否已赋值
                     * @return DataBackfillRangeList 是否已赋值
                     * 
                     */
                    bool DataBackfillRangeListHasBeenSet() const;

                    /**
                     * 获取检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckParentType 检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCheckParentType() const;

                    /**
                     * 设置检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkParentType 检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckParentType(const std::string& _checkParentType);

                    /**
                     * 判断参数 CheckParentType 是否已赋值
                     * @return CheckParentType 是否已赋值
                     * 
                     */
                    bool CheckParentTypeHasBeenSet() const;

                    /**
                     * 获取补录是否忽略事件依赖	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkipEventListening 补录是否忽略事件依赖	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSkipEventListening() const;

                    /**
                     * 设置补录是否忽略事件依赖	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _skipEventListening 补录是否忽略事件依赖	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSkipEventListening(const bool& _skipEventListening);

                    /**
                     * 判断参数 SkipEventListening 是否已赋值
                     * @return SkipEventListening 是否已赋值
                     * 
                     */
                    bool SkipEventListeningHasBeenSet() const;

                    /**
                     * 获取自定义实例运行并发度, 返回为null或者不返回，则表示任务原有自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedefineParallelNum 自定义实例运行并发度, 返回为null或者不返回，则表示任务原有自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRedefineParallelNum() const;

                    /**
                     * 设置自定义实例运行并发度, 返回为null或者不返回，则表示任务原有自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redefineParallelNum 自定义实例运行并发度, 返回为null或者不返回，则表示任务原有自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedefineParallelNum(const uint64_t& _redefineParallelNum);

                    /**
                     * 判断参数 RedefineParallelNum 是否已赋值
                     * @return RedefineParallelNum 是否已赋值
                     * 
                     */
                    bool RedefineParallelNumHasBeenSet() const;

                    /**
                     * 获取自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedefineSelfWorkflowDependency 自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRedefineSelfWorkflowDependency() const;

                    /**
                     * 设置自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redefineSelfWorkflowDependency 自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedefineSelfWorkflowDependency(const std::string& _redefineSelfWorkflowDependency);

                    /**
                     * 判断参数 RedefineSelfWorkflowDependency 是否已赋值
                     * @return RedefineSelfWorkflowDependency 是否已赋值
                     * 
                     */
                    bool RedefineSelfWorkflowDependencyHasBeenSet() const;

                    /**
                     * 获取调度资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerResourceGroupId 调度资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerResourceGroupId() const;

                    /**
                     * 设置调度资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerResourceGroupId 调度资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulerResourceGroupId(const std::string& _schedulerResourceGroupId);

                    /**
                     * 判断参数 SchedulerResourceGroupId 是否已赋值
                     * @return SchedulerResourceGroupId 是否已赋值
                     * 
                     */
                    bool SchedulerResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取集成资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntegrationResourceGroupId 集成资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntegrationResourceGroupId() const;

                    /**
                     * 设置集成资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _integrationResourceGroupId 集成资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntegrationResourceGroupId(const std::string& _integrationResourceGroupId);

                    /**
                     * 判断参数 IntegrationResourceGroupId 是否已赋值
                     * @return IntegrationResourceGroupId 是否已赋值
                     * 
                     */
                    bool IntegrationResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取补录自定义的生成周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedefineCycleType 补录自定义的生成周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRedefineCycleType() const;

                    /**
                     * 设置补录自定义的生成周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redefineCycleType 补录自定义的生成周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedefineCycleType(const std::string& _redefineCycleType);

                    /**
                     * 判断参数 RedefineCycleType 是否已赋值
                     * @return RedefineCycleType 是否已赋值
                     * 
                     */
                    bool RedefineCycleTypeHasBeenSet() const;

                    /**
                     * 获取自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedefineParamList 自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KVPair> GetRedefineParamList() const;

                    /**
                     * 设置自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redefineParamList 自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedefineParamList(const std::vector<KVPair>& _redefineParamList);

                    /**
                     * 判断参数 RedefineParamList 是否已赋值
                     * @return RedefineParamList 是否已赋值
                     * 
                     */
                    bool RedefineParamListHasBeenSet() const;

                    /**
                     * 获取补录任务的执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 补录任务的执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置补录任务的执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 补录任务的执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取补录任务的执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 补录任务的执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置补录任务的执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 补录任务的执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取创建用户id
                     * @return CreateUserUin 创建用户id
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置创建用户id
                     * @param _createUserUin 创建用户id
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取补录计划实例完成百分数
                     * @return CompletePercent 补录计划实例完成百分数
                     * 
                     */
                    uint64_t GetCompletePercent() const;

                    /**
                     * 设置补录计划实例完成百分数
                     * @param _completePercent 补录计划实例完成百分数
                     * 
                     */
                    void SetCompletePercent(const uint64_t& _completePercent);

                    /**
                     * 判断参数 CompletePercent 是否已赋值
                     * @return CompletePercent 是否已赋值
                     * 
                     */
                    bool CompletePercentHasBeenSet() const;

                    /**
                     * 获取补录计划实例成功百分数
                     * @return SuccessPercent 补录计划实例成功百分数
                     * 
                     */
                    uint64_t GetSuccessPercent() const;

                    /**
                     * 设置补录计划实例成功百分数
                     * @param _successPercent 补录计划实例成功百分数
                     * 
                     */
                    void SetSuccessPercent(const uint64_t& _successPercent);

                    /**
                     * 判断参数 SuccessPercent 是否已赋值
                     * @return SuccessPercent 是否已赋值
                     * 
                     */
                    bool SuccessPercentHasBeenSet() const;

                    /**
                     * 获取补录是实例数据时间顺序，生效必须满足2个条件:1. 必须同周期任务2. 优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行 可选值- NORMAL: 不设置- ORDER: 顺序- REVERSE: 逆序不设置默认为NORMAL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataTimeOrder 补录是实例数据时间顺序，生效必须满足2个条件:1. 必须同周期任务2. 优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行 可选值- NORMAL: 不设置- ORDER: 顺序- REVERSE: 逆序不设置默认为NORMAL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataTimeOrder() const;

                    /**
                     * 设置补录是实例数据时间顺序，生效必须满足2个条件:1. 必须同周期任务2. 优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行 可选值- NORMAL: 不设置- ORDER: 顺序- REVERSE: 逆序不设置默认为NORMAL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataTimeOrder 补录是实例数据时间顺序，生效必须满足2个条件:1. 必须同周期任务2. 优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行 可选值- NORMAL: 不设置- ORDER: 顺序- REVERSE: 逆序不设置默认为NORMAL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataTimeOrder(const std::string& _dataTimeOrder);

                    /**
                     * 判断参数 DataTimeOrder 是否已赋值
                     * @return DataTimeOrder 是否已赋值
                     * 
                     */
                    bool DataTimeOrderHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据补录计划id
                     */
                    std::string m_dataBackfillPlanId;
                    bool m_dataBackfillPlanIdHasBeenSet;

                    /**
                     * 数据补录计划名称
                     */
                    std::string m_dataBackfillPlanName;
                    bool m_dataBackfillPlanNameHasBeenSet;

                    /**
                     * 补录任务集合
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 补录任务的数据配置列表
                     */
                    std::vector<DataBackfillRange> m_dataBackfillRangeList;
                    bool m_dataBackfillRangeListHasBeenSet;

                    /**
                     * 检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkParentType;
                    bool m_checkParentTypeHasBeenSet;

                    /**
                     * 补录是否忽略事件依赖	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_skipEventListening;
                    bool m_skipEventListeningHasBeenSet;

                    /**
                     * 自定义实例运行并发度, 返回为null或者不返回，则表示任务原有自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_redefineParallelNum;
                    bool m_redefineParallelNumHasBeenSet;

                    /**
                     * 自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_redefineSelfWorkflowDependency;
                    bool m_redefineSelfWorkflowDependencyHasBeenSet;

                    /**
                     * 调度资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerResourceGroupId;
                    bool m_schedulerResourceGroupIdHasBeenSet;

                    /**
                     * 集成资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_integrationResourceGroupId;
                    bool m_integrationResourceGroupIdHasBeenSet;

                    /**
                     * 补录自定义的生成周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_redefineCycleType;
                    bool m_redefineCycleTypeHasBeenSet;

                    /**
                     * 自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KVPair> m_redefineParamList;
                    bool m_redefineParamListHasBeenSet;

                    /**
                     * 补录任务的执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 补录任务的执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 创建用户id
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 补录计划实例完成百分数
                     */
                    uint64_t m_completePercent;
                    bool m_completePercentHasBeenSet;

                    /**
                     * 补录计划实例成功百分数
                     */
                    uint64_t m_successPercent;
                    bool m_successPercentHasBeenSet;

                    /**
                     * 补录是实例数据时间顺序，生效必须满足2个条件:1. 必须同周期任务2. 优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行 可选值- NORMAL: 不设置- ORDER: 顺序- REVERSE: 逆序不设置默认为NORMAL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataTimeOrder;
                    bool m_dataTimeOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DATABACKFILL_H_
