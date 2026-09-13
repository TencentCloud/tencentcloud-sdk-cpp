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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASK_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ParamInfo.h>
#include <tencentcloud/databuddy/v20260715/model/DependOnBrief.h>
#include <tencentcloud/databuddy/v20260715/model/TaskType.h>
#include <tencentcloud/databuddy/v20260715/model/AlarmBrief.h>
#include <tencentcloud/databuddy/v20260715/model/MonitorMetricBrief.h>
#include <tencentcloud/databuddy/v20260715/model/TaskRetryStrategy.h>
#include <tencentcloud/databuddy/v20260715/model/AdvancedDependencyConfig.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowTask.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 工作流任务信息。 注意：本结构同时用于入参（CreateWorkflow / UpdateWorkflow）与出参（GetWorkflow）， 其中 CreateTime / UpdateTime / CreateUserUin 为系统生成字段，仅在出参中有值， 入参传值不生效（服务端忽略且不报错）。
                */
                class WorkflowTask : public AbstractModel
                {
                public:
                    WorkflowTask();
                    ~WorkflowTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamList 任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParamInfo> GetParamList() const;

                    /**
                     * 设置任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramList 任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamList(const std::vector<ParamInfo>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取任务依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependOnList 任务依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DependOnBrief> GetDependOnList() const;

                    /**
                     * 设置任务依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependOnList 任务依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependOnList(const std::vector<DependOnBrief>& _dependOnList);

                    /**
                     * 判断参数 DependOnList 是否已赋值
                     * @return DependOnList 是否已赋值
                     * 
                     */
                    bool DependOnListHasBeenSet() const;

                    /**
                     * 获取任务ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID，创建时无需传入，由服务端生成
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
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名称
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskType GetTaskType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const TaskType& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取资源组ID，可通过资源组相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId 资源组ID，可通过资源组相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置资源组ID，可通过资源组相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId 资源组ID，可通过资源组相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取任务告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alarm 任务告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmBrief GetAlarm() const;

                    /**
                     * 设置任务告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarm 任务告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarm(const AlarmBrief& _alarm);

                    /**
                     * 判断参数 Alarm 是否已赋值
                     * @return Alarm 是否已赋值
                     * 
                     */
                    bool AlarmHasBeenSet() const;

                    /**
                     * 获取监控指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorMetric 监控指标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MonitorMetricBrief GetMonitorMetric() const;

                    /**
                     * 设置监控指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorMetric 监控指标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorMetric(const MonitorMetricBrief& _monitorMetric);

                    /**
                     * 判断参数 MonitorMetric 是否已赋值
                     * @return MonitorMetric 是否已赋值
                     * 
                     */
                    bool MonitorMetricHasBeenSet() const;

                    /**
                     * 获取任务重试策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskRetryStrategy 任务重试策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskRetryStrategy GetTaskRetryStrategy() const;

                    /**
                     * 设置任务重试策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskRetryStrategy 任务重试策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskRetryStrategy(const TaskRetryStrategy& _taskRetryStrategy);

                    /**
                     * 判断参数 TaskRetryStrategy 是否已赋值
                     * @return TaskRetryStrategy 是否已赋值
                     * 
                     */
                    bool TaskRetryStrategyHasBeenSet() const;

                    /**
                     * 获取<p>任依赖运行条件</p><ul><li>ALL_SUCCESS: 全部成功：所有上游依赖任务均已执行并成功</li><li>ONE_SUCCESS: 至少一个成功：至少有一个上游依赖任务成功</li><li>NONE_FAILED: 目前没有失败：没有依赖任务失败，并且至少有一个依赖任务在运行中</li><li>ALL_DONE: 全部完成：所有上游依赖任务均已执行并完成（无论成功或失败</li><li>ONE_FAILED: 至少一个失败：至少有一个上游依赖任务失败</li><li>ALL_FAILED: 全部失败：所有上游依赖任务都失败</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li><li>ADVANCED:运行条件为高级模式时配置</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependOnRunCondition <p>任依赖运行条件</p><ul><li>ALL_SUCCESS: 全部成功：所有上游依赖任务均已执行并成功</li><li>ONE_SUCCESS: 至少一个成功：至少有一个上游依赖任务成功</li><li>NONE_FAILED: 目前没有失败：没有依赖任务失败，并且至少有一个依赖任务在运行中</li><li>ALL_DONE: 全部完成：所有上游依赖任务均已执行并完成（无论成功或失败</li><li>ONE_FAILED: 至少一个失败：至少有一个上游依赖任务失败</li><li>ALL_FAILED: 全部失败：所有上游依赖任务都失败</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li><li>ADVANCED:运行条件为高级模式时配置</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependOnRunCondition() const;

                    /**
                     * 设置<p>任依赖运行条件</p><ul><li>ALL_SUCCESS: 全部成功：所有上游依赖任务均已执行并成功</li><li>ONE_SUCCESS: 至少一个成功：至少有一个上游依赖任务成功</li><li>NONE_FAILED: 目前没有失败：没有依赖任务失败，并且至少有一个依赖任务在运行中</li><li>ALL_DONE: 全部完成：所有上游依赖任务均已执行并完成（无论成功或失败</li><li>ONE_FAILED: 至少一个失败：至少有一个上游依赖任务失败</li><li>ALL_FAILED: 全部失败：所有上游依赖任务都失败</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li><li>ADVANCED:运行条件为高级模式时配置</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependOnRunCondition <p>任依赖运行条件</p><ul><li>ALL_SUCCESS: 全部成功：所有上游依赖任务均已执行并成功</li><li>ONE_SUCCESS: 至少一个成功：至少有一个上游依赖任务成功</li><li>NONE_FAILED: 目前没有失败：没有依赖任务失败，并且至少有一个依赖任务在运行中</li><li>ALL_DONE: 全部完成：所有上游依赖任务均已执行并完成（无论成功或失败</li><li>ONE_FAILED: 至少一个失败：至少有一个上游依赖任务失败</li><li>ALL_FAILED: 全部失败：所有上游依赖任务都失败</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li><li>ADVANCED:运行条件为高级模式时配置</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependOnRunCondition(const std::string& _dependOnRunCondition);

                    /**
                     * 判断参数 DependOnRunCondition 是否已赋值
                     * @return DependOnRunCondition 是否已赋值
                     * 
                     */
                    bool DependOnRunConditionHasBeenSet() const;

                    /**
                     * 获取任务X坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LeftCoordinate 任务X坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置任务X坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _leftCoordinate 任务X坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLeftCoordinate(const double& _leftCoordinate);

                    /**
                     * 判断参数 LeftCoordinate 是否已赋值
                     * @return LeftCoordinate 是否已赋值
                     * 
                     */
                    bool LeftCoordinateHasBeenSet() const;

                    /**
                     * 获取任务Y坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopCoordinate 任务Y坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置任务Y坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topCoordinate 任务Y坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopCoordinate(const double& _topCoordinate);

                    /**
                     * 判断参数 TopCoordinate 是否已赋值
                     * @return TopCoordinate 是否已赋值
                     * 
                     */
                    bool TopCoordinateHasBeenSet() const;

                    /**
                     * 获取<p>任务高级运行参数，当DependOnRunCondition为ADVANCED时配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedDependencyConfig <p>任务高级运行参数，当DependOnRunCondition为ADVANCED时配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdvancedDependencyConfig GetAdvancedDependencyConfig() const;

                    /**
                     * 设置<p>任务高级运行参数，当DependOnRunCondition为ADVANCED时配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedDependencyConfig <p>任务高级运行参数，当DependOnRunCondition为ADVANCED时配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvancedDependencyConfig(const AdvancedDependencyConfig& _advancedDependencyConfig);

                    /**
                     * 判断参数 AdvancedDependencyConfig 是否已赋值
                     * @return AdvancedDependencyConfig 是否已赋值
                     * 
                     */
                    bool AdvancedDependencyConfigHasBeenSet() const;

                    /**
                     * 获取<p>内嵌任务（FOR_EACH任务的子任务）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerTask <p>内嵌任务（FOR_EACH任务的子任务）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkflowTask GetInnerTask() const;

                    /**
                     * 设置<p>内嵌任务（FOR_EACH任务的子任务）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerTask <p>内嵌任务（FOR_EACH任务的子任务）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerTask(const WorkflowTask& _innerTask);

                    /**
                     * 判断参数 InnerTask 是否已赋值
                     * @return InnerTask 是否已赋值
                     * 
                     */
                    bool InnerTaskHasBeenSet() const;

                    /**
                     * 获取创建时间，单位：毫秒时间戳。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间，单位：毫秒时间戳。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，单位：毫秒时间戳。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间，单位：毫秒时间戳。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
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
                     * 获取更新时间，单位：毫秒时间戳。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间，单位：毫秒时间戳。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间，单位：毫秒时间戳。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间，单位：毫秒时间戳。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
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
                     * 获取创建人UIN。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserUin 创建人UIN。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置创建人UIN。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserUin 创建人UIN。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                private:

                    /**
                     * 任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParamInfo> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * 任务依赖
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DependOnBrief> m_dependOnList;
                    bool m_dependOnListHasBeenSet;

                    /**
                     * 任务ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskType m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 资源组ID，可通过资源组相关接口获取
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 任务告警
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmBrief m_alarm;
                    bool m_alarmHasBeenSet;

                    /**
                     * 监控指标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MonitorMetricBrief m_monitorMetric;
                    bool m_monitorMetricHasBeenSet;

                    /**
                     * 任务重试策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskRetryStrategy m_taskRetryStrategy;
                    bool m_taskRetryStrategyHasBeenSet;

                    /**
                     * <p>任依赖运行条件</p><ul><li>ALL_SUCCESS: 全部成功：所有上游依赖任务均已执行并成功</li><li>ONE_SUCCESS: 至少一个成功：至少有一个上游依赖任务成功</li><li>NONE_FAILED: 目前没有失败：没有依赖任务失败，并且至少有一个依赖任务在运行中</li><li>ALL_DONE: 全部完成：所有上游依赖任务均已执行并完成（无论成功或失败</li><li>ONE_FAILED: 至少一个失败：至少有一个上游依赖任务失败</li><li>ALL_FAILED: 全部失败：所有上游依赖任务都失败</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li><li>ADVANCED:运行条件为高级模式时配置</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependOnRunCondition;
                    bool m_dependOnRunConditionHasBeenSet;

                    /**
                     * 任务X坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * 任务Y坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * <p>任务高级运行参数，当DependOnRunCondition为ADVANCED时配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdvancedDependencyConfig m_advancedDependencyConfig;
                    bool m_advancedDependencyConfigHasBeenSet;

                    /**
                     * <p>内嵌任务（FOR_EACH任务的子任务）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkflowTask m_innerTask;
                    bool m_innerTaskHasBeenSet;

                    /**
                     * 创建时间，单位：毫秒时间戳。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，单位：毫秒时间戳。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建人UIN。出参专用，系统生成，入参传值不生效
【已废弃】服务端忽略传入值，不报错。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASK_H_
