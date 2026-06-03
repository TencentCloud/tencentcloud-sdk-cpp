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

#include <tencentcloud/bi/v20220105/model/JoinSourceTable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

JoinSourceTable::JoinSourceTable() :
    m_tableNodeTypeHasBeenSet(false),
    m_tableNodeIdHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_tableAliasHasBeenSet(false)
{
}

CoreInternalOutcome JoinSourceTable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableNodeType") && !value["TableNodeType"].IsNull())
    {
        if (!value["TableNodeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JoinSourceTable.TableNodeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableNodeType = value["TableNodeType"].GetUint64();
        m_tableNodeTypeHasBeenSet = true;
    }

    if (value.HasMember("TableNodeId") && !value["TableNodeId"].IsNull())
    {
        if (!value["TableNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinSourceTable.TableNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableNodeId = string(value["TableNodeId"].GetString());
        m_tableNodeIdHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinSourceTable.ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(value["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinSourceTable.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinSourceTable.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("Fields") && !value["Fields"].IsNull())
    {
        if (!value["Fields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JoinSourceTable.Fields` is not array type"));

        const rapidjson::Value &tmpValue = value["Fields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TableField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fields.push_back(item);
        }
        m_fieldsHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JoinSourceTable.DatasourceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = value["DatasourceId"].GetUint64();
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("TableAlias") && !value["TableAlias"].IsNull())
    {
        if (!value["TableAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinSourceTable.TableAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableAlias = string(value["TableAlias"].GetString());
        m_tableAliasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JoinSourceTable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableNodeType, allocator);
    }

    if (m_tableNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fields.begin(); itr != m_fields.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datasourceId, allocator);
    }

    if (m_tableAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableAlias.c_str(), allocator).Move(), allocator);
    }

}


uint64_t JoinSourceTable::GetTableNodeType() const
{
    return m_tableNodeType;
}

void JoinSourceTable::SetTableNodeType(const uint64_t& _tableNodeType)
{
    m_tableNodeType = _tableNodeType;
    m_tableNodeTypeHasBeenSet = true;
}

bool JoinSourceTable::TableNodeTypeHasBeenSet() const
{
    return m_tableNodeTypeHasBeenSet;
}

string JoinSourceTable::GetTableNodeId() const
{
    return m_tableNodeId;
}

void JoinSourceTable::SetTableNodeId(const string& _tableNodeId)
{
    m_tableNodeId = _tableNodeId;
    m_tableNodeIdHasBeenSet = true;
}

bool JoinSourceTable::TableNodeIdHasBeenSet() const
{
    return m_tableNodeIdHasBeenSet;
}

string JoinSourceTable::GetParentId() const
{
    return m_parentId;
}

void JoinSourceTable::SetParentId(const string& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool JoinSourceTable::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string JoinSourceTable::GetTableId() const
{
    return m_tableId;
}

void JoinSourceTable::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool JoinSourceTable::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string JoinSourceTable::GetTableName() const
{
    return m_tableName;
}

void JoinSourceTable::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool JoinSourceTable::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

vector<TableField> JoinSourceTable::GetFields() const
{
    return m_fields;
}

void JoinSourceTable::SetFields(const vector<TableField>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool JoinSourceTable::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

uint64_t JoinSourceTable::GetDatasourceId() const
{
    return m_datasourceId;
}

void JoinSourceTable::SetDatasourceId(const uint64_t& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool JoinSourceTable::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string JoinSourceTable::GetTableAlias() const
{
    return m_tableAlias;
}

void JoinSourceTable::SetTableAlias(const string& _tableAlias)
{
    m_tableAlias = _tableAlias;
    m_tableAliasHasBeenSet = true;
}

bool JoinSourceTable::TableAliasHasBeenSet() const
{
    return m_tableAliasHasBeenSet;
}

