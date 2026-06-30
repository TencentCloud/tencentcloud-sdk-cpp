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
#include <tencentcloud/wedata/v20210820/model/MakePlanAlarmRule.h>


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
                     * 获取<p>补录计划ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlanId <p>补录计划ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置<p>补录计划ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _planId <p>补录计划ID</p>
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
                     * 获取<p>补录计划名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MakeName <p>补录计划名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMakeName() const;

                    /**
                     * 设置<p>补录计划名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _makeName <p>补录计划名称</p>
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
                     * 获取<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>补录是否检查父任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckParent <p>补录是否检查父任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCheckParent() const;

                    /**
                     * 设置<p>补录是否检查父任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkParent <p>补录是否检查父任务状态</p>
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
                     * 获取<p>是否使用任务原有自依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SameSelfDependType <p>是否使用任务原有自依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSameSelfDependType() const;

                    /**
                     * 设置<p>是否使用任务原有自依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sameSelfDependType <p>是否使用任务原有自依赖配置</p>
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
                     * 获取<p>并行度，在SameSelfDependType为false时生效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParallelNum <p>并行度，在SameSelfDependType为false时生效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetParallelNum() const;

                    /**
                     * 设置<p>并行度，在SameSelfDependType为false时生效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parallelNum <p>并行度，在SameSelfDependType为false时生效</p>
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
                     * 获取<p>补录实例生成周期是否修改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SameCycle <p>补录实例生成周期是否修改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSameCycle() const;

                    /**
                     * 设置<p>补录实例生成周期是否修改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sameCycle <p>补录实例生成周期是否修改</p>
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
                     * 获取<p>调度周期转换方式-原始周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceTaskCycle <p>调度周期转换方式-原始周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceTaskCycle() const;

                    /**
                     * 设置<p>调度周期转换方式-原始周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceTaskCycle <p>调度周期转换方式-原始周期类型</p>
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
                     * 获取<p>调度周期转换方式-目标周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetTaskCycle <p>调度周期转换方式-目标周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetTaskCycle() const;

                    /**
                     * 设置<p>调度周期转换方式-目标周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetTaskCycle <p>调度周期转换方式-目标周期类型</p>
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
                     * 获取<p>调度周期转换方式-目标周期类型指定时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetTaskAction <p>调度周期转换方式-目标周期类型指定时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTargetTaskAction() const;

                    /**
                     * 设置<p>调度周期转换方式-目标周期类型指定时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetTaskAction <p>调度周期转换方式-目标周期类型指定时间</p>
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
                     * 获取<p>补录实例自定义参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MapParamList <p>补录实例自定义参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StrToStrMap> GetMapParamList() const;

                    /**
                     * 设置<p>补录实例自定义参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mapParamList <p>补录实例自定义参数</p>
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
                     * 获取<p>补录扩展属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MakeExtList <p>补录扩展属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StrToStrMap> GetMakeExtList() const;

                    /**
                     * 设置<p>补录扩展属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _makeExtList <p>补录扩展属性</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>创建人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorId <p>创建人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置<p>创建人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorId <p>创建人ID</p>
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
                     * 获取<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator <p>创建人</p>
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
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>补录任务ID集合</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskIdList <p>补录任务ID集合</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置<p>补录任务ID集合</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskIdList <p>补录任务ID集合</p>
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
                     * 获取<p>补录计划日期范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MakeDatetimeList <p>补录计划日期范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CreateMakeDatetimeInfo> GetMakeDatetimeList() const;

                    /**
                     * 设置<p>补录计划日期范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _makeDatetimeList <p>补录计划日期范围</p>
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
                     * 获取<p>补录计划说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark <p>补录计划说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>补录计划说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark <p>补录计划说明</p>
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
                     * 获取<p>补录指定的调度资源组（ID）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerResourceGroup <p>补录指定的调度资源组（ID）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerResourceGroup() const;

                    /**
                     * 设置<p>补录指定的调度资源组（ID）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerResourceGroup <p>补录指定的调度资源组（ID）</p>
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
                     * 获取<p>补录指定的调度资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerResourceGroupName <p>补录指定的调度资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerResourceGroupName() const;

                    /**
                     * 设置<p>补录指定的调度资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerResourceGroupName <p>补录指定的调度资源组名称</p>
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
                     * 获取<p>补录指定的集成资源组（ID）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntegrationResourceGroup <p>补录指定的集成资源组（ID）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntegrationResourceGroup() const;

                    /**
                     * 设置<p>补录指定的集成资源组（ID）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _integrationResourceGroup <p>补录指定的集成资源组（ID）</p>
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
                     * 获取<p>补录指定的集成资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntegrationResourceGroupName <p>补录指定的集成资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntegrationResourceGroupName() const;

                    /**
                     * 设置<p>补录指定的集成资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _integrationResourceGroupName <p>补录指定的集成资源组名称</p>
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
                     * 获取<p>补录计划任务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskCount <p>补录计划任务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskCount() const;

                    /**
                     * 设置<p>补录计划任务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskCount <p>补录计划任务数量</p>
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
                     * 获取<p>补录计划实例完成百分数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompletePercent <p>补录计划实例完成百分数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCompletePercent() const;

                    /**
                     * 设置<p>补录计划实例完成百分数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _completePercent <p>补录计划实例完成百分数</p>
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
                     * 获取<p>补录计划实例成功百分数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessPercent <p>补录计划实例成功百分数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSuccessPercent() const;

                    /**
                     * 设置<p>补录计划实例成功百分数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successPercent <p>补录计划实例成功百分数</p>
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
                     * 获取<p>补录检查父任务类型。取值范围：</p><li> NONE: 全部不检查 </li><li> ALL: 检查全部上游父任务 </li><li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckParentType <p>补录检查父任务类型。取值范围：</p><li> NONE: 全部不检查 </li><li> ALL: 检查全部上游父任务 </li><li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCheckParentType() const;

                    /**
                     * 设置<p>补录检查父任务类型。取值范围：</p><li> NONE: 全部不检查 </li><li> ALL: 检查全部上游父任务 </li><li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkParentType <p>补录检查父任务类型。取值范围：</p><li> NONE: 全部不检查 </li><li> ALL: 检查全部上游父任务 </li><li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
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
                     * 获取<p>是否和原任务保持相同工作流自依赖属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SameSelfWorkflowDependType <p>是否和原任务保持相同工作流自依赖属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSameSelfWorkflowDependType() const;

                    /**
                     * 设置<p>是否和原任务保持相同工作流自依赖属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sameSelfWorkflowDependType <p>是否和原任务保持相同工作流自依赖属性</p>
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
                     * 获取<p>工作流自依赖类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelfWorkflowDependency <p>工作流自依赖类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelfWorkflowDependency() const;

                    /**
                     * 设置<p>工作流自依赖类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selfWorkflowDependency <p>工作流自依赖类型</p>
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
                     * 获取<p>补录时间顺序<br>NORMAL： 正常<br>ORDER ： 按照实例时间顺序执行<br>REVERSE： 实例数据时间逆序</p>
                     * @return MakeDataTimeOrder <p>补录时间顺序<br>NORMAL： 正常<br>ORDER ： 按照实例时间顺序执行<br>REVERSE： 实例数据时间逆序</p>
                     * 
                     */
                    std::string GetMakeDataTimeOrder() const;

                    /**
                     * 设置<p>补录时间顺序<br>NORMAL： 正常<br>ORDER ： 按照实例时间顺序执行<br>REVERSE： 实例数据时间逆序</p>
                     * @param _makeDataTimeOrder <p>补录时间顺序<br>NORMAL： 正常<br>ORDER ： 按照实例时间顺序执行<br>REVERSE： 实例数据时间逆序</p>
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
                     * 获取<p>补录时间范围的时区</p>
                     * @return ScheduleTimeZone <p>补录时间范围的时区</p>
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置<p>补录时间范围的时区</p>
                     * @param _scheduleTimeZone <p>补录时间范围的时区</p>
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
                     * 获取<p>执行应用参数</p>
                     * @return AppParam <p>执行应用参数</p>
                     * 
                     */
                    std::string GetAppParam() const;

                    /**
                     * 设置<p>执行应用参数</p>
                     * @param _appParam <p>执行应用参数</p>
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
                     * 获取<p>补录计划时间范围的类型：<br>DATA_TIME：实例数据时间；SCHEDULE_TIME 计划调度时间</p>
                     * @return TimeType <p>补录计划时间范围的类型：<br>DATA_TIME：实例数据时间；SCHEDULE_TIME 计划调度时间</p>
                     * 
                     */
                    std::string GetTimeType() const;

                    /**
                     * 设置<p>补录计划时间范围的类型：<br>DATA_TIME：实例数据时间；SCHEDULE_TIME 计划调度时间</p>
                     * @param _timeType <p>补录计划时间范围的类型：<br>DATA_TIME：实例数据时间；SCHEDULE_TIME 计划调度时间</p>
                     * 
                     */
                    void SetTimeType(const std::string& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>失败百分比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailurePercent <p>失败百分比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFailurePercent() const;

                    /**
                     * 设置<p>失败百分比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failurePercent <p>失败百分比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailurePercent(const int64_t& _failurePercent);

                    /**
                     * 判断参数 FailurePercent 是否已赋值
                     * @return FailurePercent 是否已赋值
                     * 
                     */
                    bool FailurePercentHasBeenSet() const;

                    /**
                     * 获取<p>补录计划的告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmRule <p>补录计划的告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MakePlanAlarmRule GetAlarmRule() const;

                    /**
                     * 设置<p>补录计划的告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmRule <p>补录计划的告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmRule(const MakePlanAlarmRule& _alarmRule);

                    /**
                     * 判断参数 AlarmRule 是否已赋值
                     * @return AlarmRule 是否已赋值
                     * 
                     */
                    bool AlarmRuleHasBeenSet() const;

                    /**
                     * 获取<p>运行类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunType <p>运行类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRunType() const;

                    /**
                     * 设置<p>运行类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runType <p>运行类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunType(const int64_t& _runType);

                    /**
                     * 判断参数 RunType 是否已赋值
                     * @return RunType 是否已赋值
                     * 
                     */
                    bool RunTypeHasBeenSet() const;

                    /**
                     * 获取<p>定时运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunDateTime <p>定时运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunDateTime() const;

                    /**
                     * 设置<p>定时运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runDateTime <p>定时运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunDateTime(const std::string& _runDateTime);

                    /**
                     * 判断参数 RunDateTime 是否已赋值
                     * @return RunDateTime 是否已赋值
                     * 
                     */
                    bool RunDateTimeHasBeenSet() const;

                    /**
                     * 获取<p>定时补录计划 或者 指定时间段补录 执行时间点的时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunScheduleTimeZone <p>定时补录计划 或者 指定时间段补录 执行时间点的时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunScheduleTimeZone() const;

                    /**
                     * 设置<p>定时补录计划 或者 指定时间段补录 执行时间点的时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runScheduleTimeZone <p>定时补录计划 或者 指定时间段补录 执行时间点的时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunScheduleTimeZone(const std::string& _runScheduleTimeZone);

                    /**
                     * 判断参数 RunScheduleTimeZone 是否已赋值
                     * @return RunScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool RunScheduleTimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>指定时间段补录开始时间</p><p>参数格式：00:00 - 23:59</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunScheduleRangeStartTime <p>指定时间段补录开始时间</p><p>参数格式：00:00 - 23:59</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunScheduleRangeStartTime() const;

                    /**
                     * 设置<p>指定时间段补录开始时间</p><p>参数格式：00:00 - 23:59</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runScheduleRangeStartTime <p>指定时间段补录开始时间</p><p>参数格式：00:00 - 23:59</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunScheduleRangeStartTime(const std::string& _runScheduleRangeStartTime);

                    /**
                     * 判断参数 RunScheduleRangeStartTime 是否已赋值
                     * @return RunScheduleRangeStartTime 是否已赋值
                     * 
                     */
                    bool RunScheduleRangeStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>指定时间段补录结束时间</p><p>参数格式：00:00 - 23:59</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunScheduleRangeEndTime <p>指定时间段补录结束时间</p><p>参数格式：00:00 - 23:59</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunScheduleRangeEndTime() const;

                    /**
                     * 设置<p>指定时间段补录结束时间</p><p>参数格式：00:00 - 23:59</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runScheduleRangeEndTime <p>指定时间段补录结束时间</p><p>参数格式：00:00 - 23:59</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunScheduleRangeEndTime(const std::string& _runScheduleRangeEndTime);

                    /**
                     * 判断参数 RunScheduleRangeEndTime 是否已赋值
                     * @return RunScheduleRangeEndTime 是否已赋值
                     * 
                     */
                    bool RunScheduleRangeEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>指定时间段补录生效日，星期一到星期日，1-7</p><p>枚举值：</p><ul><li>星期一： 1</li><li>星期二： 2</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunScheduleRangeWeekDays <p>指定时间段补录生效日，星期一到星期日，1-7</p><p>枚举值：</p><ul><li>星期一： 1</li><li>星期二： 2</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetRunScheduleRangeWeekDays() const;

                    /**
                     * 设置<p>指定时间段补录生效日，星期一到星期日，1-7</p><p>枚举值：</p><ul><li>星期一： 1</li><li>星期二： 2</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runScheduleRangeWeekDays <p>指定时间段补录生效日，星期一到星期日，1-7</p><p>枚举值：</p><ul><li>星期一： 1</li><li>星期二： 2</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunScheduleRangeWeekDays(const std::vector<int64_t>& _runScheduleRangeWeekDays);

                    /**
                     * 判断参数 RunScheduleRangeWeekDays 是否已赋值
                     * @return RunScheduleRangeWeekDays 是否已赋值
                     * 
                     */
                    bool RunScheduleRangeWeekDaysHasBeenSet() const;

                private:

                    /**
                     * <p>补录计划ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * <p>补录计划名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_makeName;
                    bool m_makeNameHasBeenSet;

                    /**
                     * <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>补录是否检查父任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_checkParent;
                    bool m_checkParentHasBeenSet;

                    /**
                     * <p>是否使用任务原有自依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_sameSelfDependType;
                    bool m_sameSelfDependTypeHasBeenSet;

                    /**
                     * <p>并行度，在SameSelfDependType为false时生效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_parallelNum;
                    bool m_parallelNumHasBeenSet;

                    /**
                     * <p>补录实例生成周期是否修改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_sameCycle;
                    bool m_sameCycleHasBeenSet;

                    /**
                     * <p>调度周期转换方式-原始周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceTaskCycle;
                    bool m_sourceTaskCycleHasBeenSet;

                    /**
                     * <p>调度周期转换方式-目标周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetTaskCycle;
                    bool m_targetTaskCycleHasBeenSet;

                    /**
                     * <p>调度周期转换方式-目标周期类型指定时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_targetTaskAction;
                    bool m_targetTaskActionHasBeenSet;

                    /**
                     * <p>补录实例自定义参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StrToStrMap> m_mapParamList;
                    bool m_mapParamListHasBeenSet;

                    /**
                     * <p>补录扩展属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StrToStrMap> m_makeExtList;
                    bool m_makeExtListHasBeenSet;

                    /**
                     * <p>创建人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>补录任务ID集合</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * <p>补录计划日期范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CreateMakeDatetimeInfo> m_makeDatetimeList;
                    bool m_makeDatetimeListHasBeenSet;

                    /**
                     * <p>补录计划说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>补录指定的调度资源组（ID）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerResourceGroup;
                    bool m_schedulerResourceGroupHasBeenSet;

                    /**
                     * <p>补录指定的调度资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerResourceGroupName;
                    bool m_schedulerResourceGroupNameHasBeenSet;

                    /**
                     * <p>补录指定的集成资源组（ID）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_integrationResourceGroup;
                    bool m_integrationResourceGroupHasBeenSet;

                    /**
                     * <p>补录指定的集成资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_integrationResourceGroupName;
                    bool m_integrationResourceGroupNameHasBeenSet;

                    /**
                     * <p>补录计划任务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * <p>补录计划实例完成百分数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_completePercent;
                    bool m_completePercentHasBeenSet;

                    /**
                     * <p>补录计划实例成功百分数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_successPercent;
                    bool m_successPercentHasBeenSet;

                    /**
                     * <p>补录检查父任务类型。取值范围：</p><li> NONE: 全部不检查 </li><li> ALL: 检查全部上游父任务 </li><li> MAKE_SCOPE: 只在（当前补录计划）选中任务中检查 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkParentType;
                    bool m_checkParentTypeHasBeenSet;

                    /**
                     * <p>是否和原任务保持相同工作流自依赖属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_sameSelfWorkflowDependType;
                    bool m_sameSelfWorkflowDependTypeHasBeenSet;

                    /**
                     * <p>工作流自依赖类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selfWorkflowDependency;
                    bool m_selfWorkflowDependencyHasBeenSet;

                    /**
                     * <p>补录时间顺序<br>NORMAL： 正常<br>ORDER ： 按照实例时间顺序执行<br>REVERSE： 实例数据时间逆序</p>
                     */
                    std::string m_makeDataTimeOrder;
                    bool m_makeDataTimeOrderHasBeenSet;

                    /**
                     * <p>补录时间范围的时区</p>
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * <p>执行应用参数</p>
                     */
                    std::string m_appParam;
                    bool m_appParamHasBeenSet;

                    /**
                     * <p>补录计划时间范围的类型：<br>DATA_TIME：实例数据时间；SCHEDULE_TIME 计划调度时间</p>
                     */
                    std::string m_timeType;
                    bool m_timeTypeHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>失败百分比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_failurePercent;
                    bool m_failurePercentHasBeenSet;

                    /**
                     * <p>补录计划的告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MakePlanAlarmRule m_alarmRule;
                    bool m_alarmRuleHasBeenSet;

                    /**
                     * <p>运行类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runType;
                    bool m_runTypeHasBeenSet;

                    /**
                     * <p>定时运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runDateTime;
                    bool m_runDateTimeHasBeenSet;

                    /**
                     * <p>定时补录计划 或者 指定时间段补录 执行时间点的时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runScheduleTimeZone;
                    bool m_runScheduleTimeZoneHasBeenSet;

                    /**
                     * <p>指定时间段补录开始时间</p><p>参数格式：00:00 - 23:59</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runScheduleRangeStartTime;
                    bool m_runScheduleRangeStartTimeHasBeenSet;

                    /**
                     * <p>指定时间段补录结束时间</p><p>参数格式：00:00 - 23:59</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runScheduleRangeEndTime;
                    bool m_runScheduleRangeEndTimeHasBeenSet;

                    /**
                     * <p>指定时间段补录生效日，星期一到星期日，1-7</p><p>枚举值：</p><ul><li>星期一： 1</li><li>星期二： 2</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_runScheduleRangeWeekDays;
                    bool m_runScheduleRangeWeekDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANOPSDTO_H_
