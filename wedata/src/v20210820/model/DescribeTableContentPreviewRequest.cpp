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

#include <tencentcloud/wedata/v20210820/model/DescribeTableContentPreviewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTableContentPreviewRequest::DescribeTableContentPreviewRequest() :
    m_tableIdHasBeenSet(false),
    m_technologyTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_rowNumHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_partitionNameHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_engineIdHasBeenSet(false),
    m_engineTypeDetailHasBeenSet(false),
    m_datasourceIdHasBeenSet(false)
{
}

string DescribeTableContentPreviewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_technologyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechnologyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_technologyType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_rowNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rowNum, allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_partitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_engineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTypeDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineTypeDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_datasourceId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTableContentPreviewRequest::GetTableId() const
{
    return m_tableId;
}

void DescribeTableContentPreviewRequest::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string DescribeTableContentPreviewRequest::GetTechnologyType() const
{
    return m_technologyType;
}

void DescribeTableContentPreviewRequest::SetTechnologyType(const string& _technologyType)
{
    m_technologyType = _technologyType;
    m_technologyTypeHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::TechnologyTypeHasBeenSet() const
{
    return m_technologyTypeHasBeenSet;
}

string DescribeTableContentPreviewRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeTableContentPreviewRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeTableContentPreviewRequest::GetResourceType() const
{
    return m_resourceType;
}

void DescribeTableContentPreviewRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string DescribeTableContentPreviewRequest::GetTableName() const
{
    return m_tableName;
}

void DescribeTableContentPreviewRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DescribeTableContentPreviewRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeTableContentPreviewRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeTableContentPreviewRequest::GetRowNum() const
{
    return m_rowNum;
}

void DescribeTableContentPreviewRequest::SetRowNum(const int64_t& _rowNum)
{
    m_rowNum = _rowNum;
    m_rowNumHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::RowNumHasBeenSet() const
{
    return m_rowNumHasBeenSet;
}

string DescribeTableContentPreviewRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void DescribeTableContentPreviewRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DescribeTableContentPreviewRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeTableContentPreviewRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeTableContentPreviewRequest::GetPartitionName() const
{
    return m_partitionName;
}

void DescribeTableContentPreviewRequest::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

string DescribeTableContentPreviewRequest::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void DescribeTableContentPreviewRequest::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string DescribeTableContentPreviewRequest::GetSql() const
{
    return m_sql;
}

void DescribeTableContentPreviewRequest::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

string DescribeTableContentPreviewRequest::GetEngineId() const
{
    return m_engineId;
}

void DescribeTableContentPreviewRequest::SetEngineId(const string& _engineId)
{
    m_engineId = _engineId;
    m_engineIdHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::EngineIdHasBeenSet() const
{
    return m_engineIdHasBeenSet;
}

string DescribeTableContentPreviewRequest::GetEngineTypeDetail() const
{
    return m_engineTypeDetail;
}

void DescribeTableContentPreviewRequest::SetEngineTypeDetail(const string& _engineTypeDetail)
{
    m_engineTypeDetail = _engineTypeDetail;
    m_engineTypeDetailHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::EngineTypeDetailHasBeenSet() const
{
    return m_engineTypeDetailHasBeenSet;
}

uint64_t DescribeTableContentPreviewRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void DescribeTableContentPreviewRequest::SetDatasourceId(const uint64_t& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool DescribeTableContentPreviewRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}


