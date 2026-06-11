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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERSERVERLESSSCALEPLAN_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERSERVERLESSSCALEPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 集群Serveless弹性计划
                */
                class ClusterServerlessScalePlan : public AbstractModel
                {
                public:
                    ClusterServerlessScalePlan();
                    ~ClusterServerlessScalePlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>计划ID</p>
                     * @return PlanId <p>计划ID</p>
                     * 
                     */
                    int64_t GetPlanId() const;

                    /**
                     * 设置<p>计划ID</p>
                     * @param _planId <p>计划ID</p>
                     * 
                     */
                    void SetPlanId(const int64_t& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>实例对象。具体是实例id或者类型。比如ro-即集群下的所有只读实例。</p>
                     * @return ObjectInstance <p>实例对象。具体是实例id或者类型。比如ro-即集群下的所有只读实例。</p>
                     * 
                     */
                    std::string GetObjectInstance() const;

                    /**
                     * 设置<p>实例对象。具体是实例id或者类型。比如ro-即集群下的所有只读实例。</p>
                     * @param _objectInstance <p>实例对象。具体是实例id或者类型。比如ro-即集群下的所有只读实例。</p>
                     * 
                     */
                    void SetObjectInstance(const std::string& _objectInstance);

                    /**
                     * 判断参数 ObjectInstance 是否已赋值
                     * @return ObjectInstance 是否已赋值
                     * 
                     */
                    bool ObjectInstanceHasBeenSet() const;

                    /**
                     * 获取<p>策略ID</p>
                     * @return PolicyId <p>策略ID</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>策略ID</p>
                     * @param _policyId <p>策略ID</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>策略类型</p>
                     * @return PolicyType <p>策略类型</p>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>策略类型</p>
                     * @param _policyType <p>策略类型</p>
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取<p>原规格下限</p>
                     * @return SourceMinCpu <p>原规格下限</p>
                     * 
                     */
                    double GetSourceMinCpu() const;

                    /**
                     * 设置<p>原规格下限</p>
                     * @param _sourceMinCpu <p>原规格下限</p>
                     * 
                     */
                    void SetSourceMinCpu(const double& _sourceMinCpu);

                    /**
                     * 判断参数 SourceMinCpu 是否已赋值
                     * @return SourceMinCpu 是否已赋值
                     * 
                     */
                    bool SourceMinCpuHasBeenSet() const;

                    /**
                     * 获取<p>原规格上限</p>
                     * @return SourceMaxCpu <p>原规格上限</p>
                     * 
                     */
                    double GetSourceMaxCpu() const;

                    /**
                     * 设置<p>原规格上限</p>
                     * @param _sourceMaxCpu <p>原规格上限</p>
                     * 
                     */
                    void SetSourceMaxCpu(const double& _sourceMaxCpu);

                    /**
                     * 判断参数 SourceMaxCpu 是否已赋值
                     * @return SourceMaxCpu 是否已赋值
                     * 
                     */
                    bool SourceMaxCpuHasBeenSet() const;

                    /**
                     * 获取<p>原规格下限</p>
                     * @return TargetMinCpu <p>原规格下限</p>
                     * 
                     */
                    double GetTargetMinCpu() const;

                    /**
                     * 设置<p>原规格下限</p>
                     * @param _targetMinCpu <p>原规格下限</p>
                     * 
                     */
                    void SetTargetMinCpu(const double& _targetMinCpu);

                    /**
                     * 判断参数 TargetMinCpu 是否已赋值
                     * @return TargetMinCpu 是否已赋值
                     * 
                     */
                    bool TargetMinCpuHasBeenSet() const;

                    /**
                     * 获取<p>原规格上限</p>
                     * @return TargetMaxCpu <p>原规格上限</p>
                     * 
                     */
                    double GetTargetMaxCpu() const;

                    /**
                     * 设置<p>原规格上限</p>
                     * @param _targetMaxCpu <p>原规格上限</p>
                     * 
                     */
                    void SetTargetMaxCpu(const double& _targetMaxCpu);

                    /**
                     * 判断参数 TargetMaxCpu 是否已赋值
                     * @return TargetMaxCpu 是否已赋值
                     * 
                     */
                    bool TargetMaxCpuHasBeenSet() const;

                    /**
                     * 获取<p>计划状态</p>
                     * @return Status <p>计划状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>计划状态</p>
                     * @param _status <p>计划状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>弹性任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaleTaskId <p>弹性任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScaleTaskId() const;

                    /**
                     * 设置<p>弹性任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaleTaskId <p>弹性任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScaleTaskId(const int64_t& _scaleTaskId);

                    /**
                     * 判断参数 ScaleTaskId 是否已赋值
                     * @return ScaleTaskId 是否已赋值
                     * 
                     */
                    bool ScaleTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailReason <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置<p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failReason <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取<p>计划预期开始执行时间</p>
                     * @return ExpectedStartTime <p>计划预期开始执行时间</p>
                     * 
                     */
                    std::string GetExpectedStartTime() const;

                    /**
                     * 设置<p>计划预期开始执行时间</p>
                     * @param _expectedStartTime <p>计划预期开始执行时间</p>
                     * 
                     */
                    void SetExpectedStartTime(const std::string& _expectedStartTime);

                    /**
                     * 判断参数 ExpectedStartTime 是否已赋值
                     * @return ExpectedStartTime 是否已赋值
                     * 
                     */
                    bool ExpectedStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>计划预期结束时间</p>
                     * @return ExpectedEndTime <p>计划预期结束时间</p>
                     * 
                     */
                    std::string GetExpectedEndTime() const;

                    /**
                     * 设置<p>计划预期结束时间</p>
                     * @param _expectedEndTime <p>计划预期结束时间</p>
                     * 
                     */
                    void SetExpectedEndTime(const std::string& _expectedEndTime);

                    /**
                     * 判断参数 ExpectedEndTime 是否已赋值
                     * @return ExpectedEndTime 是否已赋值
                     * 
                     */
                    bool ExpectedEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>恢复自动弹性任务</p>
                     * @return ResetTaskId <p>恢复自动弹性任务</p>
                     * 
                     */
                    int64_t GetResetTaskId() const;

                    /**
                     * 设置<p>恢复自动弹性任务</p>
                     * @param _resetTaskId <p>恢复自动弹性任务</p>
                     * 
                     */
                    void SetResetTaskId(const int64_t& _resetTaskId);

                    /**
                     * 判断参数 ResetTaskId 是否已赋值
                     * @return ResetTaskId 是否已赋值
                     * 
                     */
                    bool ResetTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>恢复自动弹性任务执行方式</p>
                     * @return ResetType <p>恢复自动弹性任务执行方式</p>
                     * 
                     */
                    std::string GetResetType() const;

                    /**
                     * 设置<p>恢复自动弹性任务执行方式</p>
                     * @param _resetType <p>恢复自动弹性任务执行方式</p>
                     * 
                     */
                    void SetResetType(const std::string& _resetType);

                    /**
                     * 判断参数 ResetType 是否已赋值
                     * @return ResetType 是否已赋值
                     * 
                     */
                    bool ResetTypeHasBeenSet() const;

                    /**
                     * 获取<p>恢复自动弹性任务执行时间</p>
                     * @return ResetTime <p>恢复自动弹性任务执行时间</p>
                     * 
                     */
                    std::string GetResetTime() const;

                    /**
                     * 设置<p>恢复自动弹性任务执行时间</p>
                     * @param _resetTime <p>恢复自动弹性任务执行时间</p>
                     * 
                     */
                    void SetResetTime(const std::string& _resetTime);

                    /**
                     * 判断参数 ResetTime 是否已赋值
                     * @return ResetTime 是否已赋值
                     * 
                     */
                    bool ResetTimeHasBeenSet() const;

                private:

                    /**
                     * <p>计划ID</p>
                     */
                    int64_t m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>实例对象。具体是实例id或者类型。比如ro-即集群下的所有只读实例。</p>
                     */
                    std::string m_objectInstance;
                    bool m_objectInstanceHasBeenSet;

                    /**
                     * <p>策略ID</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>策略类型</p>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>原规格下限</p>
                     */
                    double m_sourceMinCpu;
                    bool m_sourceMinCpuHasBeenSet;

                    /**
                     * <p>原规格上限</p>
                     */
                    double m_sourceMaxCpu;
                    bool m_sourceMaxCpuHasBeenSet;

                    /**
                     * <p>原规格下限</p>
                     */
                    double m_targetMinCpu;
                    bool m_targetMinCpuHasBeenSet;

                    /**
                     * <p>原规格上限</p>
                     */
                    double m_targetMaxCpu;
                    bool m_targetMaxCpuHasBeenSet;

                    /**
                     * <p>计划状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>弹性任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scaleTaskId;
                    bool m_scaleTaskIdHasBeenSet;

                    /**
                     * <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * <p>计划预期开始执行时间</p>
                     */
                    std::string m_expectedStartTime;
                    bool m_expectedStartTimeHasBeenSet;

                    /**
                     * <p>计划预期结束时间</p>
                     */
                    std::string m_expectedEndTime;
                    bool m_expectedEndTimeHasBeenSet;

                    /**
                     * <p>恢复自动弹性任务</p>
                     */
                    int64_t m_resetTaskId;
                    bool m_resetTaskIdHasBeenSet;

                    /**
                     * <p>恢复自动弹性任务执行方式</p>
                     */
                    std::string m_resetType;
                    bool m_resetTypeHasBeenSet;

                    /**
                     * <p>恢复自动弹性任务执行时间</p>
                     */
                    std::string m_resetTime;
                    bool m_resetTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERSERVERLESSSCALEPLAN_H_
