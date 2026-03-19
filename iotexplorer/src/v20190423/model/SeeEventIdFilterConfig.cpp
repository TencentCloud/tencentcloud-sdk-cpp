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

#include <tencentcloud/iotexplorer/v20190423/model/SeeEventIdFilterConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeEventIdFilterConfig::SeeEventIdFilterConfig() :
    m_includeOnlyHasBeenSet(false),
    m_excludeHasBeenSet(false)
{
}

CoreInternalOutcome SeeEventIdFilterConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IncludeOnly") && !value["IncludeOnly"].IsNull())
    {
        if (!value["IncludeOnly"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeEventIdFilterConfig.IncludeOnly` is not array type"));

        const rapidjson::Value &tmpValue = value["IncludeOnly"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_includeOnly.push_back((*itr).GetString());
        }
        m_includeOnlyHasBeenSet = true;
    }

    if (value.HasMember("Exclude") && !value["Exclude"].IsNull())
    {
        if (!value["Exclude"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeEventIdFilterConfig.Exclude` is not array type"));

        const rapidjson::Value &tmpValue = value["Exclude"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_exclude.push_back((*itr).GetString());
        }
        m_excludeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeEventIdFilterConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_includeOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeOnly.begin(); itr != m_includeOnly.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_exclude.begin(); itr != m_exclude.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> SeeEventIdFilterConfig::GetIncludeOnly() const
{
    return m_includeOnly;
}

void SeeEventIdFilterConfig::SetIncludeOnly(const vector<string>& _includeOnly)
{
    m_includeOnly = _includeOnly;
    m_includeOnlyHasBeenSet = true;
}

bool SeeEventIdFilterConfig::IncludeOnlyHasBeenSet() const
{
    return m_includeOnlyHasBeenSet;
}

vector<string> SeeEventIdFilterConfig::GetExclude() const
{
    return m_exclude;
}

void SeeEventIdFilterConfig::SetExclude(const vector<string>& _exclude)
{
    m_exclude = _exclude;
    m_excludeHasBeenSet = true;
}

bool SeeEventIdFilterConfig::ExcludeHasBeenSet() const
{
    return m_excludeHasBeenSet;
}

