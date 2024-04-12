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

#include <tencentcloud/lke/v20231130/model/Filters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

Filters::Filters() :
    m_queryHasBeenSet(false),
    m_reasonsHasBeenSet(false)
{
}

CoreInternalOutcome Filters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Filters.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (value.HasMember("Reasons") && !value["Reasons"].IsNull())
    {
        if (!value["Reasons"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Filters.Reasons` is not array type"));

        const rapidjson::Value &tmpValue = value["Reasons"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reasons.push_back((*itr).GetString());
        }
        m_reasonsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Filters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reasons";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reasons.begin(); itr != m_reasons.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Filters::GetQuery() const
{
    return m_query;
}

void Filters::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool Filters::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

vector<string> Filters::GetReasons() const
{
    return m_reasons;
}

void Filters::SetReasons(const vector<string>& _reasons)
{
    m_reasons = _reasons;
    m_reasonsHasBeenSet = true;
}

bool Filters::ReasonsHasBeenSet() const
{
    return m_reasonsHasBeenSet;
}

