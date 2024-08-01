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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeDmsSqlHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeDmsSqlHistoryRequest::DescribeDmsSqlHistoryRequest() :
    m_queryNodeHasBeenSet(false),
    m_queryStatusHasBeenSet(false),
    m_querySqlHasBeenSet(false),
    m_queryErrMsgHasBeenSet(false)
{
}

string DescribeDmsSqlHistoryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queryNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_queryNode.begin(); itr != m_queryNode.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_queryStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_queryStatus.begin(); itr != m_queryStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_querySqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuerySql";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_querySql.c_str(), allocator).Move(), allocator);
    }

    if (m_queryErrMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryErrMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryErrMsg.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDmsSqlHistoryRequest::GetQueryNode() const
{
    return m_queryNode;
}

void DescribeDmsSqlHistoryRequest::SetQueryNode(const vector<string>& _queryNode)
{
    m_queryNode = _queryNode;
    m_queryNodeHasBeenSet = true;
}

bool DescribeDmsSqlHistoryRequest::QueryNodeHasBeenSet() const
{
    return m_queryNodeHasBeenSet;
}

vector<string> DescribeDmsSqlHistoryRequest::GetQueryStatus() const
{
    return m_queryStatus;
}

void DescribeDmsSqlHistoryRequest::SetQueryStatus(const vector<string>& _queryStatus)
{
    m_queryStatus = _queryStatus;
    m_queryStatusHasBeenSet = true;
}

bool DescribeDmsSqlHistoryRequest::QueryStatusHasBeenSet() const
{
    return m_queryStatusHasBeenSet;
}

string DescribeDmsSqlHistoryRequest::GetQuerySql() const
{
    return m_querySql;
}

void DescribeDmsSqlHistoryRequest::SetQuerySql(const string& _querySql)
{
    m_querySql = _querySql;
    m_querySqlHasBeenSet = true;
}

bool DescribeDmsSqlHistoryRequest::QuerySqlHasBeenSet() const
{
    return m_querySqlHasBeenSet;
}

string DescribeDmsSqlHistoryRequest::GetQueryErrMsg() const
{
    return m_queryErrMsg;
}

void DescribeDmsSqlHistoryRequest::SetQueryErrMsg(const string& _queryErrMsg)
{
    m_queryErrMsg = _queryErrMsg;
    m_queryErrMsgHasBeenSet = true;
}

bool DescribeDmsSqlHistoryRequest::QueryErrMsgHasBeenSet() const
{
    return m_queryErrMsgHasBeenSet;
}


