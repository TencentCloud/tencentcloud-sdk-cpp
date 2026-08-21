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

#include <tencentcloud/cloudrc/v20240606/model/ExtendedFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudrc::V20240606::Model;
using namespace std;

ExtendedFilter::ExtendedFilter() :
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_matchTypeHasBeenSet(false)
{
}

CoreInternalOutcome ExtendedFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtendedFilter.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtendedFilter.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("MatchType") && !value["MatchType"].IsNull())
    {
        if (!value["MatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtendedFilter.MatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType = string(value["MatchType"].GetString());
        m_matchTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtendedFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
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

    if (m_matchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchType.c_str(), allocator).Move(), allocator);
    }

}


string ExtendedFilter::GetKey() const
{
    return m_key;
}

void ExtendedFilter::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool ExtendedFilter::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

vector<string> ExtendedFilter::GetValues() const
{
    return m_values;
}

void ExtendedFilter::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool ExtendedFilter::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

string ExtendedFilter::GetMatchType() const
{
    return m_matchType;
}

void ExtendedFilter::SetMatchType(const string& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool ExtendedFilter::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}

