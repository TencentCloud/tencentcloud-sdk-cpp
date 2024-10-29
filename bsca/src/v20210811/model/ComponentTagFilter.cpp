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

#include <tencentcloud/bsca/v20210811/model/ComponentTagFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

ComponentTagFilter::ComponentTagFilter() :
    m_includeTagsHasBeenSet(false),
    m_excludeTagsHasBeenSet(false)
{
}

CoreInternalOutcome ComponentTagFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IncludeTags") && !value["IncludeTags"].IsNull())
    {
        if (!value["IncludeTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComponentTagFilter.IncludeTags` is not array type"));

        const rapidjson::Value &tmpValue = value["IncludeTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_includeTags.push_back((*itr).GetString());
        }
        m_includeTagsHasBeenSet = true;
    }

    if (value.HasMember("ExcludeTags") && !value["ExcludeTags"].IsNull())
    {
        if (!value["ExcludeTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComponentTagFilter.ExcludeTags` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeTags.push_back((*itr).GetString());
        }
        m_excludeTagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComponentTagFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_includeTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeTags.begin(); itr != m_includeTags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeTags.begin(); itr != m_excludeTags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ComponentTagFilter::GetIncludeTags() const
{
    return m_includeTags;
}

void ComponentTagFilter::SetIncludeTags(const vector<string>& _includeTags)
{
    m_includeTags = _includeTags;
    m_includeTagsHasBeenSet = true;
}

bool ComponentTagFilter::IncludeTagsHasBeenSet() const
{
    return m_includeTagsHasBeenSet;
}

vector<string> ComponentTagFilter::GetExcludeTags() const
{
    return m_excludeTags;
}

void ComponentTagFilter::SetExcludeTags(const vector<string>& _excludeTags)
{
    m_excludeTags = _excludeTags;
    m_excludeTagsHasBeenSet = true;
}

bool ComponentTagFilter::ExcludeTagsHasBeenSet() const
{
    return m_excludeTagsHasBeenSet;
}

