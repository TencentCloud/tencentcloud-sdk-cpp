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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLICATION_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 审批申请单
                */
                class Application : public AbstractModel
                {
                public:
                    Application();
                    ~Application() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审批单号
                     * @return ApplicationId 审批单号
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置审批单号
                     * @param _applicationId 审批单号
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取申请类型
                     * @return ApplicationType 申请类型
                     * 
                     */
                    int64_t GetApplicationType() const;

                    /**
                     * 设置申请类型
                     * @param _applicationType 申请类型
                     * 
                     */
                    void SetApplicationType(const int64_t& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取集群Id
                     * @return ClusterId 集群Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id
                     * @param _clusterId 集群Id
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
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取表格组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableGroupName 表格组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableGroupName() const;

                    /**
                     * 设置表格组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableGroupName 表格组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableGroupName(const std::string& _tableGroupName);

                    /**
                     * 判断参数 TableGroupName 是否已赋值
                     * @return TableGroupName 是否已赋值
                     * 
                     */
                    bool TableGroupNameHasBeenSet() const;

                    /**
                     * 获取表格名称
                     * @return TableName 表格名称
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表格名称
                     * @param _tableName 表格名称
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取申请人
                     * @return Applicant 申请人
                     * 
                     */
                    std::string GetApplicant() const;

                    /**
                     * 设置申请人
                     * @param _applicant 申请人
                     * 
                     */
                    void SetApplicant(const std::string& _applicant);

                    /**
                     * 判断参数 Applicant 是否已赋值
                     * @return Applicant 是否已赋值
                     * 
                     */
                    bool ApplicantHasBeenSet() const;

                    /**
                     * 获取建单时间
                     * @return CreatedTime 建单时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置建单时间
                     * @param _createdTime 建单时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取处理状态 -1 撤回 0-待审核 1-已经审核并提交任务 2-已驳回
                     * @return ApplicationStatus 处理状态 -1 撤回 0-待审核 1-已经审核并提交任务 2-已驳回
                     * 
                     */
                    int64_t GetApplicationStatus() const;

                    /**
                     * 设置处理状态 -1 撤回 0-待审核 1-已经审核并提交任务 2-已驳回
                     * @param _applicationStatus 处理状态 -1 撤回 0-待审核 1-已经审核并提交任务 2-已驳回
                     * 
                     */
                    void SetApplicationStatus(const int64_t& _applicationStatus);

                    /**
                     * 判断参数 ApplicationStatus 是否已赋值
                     * @return ApplicationStatus 是否已赋值
                     * 
                     */
                    bool ApplicationStatusHasBeenSet() const;

                    /**
                     * 获取表格组Id
                     * @return TableGroupId 表格组Id
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置表格组Id
                     * @param _tableGroupId 表格组Id
                     * 
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取已提交的任务Id，未提交申请为0
                     * @return TaskId 已提交的任务Id，未提交申请为0
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置已提交的任务Id，未提交申请为0
                     * @param _taskId 已提交的任务Id，未提交申请为0
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
                     * 获取腾讯云上table的唯一键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableInstanceId 腾讯云上table的唯一键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置腾讯云上table的唯一键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableInstanceId 腾讯云上table的唯一键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableInstanceId(const std::string& _tableInstanceId);

                    /**
                     * 判断参数 TableInstanceId 是否已赋值
                     * @return TableInstanceId 是否已赋值
                     * 
                     */
                    bool TableInstanceIdHasBeenSet() const;

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
                     * 获取审批人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteUser 审批人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteUser() const;

                    /**
                     * 设置审批人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeUser 审批人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecuteUser(const std::string& _executeUser);

                    /**
                     * 判断参数 ExecuteUser 是否已赋值
                     * @return ExecuteUser 是否已赋值
                     * 
                     */
                    bool ExecuteUserHasBeenSet() const;

                    /**
                     * 获取执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteStatus 执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteStatus() const;

                    /**
                     * 设置执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeStatus 执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecuteStatus(const std::string& _executeStatus);

                    /**
                     * 判断参数 ExecuteStatus 是否已赋值
                     * @return ExecuteStatus 是否已赋值
                     * 
                     */
                    bool ExecuteStatusHasBeenSet() const;

                    /**
                     * 获取该申请单是否可以被当前用户审批
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanCensor 该申请单是否可以被当前用户审批
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanCensor() const;

                    /**
                     * 设置该申请单是否可以被当前用户审批
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canCensor 该申请单是否可以被当前用户审批
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanCensor(const bool& _canCensor);

                    /**
                     * 判断参数 CanCensor 是否已赋值
                     * @return CanCensor 是否已赋值
                     * 
                     */
                    bool CanCensorHasBeenSet() const;

                    /**
                     * 获取该申请单是否可以被当前用户撤回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanWithdrawal 该申请单是否可以被当前用户撤回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanWithdrawal() const;

                    /**
                     * 设置该申请单是否可以被当前用户撤回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canWithdrawal 该申请单是否可以被当前用户撤回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanWithdrawal(const bool& _canWithdrawal);

                    /**
                     * 判断参数 CanWithdrawal 是否已赋值
                     * @return CanWithdrawal 是否已赋值
                     * 
                     */
                    bool CanWithdrawalHasBeenSet() const;

                private:

                    /**
                     * 审批单号
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 申请类型
                     */
                    int64_t m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 表格组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableGroupName;
                    bool m_tableGroupNameHasBeenSet;

                    /**
                     * 表格名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 申请人
                     */
                    std::string m_applicant;
                    bool m_applicantHasBeenSet;

                    /**
                     * 建单时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 处理状态 -1 撤回 0-待审核 1-已经审核并提交任务 2-已驳回
                     */
                    int64_t m_applicationStatus;
                    bool m_applicationStatusHasBeenSet;

                    /**
                     * 表格组Id
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 已提交的任务Id，未提交申请为0
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 腾讯云上table的唯一键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 审批人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeUser;
                    bool m_executeUserHasBeenSet;

                    /**
                     * 执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeStatus;
                    bool m_executeStatusHasBeenSet;

                    /**
                     * 该申请单是否可以被当前用户审批
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canCensor;
                    bool m_canCensorHasBeenSet;

                    /**
                     * 该申请单是否可以被当前用户撤回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canWithdrawal;
                    bool m_canWithdrawalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLICATION_H_
