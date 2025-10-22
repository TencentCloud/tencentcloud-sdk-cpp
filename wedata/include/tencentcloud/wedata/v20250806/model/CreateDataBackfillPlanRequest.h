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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATABACKFILLPLANREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATABACKFILLPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateDataBackfillPlan请求参数结构体
                */
                class CreateDataBackfillPlanRequest : public AbstractModel
                {
                public:
                    CreateDataBackfillPlanRequest();
                    ~CreateDataBackfillPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所属项目Id
                     * @return ProjectId 所属项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置所属项目Id
                     * @param _projectId 所属项目Id
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
                     * 获取补录任务的数据时间配置
                     * @return DataBackfillRangeList 补录任务的数据时间配置
                     * 
                     */
                    std::vector<DataBackfillRange> GetDataBackfillRangeList() const;

                    /**
                     * 设置补录任务的数据时间配置
                     * @param _dataBackfillRangeList 补录任务的数据时间配置
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
                     * 获取时区，默认UTC+8
                     * @return TimeZone 时区，默认UTC+8
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置时区，默认UTC+8
                     * @param _timeZone 时区，默认UTC+8
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取数据补录计划名称，不填则由系统随机生成一串字符
                     * @return DataBackfillPlanName 数据补录计划名称，不填则由系统随机生成一串字符
                     * 
                     */
                    std::string GetDataBackfillPlanName() const;

                    /**
                     * 设置数据补录计划名称，不填则由系统随机生成一串字符
                     * @param _dataBackfillPlanName 数据补录计划名称，不填则由系统随机生成一串字符
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
                     * 获取检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查,默认NONE不检查
                     * @return CheckParentType 检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查,默认NONE不检查
                     * 
                     */
                    std::string GetCheckParentType() const;

                    /**
                     * 设置检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查,默认NONE不检查
                     * @param _checkParentType 检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查,默认NONE不检查
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
                     * 获取补录是否忽略事件依赖,默认true
                     * @return SkipEventListening 补录是否忽略事件依赖,默认true
                     * 
                     */
                    bool GetSkipEventListening() const;

                    /**
                     * 设置补录是否忽略事件依赖,默认true
                     * @param _skipEventListening 补录是否忽略事件依赖,默认true
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
                     * 获取自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖
                     * @return RedefineSelfWorkflowDependency 自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖
                     * 
                     */
                    std::string GetRedefineSelfWorkflowDependency() const;

                    /**
                     * 设置自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖
                     * @param _redefineSelfWorkflowDependency 自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖
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
                     * 获取自定义实例运行并发度, 如果不配置，则使用任务原有自依赖
                     * @return RedefineParallelNum 自定义实例运行并发度, 如果不配置，则使用任务原有自依赖
                     * 
                     */
                    uint64_t GetRedefineParallelNum() const;

                    /**
                     * 设置自定义实例运行并发度, 如果不配置，则使用任务原有自依赖
                     * @param _redefineParallelNum 自定义实例运行并发度, 如果不配置，则使用任务原有自依赖
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
                     * 获取调度资源组id，为空则表示使用任务原有调度执行资源组
                     * @return SchedulerResourceGroupId 调度资源组id，为空则表示使用任务原有调度执行资源组
                     * 
                     */
                    std::string GetSchedulerResourceGroupId() const;

                    /**
                     * 设置调度资源组id，为空则表示使用任务原有调度执行资源组
                     * @param _schedulerResourceGroupId 调度资源组id，为空则表示使用任务原有调度执行资源组
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
                     * 获取集成任务资源组id，为空则表示使用任务原有调度执行资源组
                     * @return IntegrationResourceGroupId 集成任务资源组id，为空则表示使用任务原有调度执行资源组
                     * 
                     */
                    std::string GetIntegrationResourceGroupId() const;

                    /**
                     * 设置集成任务资源组id，为空则表示使用任务原有调度执行资源组
                     * @param _integrationResourceGroupId 集成任务资源组id，为空则表示使用任务原有调度执行资源组
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
                     * 获取自定义参数，可以重新指定任务的参数，方便补录实例执行新的逻辑
                     * @return RedefineParamList 自定义参数，可以重新指定任务的参数，方便补录实例执行新的逻辑
                     * 
                     */
                    std::vector<KVPair> GetRedefineParamList() const;

                    /**
                     * 设置自定义参数，可以重新指定任务的参数，方便补录实例执行新的逻辑
                     * @param _redefineParamList 自定义参数，可以重新指定任务的参数，方便补录实例执行新的逻辑
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
                     * 获取补录是实例数据时间顺序，生效必须满足2个条件:
1. 必须同周期任务
2. 优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行
 
可选值
- NORMAL: 不设置
- ORDER: 顺序
- REVERSE: 逆序
不设置默认为NORMAL
                     * @return DataTimeOrder 补录是实例数据时间顺序，生效必须满足2个条件:
1. 必须同周期任务
2. 优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行
 
可选值
- NORMAL: 不设置
- ORDER: 顺序
- REVERSE: 逆序
不设置默认为NORMAL
                     * 
                     */
                    std::string GetDataTimeOrder() const;

                    /**
                     * 设置补录是实例数据时间顺序，生效必须满足2个条件:
1. 必须同周期任务
2. 优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行
 
可选值
- NORMAL: 不设置
- ORDER: 顺序
- REVERSE: 逆序
不设置默认为NORMAL
                     * @param _dataTimeOrder 补录是实例数据时间顺序，生效必须满足2个条件:
1. 必须同周期任务
2. 优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行
 
可选值
- NORMAL: 不设置
- ORDER: 顺序
- REVERSE: 逆序
不设置默认为NORMAL
                     * 
                     */
                    void SetDataTimeOrder(const std::string& _dataTimeOrder);

                    /**
                     * 判断参数 DataTimeOrder 是否已赋值
                     * @return DataTimeOrder 是否已赋值
                     * 
                     */
                    bool DataTimeOrderHasBeenSet() const;

                    /**
                     * 获取补录实例重新生成周期，如果设置会重新指定补录任务实例的生成周期，目前只会将天实例转换成每月1号生成的实例
* MONTH_CYCLE: 月
                     * @return RedefineCycleType 补录实例重新生成周期，如果设置会重新指定补录任务实例的生成周期，目前只会将天实例转换成每月1号生成的实例
* MONTH_CYCLE: 月
                     * 
                     */
                    std::string GetRedefineCycleType() const;

                    /**
                     * 设置补录实例重新生成周期，如果设置会重新指定补录任务实例的生成周期，目前只会将天实例转换成每月1号生成的实例
* MONTH_CYCLE: 月
                     * @param _redefineCycleType 补录实例重新生成周期，如果设置会重新指定补录任务实例的生成周期，目前只会将天实例转换成每月1号生成的实例
* MONTH_CYCLE: 月
                     * 
                     */
                    void SetRedefineCycleType(const std::string& _redefineCycleType);

                    /**
                     * 判断参数 RedefineCycleType 是否已赋值
                     * @return RedefineCycleType 是否已赋值
                     * 
                     */
                    bool RedefineCycleTypeHasBeenSet() const;

                private:

                    /**
                     * 所属项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 补录任务集合
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 补录任务的数据时间配置
                     */
                    std::vector<DataBackfillRange> m_dataBackfillRangeList;
                    bool m_dataBackfillRangeListHasBeenSet;

                    /**
                     * 时区，默认UTC+8
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * 数据补录计划名称，不填则由系统随机生成一串字符
                     */
                    std::string m_dataBackfillPlanName;
                    bool m_dataBackfillPlanNameHasBeenSet;

                    /**
                     * 检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查,默认NONE不检查
                     */
                    std::string m_checkParentType;
                    bool m_checkParentTypeHasBeenSet;

                    /**
                     * 补录是否忽略事件依赖,默认true
                     */
                    bool m_skipEventListening;
                    bool m_skipEventListeningHasBeenSet;

                    /**
                     * 自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖
                     */
                    std::string m_redefineSelfWorkflowDependency;
                    bool m_redefineSelfWorkflowDependencyHasBeenSet;

                    /**
                     * 自定义实例运行并发度, 如果不配置，则使用任务原有自依赖
                     */
                    uint64_t m_redefineParallelNum;
                    bool m_redefineParallelNumHasBeenSet;

                    /**
                     * 调度资源组id，为空则表示使用任务原有调度执行资源组
                     */
                    std::string m_schedulerResourceGroupId;
                    bool m_schedulerResourceGroupIdHasBeenSet;

                    /**
                     * 集成任务资源组id，为空则表示使用任务原有调度执行资源组
                     */
                    std::string m_integrationResourceGroupId;
                    bool m_integrationResourceGroupIdHasBeenSet;

                    /**
                     * 自定义参数，可以重新指定任务的参数，方便补录实例执行新的逻辑
                     */
                    std::vector<KVPair> m_redefineParamList;
                    bool m_redefineParamListHasBeenSet;

                    /**
                     * 补录是实例数据时间顺序，生效必须满足2个条件:
1. 必须同周期任务
2. 优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行
 
可选值
- NORMAL: 不设置
- ORDER: 顺序
- REVERSE: 逆序
不设置默认为NORMAL
                     */
                    std::string m_dataTimeOrder;
                    bool m_dataTimeOrderHasBeenSet;

                    /**
                     * 补录实例重新生成周期，如果设置会重新指定补录任务实例的生成周期，目前只会将天实例转换成每月1号生成的实例
* MONTH_CYCLE: 月
                     */
                    std::string m_redefineCycleType;
                    bool m_redefineCycleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATABACKFILLPLANREQUEST_H_
