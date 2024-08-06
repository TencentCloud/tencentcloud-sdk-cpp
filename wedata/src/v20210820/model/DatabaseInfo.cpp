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

#include <tencentcloud/wedata/v20210820/model/DatabaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DatabaseInfo::DatabaseInfo() :
    m_datasourceNameHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_datasourceTypeHasBeenSet(false),
    m_originDatabaseNameHasBeenSet(false),
    m_originSchemaNameHasBeenSet(false),
    m_dsEnvTypeHasBeenSet(false),
    m_clusterDeployTypeHasBeenSet(false),
    m_schemaNameHasBeenSet(false)
{
}

CoreInternalOutcome DatabaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseInfo.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseInfo.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseInfo.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceType") && !value["DatasourceType"].IsNull())
    {
        if (!value["DatasourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseInfo.DatasourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceType = value["DatasourceType"].GetUint64();
        m_datasourceTypeHasBeenSet = true;
    }

    if (value.HasMember("OriginDatabaseName") && !value["OriginDatabaseName"].IsNull())
    {
        if (!value["OriginDatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseInfo.OriginDatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originDatabaseName = string(value["OriginDatabaseName"].GetString());
        m_originDatabaseNameHasBeenSet = true;
    }

    if (value.HasMember("OriginSchemaName") && !value["OriginSchemaName"].IsNull())
    {
        if (!value["OriginSchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseInfo.OriginSchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originSchemaName = string(value["OriginSchemaName"].GetString());
        m_originSchemaNameHasBeenSet = true;
    }

    if (value.HasMember("DsEnvType") && !value["DsEnvType"].IsNull())
    {
        if (!value["DsEnvType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseInfo.DsEnvType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dsEnvType = value["DsEnvType"].GetInt64();
        m_dsEnvTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterDeployType") && !value["ClusterDeployType"].IsNull())
    {
        if (!value["ClusterDeployType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseInfo.ClusterDeployType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDeployType = string(value["ClusterDeployType"].GetString());
        m_clusterDeployTypeHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseInfo.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_datasourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datasourceType, allocator);
    }

    if (m_originDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originDatabaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_originSchemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginSchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originSchemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_dsEnvTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DsEnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dsEnvType, allocator);
    }

    if (m_clusterDeployTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDeployType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterDeployType.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

}


string DatabaseInfo::GetDatasourceName() const
{
    return m_datasourceName;
}

void DatabaseInfo::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool DatabaseInfo::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

string DatabaseInfo::GetDatasourceId() const
{
    return m_datasourceId;
}

void DatabaseInfo::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool DatabaseInfo::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string DatabaseInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void DatabaseInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DatabaseInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DatabaseInfo::GetDatabaseId() const
{
    return m_databaseId;
}

void DatabaseInfo::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool DatabaseInfo::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string DatabaseInfo::GetInstanceId() const
{
    return m_instanceId;
}

void DatabaseInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DatabaseInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DatabaseInfo::GetDatasourceType() const
{
    return m_datasourceType;
}

void DatabaseInfo::SetDatasourceType(const uint64_t& _datasourceType)
{
    m_datasourceType = _datasourceType;
    m_datasourceTypeHasBeenSet = true;
}

bool DatabaseInfo::DatasourceTypeHasBeenSet() const
{
    return m_datasourceTypeHasBeenSet;
}

string DatabaseInfo::GetOriginDatabaseName() const
{
    return m_originDatabaseName;
}

void DatabaseInfo::SetOriginDatabaseName(const string& _originDatabaseName)
{
    m_originDatabaseName = _originDatabaseName;
    m_originDatabaseNameHasBeenSet = true;
}

bool DatabaseInfo::OriginDatabaseNameHasBeenSet() const
{
    return m_originDatabaseNameHasBeenSet;
}

string DatabaseInfo::GetOriginSchemaName() const
{
    return m_originSchemaName;
}

void DatabaseInfo::SetOriginSchemaName(const string& _originSchemaName)
{
    m_originSchemaName = _originSchemaName;
    m_originSchemaNameHasBeenSet = true;
}

bool DatabaseInfo::OriginSchemaNameHasBeenSet() const
{
    return m_originSchemaNameHasBeenSet;
}

int64_t DatabaseInfo::GetDsEnvType() const
{
    return m_dsEnvType;
}

void DatabaseInfo::SetDsEnvType(const int64_t& _dsEnvType)
{
    m_dsEnvType = _dsEnvType;
    m_dsEnvTypeHasBeenSet = true;
}

bool DatabaseInfo::DsEnvTypeHasBeenSet() const
{
    return m_dsEnvTypeHasBeenSet;
}

string DatabaseInfo::GetClusterDeployType() const
{
    return m_clusterDeployType;
}

void DatabaseInfo::SetClusterDeployType(const string& _clusterDeployType)
{
    m_clusterDeployType = _clusterDeployType;
    m_clusterDeployTypeHasBeenSet = true;
}

bool DatabaseInfo::ClusterDeployTypeHasBeenSet() const
{
    return m_clusterDeployTypeHasBeenSet;
}

string DatabaseInfo::GetSchemaName() const
{
    return m_schemaName;
}

void DatabaseInfo::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DatabaseInfo::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

