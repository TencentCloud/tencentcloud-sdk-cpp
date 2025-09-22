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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKBASEATTRIBUTE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKBASEATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 任务基本属性信息
                */
                class TaskBaseAttribute : public AbstractModel
                {
                public:
                    TaskBaseAttribute();
                    ~TaskBaseAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务类型ID：

* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeId 任务类型ID：

* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置任务类型ID：

* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeId 任务类型ID：

* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeId(const uint64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取最近一次保存版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskLatestVersionNo 最近一次保存版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskLatestVersionNo() const;

                    /**
                     * 设置最近一次保存版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskLatestVersionNo 最近一次保存版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskLatestVersionNo(const std::string& _taskLatestVersionNo);

                    /**
                     * 判断参数 TaskLatestVersionNo 是否已赋值
                     * @return TaskLatestVersionNo 是否已赋值
                     * 
                     */
                    bool TaskLatestVersionNoHasBeenSet() const;

                    /**
                     * 获取最近一次提交版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskLatestSubmitVersionNo 最近一次提交版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskLatestSubmitVersionNo() const;

                    /**
                     * 设置最近一次提交版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskLatestSubmitVersionNo 最近一次提交版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskLatestSubmitVersionNo(const std::string& _taskLatestSubmitVersionNo);

                    /**
                     * 判断参数 TaskLatestSubmitVersionNo 是否已赋值
                     * @return TaskLatestSubmitVersionNo 是否已赋值
                     * 
                     */
                    bool TaskLatestSubmitVersionNoHasBeenSet() const;

                    /**
                     * 获取工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取任务状态：
* N: 新建
* Y: 调度中
* F: 已下线
* O: 已暂停
* T: 下线中
* INVALID: 已失效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务状态：
* N: 新建
* Y: 调度中
* F: 已下线
* O: 已暂停
* T: 下线中
* INVALID: 已失效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态：
* N: 新建
* Y: 调度中
* F: 已下线
* O: 已暂停
* T: 下线中
* INVALID: 已失效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 任务状态：
* N: 新建
* Y: 调度中
* F: 已下线
* O: 已暂停
* T: 下线中
* INVALID: 已失效
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务最新提交状态，任务是否已经提交：true/false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Submit 任务最新提交状态，任务是否已经提交：true/false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置任务最新提交状态，任务是否已经提交：true/false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submit 任务最新提交状态，任务是否已经提交：true/false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmit(const bool& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     * 
                     */
                    bool SubmitHasBeenSet() const;

                    /**
                     * 获取任务创建时间，示例：2022-02-12 11:13:41
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 任务创建时间，示例：2022-02-12 11:13:41
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间，示例：2022-02-12 11:13:41
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 任务创建时间，示例：2022-02-12 11:13:41
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
                     * 获取最后更新时间，示例：2025-08-13 16:34:06
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime 最后更新时间，示例：2025-08-13 16:34:06
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置最后更新时间，示例：2025-08-13 16:34:06
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTime 最后更新时间，示例：2025-08-13 16:34:06
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取最后更新人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateUserName 最后更新人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdateUserName() const;

                    /**
                     * 设置最后更新人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateUserName 最后更新人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdateUserName(const std::string& _lastUpdateUserName);

                    /**
                     * 判断参数 LastUpdateUserName 是否已赋值
                     * @return LastUpdateUserName 是否已赋值
                     * 
                     */
                    bool LastUpdateUserNameHasBeenSet() const;

                    /**
                     * 获取最后运维时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastOpsTime 最后运维时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastOpsTime() const;

                    /**
                     * 设置最后运维时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastOpsTime 最后运维时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastOpsTime(const std::string& _lastOpsTime);

                    /**
                     * 判断参数 LastOpsTime 是否已赋值
                     * @return LastOpsTime 是否已赋值
                     * 
                     */
                    bool LastOpsTimeHasBeenSet() const;

                    /**
                     * 获取最后运维人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastOpsUserName 最后运维人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastOpsUserName() const;

                    /**
                     * 设置最后运维人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastOpsUserName 最后运维人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastOpsUserName(const std::string& _lastOpsUserName);

                    /**
                     * 判断参数 LastOpsUserName 是否已赋值
                     * @return LastOpsUserName 是否已赋值
                     * 
                     */
                    bool LastOpsUserNameHasBeenSet() const;

                    /**
                     * 获取任务负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 任务负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置任务负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 任务负责人ID
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
                     * 获取任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskDescription 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskDescription 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskDescription(const std::string& _taskDescription);

                    /**
                     * 判断参数 TaskDescription 是否已赋值
                     * @return TaskDescription 是否已赋值
                     * 
                     */
                    bool TaskDescriptionHasBeenSet() const;

                    /**
                     * 获取最近一次更新用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserUin 最近一次更新用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserUin() const;

                    /**
                     * 设置最近一次更新用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserUin 最近一次更新用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUserUin(const std::string& _updateUserUin);

                    /**
                     * 判断参数 UpdateUserUin 是否已赋值
                     * @return UpdateUserUin 是否已赋值
                     * 
                     */
                    bool UpdateUserUinHasBeenSet() const;

                    /**
                     * 获取创建用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserUin 创建用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置创建用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserUin 创建用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务类型ID：

* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 最近一次保存版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskLatestVersionNo;
                    bool m_taskLatestVersionNoHasBeenSet;

                    /**
                     * 最近一次提交版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskLatestSubmitVersionNo;
                    bool m_taskLatestSubmitVersionNoHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 任务状态：
* N: 新建
* Y: 调度中
* F: 已下线
* O: 已暂停
* T: 下线中
* INVALID: 已失效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务最新提交状态，任务是否已经提交：true/false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * 任务创建时间，示例：2022-02-12 11:13:41
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后更新时间，示例：2025-08-13 16:34:06
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 最后更新人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdateUserName;
                    bool m_lastUpdateUserNameHasBeenSet;

                    /**
                     * 最后运维时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastOpsTime;
                    bool m_lastOpsTimeHasBeenSet;

                    /**
                     * 最后运维人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastOpsUserName;
                    bool m_lastOpsUserNameHasBeenSet;

                    /**
                     * 任务负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * 最近一次更新用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserUin;
                    bool m_updateUserUinHasBeenSet;

                    /**
                     * 创建用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKBASEATTRIBUTE_H_
