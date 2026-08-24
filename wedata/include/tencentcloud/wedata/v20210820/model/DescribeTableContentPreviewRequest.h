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
                     * 获取<p>表ID</p>
                     * @return TableId <p>表ID</p>
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置<p>表ID</p>
                     * @param _tableId <p>表ID</p>
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
                     * 获取<p>组件类型枚举值，支持的值有 HDFS/HBASE/HIVE/KAFKA</p>
                     * @return TechnologyType <p>组件类型枚举值，支持的值有 HDFS/HBASE/HIVE/KAFKA</p>
                     * 
                     */
                    std::string GetTechnologyType() const;

                    /**
                     * 设置<p>组件类型枚举值，支持的值有 HDFS/HBASE/HIVE/KAFKA</p>
                     * @param _technologyType <p>组件类型枚举值，支持的值有 HDFS/HBASE/HIVE/KAFKA</p>
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
                     * 获取<p>集群id</p>
                     * @return ClusterId <p>集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterId <p>集群id</p>
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
                     * 获取<p>资源类型枚举值，支持的值有TOPIC/PATH/TABLE/DATABASE</p>
                     * @return ResourceType <p>资源类型枚举值，支持的值有TOPIC/PATH/TABLE/DATABASE</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型枚举值，支持的值有TOPIC/PATH/TABLE/DATABASE</p>
                     * @param _resourceType <p>资源类型枚举值，支持的值有TOPIC/PATH/TABLE/DATABASE</p>
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
                     * 获取<p>表名</p>
                     * @return TableName <p>表名</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名</p>
                     * @param _tableName <p>表名</p>
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
                     * 获取<p>项目id</p>
                     * @return ProjectId <p>项目id</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectId <p>项目id</p>
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
                     * 获取<p>预览的行数，默认10行</p>
                     * @return RowNum <p>预览的行数，默认10行</p>
                     * 
                     */
                    int64_t GetRowNum() const;

                    /**
                     * 设置<p>预览的行数，默认10行</p>
                     * @param _rowNum <p>预览的行数，默认10行</p>
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
                     * 获取<p>数据库名，kafka或其他无数据库概念的不填</p>
                     * @return DatabaseName <p>数据库名，kafka或其他无数据库概念的不填</p>
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>数据库名，kafka或其他无数据库概念的不填</p>
                     * @param _databaseName <p>数据库名，kafka或其他无数据库概念的不填</p>
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
                     * 获取<p>异步查询预览结果时填写</p>
                     * @return TaskId <p>异步查询预览结果时填写</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>异步查询预览结果时填写</p>
                     * @param _taskId <p>异步查询预览结果时填写</p>
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
                     * 获取<p>分区信息</p>
                     * @return PartitionName <p>分区信息</p>
                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 设置<p>分区信息</p>
                     * @param _partitionName <p>分区信息</p>
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
                     * 获取<p>资源组ID</p>
                     * @return ResourceGroupId <p>资源组ID</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>资源组ID</p>
                     * @param _resourceGroupId <p>资源组ID</p>
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>执行SQL</p>
                     * @return Sql <p>执行SQL</p>
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置<p>执行SQL</p>
                     * @param _sql <p>执行SQL</p>
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取<p>引擎名</p>
                     * @return EngineId <p>引擎名</p>
                     * 
                     */
                    std::string GetEngineId() const;

                    /**
                     * 设置<p>引擎名</p>
                     * @param _engineId <p>引擎名</p>
                     * 
                     */
                    void SetEngineId(const std::string& _engineId);

                    /**
                     * 判断参数 EngineId 是否已赋值
                     * @return EngineId 是否已赋值
                     * 
                     */
                    bool EngineIdHasBeenSet() const;

                    /**
                     * 获取<p>引擎类型详情</p><ul><li>SparkSQL：SparkSQL</li><li>PrestoSQL：Presto</li><li>SparkBatch：Spark作业</li><li>StandardPresto：Presto</li><li>StandardSpark：Spark</li></ul>
                     * @return EngineTypeDetail <p>引擎类型详情</p><ul><li>SparkSQL：SparkSQL</li><li>PrestoSQL：Presto</li><li>SparkBatch：Spark作业</li><li>StandardPresto：Presto</li><li>StandardSpark：Spark</li></ul>
                     * 
                     */
                    std::string GetEngineTypeDetail() const;

                    /**
                     * 设置<p>引擎类型详情</p><ul><li>SparkSQL：SparkSQL</li><li>PrestoSQL：Presto</li><li>SparkBatch：Spark作业</li><li>StandardPresto：Presto</li><li>StandardSpark：Spark</li></ul>
                     * @param _engineTypeDetail <p>引擎类型详情</p><ul><li>SparkSQL：SparkSQL</li><li>PrestoSQL：Presto</li><li>SparkBatch：Spark作业</li><li>StandardPresto：Presto</li><li>StandardSpark：Spark</li></ul>
                     * 
                     */
                    void SetEngineTypeDetail(const std::string& _engineTypeDetail);

                    /**
                     * 判断参数 EngineTypeDetail 是否已赋值
                     * @return EngineTypeDetail 是否已赋值
                     * 
                     */
                    bool EngineTypeDetailHasBeenSet() const;

                private:

                    /**
                     * <p>表ID</p>
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * <p>组件类型枚举值，支持的值有 HDFS/HBASE/HIVE/KAFKA</p>
                     */
                    std::string m_technologyType;
                    bool m_technologyTypeHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>资源类型枚举值，支持的值有TOPIC/PATH/TABLE/DATABASE</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>表名</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>项目id</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>预览的行数，默认10行</p>
                     */
                    int64_t m_rowNum;
                    bool m_rowNumHasBeenSet;

                    /**
                     * <p>数据库名，kafka或其他无数据库概念的不填</p>
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>异步查询预览结果时填写</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>分区信息</p>
                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                    /**
                     * <p>资源组ID</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>执行SQL</p>
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * <p>引擎名</p>
                     */
                    std::string m_engineId;
                    bool m_engineIdHasBeenSet;

                    /**
                     * <p>引擎类型详情</p><ul><li>SparkSQL：SparkSQL</li><li>PrestoSQL：Presto</li><li>SparkBatch：Spark作业</li><li>StandardPresto：Presto</li><li>StandardSpark：Spark</li></ul>
                     */
                    std::string m_engineTypeDetail;
                    bool m_engineTypeDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLECONTENTPREVIEWREQUEST_H_
