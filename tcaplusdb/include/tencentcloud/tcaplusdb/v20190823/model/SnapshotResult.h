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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SNAPSHOTRESULT_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SNAPSHOTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 创建快照结果
                */
                class SnapshotResult : public AbstractModel
                {
                public:
                    SnapshotResult();
                    ~SnapshotResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表格所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableGroupId 表格所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置表格所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableGroupId 表格所属表格组ID
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
                     * 获取表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表格名称
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

                    /**
                     * 获取任务ID，对于创建单任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID，对于创建单任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID，对于创建单任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID，对于创建单任务的接口有效
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
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取快照名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotName 快照名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置快照名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotName 快照名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取快照的时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotTime 快照的时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotTime() const;

                    /**
                     * 设置快照的时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotTime 快照的时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotTime(const std::string& _snapshotTime);

                    /**
                     * 判断参数 SnapshotTime 是否已赋值
                     * @return SnapshotTime 是否已赋值
                     * 
                     */
                    bool SnapshotTimeHasBeenSet() const;

                    /**
                     * 获取快照的过期时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotDeadTime 快照的过期时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotDeadTime() const;

                    /**
                     * 设置快照的过期时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotDeadTime 快照的过期时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotDeadTime(const std::string& _snapshotDeadTime);

                    /**
                     * 判断参数 SnapshotDeadTime 是否已赋值
                     * @return SnapshotDeadTime 是否已赋值
                     * 
                     */
                    bool SnapshotDeadTimeHasBeenSet() const;

                    /**
                     * 获取快照创建时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotCreateTime 快照创建时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotCreateTime() const;

                    /**
                     * 设置快照创建时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotCreateTime 快照创建时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotCreateTime(const std::string& _snapshotCreateTime);

                    /**
                     * 判断参数 SnapshotCreateTime 是否已赋值
                     * @return SnapshotCreateTime 是否已赋值
                     * 
                     */
                    bool SnapshotCreateTimeHasBeenSet() const;

                    /**
                     * 获取快照大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotSize 快照大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSnapshotSize() const;

                    /**
                     * 设置快照大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotSize 快照大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotSize(const uint64_t& _snapshotSize);

                    /**
                     * 判断参数 SnapshotSize 是否已赋值
                     * @return SnapshotSize 是否已赋值
                     * 
                     */
                    bool SnapshotSizeHasBeenSet() const;

                    /**
                     * 获取快照状态，0 生成中 1 正常 2 删除中 3 已失效 4 回档使用中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotStatus 快照状态，0 生成中 1 正常 2 删除中 3 已失效 4 回档使用中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSnapshotStatus() const;

                    /**
                     * 设置快照状态，0 生成中 1 正常 2 删除中 3 已失效 4 回档使用中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotStatus 快照状态，0 生成中 1 正常 2 删除中 3 已失效 4 回档使用中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotStatus(const uint64_t& _snapshotStatus);

                    /**
                     * 判断参数 SnapshotStatus 是否已赋值
                     * @return SnapshotStatus 是否已赋值
                     * 
                     */
                    bool SnapshotStatusHasBeenSet() const;

                    /**
                     * 获取申请单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 申请单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置申请单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId 申请单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * 表格所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 任务ID，对于创建单任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * 快照名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 快照的时间点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotTime;
                    bool m_snapshotTimeHasBeenSet;

                    /**
                     * 快照的过期时间点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotDeadTime;
                    bool m_snapshotDeadTimeHasBeenSet;

                    /**
                     * 快照创建时间点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotCreateTime;
                    bool m_snapshotCreateTimeHasBeenSet;

                    /**
                     * 快照大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_snapshotSize;
                    bool m_snapshotSizeHasBeenSet;

                    /**
                     * 快照状态，0 生成中 1 正常 2 删除中 3 已失效 4 回档使用中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_snapshotStatus;
                    bool m_snapshotStatusHasBeenSet;

                    /**
                     * 申请单ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SNAPSHOTRESULT_H_
