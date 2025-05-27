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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOPSMAKEPLANREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOPSMAKEPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CreateMakeDatetimeInfo.h>
#include <tencentcloud/wedata/v20210820/model/StrToStrMap.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateOpsMakePlan请求参数结构体
                */
                class CreateOpsMakePlanRequest : public AbstractModel
                {
                public:
                    CreateOpsMakePlanRequest();
                    ~CreateOpsMakePlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取补录计划名称
                     * @return MakeName 补录计划名称
                     * 
                     */
                    std::string GetMakeName() const;

                    /**
                     * 设置补录计划名称
                     * @param _makeName 补录计划名称
                     * 
                     */
                    void SetMakeName(const std::string& _makeName);

                    /**
                     * 判断参数 MakeName 是否已赋值
                     * @return MakeName 是否已赋值
                     * 
                     */
                    bool MakeNameHasBeenSet() const;

                    /**
                     * 获取补录任务集合
                     * @return TaskIdList 补录任务集合
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置补录任务集合
                     * @param _taskIdList 补录任务集合
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取补录计划日期范围
                     * @return MakeDatetimeList 补录计划日期范围
                     * 
                     */
                    std::vector<CreateMakeDatetimeInfo> GetMakeDatetimeList() const;

                    /**
                     * 设置补录计划日期范围
                     * @param _makeDatetimeList 补录计划日期范围
                     * 
                     */
                    void SetMakeDatetimeList(const std::vector<CreateMakeDatetimeInfo>& _makeDatetimeList);

                    /**
                     * 判断参数 MakeDatetimeList 是否已赋值
                     * @return MakeDatetimeList 是否已赋值
                     * 
                     */
                    bool MakeDatetimeListHasBeenSet() const;

                    /**
                     * 获取项目标识
                     * @return ProjectIdent 项目标识
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置项目标识
                     * @param _projectIdent 项目标识
                     * 
                     */
                    void SetProjectIdent(const std::string& _projectIdent);

                    /**
                     * 判断参数 ProjectIdent 是否已赋值
                     * @return ProjectIdent 是否已赋值
                     * 
                     */
                    bool ProjectIdentHasBeenSet() const;

                    /**
                     * 获取补录是否检查父任务状态，默认不检查。不推荐使用，后续会废弃，推荐使用 CheckParentType。
                     * @return CheckParent 补录是否检查父任务状态，默认不检查。不推荐使用，后续会废弃，推荐使用 CheckParentType。
                     * 
                     */
                    bool GetCheckParent() const;

                    /**
                     * 设置补录是否检查父任务状态，默认不检查。不推荐使用，后续会废弃，推荐使用 CheckParentType。
                     * @param _checkParent 补录是否检查父任务状态，默认不检查。不推荐使用，后续会废弃，推荐使用 CheckParentType。
                     * 
                     */
                    void SetCheckParent(const bool& _checkParent);

                    /**
                     * 判断参数 CheckParent 是否已赋值
                     * @return CheckParent 是否已赋值
                     * 
                     */
                    bool CheckParentHasBeenSet() const;

                    /**
                     * 获取补录检查父任务类型。取值范围：
<li> NONE: 全部不检查 </li>
<li> ALL: 检查全部上游父任务 </li>
<li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
                     * @return CheckParentType 补录检查父任务类型。取值范围：
<li> NONE: 全部不检查 </li>
<li> ALL: 检查全部上游父任务 </li>
<li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
                     * 
                     */
                    std::string GetCheckParentType() const;

                    /**
                     * 设置补录检查父任务类型。取值范围：
<li> NONE: 全部不检查 </li>
<li> ALL: 检查全部上游父任务 </li>
<li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
                     * @param _checkParentType 补录检查父任务类型。取值范围：
<li> NONE: 全部不检查 </li>
<li> ALL: 检查全部上游父任务 </li>
<li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
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
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取已弃用。任务自依赖类型：parallel（并行），serial（无序串行），orderly（有序串行）
                     * @return SelfDependence 已弃用。任务自依赖类型：parallel（并行），serial（无序串行），orderly（有序串行）
                     * 
                     */
                    std::string GetSelfDependence() const;

                    /**
                     * 设置已弃用。任务自依赖类型：parallel（并行），serial（无序串行），orderly（有序串行）
                     * @param _selfDependence 已弃用。任务自依赖类型：parallel（并行），serial（无序串行），orderly（有序串行）
                     * 
                     */
                    void SetSelfDependence(const std::string& _selfDependence);

                    /**
                     * 判断参数 SelfDependence 是否已赋值
                     * @return SelfDependence 是否已赋值
                     * 
                     */
                    bool SelfDependenceHasBeenSet() const;

                    /**
                     * 获取并行度
                     * @return ParallelNum 并行度
                     * 
                     */
                    int64_t GetParallelNum() const;

                    /**
                     * 设置并行度
                     * @param _parallelNum 并行度
                     * 
                     */
                    void SetParallelNum(const int64_t& _parallelNum);

                    /**
                     * 判断参数 ParallelNum 是否已赋值
                     * @return ParallelNum 是否已赋值
                     * 
                     */
                    bool ParallelNumHasBeenSet() const;

                    /**
                     * 获取补录实例生成周期是否和原周期相同，默认为true
                     * @return SameCycle 补录实例生成周期是否和原周期相同，默认为true
                     * 
                     */
                    bool GetSameCycle() const;

                    /**
                     * 设置补录实例生成周期是否和原周期相同，默认为true
                     * @param _sameCycle 补录实例生成周期是否和原周期相同，默认为true
                     * 
                     */
                    void SetSameCycle(const bool& _sameCycle);

                    /**
                     * 判断参数 SameCycle 是否已赋值
                     * @return SameCycle 是否已赋值
                     * 
                     */
                    bool SameCycleHasBeenSet() const;

                    /**
                     * 获取补录实例目标周期类型
                     * @return TargetTaskCycle 补录实例目标周期类型
                     * 
                     */
                    std::string GetTargetTaskCycle() const;

                    /**
                     * 设置补录实例目标周期类型
                     * @param _targetTaskCycle 补录实例目标周期类型
                     * 
                     */
                    void SetTargetTaskCycle(const std::string& _targetTaskCycle);

                    /**
                     * 判断参数 TargetTaskCycle 是否已赋值
                     * @return TargetTaskCycle 是否已赋值
                     * 
                     */
                    bool TargetTaskCycleHasBeenSet() const;

                    /**
                     * 获取补录实例目标周期类型指定时间
                     * @return TargetTaskAction 补录实例目标周期类型指定时间
                     * 
                     */
                    int64_t GetTargetTaskAction() const;

                    /**
                     * 设置补录实例目标周期类型指定时间
                     * @param _targetTaskAction 补录实例目标周期类型指定时间
                     * 
                     */
                    void SetTargetTaskAction(const int64_t& _targetTaskAction);

                    /**
                     * 判断参数 TargetTaskAction 是否已赋值
                     * @return TargetTaskAction 是否已赋值
                     * 
                     */
                    bool TargetTaskActionHasBeenSet() const;

                    /**
                     * 获取补录实例自定义参数
                     * @return MapParamList 补录实例自定义参数
                     * 
                     */
                    std::vector<StrToStrMap> GetMapParamList() const;

                    /**
                     * 设置补录实例自定义参数
                     * @param _mapParamList 补录实例自定义参数
                     * 
                     */
                    void SetMapParamList(const std::vector<StrToStrMap>& _mapParamList);

                    /**
                     * 判断参数 MapParamList 是否已赋值
                     * @return MapParamList 是否已赋值
                     * 
                     */
                    bool MapParamListHasBeenSet() const;

                    /**
                     * 获取创建人id
                     * @return CreatorId 创建人id
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置创建人id
                     * @param _creatorId 创建人id
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return Creator 创建人
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
                     * @param _creator 创建人
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取补录计划说明
                     * @return Remark 补录计划说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置补录计划说明
                     * @param _remark 补录计划说明
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否使用任务原有自依赖配置，默认为true
                     * @return SameSelfDependType 是否使用任务原有自依赖配置，默认为true
                     * 
                     */
                    bool GetSameSelfDependType() const;

                    /**
                     * 设置是否使用任务原有自依赖配置，默认为true
                     * @param _sameSelfDependType 是否使用任务原有自依赖配置，默认为true
                     * 
                     */
                    void SetSameSelfDependType(const bool& _sameSelfDependType);

                    /**
                     * 判断参数 SameSelfDependType 是否已赋值
                     * @return SameSelfDependType 是否已赋值
                     * 
                     */
                    bool SameSelfDependTypeHasBeenSet() const;

                    /**
                     * 获取补录实例原始周期类型
                     * @return SourceTaskCycle 补录实例原始周期类型
                     * 
                     */
                    std::string GetSourceTaskCycle() const;

                    /**
                     * 设置补录实例原始周期类型
                     * @param _sourceTaskCycle 补录实例原始周期类型
                     * 
                     */
                    void SetSourceTaskCycle(const std::string& _sourceTaskCycle);

                    /**
                     * 判断参数 SourceTaskCycle 是否已赋值
                     * @return SourceTaskCycle 是否已赋值
                     * 
                     */
                    bool SourceTaskCycleHasBeenSet() const;

                    /**
                     * 获取补录指定的调度资源组（ID） 为空则表示使用任务原有调度执行资源组
                     * @return SchedulerResourceGroup 补录指定的调度资源组（ID） 为空则表示使用任务原有调度执行资源组
                     * 
                     */
                    std::string GetSchedulerResourceGroup() const;

                    /**
                     * 设置补录指定的调度资源组（ID） 为空则表示使用任务原有调度执行资源组
                     * @param _schedulerResourceGroup 补录指定的调度资源组（ID） 为空则表示使用任务原有调度执行资源组
                     * 
                     */
                    void SetSchedulerResourceGroup(const std::string& _schedulerResourceGroup);

                    /**
                     * 判断参数 SchedulerResourceGroup 是否已赋值
                     * @return SchedulerResourceGroup 是否已赋值
                     * 
                     */
                    bool SchedulerResourceGroupHasBeenSet() const;

                    /**
                     * 获取补录指定的集成资源组（ID） 为空则表示使用任务原有集成执行资源组
                     * @return IntegrationResourceGroup 补录指定的集成资源组（ID） 为空则表示使用任务原有集成执行资源组
                     * 
                     */
                    std::string GetIntegrationResourceGroup() const;

                    /**
                     * 设置补录指定的集成资源组（ID） 为空则表示使用任务原有集成执行资源组
                     * @param _integrationResourceGroup 补录指定的集成资源组（ID） 为空则表示使用任务原有集成执行资源组
                     * 
                     */
                    void SetIntegrationResourceGroup(const std::string& _integrationResourceGroup);

                    /**
                     * 判断参数 IntegrationResourceGroup 是否已赋值
                     * @return IntegrationResourceGroup 是否已赋值
                     * 
                     */
                    bool IntegrationResourceGroupHasBeenSet() const;

                    /**
                     * 获取补录指定的调度资源组名称 为空则表示使用任务原有调度执行资源组
                     * @return SchedulerResourceGroupName 补录指定的调度资源组名称 为空则表示使用任务原有调度执行资源组
                     * 
                     */
                    std::string GetSchedulerResourceGroupName() const;

                    /**
                     * 设置补录指定的调度资源组名称 为空则表示使用任务原有调度执行资源组
                     * @param _schedulerResourceGroupName 补录指定的调度资源组名称 为空则表示使用任务原有调度执行资源组
                     * 
                     */
                    void SetSchedulerResourceGroupName(const std::string& _schedulerResourceGroupName);

                    /**
                     * 判断参数 SchedulerResourceGroupName 是否已赋值
                     * @return SchedulerResourceGroupName 是否已赋值
                     * 
                     */
                    bool SchedulerResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取补录指定的集成资源组名称 为空则表示使用任务原有集成执行资源组
                     * @return IntegrationResourceGroupName 补录指定的集成资源组名称 为空则表示使用任务原有集成执行资源组
                     * 
                     */
                    std::string GetIntegrationResourceGroupName() const;

                    /**
                     * 设置补录指定的集成资源组名称 为空则表示使用任务原有集成执行资源组
                     * @param _integrationResourceGroupName 补录指定的集成资源组名称 为空则表示使用任务原有集成执行资源组
                     * 
                     */
                    void SetIntegrationResourceGroupName(const std::string& _integrationResourceGroupName);

                    /**
                     * 判断参数 IntegrationResourceGroupName 是否已赋值
                     * @return IntegrationResourceGroupName 是否已赋值
                     * 
                     */
                    bool IntegrationResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取补录扩展属性
                     * @return MakeExtList 补录扩展属性
                     * 
                     */
                    std::vector<StrToStrMap> GetMakeExtList() const;

                    /**
                     * 设置补录扩展属性
                     * @param _makeExtList 补录扩展属性
                     * 
                     */
                    void SetMakeExtList(const std::vector<StrToStrMap>& _makeExtList);

                    /**
                     * 判断参数 MakeExtList 是否已赋值
                     * @return MakeExtList 是否已赋值
                     * 
                     */
                    bool MakeExtListHasBeenSet() const;

                    /**
                     * 获取补录扩展属性
                     * @return SameSelfWorkflowDependType 补录扩展属性
                     * 
                     */
                    bool GetSameSelfWorkflowDependType() const;

                    /**
                     * 设置补录扩展属性
                     * @param _sameSelfWorkflowDependType 补录扩展属性
                     * 
                     */
                    void SetSameSelfWorkflowDependType(const bool& _sameSelfWorkflowDependType);

                    /**
                     * 判断参数 SameSelfWorkflowDependType 是否已赋值
                     * @return SameSelfWorkflowDependType 是否已赋值
                     * 
                     */
                    bool SameSelfWorkflowDependTypeHasBeenSet() const;

                    /**
                     * 获取补录扩展属性
                     * @return SelfWorkflowDependency 补录扩展属性
                     * 
                     */
                    std::string GetSelfWorkflowDependency() const;

                    /**
                     * 设置补录扩展属性
                     * @param _selfWorkflowDependency 补录扩展属性
                     * 
                     */
                    void SetSelfWorkflowDependency(const std::string& _selfWorkflowDependency);

                    /**
                     * 判断参数 SelfWorkflowDependency 是否已赋值
                     * @return SelfWorkflowDependency 是否已赋值
                     * 
                     */
                    bool SelfWorkflowDependencyHasBeenSet() const;

                    /**
                     * 获取任务 TASK； 项目： PROJECT
                     * @return MakeType 任务 TASK； 项目： PROJECT
                     * 
                     */
                    std::string GetMakeType() const;

                    /**
                     * 设置任务 TASK； 项目： PROJECT
                     * @param _makeType 任务 TASK； 项目： PROJECT
                     * 
                     */
                    void SetMakeType(const std::string& _makeType);

                    /**
                     * 判断参数 MakeType 是否已赋值
                     * @return MakeType 是否已赋值
                     * 
                     */
                    bool MakeTypeHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return StatusList 任务状态
                     * 
                     */
                    std::string GetStatusList() const;

                    /**
                     * 设置任务状态
                     * @param _statusList 任务状态
                     * 
                     */
                    void SetStatusList(const std::string& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取补录是否跳过事件检查
                     * @return MakeCheckEventType 补录是否跳过事件检查
                     * 
                     */
                    std::string GetMakeCheckEventType() const;

                    /**
                     * 设置补录是否跳过事件检查
                     * @param _makeCheckEventType 补录是否跳过事件检查
                     * 
                     */
                    void SetMakeCheckEventType(const std::string& _makeCheckEventType);

                    /**
                     * 判断参数 MakeCheckEventType 是否已赋值
                     * @return MakeCheckEventType 是否已赋值
                     * 
                     */
                    bool MakeCheckEventTypeHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 补录计划名称
                     */
                    std::string m_makeName;
                    bool m_makeNameHasBeenSet;

                    /**
                     * 补录任务集合
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * 补录计划日期范围
                     */
                    std::vector<CreateMakeDatetimeInfo> m_makeDatetimeList;
                    bool m_makeDatetimeListHasBeenSet;

                    /**
                     * 项目标识
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * 补录是否检查父任务状态，默认不检查。不推荐使用，后续会废弃，推荐使用 CheckParentType。
                     */
                    bool m_checkParent;
                    bool m_checkParentHasBeenSet;

                    /**
                     * 补录检查父任务类型。取值范围：
<li> NONE: 全部不检查 </li>
<li> ALL: 检查全部上游父任务 </li>
<li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
                     */
                    std::string m_checkParentType;
                    bool m_checkParentTypeHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 已弃用。任务自依赖类型：parallel（并行），serial（无序串行），orderly（有序串行）
                     */
                    std::string m_selfDependence;
                    bool m_selfDependenceHasBeenSet;

                    /**
                     * 并行度
                     */
                    int64_t m_parallelNum;
                    bool m_parallelNumHasBeenSet;

                    /**
                     * 补录实例生成周期是否和原周期相同，默认为true
                     */
                    bool m_sameCycle;
                    bool m_sameCycleHasBeenSet;

                    /**
                     * 补录实例目标周期类型
                     */
                    std::string m_targetTaskCycle;
                    bool m_targetTaskCycleHasBeenSet;

                    /**
                     * 补录实例目标周期类型指定时间
                     */
                    int64_t m_targetTaskAction;
                    bool m_targetTaskActionHasBeenSet;

                    /**
                     * 补录实例自定义参数
                     */
                    std::vector<StrToStrMap> m_mapParamList;
                    bool m_mapParamListHasBeenSet;

                    /**
                     * 创建人id
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 补录计划说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否使用任务原有自依赖配置，默认为true
                     */
                    bool m_sameSelfDependType;
                    bool m_sameSelfDependTypeHasBeenSet;

                    /**
                     * 补录实例原始周期类型
                     */
                    std::string m_sourceTaskCycle;
                    bool m_sourceTaskCycleHasBeenSet;

                    /**
                     * 补录指定的调度资源组（ID） 为空则表示使用任务原有调度执行资源组
                     */
                    std::string m_schedulerResourceGroup;
                    bool m_schedulerResourceGroupHasBeenSet;

                    /**
                     * 补录指定的集成资源组（ID） 为空则表示使用任务原有集成执行资源组
                     */
                    std::string m_integrationResourceGroup;
                    bool m_integrationResourceGroupHasBeenSet;

                    /**
                     * 补录指定的调度资源组名称 为空则表示使用任务原有调度执行资源组
                     */
                    std::string m_schedulerResourceGroupName;
                    bool m_schedulerResourceGroupNameHasBeenSet;

                    /**
                     * 补录指定的集成资源组名称 为空则表示使用任务原有集成执行资源组
                     */
                    std::string m_integrationResourceGroupName;
                    bool m_integrationResourceGroupNameHasBeenSet;

                    /**
                     * 补录扩展属性
                     */
                    std::vector<StrToStrMap> m_makeExtList;
                    bool m_makeExtListHasBeenSet;

                    /**
                     * 补录扩展属性
                     */
                    bool m_sameSelfWorkflowDependType;
                    bool m_sameSelfWorkflowDependTypeHasBeenSet;

                    /**
                     * 补录扩展属性
                     */
                    std::string m_selfWorkflowDependency;
                    bool m_selfWorkflowDependencyHasBeenSet;

                    /**
                     * 任务 TASK； 项目： PROJECT
                     */
                    std::string m_makeType;
                    bool m_makeTypeHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * 补录是否跳过事件检查
                     */
                    std::string m_makeCheckEventType;
                    bool m_makeCheckEventTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOPSMAKEPLANREQUEST_H_
