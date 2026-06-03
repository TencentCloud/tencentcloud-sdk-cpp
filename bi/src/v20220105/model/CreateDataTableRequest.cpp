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

#include <tencentcloud/bi/v20220105/model/CreateDataTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

CreateDataTableRequest::CreateDataTableRequest() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_foldIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_excelUrlHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_tableNodeTypeHasBeenSet(false),
    m_tablesHasBeenSet(false),
    m_joinsHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_asyncRequestHasBeenSet(false),
    m_parentTranIdHasBeenSet(false),
    m_apiDatasourceConfigHasBeenSet(false),
    m_paramListHasBeenSet(false),
    m_dlcExtInfoHasBeenSet(false),
    m_queryDbDataHasBeenSet(false),
    m_tableCommentHasBeenSet(false),
    m_queryFieldRemarkHasBeenSet(false),
    m_fieldRemarkListHasBeenSet(false)
{
}

string CreateDataTableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_foldIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FoldId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_foldId, allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_excelUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcelUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_excelUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fields.begin(); itr != m_fields.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tableNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tableNodeType, allocator);
    }

    if (m_tablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tables.begin(); itr != m_tables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_joinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Joins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_joins.begin(); itr != m_joins.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asyncRequest, allocator);
    }

    if (m_parentTranIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentTranId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentTranId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiDatasourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDatasourceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_apiDatasourceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_paramListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dlcExtInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlcExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dlcExtInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_queryDbDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDbData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryDbData.c_str(), allocator).Move(), allocator);
    }

    if (m_tableCommentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableComment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableComment.c_str(), allocator).Move(), allocator);
    }

    if (m_queryFieldRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryFieldRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryFieldRemark, allocator);
    }

    if (m_fieldRemarkListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldRemarkList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fieldRemarkList.begin(); itr != m_fieldRemarkList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateDataTableRequest::GetType() const
{
    return m_type;
}

void CreateDataTableRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateDataTableRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateDataTableRequest::GetName() const
{
    return m_name;
}

void CreateDataTableRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDataTableRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateDataTableRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateDataTableRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateDataTableRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t CreateDataTableRequest::GetFoldId() const
{
    return m_foldId;
}

void CreateDataTableRequest::SetFoldId(const uint64_t& _foldId)
{
    m_foldId = _foldId;
    m_foldIdHasBeenSet = true;
}

bool CreateDataTableRequest::FoldIdHasBeenSet() const
{
    return m_foldIdHasBeenSet;
}

string CreateDataTableRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void CreateDataTableRequest::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool CreateDataTableRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string CreateDataTableRequest::GetTableName() const
{
    return m_tableName;
}

void CreateDataTableRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool CreateDataTableRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string CreateDataTableRequest::GetSql() const
{
    return m_sql;
}

void CreateDataTableRequest::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool CreateDataTableRequest::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

string CreateDataTableRequest::GetExcelUrl() const
{
    return m_excelUrl;
}

void CreateDataTableRequest::SetExcelUrl(const string& _excelUrl)
{
    m_excelUrl = _excelUrl;
    m_excelUrlHasBeenSet = true;
}

bool CreateDataTableRequest::ExcelUrlHasBeenSet() const
{
    return m_excelUrlHasBeenSet;
}

vector<TableField> CreateDataTableRequest::GetFields() const
{
    return m_fields;
}

void CreateDataTableRequest::SetFields(const vector<TableField>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool CreateDataTableRequest::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

uint64_t CreateDataTableRequest::GetTableNodeType() const
{
    return m_tableNodeType;
}

void CreateDataTableRequest::SetTableNodeType(const uint64_t& _tableNodeType)
{
    m_tableNodeType = _tableNodeType;
    m_tableNodeTypeHasBeenSet = true;
}

bool CreateDataTableRequest::TableNodeTypeHasBeenSet() const
{
    return m_tableNodeTypeHasBeenSet;
}

vector<JoinSourceTable> CreateDataTableRequest::GetTables() const
{
    return m_tables;
}

void CreateDataTableRequest::SetTables(const vector<JoinSourceTable>& _tables)
{
    m_tables = _tables;
    m_tablesHasBeenSet = true;
}

bool CreateDataTableRequest::TablesHasBeenSet() const
{
    return m_tablesHasBeenSet;
}

vector<JoinRelation> CreateDataTableRequest::GetJoins() const
{
    return m_joins;
}

void CreateDataTableRequest::SetJoins(const vector<JoinRelation>& _joins)
{
    m_joins = _joins;
    m_joinsHasBeenSet = true;
}

bool CreateDataTableRequest::JoinsHasBeenSet() const
{
    return m_joinsHasBeenSet;
}

string CreateDataTableRequest::GetExtInfo() const
{
    return m_extInfo;
}

void CreateDataTableRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool CreateDataTableRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

bool CreateDataTableRequest::GetAsyncRequest() const
{
    return m_asyncRequest;
}

void CreateDataTableRequest::SetAsyncRequest(const bool& _asyncRequest)
{
    m_asyncRequest = _asyncRequest;
    m_asyncRequestHasBeenSet = true;
}

bool CreateDataTableRequest::AsyncRequestHasBeenSet() const
{
    return m_asyncRequestHasBeenSet;
}

string CreateDataTableRequest::GetParentTranId() const
{
    return m_parentTranId;
}

void CreateDataTableRequest::SetParentTranId(const string& _parentTranId)
{
    m_parentTranId = _parentTranId;
    m_parentTranIdHasBeenSet = true;
}

bool CreateDataTableRequest::ParentTranIdHasBeenSet() const
{
    return m_parentTranIdHasBeenSet;
}

ApiDatasourceConfig CreateDataTableRequest::GetApiDatasourceConfig() const
{
    return m_apiDatasourceConfig;
}

void CreateDataTableRequest::SetApiDatasourceConfig(const ApiDatasourceConfig& _apiDatasourceConfig)
{
    m_apiDatasourceConfig = _apiDatasourceConfig;
    m_apiDatasourceConfigHasBeenSet = true;
}

bool CreateDataTableRequest::ApiDatasourceConfigHasBeenSet() const
{
    return m_apiDatasourceConfigHasBeenSet;
}

vector<ParamCreateDTO> CreateDataTableRequest::GetParamList() const
{
    return m_paramList;
}

void CreateDataTableRequest::SetParamList(const vector<ParamCreateDTO>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool CreateDataTableRequest::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

string CreateDataTableRequest::GetDlcExtInfo() const
{
    return m_dlcExtInfo;
}

void CreateDataTableRequest::SetDlcExtInfo(const string& _dlcExtInfo)
{
    m_dlcExtInfo = _dlcExtInfo;
    m_dlcExtInfoHasBeenSet = true;
}

bool CreateDataTableRequest::DlcExtInfoHasBeenSet() const
{
    return m_dlcExtInfoHasBeenSet;
}

string CreateDataTableRequest::GetQueryDbData() const
{
    return m_queryDbData;
}

void CreateDataTableRequest::SetQueryDbData(const string& _queryDbData)
{
    m_queryDbData = _queryDbData;
    m_queryDbDataHasBeenSet = true;
}

bool CreateDataTableRequest::QueryDbDataHasBeenSet() const
{
    return m_queryDbDataHasBeenSet;
}

string CreateDataTableRequest::GetTableComment() const
{
    return m_tableComment;
}

void CreateDataTableRequest::SetTableComment(const string& _tableComment)
{
    m_tableComment = _tableComment;
    m_tableCommentHasBeenSet = true;
}

bool CreateDataTableRequest::TableCommentHasBeenSet() const
{
    return m_tableCommentHasBeenSet;
}

int64_t CreateDataTableRequest::GetQueryFieldRemark() const
{
    return m_queryFieldRemark;
}

void CreateDataTableRequest::SetQueryFieldRemark(const int64_t& _queryFieldRemark)
{
    m_queryFieldRemark = _queryFieldRemark;
    m_queryFieldRemarkHasBeenSet = true;
}

bool CreateDataTableRequest::QueryFieldRemarkHasBeenSet() const
{
    return m_queryFieldRemarkHasBeenSet;
}

vector<FieldRemarkDTO> CreateDataTableRequest::GetFieldRemarkList() const
{
    return m_fieldRemarkList;
}

void CreateDataTableRequest::SetFieldRemarkList(const vector<FieldRemarkDTO>& _fieldRemarkList)
{
    m_fieldRemarkList = _fieldRemarkList;
    m_fieldRemarkListHasBeenSet = true;
}

bool CreateDataTableRequest::FieldRemarkListHasBeenSet() const
{
    return m_fieldRemarkListHasBeenSet;
}


