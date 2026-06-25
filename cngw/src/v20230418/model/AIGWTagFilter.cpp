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

#include <tencentcloud/cngw/v20230418/model/AIGWTagFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWTagFilter::AIGWTagFilter() :
    m_matchStrategyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome AIGWTagFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchStrategy") && !value["MatchStrategy"].IsNull())
    {
        if (!value["MatchStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWTagFilter.MatchStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchStrategy = string(value["MatchStrategy"].GetString());
        m_matchStrategyHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWTagFilter.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWTagFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AIGWTagFilter::GetMatchStrategy() const
{
    return m_matchStrategy;
}

void AIGWTagFilter::SetMatchStrategy(const string& _matchStrategy)
{
    m_matchStrategy = _matchStrategy;
    m_matchStrategyHasBeenSet = true;
}

bool AIGWTagFilter::MatchStrategyHasBeenSet() const
{
    return m_matchStrategyHasBeenSet;
}

vector<string> AIGWTagFilter::GetTags() const
{
    return m_tags;
}

void AIGWTagFilter::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AIGWTagFilter::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

