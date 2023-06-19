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

#include <tencentcloud/cynosdb/v20190107/model/QueryParamFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

QueryParamFilter::QueryParamFilter() :
    m_namesHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_exactMatchHasBeenSet(false)
{
}

CoreInternalOutcome QueryParamFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Names") && !value["Names"].IsNull())
    {
        if (!value["Names"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryParamFilter.Names` is not array type"));

        const rapidjson::Value &tmpValue = value["Names"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_names.push_back((*itr).GetString());
        }
        m_namesHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryParamFilter.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("ExactMatch") && !value["ExactMatch"].IsNull())
    {
        if (!value["ExactMatch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QueryParamFilter.ExactMatch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_exactMatch = value["ExactMatch"].GetBool();
        m_exactMatchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryParamFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Names";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_names.begin(); itr != m_names.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exactMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExactMatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exactMatch, allocator);
    }

}


vector<string> QueryParamFilter::GetNames() const
{
    return m_names;
}

void QueryParamFilter::SetNames(const vector<string>& _names)
{
    m_names = _names;
    m_namesHasBeenSet = true;
}

bool QueryParamFilter::NamesHasBeenSet() const
{
    return m_namesHasBeenSet;
}

vector<string> QueryParamFilter::GetValues() const
{
    return m_values;
}

void QueryParamFilter::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool QueryParamFilter::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

bool QueryParamFilter::GetExactMatch() const
{
    return m_exactMatch;
}

void QueryParamFilter::SetExactMatch(const bool& _exactMatch)
{
    m_exactMatch = _exactMatch;
    m_exactMatchHasBeenSet = true;
}

bool QueryParamFilter::ExactMatchHasBeenSet() const
{
    return m_exactMatchHasBeenSet;
}

