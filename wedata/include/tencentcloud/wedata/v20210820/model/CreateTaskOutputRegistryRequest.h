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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKOUTPUTREGISTRYREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKOUTPUTREGISTRYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateTaskOutputRegistry请求参数结构体
                */
                class CreateTaskOutputRegistryRequest : public AbstractModel
                {
                public:
                    CreateTaskOutputRegistryRequest();
                    ~CreateTaskOutputRegistryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
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
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
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
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取表物理id
                     * @return TablePhysicalId 表物理id
                     * 
                     */
                    std::string GetTablePhysicalId() const;

                    /**
                     * 设置表物理id
                     * @param _tablePhysicalId 表物理id
                     * 
                     */
                    void SetTablePhysicalId(const std::string& _tablePhysicalId);

                    /**
                     * 判断参数 TablePhysicalId 是否已赋值
                     * @return TablePhysicalId 是否已赋值
                     * 
                     */
                    bool TablePhysicalIdHasBeenSet() const;

                    /**
                     * 获取登记项Id
                     * @return Id 登记项Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置登记项Id
                     * @param _id 登记项Id
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
                     * 获取数据源id
                     * @return DatasourceId 数据源id
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源id
                     * @param _datasourceId 数据源id
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取库名
                     * @return DatabaseName 库名
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置库名
                     * @param _databaseName 库名
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取表名
                     * @return TableName 表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
                     * @param _tableName 表名
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
                     * 获取表唯一标识
                     * @return TableGuid 表唯一标识
                     * 
                     */
                    std::string GetTableGuid() const;

                    /**
                     * 设置表唯一标识
                     * @param _tableGuid 表唯一标识
                     * 
                     */
                    void SetTableGuid(const std::string& _tableGuid);

                    /**
                     * 判断参数 TableGuid 是否已赋值
                     * @return TableGuid 是否已赋值
                     * 
                     */
                    bool TableGuidHasBeenSet() const;

                    /**
                     * 获取分区名
                     * @return PartitionName 分区名
                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 设置分区名
                     * @param _partitionName 分区名
                     * 
                     */
                    void SetPartitionName(const std::string& _partitionName);

                    /**
                     * 判断参数 PartitionName 是否已赋值
                     * @return PartitionName 是否已赋值
                     * 
                     */
                    bool PartitionNameHasBeenSet() const;

                    /**
                     * 获取库唯一标识
                     * @return DbGuid 库唯一标识
                     * 
                     */
                    std::string GetDbGuid() const;

                    /**
                     * 设置库唯一标识
                     * @param _dbGuid 库唯一标识
                     * 
                     */
                    void SetDbGuid(const std::string& _dbGuid);

                    /**
                     * 判断参数 DbGuid 是否已赋值
                     * @return DbGuid 是否已赋值
                     * 
                     */
                    bool DbGuidHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 表物理id
                     */
                    std::string m_tablePhysicalId;
                    bool m_tablePhysicalIdHasBeenSet;

                    /**
                     * 登记项Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 数据源id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 库名
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表唯一标识
                     */
                    std::string m_tableGuid;
                    bool m_tableGuidHasBeenSet;

                    /**
                     * 分区名
                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                    /**
                     * 库唯一标识
                     */
                    std::string m_dbGuid;
                    bool m_dbGuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKOUTPUTREGISTRYREQUEST_H_
