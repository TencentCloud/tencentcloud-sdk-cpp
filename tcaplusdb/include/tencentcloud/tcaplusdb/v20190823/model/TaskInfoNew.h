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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TASKINFONEW_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TASKINFONEW_H_

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
                * 任务信息详情
                */
                class TaskInfoNew : public AbstractModel
                {
                public:
                    TaskInfoNew();
                    ~TaskInfoNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取任务类型
                     * @return TaskType 任务类型
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
                     * @param _taskType 任务类型
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务所关联的TcaplusDB内部事务ID
                     * @return TransId 任务所关联的TcaplusDB内部事务ID
                     * 
                     */
                    std::string GetTransId() const;

                    /**
                     * 设置任务所关联的TcaplusDB内部事务ID
                     * @param _transId 任务所关联的TcaplusDB内部事务ID
                     * 
                     */
                    void SetTransId(const std::string& _transId);

                    /**
                     * 判断参数 TransId 是否已赋值
                     * @return TransId 是否已赋值
                     * 
                     */
                    bool TransIdHasBeenSet() const;

                    /**
                     * 获取任务所属集群ID
                     * @return ClusterId 任务所属集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置任务所属集群ID
                     * @param _clusterId 任务所属集群ID
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
                     * 获取任务所属集群名称
                     * @return ClusterName 任务所属集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置任务所属集群名称
                     * @param _clusterName 任务所属集群名称
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
                     * 获取任务进度
                     * @return Progress 任务进度
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置任务进度
                     * @param _progress 任务进度
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return StartTime 任务创建时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _startTime 任务创建时间
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
                     * 获取任务最后更新时间
                     * @return UpdateTime 任务最后更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置任务最后更新时间
                     * @param _updateTime 任务最后更新时间
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
                     * 获取操作者
                     * @return Operator 操作者
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者
                     * @param _operator 操作者
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取任务详情
                     * @return Content 任务详情
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置任务详情
                     * @param _content 任务详情
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableGroupId 表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableGroupId 表格组ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务所关联的TcaplusDB内部事务ID
                     */
                    std::string m_transId;
                    bool m_transIdHasBeenSet;

                    /**
                     * 任务所属集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 任务所属集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 任务进度
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务最后更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 操作者
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 任务详情
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 表格组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableGroupName;
                    bool m_tableGroupNameHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TASKINFONEW_H_
