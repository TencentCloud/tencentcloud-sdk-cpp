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

#include <tencentcloud/dlc/v20210125/model/CatalogTaleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CatalogTaleInfo::CatalogTaleInfo() :
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_partitioningHasBeenSet(false),
    m_indexesHasBeenSet(false),
    m_auditHasBeenSet(false),
    m_catalogNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableFormatHasBeenSet(false),
    m_formatTypeHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_tableModeHasBeenSet(false)
{
}

CoreInternalOutcome CatalogTaleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatalogTaleInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatalogTaleInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CatalogTaleInfo.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ColumnInfo item;
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

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CatalogTaleInfo.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("Partitioning") && !value["Partitioning"].IsNull())
    {
        if (!value["Partitioning"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CatalogTaleInfo.Partitioning` is not array type"));

        const rapidjson::Value &tmpValue = value["Partitioning"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Partitioning item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitioning.push_back(item);
        }
        m_partitioningHasBeenSet = true;
    }

    if (value.HasMember("Indexes") && !value["Indexes"].IsNull())
    {
        if (!value["Indexes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CatalogTaleInfo.Indexes` is not array type"));

        const rapidjson::Value &tmpValue = value["Indexes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndexInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_indexes.push_back(item);
        }
        m_indexesHasBeenSet = true;
    }

    if (value.HasMember("Audit") && !value["Audit"].IsNull())
    {
        if (!value["Audit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CatalogTaleInfo.Audit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audit.Deserialize(value["Audit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_auditHasBeenSet = true;
    }

    if (value.HasMember("CatalogName") && !value["CatalogName"].IsNull())
    {
        if (!value["CatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatalogTaleInfo.CatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogName = string(value["CatalogName"].GetString());
        m_catalogNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatalogTaleInfo.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("TableFormat") && !value["TableFormat"].IsNull())
    {
        if (!value["TableFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatalogTaleInfo.TableFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableFormat = string(value["TableFormat"].GetString());
        m_tableFormatHasBeenSet = true;
    }

    if (value.HasMember("FormatType") && !value["FormatType"].IsNull())
    {
        if (!value["FormatType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatalogTaleInfo.FormatType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formatType = string(value["FormatType"].GetString());
        m_formatTypeHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatalogTaleInfo.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("TableMode") && !value["TableMode"].IsNull())
    {
        if (!value["TableMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatalogTaleInfo.TableMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableMode = string(value["TableMode"].GetString());
        m_tableModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CatalogTaleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
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

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_partitioningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitioning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitioning.begin(); itr != m_partitioning.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_indexesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indexes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_indexes.begin(); itr != m_indexes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_auditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_formatTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formatType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableMode.c_str(), allocator).Move(), allocator);
    }

}


string CatalogTaleInfo::GetName() const
{
    return m_name;
}

void CatalogTaleInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CatalogTaleInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CatalogTaleInfo::GetComment() const
{
    return m_comment;
}

void CatalogTaleInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CatalogTaleInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<ColumnInfo> CatalogTaleInfo::GetColumns() const
{
    return m_columns;
}

void CatalogTaleInfo::SetColumns(const vector<ColumnInfo>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool CatalogTaleInfo::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<KVPair> CatalogTaleInfo::GetProperties() const
{
    return m_properties;
}

void CatalogTaleInfo::SetProperties(const vector<KVPair>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool CatalogTaleInfo::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

vector<Partitioning> CatalogTaleInfo::GetPartitioning() const
{
    return m_partitioning;
}

void CatalogTaleInfo::SetPartitioning(const vector<Partitioning>& _partitioning)
{
    m_partitioning = _partitioning;
    m_partitioningHasBeenSet = true;
}

bool CatalogTaleInfo::PartitioningHasBeenSet() const
{
    return m_partitioningHasBeenSet;
}

vector<IndexInfo> CatalogTaleInfo::GetIndexes() const
{
    return m_indexes;
}

void CatalogTaleInfo::SetIndexes(const vector<IndexInfo>& _indexes)
{
    m_indexes = _indexes;
    m_indexesHasBeenSet = true;
}

bool CatalogTaleInfo::IndexesHasBeenSet() const
{
    return m_indexesHasBeenSet;
}

Audit CatalogTaleInfo::GetAudit() const
{
    return m_audit;
}

void CatalogTaleInfo::SetAudit(const Audit& _audit)
{
    m_audit = _audit;
    m_auditHasBeenSet = true;
}

bool CatalogTaleInfo::AuditHasBeenSet() const
{
    return m_auditHasBeenSet;
}

string CatalogTaleInfo::GetCatalogName() const
{
    return m_catalogName;
}

void CatalogTaleInfo::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool CatalogTaleInfo::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string CatalogTaleInfo::GetSchemaName() const
{
    return m_schemaName;
}

void CatalogTaleInfo::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool CatalogTaleInfo::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string CatalogTaleInfo::GetTableFormat() const
{
    return m_tableFormat;
}

void CatalogTaleInfo::SetTableFormat(const string& _tableFormat)
{
    m_tableFormat = _tableFormat;
    m_tableFormatHasBeenSet = true;
}

bool CatalogTaleInfo::TableFormatHasBeenSet() const
{
    return m_tableFormatHasBeenSet;
}

string CatalogTaleInfo::GetFormatType() const
{
    return m_formatType;
}

void CatalogTaleInfo::SetFormatType(const string& _formatType)
{
    m_formatType = _formatType;
    m_formatTypeHasBeenSet = true;
}

bool CatalogTaleInfo::FormatTypeHasBeenSet() const
{
    return m_formatTypeHasBeenSet;
}

string CatalogTaleInfo::GetTableType() const
{
    return m_tableType;
}

void CatalogTaleInfo::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool CatalogTaleInfo::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string CatalogTaleInfo::GetTableMode() const
{
    return m_tableMode;
}

void CatalogTaleInfo::SetTableMode(const string& _tableMode)
{
    m_tableMode = _tableMode;
    m_tableModeHasBeenSet = true;
}

bool CatalogTaleInfo::TableModeHasBeenSet() const
{
    return m_tableModeHasBeenSet;
}

