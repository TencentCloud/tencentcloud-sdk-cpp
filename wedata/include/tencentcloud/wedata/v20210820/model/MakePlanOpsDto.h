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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/StrToStrMap.h>
#include <tencentcloud/wedata/v20210820/model/CreateMakeDatetimeInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 补录计划
                */
                class MakePlanOpsDto : public AbstractModel
                {
                public:
                    MakePlanOpsDto();
                    ~MakePlanOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取补录计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlanId 补录计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置补录计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _planId 补录计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取补录计划名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MakeName 补录计划名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMakeName() const;

                    /**
                     * 设置补录计划名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _makeName 补录计划名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取补录是否检查父任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckParent 补录是否检查父任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCheckParent() const;

                    /**
                     * 设置补录是否检查父任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkParent 补录是否检查父任务状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否使用任务原有自依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SameSelfDependType 是否使用任务原有自依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSameSelfDependType() const;

                    /**
                     * 设置是否使用任务原有自依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sameSelfDependType 是否使用任务原有自依赖配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取并行度，在SameSelfDependType为false时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParallelNum 并行度，在SameSelfDependType为false时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetParallelNum() const;

                    /**
                     * 设置并行度，在SameSelfDependType为false时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parallelNum 并行度，在SameSelfDependType为false时生效
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取补录实例生成周期是否修改
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SameCycle 补录实例生成周期是否修改
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSameCycle() const;

                    /**
                     * 设置补录实例生成周期是否修改
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sameCycle 补录实例生成周期是否修改
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取调度周期转换方式-原始周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceTaskCycle 调度周期转换方式-原始周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceTaskCycle() const;

                    /**
                     * 设置调度周期转换方式-原始周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceTaskCycle 调度周期转换方式-原始周期类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取调度周期转换方式-目标周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetTaskCycle 调度周期转换方式-目标周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetTaskCycle() const;

                    /**
                     * 设置调度周期转换方式-目标周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetTaskCycle 调度周期转换方式-目标周期类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取调度周期转换方式-目标周期类型指定时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetTaskAction 调度周期转换方式-目标周期类型指定时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTargetTaskAction() const;

                    /**
                     * 设置调度周期转换方式-目标周期类型指定时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetTaskAction 调度周期转换方式-目标周期类型指定时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MapParamList 补录实例自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StrToStrMap> GetMapParamList() const;

                    /**
                     * 设置补录实例自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mapParamList 补录实例自定义参数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorId 创建人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置创建人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorId 创建人ID
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator 创建人
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * 获取补录任务ID集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskIdList 补录任务ID集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置补录任务ID集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskIdList 补录任务ID集合
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MakeDatetimeList 补录计划日期范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CreateMakeDatetimeInfo> GetMakeDatetimeList() const;

                    /**
                     * 设置补录计划日期范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _makeDatetimeList 补录计划日期范围
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取补录计划说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 补录计划说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置补录计划说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 补录计划说明
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取补录指定的调度资源组（ID）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerResourceGroup 补录指定的调度资源组（ID）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerResourceGroup() const;

                    /**
                     * 设置补录指定的调度资源组（ID）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerResourceGroup 补录指定的调度资源组（ID）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取补录指定的调度资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerResourceGroupName 补录指定的调度资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerResourceGroupName() const;

                    /**
                     * 设置补录指定的调度资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerResourceGroupName 补录指定的调度资源组名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取补录指定的集成资源组（ID）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntegrationResourceGroup 补录指定的集成资源组（ID）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntegrationResourceGroup() const;

                    /**
                     * 设置补录指定的集成资源组（ID）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _integrationResourceGroup 补录指定的集成资源组（ID）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取补录指定的集成资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntegrationResourceGroupName 补录指定的集成资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntegrationResourceGroupName() const;

                    /**
                     * 设置补录指定的集成资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _integrationResourceGroupName 补录指定的集成资源组名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取补录计划任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskCount 补录计划任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskCount() const;

                    /**
                     * 设置补录计划任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskCount 补录计划任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskCount(const int64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取补录计划实例完成百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompletePercent 补录计划实例完成百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCompletePercent() const;

                    /**
                     * 设置补录计划实例完成百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _completePercent 补录计划实例完成百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompletePercent(const int64_t& _completePercent);

                    /**
                     * 判断参数 CompletePercent 是否已赋值
                     * @return CompletePercent 是否已赋值
                     * 
                     */
                    bool CompletePercentHasBeenSet() const;

                    /**
                     * 获取补录计划实例成功百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessPercent 补录计划实例成功百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSuccessPercent() const;

                    /**
                     * 设置补录计划实例成功百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successPercent 补录计划实例成功百分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessPercent(const int64_t& _successPercent);

                    /**
                     * 判断参数 SuccessPercent 是否已赋值
                     * @return SuccessPercent 是否已赋值
                     * 
                     */
                    bool SuccessPercentHasBeenSet() const;

                    /**
                     * 获取补录检查父任务类型。取值范围：
<li> NONE: 全部不检查 </li>
<li> ALL: 检查全部上游父任务 </li>
<li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckParentType 补录检查父任务类型。取值范围：
<li> NONE: 全部不检查 </li>
<li> ALL: 检查全部上游父任务 </li>
<li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCheckParentType() const;

                    /**
                     * 设置补录检查父任务类型。取值范围：
<li> NONE: 全部不检查 </li>
<li> ALL: 检查全部上游父任务 </li>
<li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkParentType 补录检查父任务类型。取值范围：
<li> NONE: 全部不检查 </li>
<li> ALL: 检查全部上游父任务 </li>
<li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
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
                     * 获取是否和原任务保持相同工作流自依赖属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SameSelfWorkflowDependType 是否和原任务保持相同工作流自依赖属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSameSelfWorkflowDependType() const;

                    /**
                     * 设置是否和原任务保持相同工作流自依赖属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sameSelfWorkflowDependType 是否和原任务保持相同工作流自依赖属性
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取工作流自依赖类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelfWorkflowDependency 工作流自依赖类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelfWorkflowDependency() const;

                    /**
                     * 设置工作流自依赖类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selfWorkflowDependency 工作流自依赖类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取补录时间顺序
NORMAL： 正常
ORDER ： 按照实例时间顺序执行
REVERSE： 实例数据时间逆序
                     * @return MakeDataTimeOrder 补录时间顺序
NORMAL： 正常
ORDER ： 按照实例时间顺序执行
REVERSE： 实例数据时间逆序
                     * 
                     */
                    std::string GetMakeDataTimeOrder() const;

                    /**
                     * 设置补录时间顺序
NORMAL： 正常
ORDER ： 按照实例时间顺序执行
REVERSE： 实例数据时间逆序
                     * @param _makeDataTimeOrder 补录时间顺序
NORMAL： 正常
ORDER ： 按照实例时间顺序执行
REVERSE： 实例数据时间逆序
                     * 
                     */
                    void SetMakeDataTimeOrder(const std::string& _makeDataTimeOrder);

                    /**
                     * 判断参数 MakeDataTimeOrder 是否已赋值
                     * @return MakeDataTimeOrder 是否已赋值
                     * 
                     */
                    bool MakeDataTimeOrderHasBeenSet() const;

                    /**
                     * 获取补录时间范围的时区
                     * @return ScheduleTimeZone 补录时间范围的时区
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置补录时间范围的时区
                     * @param _scheduleTimeZone 补录时间范围的时区
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                    /**
                     * 获取执行应用参数
                     * @return AppParam 执行应用参数
                     * 
                     */
                    std::string GetAppParam() const;

                    /**
                     * 设置执行应用参数
                     * @param _appParam 执行应用参数
                     * 
                     */
                    void SetAppParam(const std::string& _appParam);

                    /**
                     * 判断参数 AppParam 是否已赋值
                     * @return AppParam 是否已赋值
                     * 
                     */
                    bool AppParamHasBeenSet() const;

                    /**
                     * 获取补录计划时间范围的类型： 
DATA_TIME：实例数据时间；SCHEDULE_TIME 计划调度时间
                     * @return TimeType 补录计划时间范围的类型： 
DATA_TIME：实例数据时间；SCHEDULE_TIME 计划调度时间
                     * 
                     */
                    std::string GetTimeType() const;

                    /**
                     * 设置补录计划时间范围的类型： 
DATA_TIME：实例数据时间；SCHEDULE_TIME 计划调度时间
                     * @param _timeType 补录计划时间范围的类型： 
DATA_TIME：实例数据时间；SCHEDULE_TIME 计划调度时间
                     * 
                     */
                    void SetTimeType(const std::string& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                private:

                    /**
                     * 补录计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 补录计划名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_makeName;
                    bool m_makeNameHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 补录是否检查父任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_checkParent;
                    bool m_checkParentHasBeenSet;

                    /**
                     * 是否使用任务原有自依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_sameSelfDependType;
                    bool m_sameSelfDependTypeHasBeenSet;

                    /**
                     * 并行度，在SameSelfDependType为false时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_parallelNum;
                    bool m_parallelNumHasBeenSet;

                    /**
                     * 补录实例生成周期是否修改
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_sameCycle;
                    bool m_sameCycleHasBeenSet;

                    /**
                     * 调度周期转换方式-原始周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceTaskCycle;
                    bool m_sourceTaskCycleHasBeenSet;

                    /**
                     * 调度周期转换方式-目标周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetTaskCycle;
                    bool m_targetTaskCycleHasBeenSet;

                    /**
                     * 调度周期转换方式-目标周期类型指定时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_targetTaskAction;
                    bool m_targetTaskActionHasBeenSet;

                    /**
                     * 补录实例自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StrToStrMap> m_mapParamList;
                    bool m_mapParamListHasBeenSet;

                    /**
                     * 创建人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 补录任务ID集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * 补录计划日期范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CreateMakeDatetimeInfo> m_makeDatetimeList;
                    bool m_makeDatetimeListHasBeenSet;

                    /**
                     * 补录计划说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 补录指定的调度资源组（ID）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerResourceGroup;
                    bool m_schedulerResourceGroupHasBeenSet;

                    /**
                     * 补录指定的调度资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerResourceGroupName;
                    bool m_schedulerResourceGroupNameHasBeenSet;

                    /**
                     * 补录指定的集成资源组（ID）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_integrationResourceGroup;
                    bool m_integrationResourceGroupHasBeenSet;

                    /**
                     * 补录指定的集成资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_integrationResourceGroupName;
                    bool m_integrationResourceGroupNameHasBeenSet;

                    /**
                     * 补录计划任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * 补录计划实例完成百分数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_completePercent;
                    bool m_completePercentHasBeenSet;

                    /**
                     * 补录计划实例成功百分数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_successPercent;
                    bool m_successPercentHasBeenSet;

                    /**
                     * 补录检查父任务类型。取值范围：
<li> NONE: 全部不检查 </li>
<li> ALL: 检查全部上游父任务 </li>
<li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkParentType;
                    bool m_checkParentTypeHasBeenSet;

                    /**
                     * 是否和原任务保持相同工作流自依赖属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_sameSelfWorkflowDependType;
                    bool m_sameSelfWorkflowDependTypeHasBeenSet;

                    /**
                     * 工作流自依赖类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selfWorkflowDependency;
                    bool m_selfWorkflowDependencyHasBeenSet;

                    /**
                     * 补录时间顺序
NORMAL： 正常
ORDER ： 按照实例时间顺序执行
REVERSE： 实例数据时间逆序
                     */
                    std::string m_makeDataTimeOrder;
                    bool m_makeDataTimeOrderHasBeenSet;

                    /**
                     * 补录时间范围的时区
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * 执行应用参数
                     */
                    std::string m_appParam;
                    bool m_appParamHasBeenSet;

                    /**
                     * 补录计划时间范围的类型： 
DATA_TIME：实例数据时间；SCHEDULE_TIME 计划调度时间
                     */
                    std::string m_timeType;
                    bool m_timeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANOPSDTO_H_
