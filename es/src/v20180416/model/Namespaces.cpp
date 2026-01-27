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

#include <tencentcloud/es/v20180416/model/Namespaces.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

Namespaces::Namespaces() :
    m_includeHasBeenSet(false),
    m_excludeHasBeenSet(false)
{
}

CoreInternalOutcome Namespaces::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Include") && !value["Include"].IsNull())
    {
        if (!value["Include"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Namespaces.Include` is not array type"));

        const rapidjson::Value &tmpValue = value["Include"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_include.push_back((*itr).GetString());
        }
        m_includeHasBeenSet = true;
    }

    if (value.HasMember("Exclude") && !value["Exclude"].IsNull())
    {
        if (!value["Exclude"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Namespaces.Exclude` is not array type"));

        const rapidjson::Value &tmpValue = value["Exclude"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_exclude.push_back((*itr).GetString());
        }
        m_excludeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Namespaces::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_includeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Include";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_include.begin(); itr != m_include.end(); ++itr)
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


vector<string> Namespaces::GetInclude() const
{
    return m_include;
}

void Namespaces::SetInclude(const vector<string>& _include)
{
    m_include = _include;
    m_includeHasBeenSet = true;
}

bool Namespaces::IncludeHasBeenSet() const
{
    return m_includeHasBeenSet;
}

vector<string> Namespaces::GetExclude() const
{
    return m_exclude;
}

void Namespaces::SetExclude(const vector<string>& _exclude)
{
    m_exclude = _exclude;
    m_excludeHasBeenSet = true;
}

bool Namespaces::ExcludeHasBeenSet() const
{
    return m_excludeHasBeenSet;
}

