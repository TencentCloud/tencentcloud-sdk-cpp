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

#include <tencentcloud/mqtt/v20240516/model/TagFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

TagFilter::TagFilter() :
    m_tagKeyHasBeenSet(false),
    m_tagValuesHasBeenSet(false)
{
}

CoreInternalOutcome TagFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagKey") && !value["TagKey"].IsNull())
    {
        if (!value["TagKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagFilter.TagKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagKey = string(value["TagKey"].GetString());
        m_tagKeyHasBeenSet = true;
    }

    if (value.HasMember("TagValues") && !value["TagValues"].IsNull())
    {
        if (!value["TagValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagFilter.TagValues` is not array type"));

        const rapidjson::Value &tmpValue = value["TagValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagValues.push_back((*itr).GetString());
        }
        m_tagValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagValues.begin(); itr != m_tagValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TagFilter::GetTagKey() const
{
    return m_tagKey;
}

void TagFilter::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool TagFilter::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

vector<string> TagFilter::GetTagValues() const
{
    return m_tagValues;
}

void TagFilter::SetTagValues(const vector<string>& _tagValues)
{
    m_tagValues = _tagValues;
    m_tagValuesHasBeenSet = true;
}

bool TagFilter::TagValuesHasBeenSet() const
{
    return m_tagValuesHasBeenSet;
}

