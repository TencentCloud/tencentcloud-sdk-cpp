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

#include <tencentcloud/cdwpg/v20201230/model/SearchTags.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

SearchTags::SearchTags() :
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_allValueHasBeenSet(false)
{
}

CoreInternalOutcome SearchTags::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagKey") && !value["TagKey"].IsNull())
    {
        if (!value["TagKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchTags.TagKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagKey = string(value["TagKey"].GetString());
        m_tagKeyHasBeenSet = true;
    }

    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchTags.TagValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValue = string(value["TagValue"].GetString());
        m_tagValueHasBeenSet = true;
    }

    if (value.HasMember("AllValue") && !value["AllValue"].IsNull())
    {
        if (!value["AllValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchTags.AllValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allValue = value["AllValue"].GetInt64();
        m_allValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchTags::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }

    if (m_allValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allValue, allocator);
    }

}


string SearchTags::GetTagKey() const
{
    return m_tagKey;
}

void SearchTags::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool SearchTags::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

string SearchTags::GetTagValue() const
{
    return m_tagValue;
}

void SearchTags::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool SearchTags::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

int64_t SearchTags::GetAllValue() const
{
    return m_allValue;
}

void SearchTags::SetAllValue(const int64_t& _allValue)
{
    m_allValue = _allValue;
    m_allValueHasBeenSet = true;
}

bool SearchTags::AllValueHasBeenSet() const
{
    return m_allValueHasBeenSet;
}

