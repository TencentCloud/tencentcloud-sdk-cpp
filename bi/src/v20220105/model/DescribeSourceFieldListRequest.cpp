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

#include <tencentcloud/bi/v20220105/model/DescribeSourceFieldListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

DescribeSourceFieldListRequest::DescribeSourceFieldListRequest() :
    m_dataSourceIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_asyncRequestHasBeenSet(false),
    m_tranIdHasBeenSet(false),
    m_paramListHasBeenSet(false),
    m_dlcExtInfoHasBeenSet(false),
    m_queryDbDataHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableTypeHasBeenSet(false)
{
}

string DescribeSourceFieldListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataSourceId, allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_asyncRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asyncRequest, allocator);
    }

    if (m_tranIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranId.c_str(), allocator).Move(), allocator);
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

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tableType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeSourceFieldListRequest::GetDataSourceId() const
{
    return m_dataSourceId;
}

void DescribeSourceFieldListRequest::SetDataSourceId(const int64_t& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool DescribeSourceFieldListRequest::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string DescribeSourceFieldListRequest::GetTableName() const
{
    return m_tableName;
}

void DescribeSourceFieldListRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DescribeSourceFieldListRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DescribeSourceFieldListRequest::GetSql() const
{
    return m_sql;
}

void DescribeSourceFieldListRequest::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool DescribeSourceFieldListRequest::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

uint64_t DescribeSourceFieldListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeSourceFieldListRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeSourceFieldListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool DescribeSourceFieldListRequest::GetAsyncRequest() const
{
    return m_asyncRequest;
}

void DescribeSourceFieldListRequest::SetAsyncRequest(const bool& _asyncRequest)
{
    m_asyncRequest = _asyncRequest;
    m_asyncRequestHasBeenSet = true;
}

bool DescribeSourceFieldListRequest::AsyncRequestHasBeenSet() const
{
    return m_asyncRequestHasBeenSet;
}

string DescribeSourceFieldListRequest::GetTranId() const
{
    return m_tranId;
}

void DescribeSourceFieldListRequest::SetTranId(const string& _tranId)
{
    m_tranId = _tranId;
    m_tranIdHasBeenSet = true;
}

bool DescribeSourceFieldListRequest::TranIdHasBeenSet() const
{
    return m_tranIdHasBeenSet;
}

vector<ParamCreateDTO> DescribeSourceFieldListRequest::GetParamList() const
{
    return m_paramList;
}

void DescribeSourceFieldListRequest::SetParamList(const vector<ParamCreateDTO>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool DescribeSourceFieldListRequest::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

string DescribeSourceFieldListRequest::GetDlcExtInfo() const
{
    return m_dlcExtInfo;
}

void DescribeSourceFieldListRequest::SetDlcExtInfo(const string& _dlcExtInfo)
{
    m_dlcExtInfo = _dlcExtInfo;
    m_dlcExtInfoHasBeenSet = true;
}

bool DescribeSourceFieldListRequest::DlcExtInfoHasBeenSet() const
{
    return m_dlcExtInfoHasBeenSet;
}

string DescribeSourceFieldListRequest::GetQueryDbData() const
{
    return m_queryDbData;
}

void DescribeSourceFieldListRequest::SetQueryDbData(const string& _queryDbData)
{
    m_queryDbData = _queryDbData;
    m_queryDbDataHasBeenSet = true;
}

bool DescribeSourceFieldListRequest::QueryDbDataHasBeenSet() const
{
    return m_queryDbDataHasBeenSet;
}

string DescribeSourceFieldListRequest::GetTableId() const
{
    return m_tableId;
}

void DescribeSourceFieldListRequest::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool DescribeSourceFieldListRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

uint64_t DescribeSourceFieldListRequest::GetTableType() const
{
    return m_tableType;
}

void DescribeSourceFieldListRequest::SetTableType(const uint64_t& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool DescribeSourceFieldListRequest::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}


