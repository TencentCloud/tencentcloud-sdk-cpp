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

#include <tencentcloud/cms/v20190321/model/DetailResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

DetailResult::DetailResult() :
    m_keywordsHasBeenSet(false),
    m_evilTypeHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_evilLabelHasBeenSet(false)
{
}

CoreInternalOutcome DetailResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailResult.Keywords` is not array type"));

        const rapidjson::Value &tmpValue = value["Keywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DetailResult.EvilType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetUint64();
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DetailResult.Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("EvilLabel") && !value["EvilLabel"].IsNull())
    {
        if (!value["EvilLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailResult.EvilLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evilLabel = string(value["EvilLabel"].GetString());
        m_evilLabelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetailResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_evilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_evilLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evilLabel.c_str(), allocator).Move(), allocator);
    }

}


vector<string> DetailResult::GetKeywords() const
{
    return m_keywords;
}

void DetailResult::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool DetailResult::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

uint64_t DetailResult::GetEvilType() const
{
    return m_evilType;
}

void DetailResult::SetEvilType(const uint64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool DetailResult::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

uint64_t DetailResult::GetScore() const
{
    return m_score;
}

void DetailResult::SetScore(const uint64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool DetailResult::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string DetailResult::GetEvilLabel() const
{
    return m_evilLabel;
}

void DetailResult::SetEvilLabel(const string& _evilLabel)
{
    m_evilLabel = _evilLabel;
    m_evilLabelHasBeenSet = true;
}

bool DetailResult::EvilLabelHasBeenSet() const
{
    return m_evilLabelHasBeenSet;
}

