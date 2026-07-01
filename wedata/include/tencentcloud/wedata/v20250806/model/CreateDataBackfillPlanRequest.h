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
#include <tencentcloud/wedata/v20250806/model/ComputeConfigMapping.h>


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
                     * 获取<p>所属项目Id</p>
                     * @return ProjectId <p>所属项目Id</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>所属项目Id</p>
                     * @param _projectId <p>所属项目Id</p>
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
                     * 获取<p>补录任务集合</p>
                     * @return TaskIds <p>补录任务集合</p>
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置<p>补录任务集合</p>
                     * @param _taskIds <p>补录任务集合</p>
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
                     * 获取<p>补录任务的数据时间配置</p>
                     * @return DataBackfillRangeList <p>补录任务的数据时间配置</p>
                     * 
                     */
                    std::vector<DataBackfillRange> GetDataBackfillRangeList() const;

                    /**
                     * 设置<p>补录任务的数据时间配置</p>
                     * @param _dataBackfillRangeList <p>补录任务的数据时间配置</p>
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
                     * 获取<p>时区，默认UTC+8</p>
                     * @return TimeZone <p>时区，默认UTC+8</p>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>时区，默认UTC+8</p>
                     * @param _timeZone <p>时区，默认UTC+8</p>
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
                     * 获取<p>数据补录计划名称，不填则由系统随机生成一串字符</p>
                     * @return DataBackfillPlanName <p>数据补录计划名称，不填则由系统随机生成一串字符</p>
                     * 
                     */
                    std::string GetDataBackfillPlanName() const;

                    /**
                     * 设置<p>数据补录计划名称，不填则由系统随机生成一串字符</p>
                     * @param _dataBackfillPlanName <p>数据补录计划名称，不填则由系统随机生成一串字符</p>
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
                     * 获取<p>检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查,默认NONE不检查</p>
                     * @return CheckParentType <p>检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查,默认NONE不检查</p>
                     * 
                     */
                    std::string GetCheckParentType() const;

                    /**
                     * 设置<p>检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查,默认NONE不检查</p>
                     * @param _checkParentType <p>检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查,默认NONE不检查</p>
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
                     * 获取<p>补录是否忽略事件依赖,默认true</p>
                     * @return SkipEventListening <p>补录是否忽略事件依赖,默认true</p>
                     * 
                     */
                    bool GetSkipEventListening() const;

                    /**
                     * 设置<p>补录是否忽略事件依赖,默认true</p>
                     * @param _skipEventListening <p>补录是否忽略事件依赖,默认true</p>
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
                     * 获取<p>自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖</p>
                     * @return RedefineSelfWorkflowDependency <p>自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖</p>
                     * 
                     */
                    std::string GetRedefineSelfWorkflowDependency() const;

                    /**
                     * 设置<p>自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖</p>
                     * @param _redefineSelfWorkflowDependency <p>自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖</p>
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
                     * 获取<p>自定义实例运行并发度, 如果不配置，则使用任务原有自依赖</p>
                     * @return RedefineParallelNum <p>自定义实例运行并发度, 如果不配置，则使用任务原有自依赖</p>
                     * 
                     */
                    uint64_t GetRedefineParallelNum() const;

                    /**
                     * 设置<p>自定义实例运行并发度, 如果不配置，则使用任务原有自依赖</p>
                     * @param _redefineParallelNum <p>自定义实例运行并发度, 如果不配置，则使用任务原有自依赖</p>
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
                     * 获取<p>调度资源组id，为空则表示使用任务原有调度执行资源组</p>
                     * @return SchedulerResourceGroupId <p>调度资源组id，为空则表示使用任务原有调度执行资源组</p>
                     * 
                     */
                    std::string GetSchedulerResourceGroupId() const;

                    /**
                     * 设置<p>调度资源组id，为空则表示使用任务原有调度执行资源组</p>
                     * @param _schedulerResourceGroupId <p>调度资源组id，为空则表示使用任务原有调度执行资源组</p>
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
                     * 获取<p>集成任务资源组id，为空则表示使用任务原有调度执行资源组</p>
                     * @return IntegrationResourceGroupId <p>集成任务资源组id，为空则表示使用任务原有调度执行资源组</p>
                     * 
                     */
                    std::string GetIntegrationResourceGroupId() const;

                    /**
                     * 设置<p>集成任务资源组id，为空则表示使用任务原有调度执行资源组</p>
                     * @param _integrationResourceGroupId <p>集成任务资源组id，为空则表示使用任务原有调度执行资源组</p>
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
                     * 获取<p>自定义参数，可以重新指定任务的参数，方便补录实例执行新的逻辑</p>
                     * @return RedefineParamList <p>自定义参数，可以重新指定任务的参数，方便补录实例执行新的逻辑</p>
                     * 
                     */
                    std::vector<KVPair> GetRedefineParamList() const;

                    /**
                     * 设置<p>自定义参数，可以重新指定任务的参数，方便补录实例执行新的逻辑</p>
                     * @param _redefineParamList <p>自定义参数，可以重新指定任务的参数，方便补录实例执行新的逻辑</p>
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
                     * 获取<p>补录是实例数据时间顺序，生效必须满足2个条件:</p><ol><li>必须同周期任务</li><li>优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行</li></ol><p>可选值</p><ul><li>NORMAL: 不设置</li><li>ORDER: 顺序</li><li>REVERSE: 逆序<br>不设置默认为NORMAL</li></ul>
                     * @return DataTimeOrder <p>补录是实例数据时间顺序，生效必须满足2个条件:</p><ol><li>必须同周期任务</li><li>优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行</li></ol><p>可选值</p><ul><li>NORMAL: 不设置</li><li>ORDER: 顺序</li><li>REVERSE: 逆序<br>不设置默认为NORMAL</li></ul>
                     * 
                     */
                    std::string GetDataTimeOrder() const;

                    /**
                     * 设置<p>补录是实例数据时间顺序，生效必须满足2个条件:</p><ol><li>必须同周期任务</li><li>优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行</li></ol><p>可选值</p><ul><li>NORMAL: 不设置</li><li>ORDER: 顺序</li><li>REVERSE: 逆序<br>不设置默认为NORMAL</li></ul>
                     * @param _dataTimeOrder <p>补录是实例数据时间顺序，生效必须满足2个条件:</p><ol><li>必须同周期任务</li><li>优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行</li></ol><p>可选值</p><ul><li>NORMAL: 不设置</li><li>ORDER: 顺序</li><li>REVERSE: 逆序<br>不设置默认为NORMAL</li></ul>
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
                     * 获取<p>补录实例重新生成周期，如果设置会重新指定补录任务实例的生成周期，目前只会将天实例转换成每月1号生成的实例</p><ul><li>MONTH_CYCLE: 月</li></ul>
                     * @return RedefineCycleType <p>补录实例重新生成周期，如果设置会重新指定补录任务实例的生成周期，目前只会将天实例转换成每月1号生成的实例</p><ul><li>MONTH_CYCLE: 月</li></ul>
                     * 
                     */
                    std::string GetRedefineCycleType() const;

                    /**
                     * 设置<p>补录实例重新生成周期，如果设置会重新指定补录任务实例的生成周期，目前只会将天实例转换成每月1号生成的实例</p><ul><li>MONTH_CYCLE: 月</li></ul>
                     * @param _redefineCycleType <p>补录实例重新生成周期，如果设置会重新指定补录任务实例的生成周期，目前只会将天实例转换成每月1号生成的实例</p><ul><li>MONTH_CYCLE: 月</li></ul>
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
                     * 获取<p>存算配置映射列表，对应页面“存算引擎配置”</p>
                     * @return ComputeConfigMappings <p>存算配置映射列表，对应页面“存算引擎配置”</p>
                     * 
                     */
                    std::vector<ComputeConfigMapping> GetComputeConfigMappings() const;

                    /**
                     * 设置<p>存算配置映射列表，对应页面“存算引擎配置”</p>
                     * @param _computeConfigMappings <p>存算配置映射列表，对应页面“存算引擎配置”</p>
                     * 
                     */
                    void SetComputeConfigMappings(const std::vector<ComputeConfigMapping>& _computeConfigMappings);

                    /**
                     * 判断参数 ComputeConfigMappings 是否已赋值
                     * @return ComputeConfigMappings 是否已赋值
                     * 
                     */
                    bool ComputeConfigMappingsHasBeenSet() const;

                private:

                    /**
                     * <p>所属项目Id</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>补录任务集合</p>
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * <p>补录任务的数据时间配置</p>
                     */
                    std::vector<DataBackfillRange> m_dataBackfillRangeList;
                    bool m_dataBackfillRangeListHasBeenSet;

                    /**
                     * <p>时区，默认UTC+8</p>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>数据补录计划名称，不填则由系统随机生成一串字符</p>
                     */
                    std::string m_dataBackfillPlanName;
                    bool m_dataBackfillPlanNameHasBeenSet;

                    /**
                     * <p>检查父任务类型，取值范围：- NONE-全部不检查- ALL-检查全部上游父任务- MAKE_SCOPE-只在（当前补录计划）选中任务中检查,默认NONE不检查</p>
                     */
                    std::string m_checkParentType;
                    bool m_checkParentTypeHasBeenSet;

                    /**
                     * <p>补录是否忽略事件依赖,默认true</p>
                     */
                    bool m_skipEventListening;
                    bool m_skipEventListeningHasBeenSet;

                    /**
                     * <p>自定义的工作流自依赖，yes或者no；如果不配置，则使用工作流原有自依赖</p>
                     */
                    std::string m_redefineSelfWorkflowDependency;
                    bool m_redefineSelfWorkflowDependencyHasBeenSet;

                    /**
                     * <p>自定义实例运行并发度, 如果不配置，则使用任务原有自依赖</p>
                     */
                    uint64_t m_redefineParallelNum;
                    bool m_redefineParallelNumHasBeenSet;

                    /**
                     * <p>调度资源组id，为空则表示使用任务原有调度执行资源组</p>
                     */
                    std::string m_schedulerResourceGroupId;
                    bool m_schedulerResourceGroupIdHasBeenSet;

                    /**
                     * <p>集成任务资源组id，为空则表示使用任务原有调度执行资源组</p>
                     */
                    std::string m_integrationResourceGroupId;
                    bool m_integrationResourceGroupIdHasBeenSet;

                    /**
                     * <p>自定义参数，可以重新指定任务的参数，方便补录实例执行新的逻辑</p>
                     */
                    std::vector<KVPair> m_redefineParamList;
                    bool m_redefineParamListHasBeenSet;

                    /**
                     * <p>补录是实例数据时间顺序，生效必须满足2个条件:</p><ol><li>必须同周期任务</li><li>优先按依赖关系执行，无依赖关系影响的情况下按配置执行顺序执行</li></ol><p>可选值</p><ul><li>NORMAL: 不设置</li><li>ORDER: 顺序</li><li>REVERSE: 逆序<br>不设置默认为NORMAL</li></ul>
                     */
                    std::string m_dataTimeOrder;
                    bool m_dataTimeOrderHasBeenSet;

                    /**
                     * <p>补录实例重新生成周期，如果设置会重新指定补录任务实例的生成周期，目前只会将天实例转换成每月1号生成的实例</p><ul><li>MONTH_CYCLE: 月</li></ul>
                     */
                    std::string m_redefineCycleType;
                    bool m_redefineCycleTypeHasBeenSet;

                    /**
                     * <p>存算配置映射列表，对应页面“存算引擎配置”</p>
                     */
                    std::vector<ComputeConfigMapping> m_computeConfigMappings;
                    bool m_computeConfigMappingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATABACKFILLPLANREQUEST_H_
