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

#include <tencentcloud/teo/v20220106/model/ZoneFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

ZoneFilter::ZoneFilter() :
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_fuzzyHasBeenSet(false)
{
}

CoreInternalOutcome ZoneFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneFilter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneFilter.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("Fuzzy") && !value["Fuzzy"].IsNull())
    {
        if (!value["Fuzzy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneFilter.Fuzzy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fuzzy = value["Fuzzy"].GetBool();
        m_fuzzyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_fuzzyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fuzzy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fuzzy, allocator);
    }

}


string ZoneFilter::GetName() const
{
    return m_name;
}

void ZoneFilter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ZoneFilter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> ZoneFilter::GetValues() const
{
    return m_values;
}

void ZoneFilter::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool ZoneFilter::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

bool ZoneFilter::GetFuzzy() const
{
    return m_fuzzy;
}

void ZoneFilter::SetFuzzy(const bool& _fuzzy)
{
    m_fuzzy = _fuzzy;
    m_fuzzyHasBeenSet = true;
}

bool ZoneFilter::FuzzyHasBeenSet() const
{
    return m_fuzzyHasBeenSet;
}

