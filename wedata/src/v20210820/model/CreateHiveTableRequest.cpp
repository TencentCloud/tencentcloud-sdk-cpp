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

#include <tencentcloud/wedata/v20210820/model/CreateHiveTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateHiveTableRequest::CreateHiveTableRequest() :
    m_datasourceIdHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_dDLSqlHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_inchargeHasBeenSet(false),
    m_dataOptimizationResourceHasBeenSet(false),
    m_smartOptimizerWrittenHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false)
{
}

string CreateHiveTableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_dDLSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDLSql";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dDLSql.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_privilege, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_inchargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Incharge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_incharge.c_str(), allocator).Move(), allocator);
    }

    if (m_dataOptimizationResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataOptimizationResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataOptimizationResource.c_str(), allocator).Move(), allocator);
    }

    if (m_smartOptimizerWrittenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartOptimizerWritten";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_smartOptimizerWritten.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateHiveTableRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void CreateHiveTableRequest::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool CreateHiveTableRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string CreateHiveTableRequest::GetDatabase() const
{
    return m_database;
}

void CreateHiveTableRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool CreateHiveTableRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string CreateHiveTableRequest::GetDDLSql() const
{
    return m_dDLSql;
}

void CreateHiveTableRequest::SetDDLSql(const string& _dDLSql)
{
    m_dDLSql = _dDLSql;
    m_dDLSqlHasBeenSet = true;
}

bool CreateHiveTableRequest::DDLSqlHasBeenSet() const
{
    return m_dDLSqlHasBeenSet;
}

int64_t CreateHiveTableRequest::GetPrivilege() const
{
    return m_privilege;
}

void CreateHiveTableRequest::SetPrivilege(const int64_t& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool CreateHiveTableRequest::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

string CreateHiveTableRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateHiveTableRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateHiveTableRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateHiveTableRequest::GetIncharge() const
{
    return m_incharge;
}

void CreateHiveTableRequest::SetIncharge(const string& _incharge)
{
    m_incharge = _incharge;
    m_inchargeHasBeenSet = true;
}

bool CreateHiveTableRequest::InchargeHasBeenSet() const
{
    return m_inchargeHasBeenSet;
}

string CreateHiveTableRequest::GetDataOptimizationResource() const
{
    return m_dataOptimizationResource;
}

void CreateHiveTableRequest::SetDataOptimizationResource(const string& _dataOptimizationResource)
{
    m_dataOptimizationResource = _dataOptimizationResource;
    m_dataOptimizationResourceHasBeenSet = true;
}

bool CreateHiveTableRequest::DataOptimizationResourceHasBeenSet() const
{
    return m_dataOptimizationResourceHasBeenSet;
}

string CreateHiveTableRequest::GetSmartOptimizerWritten() const
{
    return m_smartOptimizerWritten;
}

void CreateHiveTableRequest::SetSmartOptimizerWritten(const string& _smartOptimizerWritten)
{
    m_smartOptimizerWritten = _smartOptimizerWritten;
    m_smartOptimizerWrittenHasBeenSet = true;
}

bool CreateHiveTableRequest::SmartOptimizerWrittenHasBeenSet() const
{
    return m_smartOptimizerWrittenHasBeenSet;
}

string CreateHiveTableRequest::GetTableName() const
{
    return m_tableName;
}

void CreateHiveTableRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool CreateHiveTableRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string CreateHiveTableRequest::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void CreateHiveTableRequest::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool CreateHiveTableRequest::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}


