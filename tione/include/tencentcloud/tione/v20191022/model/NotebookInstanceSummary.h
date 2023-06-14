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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_NOTEBOOKINSTANCESUMMARY_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_NOTEBOOKINSTANCESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/StoppingCondition.h>
#include <tencentcloud/tione/v20191022/model/BillingLabel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * notebook实例概览
                */
                class NotebookInstanceSummary : public AbstractModel
                {
                public:
                    NotebookInstanceSummary();
                    ~NotebookInstanceSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifiedTime 最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifiedTime() const;

                    /**
                     * 设置最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifiedTime 最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifiedTime(const std::string& _lastModifiedTime);

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                    /**
                     * 获取notebook实例名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotebookInstanceName notebook实例名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNotebookInstanceName() const;

                    /**
                     * 设置notebook实例名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notebookInstanceName notebook实例名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotebookInstanceName(const std::string& _notebookInstanceName);

                    /**
                     * 判断参数 NotebookInstanceName 是否已赋值
                     * @return NotebookInstanceName 是否已赋值
                     * 
                     */
                    bool NotebookInstanceNameHasBeenSet() const;

                    /**
                     * 获取notebook实例状态，取值范围：
Pending: 创建中
Inservice: 运行中
Stopping: 停止中
Stopped: 已停止
Failed: 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotebookInstanceStatus notebook实例状态，取值范围：
Pending: 创建中
Inservice: 运行中
Stopping: 停止中
Stopped: 已停止
Failed: 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNotebookInstanceStatus() const;

                    /**
                     * 设置notebook实例状态，取值范围：
Pending: 创建中
Inservice: 运行中
Stopping: 停止中
Stopped: 已停止
Failed: 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notebookInstanceStatus notebook实例状态，取值范围：
Pending: 创建中
Inservice: 运行中
Stopping: 停止中
Stopped: 已停止
Failed: 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotebookInstanceStatus(const std::string& _notebookInstanceStatus);

                    /**
                     * 判断参数 NotebookInstanceStatus 是否已赋值
                     * @return NotebookInstanceStatus 是否已赋值
                     * 
                     */
                    bool NotebookInstanceStatusHasBeenSet() const;

                    /**
                     * 获取算力类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 算力类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置算力类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 算力类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupTime 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartupTime() const;

                    /**
                     * 设置启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startupTime 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartupTime(const std::string& _startupTime);

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     * 
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取运行截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deadline 运行截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置运行截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deadline 运行截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取自动停止配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoppingCondition 自动停止配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StoppingCondition GetStoppingCondition() const;

                    /**
                     * 设置自动停止配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stoppingCondition 自动停止配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStoppingCondition(const StoppingCondition& _stoppingCondition);

                    /**
                     * 判断参数 StoppingCondition 是否已赋值
                     * @return StoppingCondition 是否已赋值
                     * 
                     */
                    bool StoppingConditionHasBeenSet() const;

                    /**
                     * 获取是否是预付费实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Prepay 是否是预付费实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPrepay() const;

                    /**
                     * 设置是否是预付费实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prepay 是否是预付费实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrepay(const bool& _prepay);

                    /**
                     * 判断参数 Prepay 是否已赋值
                     * @return Prepay 是否已赋值
                     * 
                     */
                    bool PrepayHasBeenSet() const;

                    /**
                     * 获取计费标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingLabel 计费标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BillingLabel GetBillingLabel() const;

                    /**
                     * 设置计费标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingLabel 计费标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingLabel(const BillingLabel& _billingLabel);

                    /**
                     * 判断参数 BillingLabel 是否已赋值
                     * @return BillingLabel 是否已赋值
                     * 
                     */
                    bool BillingLabelHasBeenSet() const;

                    /**
                     * 获取运行时长，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeInSeconds 运行时长，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRuntimeInSeconds() const;

                    /**
                     * 设置运行时长，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimeInSeconds 运行时长，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuntimeInSeconds(const int64_t& _runtimeInSeconds);

                    /**
                     * 判断参数 RuntimeInSeconds 是否已赋值
                     * @return RuntimeInSeconds 是否已赋值
                     * 
                     */
                    bool RuntimeInSecondsHasBeenSet() const;

                    /**
                     * 获取剩余时长，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemainTimeInSeconds 剩余时长，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRemainTimeInSeconds() const;

                    /**
                     * 设置剩余时长，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remainTimeInSeconds 剩余时长，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemainTimeInSeconds(const int64_t& _remainTimeInSeconds);

                    /**
                     * 判断参数 RemainTimeInSeconds 是否已赋值
                     * @return RemainTimeInSeconds 是否已赋值
                     * 
                     */
                    bool RemainTimeInSecondsHasBeenSet() const;

                private:

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                    /**
                     * notebook实例名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notebookInstanceName;
                    bool m_notebookInstanceNameHasBeenSet;

                    /**
                     * notebook实例状态，取值范围：
Pending: 创建中
Inservice: 运行中
Stopping: 停止中
Stopped: 已停止
Failed: 失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notebookInstanceStatus;
                    bool m_notebookInstanceStatusHasBeenSet;

                    /**
                     * 算力类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * 运行截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 自动停止配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StoppingCondition m_stoppingCondition;
                    bool m_stoppingConditionHasBeenSet;

                    /**
                     * 是否是预付费实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_prepay;
                    bool m_prepayHasBeenSet;

                    /**
                     * 计费标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BillingLabel m_billingLabel;
                    bool m_billingLabelHasBeenSet;

                    /**
                     * 运行时长，秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runtimeInSeconds;
                    bool m_runtimeInSecondsHasBeenSet;

                    /**
                     * 剩余时长，秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_remainTimeInSeconds;
                    bool m_remainTimeInSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_NOTEBOOKINSTANCESUMMARY_H_
