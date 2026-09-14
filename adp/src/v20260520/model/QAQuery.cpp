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

#include <tencentcloud/adp/v20260520/model/QAQuery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

QAQuery::QAQuery() :
    m_queryHasBeenSet(false),
    m_queryScopeListHasBeenSet(false)
{
}

CoreInternalOutcome QAQuery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAQuery.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (value.HasMember("QueryScopeList") && !value["QueryScopeList"].IsNull())
    {
        if (!value["QueryScopeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QAQuery.QueryScopeList` is not array type"));

        const rapidjson::Value &tmpValue = value["QueryScopeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_queryScopeList.push_back((*itr).GetInt64());
        }
        m_queryScopeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QAQuery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_queryScopeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryScopeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_queryScopeList.begin(); itr != m_queryScopeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string QAQuery::GetQuery() const
{
    return m_query;
}

void QAQuery::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool QAQuery::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

vector<int64_t> QAQuery::GetQueryScopeList() const
{
    return m_queryScopeList;
}

void QAQuery::SetQueryScopeList(const vector<int64_t>& _queryScopeList)
{
    m_queryScopeList = _queryScopeList;
    m_queryScopeListHasBeenSet = true;
}

bool QAQuery::QueryScopeListHasBeenSet() const
{
    return m_queryScopeListHasBeenSet;
}

