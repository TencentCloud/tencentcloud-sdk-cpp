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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPENDINGSUBMITTASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPENDINGSUBMITTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskSubmitPreCheckDetailInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 待提交任务信息
                */
                class DescribePendingSubmitTaskInfo : public AbstractModel
                {
                public:
                    DescribePendingSubmitTaskInfo();
                    ~DescribePendingSubmitTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId <p>任务编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId <p>任务编号</p>
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
                     * 获取<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName <p>任务名称</p>
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
                     * 获取<p>修改类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyType <p>修改类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置<p>修改类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyType <p>修改类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStatus <p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置<p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskStatus <p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>提交预检查（Y/N）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmitPreCheck <p>提交预检查（Y/N）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubmitPreCheck() const;

                    /**
                     * 设置<p>提交预检查（Y/N）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submitPreCheck <p>提交预检查（Y/N）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmitPreCheck(const std::string& _submitPreCheck);

                    /**
                     * 判断参数 SubmitPreCheck 是否已赋值
                     * @return SubmitPreCheck 是否已赋值
                     * 
                     */
                    bool SubmitPreCheckHasBeenSet() const;

                    /**
                     * 获取<p>提交预检查提交可能会失败的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmitPreCheckDetailList <p>提交预检查提交可能会失败的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskSubmitPreCheckDetailInfo> GetSubmitPreCheckDetailList() const;

                    /**
                     * 设置<p>提交预检查提交可能会失败的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submitPreCheckDetailList <p>提交预检查提交可能会失败的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmitPreCheckDetailList(const std::vector<TaskSubmitPreCheckDetailInfo>& _submitPreCheckDetailList);

                    /**
                     * 判断参数 SubmitPreCheckDetailList 是否已赋值
                     * @return SubmitPreCheckDetailList 是否已赋值
                     * 
                     */
                    bool SubmitPreCheckDetailListHasBeenSet() const;

                    /**
                     * 获取<p>资源组编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupId <p>资源组编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置<p>资源组编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupId <p>资源组编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupName <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置<p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupName <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     * 
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>任务类型id，取值范围：</p><ul><li>26 离线集成任务</li><li>30 Python任务</li><li>31 PySpark任务</li><li>34 HiveSQL任务</li><li>35 Shell任务</li><li>36 SparkSQL任务</li><li>21 JdbcSQL任务</li><li>23 TDSQL-PostgreSQL任务</li><li>32 DLCSQL任务</li><li>33 Impala任务</li><li>41 Kettle任务</li><li>42 Tchouse-X任务</li><li>43 TCHouse-X SQL任务</li><li>46 DLCSpark任务</li><li>50 DLC-PySpark任务</li><li>47 TiOne任务</li><li>48 Trino任务</li><li>39 Spark任务</li><li>92 MapReduce任务</li><li>38 Shell表单模式任务</li><li>130 BranchNode任务</li><li>131 MergeNode任务</li><li>132 Notebook任务</li><li>133 SSH任务</li><li>134 StarRocks任务</li><li>137 For-each任务</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeId <p>任务类型id，取值范围：</p><ul><li>26 离线集成任务</li><li>30 Python任务</li><li>31 PySpark任务</li><li>34 HiveSQL任务</li><li>35 Shell任务</li><li>36 SparkSQL任务</li><li>21 JdbcSQL任务</li><li>23 TDSQL-PostgreSQL任务</li><li>32 DLCSQL任务</li><li>33 Impala任务</li><li>41 Kettle任务</li><li>42 Tchouse-X任务</li><li>43 TCHouse-X SQL任务</li><li>46 DLCSpark任务</li><li>50 DLC-PySpark任务</li><li>47 TiOne任务</li><li>48 Trino任务</li><li>39 Spark任务</li><li>92 MapReduce任务</li><li>38 Shell表单模式任务</li><li>130 BranchNode任务</li><li>131 MergeNode任务</li><li>132 Notebook任务</li><li>133 SSH任务</li><li>134 StarRocks任务</li><li>137 For-each任务</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskTypeId() const;

                    /**
                     * 设置<p>任务类型id，取值范围：</p><ul><li>26 离线集成任务</li><li>30 Python任务</li><li>31 PySpark任务</li><li>34 HiveSQL任务</li><li>35 Shell任务</li><li>36 SparkSQL任务</li><li>21 JdbcSQL任务</li><li>23 TDSQL-PostgreSQL任务</li><li>32 DLCSQL任务</li><li>33 Impala任务</li><li>41 Kettle任务</li><li>42 Tchouse-X任务</li><li>43 TCHouse-X SQL任务</li><li>46 DLCSpark任务</li><li>50 DLC-PySpark任务</li><li>47 TiOne任务</li><li>48 Trino任务</li><li>39 Spark任务</li><li>92 MapReduce任务</li><li>38 Shell表单模式任务</li><li>130 BranchNode任务</li><li>131 MergeNode任务</li><li>132 Notebook任务</li><li>133 SSH任务</li><li>134 StarRocks任务</li><li>137 For-each任务</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeId <p>任务类型id，取值范围：</p><ul><li>26 离线集成任务</li><li>30 Python任务</li><li>31 PySpark任务</li><li>34 HiveSQL任务</li><li>35 Shell任务</li><li>36 SparkSQL任务</li><li>21 JdbcSQL任务</li><li>23 TDSQL-PostgreSQL任务</li><li>32 DLCSQL任务</li><li>33 Impala任务</li><li>41 Kettle任务</li><li>42 Tchouse-X任务</li><li>43 TCHouse-X SQL任务</li><li>46 DLCSpark任务</li><li>50 DLC-PySpark任务</li><li>47 TiOne任务</li><li>48 Trino任务</li><li>39 Spark任务</li><li>92 MapReduce任务</li><li>38 Shell表单模式任务</li><li>130 BranchNode任务</li><li>131 MergeNode任务</li><li>132 Notebook任务</li><li>133 SSH任务</li><li>134 StarRocks任务</li><li>137 For-each任务</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeId(const int64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取<p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Privilege <p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置<p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privilege <p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                private:

                    /**
                     * <p>任务编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>修改类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * <p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>提交预检查（Y/N）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_submitPreCheck;
                    bool m_submitPreCheckHasBeenSet;

                    /**
                     * <p>提交预检查提交可能会失败的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskSubmitPreCheckDetailInfo> m_submitPreCheckDetailList;
                    bool m_submitPreCheckDetailListHasBeenSet;

                    /**
                     * <p>资源组编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * <p>任务类型id，取值范围：</p><ul><li>26 离线集成任务</li><li>30 Python任务</li><li>31 PySpark任务</li><li>34 HiveSQL任务</li><li>35 Shell任务</li><li>36 SparkSQL任务</li><li>21 JdbcSQL任务</li><li>23 TDSQL-PostgreSQL任务</li><li>32 DLCSQL任务</li><li>33 Impala任务</li><li>41 Kettle任务</li><li>42 Tchouse-X任务</li><li>43 TCHouse-X SQL任务</li><li>46 DLCSpark任务</li><li>50 DLC-PySpark任务</li><li>47 TiOne任务</li><li>48 Trino任务</li><li>39 Spark任务</li><li>92 MapReduce任务</li><li>38 Shell表单模式任务</li><li>130 BranchNode任务</li><li>131 MergeNode任务</li><li>132 Notebook任务</li><li>133 SSH任务</li><li>134 StarRocks任务</li><li>137 For-each任务</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * <p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPENDINGSUBMITTASKINFO_H_
