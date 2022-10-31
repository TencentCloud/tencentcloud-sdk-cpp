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

#include <tencentcloud/dts/v20211206/model/TagFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

TagFilter::TagFilter() :
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false)
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

    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagFilter.TagValue` is not array type"));

        const rapidjson::Value &tmpValue = value["TagValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagValue.push_back((*itr).GetString());
        }
        m_tagValueHasBeenSet = true;
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

    if (m_tagValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagValue.begin(); itr != m_tagValue.end(); ++itr)
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

vector<string> TagFilter::GetTagValue() const
{
    return m_tagValue;
}

void TagFilter::SetTagValue(const vector<string>& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool TagFilter::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

