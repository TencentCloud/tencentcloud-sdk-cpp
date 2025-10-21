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

#include <tencentcloud/wedata/v20250806/model/TableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TableInfo::TableInfo() :
    m_guidHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_technicalMetadataHasBeenSet(false),
    m_businessMetadataHasBeenSet(false)
{
}

CoreInternalOutcome TableInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Guid") && !value["Guid"].IsNull())
    {
        if (!value["Guid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.Guid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_guid = string(value["Guid"].GetString());
        m_guidHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TechnicalMetadata") && !value["TechnicalMetadata"].IsNull())
    {
        if (!value["TechnicalMetadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.TechnicalMetadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_technicalMetadata.Deserialize(value["TechnicalMetadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_technicalMetadataHasBeenSet = true;
    }

    if (value.HasMember("BusinessMetadata") && !value["BusinessMetadata"].IsNull())
    {
        if (!value["BusinessMetadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.BusinessMetadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_businessMetadata.Deserialize(value["BusinessMetadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_businessMetadataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_guidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Guid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_guid.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_technicalMetadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechnicalMetadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_technicalMetadata.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_businessMetadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessMetadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_businessMetadata.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TableInfo::GetGuid() const
{
    return m_guid;
}

void TableInfo::SetGuid(const string& _guid)
{
    m_guid = _guid;
    m_guidHasBeenSet = true;
}

bool TableInfo::GuidHasBeenSet() const
{
    return m_guidHasBeenSet;
}

string TableInfo::GetName() const
{
    return m_name;
}

void TableInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TableInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TableInfo::GetDescription() const
{
    return m_description;
}

void TableInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TableInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TableInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void TableInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TableInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string TableInfo::GetSchemaName() const
{
    return m_schemaName;
}

void TableInfo::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool TableInfo::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string TableInfo::GetTableType() const
{
    return m_tableType;
}

void TableInfo::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool TableInfo::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string TableInfo::GetCreateTime() const
{
    return m_createTime;
}

void TableInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TableInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TableInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void TableInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TableInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

TechnicalMetadata TableInfo::GetTechnicalMetadata() const
{
    return m_technicalMetadata;
}

void TableInfo::SetTechnicalMetadata(const TechnicalMetadata& _technicalMetadata)
{
    m_technicalMetadata = _technicalMetadata;
    m_technicalMetadataHasBeenSet = true;
}

bool TableInfo::TechnicalMetadataHasBeenSet() const
{
    return m_technicalMetadataHasBeenSet;
}

BusinessMetadata TableInfo::GetBusinessMetadata() const
{
    return m_businessMetadata;
}

void TableInfo::SetBusinessMetadata(const BusinessMetadata& _businessMetadata)
{
    m_businessMetadata = _businessMetadata;
    m_businessMetadataHasBeenSet = true;
}

bool TableInfo::BusinessMetadataHasBeenSet() const
{
    return m_businessMetadataHasBeenSet;
}

