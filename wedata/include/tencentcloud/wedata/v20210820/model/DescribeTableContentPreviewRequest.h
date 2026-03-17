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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLECONTENTPREVIEWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLECONTENTPREVIEWREQUEST_H_

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
                * DescribeTableContentPreview请求参数结构体
                */
                class DescribeTableContentPreviewRequest : public AbstractModel
                {
                public:
                    DescribeTableContentPreviewRequest();
                    ~DescribeTableContentPreviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表ID
                     * @return TableId 表ID
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表ID
                     * @param _tableId 表ID
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取组件类型枚举值，支持的值有 HDFS/HBASE/HIVE/KAFKA
                     * @return TechnologyType 组件类型枚举值，支持的值有 HDFS/HBASE/HIVE/KAFKA
                     * 
                     */
                    std::string GetTechnologyType() const;

                    /**
                     * 设置组件类型枚举值，支持的值有 HDFS/HBASE/HIVE/KAFKA
                     * @param _technologyType 组件类型枚举值，支持的值有 HDFS/HBASE/HIVE/KAFKA
                     * 
                     */
                    void SetTechnologyType(const std::string& _technologyType);

                    /**
                     * 判断参数 TechnologyType 是否已赋值
                     * @return TechnologyType 是否已赋值
                     * 
                     */
                    bool TechnologyTypeHasBeenSet() const;

                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取资源类型枚举值，支持的值有TOPIC/PATH/TABLE/DATABASE
                     * @return ResourceType 资源类型枚举值，支持的值有TOPIC/PATH/TABLE/DATABASE
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型枚举值，支持的值有TOPIC/PATH/TABLE/DATABASE
                     * @param _resourceType 资源类型枚举值，支持的值有TOPIC/PATH/TABLE/DATABASE
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

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
                     * 获取预览的行数，默认10行
                     * @return RowNum 预览的行数，默认10行
                     * 
                     */
                    int64_t GetRowNum() const;

                    /**
                     * 设置预览的行数，默认10行
                     * @param _rowNum 预览的行数，默认10行
                     * 
                     */
                    void SetRowNum(const int64_t& _rowNum);

                    /**
                     * 判断参数 RowNum 是否已赋值
                     * @return RowNum 是否已赋值
                     * 
                     */
                    bool RowNumHasBeenSet() const;

                    /**
                     * 获取数据库名，kafka或其他无数据库概念的不填
                     * @return DatabaseName 数据库名，kafka或其他无数据库概念的不填
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名，kafka或其他无数据库概念的不填
                     * @param _databaseName 数据库名，kafka或其他无数据库概念的不填
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
                     * 获取异步查询预览结果时填写
                     * @return TaskId 异步查询预览结果时填写
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置异步查询预览结果时填写
                     * @param _taskId 异步查询预览结果时填写
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
                     * 获取分区信息
                     * @return PartitionName 分区信息
                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 设置分区信息
                     * @param _partitionName 分区信息
                     * 
                     */
                    void SetPartitionName(const std::string& _partitionName);

                    /**
                     * 判断参数 PartitionName 是否已赋值
                     * @return PartitionName 是否已赋值
                     * 
                     */
                    bool PartitionNameHasBeenSet() const;

                private:

                    /**
                     * 表ID
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 组件类型枚举值，支持的值有 HDFS/HBASE/HIVE/KAFKA
                     */
                    std::string m_technologyType;
                    bool m_technologyTypeHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 资源类型枚举值，支持的值有TOPIC/PATH/TABLE/DATABASE
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 预览的行数，默认10行
                     */
                    int64_t m_rowNum;
                    bool m_rowNumHasBeenSet;

                    /**
                     * 数据库名，kafka或其他无数据库概念的不填
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 异步查询预览结果时填写
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 分区信息
                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLECONTENTPREVIEWREQUEST_H_
