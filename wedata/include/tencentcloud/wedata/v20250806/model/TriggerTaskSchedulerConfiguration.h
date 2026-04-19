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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKSCHEDULERCONFIGURATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKSCHEDULERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DependencyTriggerTaskBrief.h>
#include <tencentcloud/wedata/v20250806/model/OutTaskParameter.h>
#include <tencentcloud/wedata/v20250806/model/InTaskParameter.h>
#include <tencentcloud/wedata/v20250806/model/TaskDataRegistry.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 任务调度配置信息
                */
                class TriggerTaskSchedulerConfiguration : public AbstractModel
                {
                public:
                    TriggerTaskSchedulerConfiguration();
                    ~TriggerTaskSchedulerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>上游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamDependencyConfigList <p>上游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DependencyTriggerTaskBrief> GetUpstreamDependencyConfigList() const;

                    /**
                     * 设置<p>上游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamDependencyConfigList <p>上游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamDependencyConfigList(const std::vector<DependencyTriggerTaskBrief>& _upstreamDependencyConfigList);

                    /**
                     * 判断参数 UpstreamDependencyConfigList 是否已赋值
                     * @return UpstreamDependencyConfigList 是否已赋值
                     * 
                     */
                    bool UpstreamDependencyConfigListHasBeenSet() const;

                    /**
                     * 获取<p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunPriorityType <p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRunPriorityType() const;

                    /**
                     * 设置<p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runPriorityType <p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunPriorityType(const int64_t& _runPriorityType);

                    /**
                     * 判断参数 RunPriorityType 是否已赋值
                     * @return RunPriorityType 是否已赋值
                     * 
                     */
                    bool RunPriorityTypeHasBeenSet() const;

                    /**
                     * 获取<p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryWaitMinute <p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryWaitMinute() const;

                    /**
                     * 设置<p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryWaitMinute <p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryWaitMinute(const int64_t& _retryWaitMinute);

                    /**
                     * 判断参数 RetryWaitMinute 是否已赋值
                     * @return RetryWaitMinute 是否已赋值
                     * 
                     */
                    bool RetryWaitMinuteHasBeenSet() const;

                    /**
                     * 获取<p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRetryNumber <p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRetryNumber() const;

                    /**
                     * 设置<p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRetryNumber <p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRetryNumber(const int64_t& _maxRetryNumber);

                    /**
                     * 判断参数 MaxRetryNumber 是否已赋值
                     * @return MaxRetryNumber 是否已赋值
                     * 
                     */
                    bool MaxRetryNumberHasBeenSet() const;

                    /**
                     * 获取<p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionTTLMinute <p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExecutionTTLMinute() const;

                    /**
                     * 设置<p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionTTLMinute <p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionTTLMinute(const int64_t& _executionTTLMinute);

                    /**
                     * 判断参数 ExecutionTTLMinute 是否已赋值
                     * @return ExecutionTTLMinute 是否已赋值
                     * 
                     */
                    bool ExecutionTTLMinuteHasBeenSet() const;

                    /**
                     * 获取<p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitExecutionTotalTTLMinute <p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWaitExecutionTotalTTLMinute() const;

                    /**
                     * 设置<p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitExecutionTotalTTLMinute <p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaitExecutionTotalTTLMinute(const int64_t& _waitExecutionTotalTTLMinute);

                    /**
                     * 判断参数 WaitExecutionTotalTTLMinute 是否已赋值
                     * @return WaitExecutionTotalTTLMinute 是否已赋值
                     * 
                     */
                    bool WaitExecutionTotalTTLMinuteHasBeenSet() const;

                    /**
                     * 获取<p>重跑&amp;补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowRedoType <p>重跑&amp;补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAllowRedoType() const;

                    /**
                     * 设置<p>重跑&amp;补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowRedoType <p>重跑&amp;补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowRedoType(const std::string& _allowRedoType);

                    /**
                     * 判断参数 AllowRedoType 是否已赋值
                     * @return AllowRedoType 是否已赋值
                     * 
                     */
                    bool AllowRedoTypeHasBeenSet() const;

                    /**
                     * 获取<p>输出参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamTaskOutList <p>输出参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OutTaskParameter> GetParamTaskOutList() const;

                    /**
                     * 设置<p>输出参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramTaskOutList <p>输出参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamTaskOutList(const std::vector<OutTaskParameter>& _paramTaskOutList);

                    /**
                     * 判断参数 ParamTaskOutList 是否已赋值
                     * @return ParamTaskOutList 是否已赋值
                     * 
                     */
                    bool ParamTaskOutListHasBeenSet() const;

                    /**
                     * 获取<p>输入参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamTaskInList <p>输入参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InTaskParameter> GetParamTaskInList() const;

                    /**
                     * 设置<p>输入参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramTaskInList <p>输入参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamTaskInList(const std::vector<InTaskParameter>& _paramTaskInList);

                    /**
                     * 判断参数 ParamTaskInList 是否已赋值
                     * @return ParamTaskInList 是否已赋值
                     * 
                     */
                    bool ParamTaskInListHasBeenSet() const;

                    /**
                     * 获取<p>产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskOutputRegistryList <p>产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskDataRegistry> GetTaskOutputRegistryList() const;

                    /**
                     * 设置<p>产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskOutputRegistryList <p>产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskOutputRegistryList(const std::vector<TaskDataRegistry>& _taskOutputRegistryList);

                    /**
                     * 判断参数 TaskOutputRegistryList 是否已赋值
                     * @return TaskOutputRegistryList 是否已赋值
                     * 
                     */
                    bool TaskOutputRegistryListHasBeenSet() const;

                    /**
                     * 获取<ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyTriggerPolicy <ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyTriggerPolicy() const;

                    /**
                     * 设置<ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyTriggerPolicy <ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyTriggerPolicy(const std::string& _dependencyTriggerPolicy);

                    /**
                     * 判断参数 DependencyTriggerPolicy 是否已赋值
                     * @return DependencyTriggerPolicy 是否已赋值
                     * 
                     */
                    bool DependencyTriggerPolicyHasBeenSet() const;

                    /**
                     * 获取<p>是否允许下游依赖 1允许 0不允许</p><p>取值范围：[0, 1]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowDownstreamDependency <p>是否允许下游依赖 1允许 0不允许</p><p>取值范围：[0, 1]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAllowDownstreamDependency() const;

                    /**
                     * 设置<p>是否允许下游依赖 1允许 0不允许</p><p>取值范围：[0, 1]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowDownstreamDependency <p>是否允许下游依赖 1允许 0不允许</p><p>取值范围：[0, 1]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowDownstreamDependency(const int64_t& _allowDownstreamDependency);

                    /**
                     * 判断参数 AllowDownstreamDependency 是否已赋值
                     * @return AllowDownstreamDependency 是否已赋值
                     * 
                     */
                    bool AllowDownstreamDependencyHasBeenSet() const;

                private:

                    /**
                     * <p>上游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DependencyTriggerTaskBrief> m_upstreamDependencyConfigList;
                    bool m_upstreamDependencyConfigListHasBeenSet;

                    /**
                     * <p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runPriorityType;
                    bool m_runPriorityTypeHasBeenSet;

                    /**
                     * <p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryWaitMinute;
                    bool m_retryWaitMinuteHasBeenSet;

                    /**
                     * <p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRetryNumber;
                    bool m_maxRetryNumberHasBeenSet;

                    /**
                     * <p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_executionTTLMinute;
                    bool m_executionTTLMinuteHasBeenSet;

                    /**
                     * <p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_waitExecutionTotalTTLMinute;
                    bool m_waitExecutionTotalTTLMinuteHasBeenSet;

                    /**
                     * <p>重跑&amp;补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_allowRedoType;
                    bool m_allowRedoTypeHasBeenSet;

                    /**
                     * <p>输出参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OutTaskParameter> m_paramTaskOutList;
                    bool m_paramTaskOutListHasBeenSet;

                    /**
                     * <p>输入参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InTaskParameter> m_paramTaskInList;
                    bool m_paramTaskInListHasBeenSet;

                    /**
                     * <p>产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskDataRegistry> m_taskOutputRegistryList;
                    bool m_taskOutputRegistryListHasBeenSet;

                    /**
                     * <ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyTriggerPolicy;
                    bool m_dependencyTriggerPolicyHasBeenSet;

                    /**
                     * <p>是否允许下游依赖 1允许 0不允许</p><p>取值范围：[0, 1]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_allowDownstreamDependency;
                    bool m_allowDownstreamDependencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKSCHEDULERCONFIGURATION_H_
