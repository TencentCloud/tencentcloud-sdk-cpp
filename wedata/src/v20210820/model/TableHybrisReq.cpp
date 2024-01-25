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

#include <tencentcloud/wedata/v20210820/model/TableHybrisReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TableHybrisReq::TableHybrisReq() :
    m_msTypeHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_partitionKeysHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameCnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_partitionTypeHasBeenSet(false),
    m_lifeTimeHasBeenSet(false),
    m_storageFormatHasBeenSet(false),
    m_columnDelimiterHasBeenSet(false),
    m_connectionTypeHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_nameEnHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_bizParamsHasBeenSet(false),
    m_schemaNameHasBeenSet(false)
{
}

CoreInternalOutcome TableHybrisReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MsType") && !value["MsType"].IsNull())
    {
        if (!value["MsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.MsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msType = string(value["MsType"].GetString());
        m_msTypeHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.DatasourceId` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = value["DatasourceId"].GetDouble();
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccount") && !value["OwnerAccount"].IsNull())
    {
        if (!value["OwnerAccount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.OwnerAccount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccount = value["OwnerAccount"].GetDouble();
        m_ownerAccountHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Columns item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columns.push_back(item);
        }
        m_columnsHasBeenSet = true;
    }

    if (value.HasMember("PartitionKeys") && !value["PartitionKeys"].IsNull())
    {
        if (!value["PartitionKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.PartitionKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["PartitionKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Columns item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitionKeys.push_back(item);
        }
        m_partitionKeysHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("NameCn") && !value["NameCn"].IsNull())
    {
        if (!value["NameCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.NameCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameCn = string(value["NameCn"].GetString());
        m_nameCnHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PartitionType") && !value["PartitionType"].IsNull())
    {
        if (!value["PartitionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.PartitionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionType = value["PartitionType"].GetInt64();
        m_partitionTypeHasBeenSet = true;
    }

    if (value.HasMember("LifeTime") && !value["LifeTime"].IsNull())
    {
        if (!value["LifeTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.LifeTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeTime = value["LifeTime"].GetUint64();
        m_lifeTimeHasBeenSet = true;
    }

    if (value.HasMember("StorageFormat") && !value["StorageFormat"].IsNull())
    {
        if (!value["StorageFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.StorageFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageFormat = string(value["StorageFormat"].GetString());
        m_storageFormatHasBeenSet = true;
    }

    if (value.HasMember("ColumnDelimiter") && !value["ColumnDelimiter"].IsNull())
    {
        if (!value["ColumnDelimiter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.ColumnDelimiter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnDelimiter = string(value["ColumnDelimiter"].GetString());
        m_columnDelimiterHasBeenSet = true;
    }

    if (value.HasMember("ConnectionType") && !value["ConnectionType"].IsNull())
    {
        if (!value["ConnectionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.ConnectionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionType = string(value["ConnectionType"].GetString());
        m_connectionTypeHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("NameEn") && !value["NameEn"].IsNull())
    {
        if (!value["NameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.NameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameEn = string(value["NameEn"].GetString());
        m_nameEnHasBeenSet = true;
    }

    if (value.HasMember("Sql") && !value["Sql"].IsNull())
    {
        if (!value["Sql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.Sql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sql = string(value["Sql"].GetString());
        m_sqlHasBeenSet = true;
    }

    if (value.HasMember("BizParams") && !value["BizParams"].IsNull())
    {
        if (!value["BizParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.BizParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bizParams.Deserialize(value["BizParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bizParamsHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableHybrisReq.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableHybrisReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msType.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datasourceId, allocator);
    }

    if (m_ownerAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAccount, allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_partitionKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitionKeys.begin(); itr != m_partitionKeys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameCn.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionType, allocator);
    }

    if (m_lifeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeTime, allocator);
    }

    if (m_storageFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_columnDelimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnDelimiter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnDelimiter.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_nameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_bizParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bizParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

}


string TableHybrisReq::GetMsType() const
{
    return m_msType;
}

void TableHybrisReq::SetMsType(const string& _msType)
{
    m_msType = _msType;
    m_msTypeHasBeenSet = true;
}

bool TableHybrisReq::MsTypeHasBeenSet() const
{
    return m_msTypeHasBeenSet;
}

string TableHybrisReq::GetDbName() const
{
    return m_dbName;
}

void TableHybrisReq::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool TableHybrisReq::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string TableHybrisReq::GetName() const
{
    return m_name;
}

void TableHybrisReq::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TableHybrisReq::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TableHybrisReq::GetOwner() const
{
    return m_owner;
}

void TableHybrisReq::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool TableHybrisReq::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

double TableHybrisReq::GetDatasourceId() const
{
    return m_datasourceId;
}

void TableHybrisReq::SetDatasourceId(const double& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool TableHybrisReq::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

double TableHybrisReq::GetOwnerAccount() const
{
    return m_ownerAccount;
}

void TableHybrisReq::SetOwnerAccount(const double& _ownerAccount)
{
    m_ownerAccount = _ownerAccount;
    m_ownerAccountHasBeenSet = true;
}

bool TableHybrisReq::OwnerAccountHasBeenSet() const
{
    return m_ownerAccountHasBeenSet;
}

vector<Columns> TableHybrisReq::GetColumns() const
{
    return m_columns;
}

void TableHybrisReq::SetColumns(const vector<Columns>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool TableHybrisReq::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<Columns> TableHybrisReq::GetPartitionKeys() const
{
    return m_partitionKeys;
}

void TableHybrisReq::SetPartitionKeys(const vector<Columns>& _partitionKeys)
{
    m_partitionKeys = _partitionKeys;
    m_partitionKeysHasBeenSet = true;
}

bool TableHybrisReq::PartitionKeysHasBeenSet() const
{
    return m_partitionKeysHasBeenSet;
}

string TableHybrisReq::GetCatalog() const
{
    return m_catalog;
}

void TableHybrisReq::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool TableHybrisReq::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string TableHybrisReq::GetType() const
{
    return m_type;
}

void TableHybrisReq::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TableHybrisReq::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TableHybrisReq::GetNameCn() const
{
    return m_nameCn;
}

void TableHybrisReq::SetNameCn(const string& _nameCn)
{
    m_nameCn = _nameCn;
    m_nameCnHasBeenSet = true;
}

bool TableHybrisReq::NameCnHasBeenSet() const
{
    return m_nameCnHasBeenSet;
}

string TableHybrisReq::GetDescription() const
{
    return m_description;
}

void TableHybrisReq::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TableHybrisReq::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t TableHybrisReq::GetPartitionType() const
{
    return m_partitionType;
}

void TableHybrisReq::SetPartitionType(const int64_t& _partitionType)
{
    m_partitionType = _partitionType;
    m_partitionTypeHasBeenSet = true;
}

bool TableHybrisReq::PartitionTypeHasBeenSet() const
{
    return m_partitionTypeHasBeenSet;
}

uint64_t TableHybrisReq::GetLifeTime() const
{
    return m_lifeTime;
}

void TableHybrisReq::SetLifeTime(const uint64_t& _lifeTime)
{
    m_lifeTime = _lifeTime;
    m_lifeTimeHasBeenSet = true;
}

bool TableHybrisReq::LifeTimeHasBeenSet() const
{
    return m_lifeTimeHasBeenSet;
}

string TableHybrisReq::GetStorageFormat() const
{
    return m_storageFormat;
}

void TableHybrisReq::SetStorageFormat(const string& _storageFormat)
{
    m_storageFormat = _storageFormat;
    m_storageFormatHasBeenSet = true;
}

bool TableHybrisReq::StorageFormatHasBeenSet() const
{
    return m_storageFormatHasBeenSet;
}

string TableHybrisReq::GetColumnDelimiter() const
{
    return m_columnDelimiter;
}

void TableHybrisReq::SetColumnDelimiter(const string& _columnDelimiter)
{
    m_columnDelimiter = _columnDelimiter;
    m_columnDelimiterHasBeenSet = true;
}

bool TableHybrisReq::ColumnDelimiterHasBeenSet() const
{
    return m_columnDelimiterHasBeenSet;
}

string TableHybrisReq::GetConnectionType() const
{
    return m_connectionType;
}

void TableHybrisReq::SetConnectionType(const string& _connectionType)
{
    m_connectionType = _connectionType;
    m_connectionTypeHasBeenSet = true;
}

bool TableHybrisReq::ConnectionTypeHasBeenSet() const
{
    return m_connectionTypeHasBeenSet;
}

string TableHybrisReq::GetNamespace() const
{
    return m_namespace;
}

void TableHybrisReq::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool TableHybrisReq::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string TableHybrisReq::GetNameEn() const
{
    return m_nameEn;
}

void TableHybrisReq::SetNameEn(const string& _nameEn)
{
    m_nameEn = _nameEn;
    m_nameEnHasBeenSet = true;
}

bool TableHybrisReq::NameEnHasBeenSet() const
{
    return m_nameEnHasBeenSet;
}

string TableHybrisReq::GetSql() const
{
    return m_sql;
}

void TableHybrisReq::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool TableHybrisReq::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

BizParams TableHybrisReq::GetBizParams() const
{
    return m_bizParams;
}

void TableHybrisReq::SetBizParams(const BizParams& _bizParams)
{
    m_bizParams = _bizParams;
    m_bizParamsHasBeenSet = true;
}

bool TableHybrisReq::BizParamsHasBeenSet() const
{
    return m_bizParamsHasBeenSet;
}

string TableHybrisReq::GetSchemaName() const
{
    return m_schemaName;
}

void TableHybrisReq::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool TableHybrisReq::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

