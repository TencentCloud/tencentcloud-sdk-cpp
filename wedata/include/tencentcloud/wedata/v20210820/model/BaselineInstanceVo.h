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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINEINSTANCEVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINEINSTANCEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BaselineTaskInstanceDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 基线实例
                */
                class BaselineInstanceVo : public AbstractModel
                {
                public:
                    BaselineInstanceVo();
                    ~BaselineInstanceVo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基线实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 基线实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置基线实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 基线实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取基线id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineId 基线id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBaselineId() const;

                    /**
                     * 设置基线id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineId 基线id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineId(const int64_t& _baselineId);

                    /**
                     * 判断参数 BaselineId 是否已赋值
                     * @return BaselineId 是否已赋值
                     * 
                     */
                    bool BaselineIdHasBeenSet() const;

                    /**
                     * 获取基线名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineName 基线名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBaselineName() const;

                    /**
                     * 设置基线名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineName 基线名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineName(const std::string& _baselineName);

                    /**
                     * 判断参数 BaselineName 是否已赋值
                     * @return BaselineName 是否已赋值
                     * 
                     */
                    bool BaselineNameHasBeenSet() const;

                    /**
                     * 获取基线类型，D: 天基线 / H 小时基线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineType 基线类型，D: 天基线 / H 小时基线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBaselineType() const;

                    /**
                     * 设置基线类型，D: 天基线 / H 小时基线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineType 基线类型，D: 天基线 / H 小时基线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineType(const std::string& _baselineType);

                    /**
                     * 判断参数 BaselineType 是否已赋值
                     * @return BaselineType 是否已赋值
                     * 
                     */
                    bool BaselineTypeHasBeenSet() const;

                    /**
                     * 获取基线实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineDataTime 基线实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBaselineDataTime() const;

                    /**
                     * 设置基线实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineDataTime 基线实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineDataTime(const std::string& _baselineDataTime);

                    /**
                     * 判断参数 BaselineDataTime 是否已赋值
                     * @return BaselineDataTime 是否已赋值
                     * 
                     */
                    bool BaselineDataTimeHasBeenSet() const;

                    /**
                     * 获取基线实例生成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 基线实例生成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置基线实例生成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 基线实例生成时间
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
                     * 获取基线实例预计完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EstimatedEndTime 基线实例预计完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEstimatedEndTime() const;

                    /**
                     * 设置基线实例预计完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _estimatedEndTime 基线实例预计完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEstimatedEndTime(const std::string& _estimatedEndTime);

                    /**
                     * 判断参数 EstimatedEndTime 是否已赋值
                     * @return EstimatedEndTime 是否已赋值
                     * 
                     */
                    bool EstimatedEndTimeHasBeenSet() const;

                    /**
                     * 获取基线实例状态，P:暂停/ SF:安全/ WN:预警/ BL:破线 / TF:任务失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineInstanceStatus 基线实例状态，P:暂停/ SF:安全/ WN:预警/ BL:破线 / TF:任务失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBaselineInstanceStatus() const;

                    /**
                     * 设置基线实例状态，P:暂停/ SF:安全/ WN:预警/ BL:破线 / TF:任务失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineInstanceStatus 基线实例状态，P:暂停/ SF:安全/ WN:预警/ BL:破线 / TF:任务失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineInstanceStatus(const std::string& _baselineInstanceStatus);

                    /**
                     * 判断参数 BaselineInstanceStatus 是否已赋值
                     * @return BaselineInstanceStatus 是否已赋值
                     * 
                     */
                    bool BaselineInstanceStatusHasBeenSet() const;

                    /**
                     * 获取责任人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InChargeUin 责任人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInChargeUin() const;

                    /**
                     * 设置责任人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inChargeUin 责任人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInChargeUin(const std::string& _inChargeUin);

                    /**
                     * 判断参数 InChargeUin 是否已赋值
                     * @return InChargeUin 是否已赋值
                     * 
                     */
                    bool InChargeUinHasBeenSet() const;

                    /**
                     * 获取责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InChargeName 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInChargeName() const;

                    /**
                     * 设置责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inChargeName 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInChargeName(const std::string& _inChargeName);

                    /**
                     * 判断参数 InChargeName 是否已赋值
                     * @return InChargeName 是否已赋值
                     * 
                     */
                    bool InChargeNameHasBeenSet() const;

                    /**
                     * 获取预警余量/单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarningMargin 预警余量/单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWarningMargin() const;

                    /**
                     * 设置预警余量/单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warningMargin 预警余量/单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarningMargin(const int64_t& _warningMargin);

                    /**
                     * 判断参数 WarningMargin 是否已赋值
                     * @return WarningMargin 是否已赋值
                     * 
                     */
                    bool WarningMarginHasBeenSet() const;

                    /**
                     * 获取承诺时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PromiseTime 承诺时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPromiseTime() const;

                    /**
                     * 设置承诺时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _promiseTime 承诺时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPromiseTime(const std::string& _promiseTime);

                    /**
                     * 判断参数 PromiseTime 是否已赋值
                     * @return PromiseTime 是否已赋值
                     * 
                     */
                    bool PromiseTimeHasBeenSet() const;

                    /**
                     * 获取告警级别 N: 普通 / I重要 / E: 紧急
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmLevel 告警级别 N: 普通 / I重要 / E: 紧急
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmLevel() const;

                    /**
                     * 设置告警级别 N: 普通 / I重要 / E: 紧急
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmLevel 告警级别 N: 普通 / I重要 / E: 紧急
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmLevel(const std::string& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
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
                     * 获取基线实例ready状态。NEW_GENERATED_INSTANCE:产生实例/RENDER_DAG:渲染DAG/CALCULATE_PATH:计算路径/COMPLETE:完成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsReady 基线实例ready状态。NEW_GENERATED_INSTANCE:产生实例/RENDER_DAG:渲染DAG/CALCULATE_PATH:计算路径/COMPLETE:完成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsReady() const;

                    /**
                     * 设置基线实例ready状态。NEW_GENERATED_INSTANCE:产生实例/RENDER_DAG:渲染DAG/CALCULATE_PATH:计算路径/COMPLETE:完成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isReady 基线实例ready状态。NEW_GENERATED_INSTANCE:产生实例/RENDER_DAG:渲染DAG/CALCULATE_PATH:计算路径/COMPLETE:完成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsReady(const std::string& _isReady);

                    /**
                     * 判断参数 IsReady 是否已赋值
                     * @return IsReady 是否已赋值
                     * 
                     */
                    bool IsReadyHasBeenSet() const;

                    /**
                     * 获取该基线由哪个机器处理
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShardKey 该基线由哪个机器处理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShardKey() const;

                    /**
                     * 设置该基线由哪个机器处理
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shardKey 该基线由哪个机器处理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShardKey(const std::string& _shardKey);

                    /**
                     * 判断参数 ShardKey 是否已赋值
                     * @return ShardKey 是否已赋值
                     * 
                     */
                    bool ShardKeyHasBeenSet() const;

                    /**
                     * 获取异常任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExceptionalTaskInstances 异常任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BaselineTaskInstanceDto> GetExceptionalTaskInstances() const;

                    /**
                     * 设置异常任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exceptionalTaskInstances 异常任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExceptionalTaskInstances(const std::vector<BaselineTaskInstanceDto>& _exceptionalTaskInstances);

                    /**
                     * 判断参数 ExceptionalTaskInstances 是否已赋值
                     * @return ExceptionalTaskInstances 是否已赋值
                     * 
                     */
                    bool ExceptionalTaskInstancesHasBeenSet() const;

                    /**
                     * 获取关联的所有任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskInstances 关联的所有任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BaselineTaskInstanceDto> GetTaskInstances() const;

                    /**
                     * 设置关联的所有任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskInstances 关联的所有任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskInstances(const std::vector<BaselineTaskInstanceDto>& _taskInstances);

                    /**
                     * 判断参数 TaskInstances 是否已赋值
                     * @return TaskInstances 是否已赋值
                     * 
                     */
                    bool TaskInstancesHasBeenSet() const;

                    /**
                     * 获取任务实例DAG整体启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CriticalStartTime 任务实例DAG整体启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCriticalStartTime() const;

                    /**
                     * 设置任务实例DAG整体启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _criticalStartTime 任务实例DAG整体启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCriticalStartTime(const std::string& _criticalStartTime);

                    /**
                     * 判断参数 CriticalStartTime 是否已赋值
                     * @return CriticalStartTime 是否已赋值
                     * 
                     */
                    bool CriticalStartTimeHasBeenSet() const;

                    /**
                     * 获取基线实例上的关键任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CriticalTaskInstances 基线实例上的关键任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BaselineTaskInstanceDto> GetCriticalTaskInstances() const;

                    /**
                     * 设置基线实例上的关键任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _criticalTaskInstances 基线实例上的关键任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCriticalTaskInstances(const std::vector<BaselineTaskInstanceDto>& _criticalTaskInstances);

                    /**
                     * 判断参数 CriticalTaskInstances 是否已赋值
                     * @return CriticalTaskInstances 是否已赋值
                     * 
                     */
                    bool CriticalTaskInstancesHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
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
                     * 获取基线实例与保障任务实例映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineTaskInstances 基线实例与保障任务实例映射
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BaselineTaskInstanceDto> GetBaselineTaskInstances() const;

                    /**
                     * 设置基线实例与保障任务实例映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineTaskInstances 基线实例与保障任务实例映射
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineTaskInstances(const std::vector<BaselineTaskInstanceDto>& _baselineTaskInstances);

                    /**
                     * 判断参数 BaselineTaskInstances 是否已赋值
                     * @return BaselineTaskInstances 是否已赋值
                     * 
                     */
                    bool BaselineTaskInstancesHasBeenSet() const;

                    /**
                     * 获取租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserUin 当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userUin 当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                private:

                    /**
                     * 基线实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 基线id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_baselineId;
                    bool m_baselineIdHasBeenSet;

                    /**
                     * 基线名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_baselineName;
                    bool m_baselineNameHasBeenSet;

                    /**
                     * 基线类型，D: 天基线 / H 小时基线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_baselineType;
                    bool m_baselineTypeHasBeenSet;

                    /**
                     * 基线实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_baselineDataTime;
                    bool m_baselineDataTimeHasBeenSet;

                    /**
                     * 基线实例生成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 基线实例预计完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_estimatedEndTime;
                    bool m_estimatedEndTimeHasBeenSet;

                    /**
                     * 基线实例状态，P:暂停/ SF:安全/ WN:预警/ BL:破线 / TF:任务失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_baselineInstanceStatus;
                    bool m_baselineInstanceStatusHasBeenSet;

                    /**
                     * 责任人uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inChargeUin;
                    bool m_inChargeUinHasBeenSet;

                    /**
                     * 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inChargeName;
                    bool m_inChargeNameHasBeenSet;

                    /**
                     * 预警余量/单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_warningMargin;
                    bool m_warningMarginHasBeenSet;

                    /**
                     * 承诺时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_promiseTime;
                    bool m_promiseTimeHasBeenSet;

                    /**
                     * 告警级别 N: 普通 / I重要 / E: 紧急
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 基线实例ready状态。NEW_GENERATED_INSTANCE:产生实例/RENDER_DAG:渲染DAG/CALCULATE_PATH:计算路径/COMPLETE:完成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isReady;
                    bool m_isReadyHasBeenSet;

                    /**
                     * 该基线由哪个机器处理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shardKey;
                    bool m_shardKeyHasBeenSet;

                    /**
                     * 异常任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BaselineTaskInstanceDto> m_exceptionalTaskInstances;
                    bool m_exceptionalTaskInstancesHasBeenSet;

                    /**
                     * 关联的所有任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BaselineTaskInstanceDto> m_taskInstances;
                    bool m_taskInstancesHasBeenSet;

                    /**
                     * 任务实例DAG整体启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_criticalStartTime;
                    bool m_criticalStartTimeHasBeenSet;

                    /**
                     * 基线实例上的关键任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BaselineTaskInstanceDto> m_criticalTaskInstances;
                    bool m_criticalTaskInstancesHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 基线实例与保障任务实例映射
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BaselineTaskInstanceDto> m_baselineTaskInstances;
                    bool m_baselineTaskInstancesHasBeenSet;

                    /**
                     * 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINEINSTANCEVO_H_
