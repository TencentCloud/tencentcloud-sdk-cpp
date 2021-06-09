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

#include <tencentcloud/nlp/v20190408/model/SearchResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

SearchResult::SearchResult() :
    m_textHasBeenSet(false),
    m_isExistHasBeenSet(false),
    m_matchTextHasBeenSet(false),
    m_posHasBeenSet(false)
{
}

CoreInternalOutcome SearchResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Error("response `SearchResult.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("IsExist") && !value["IsExist"].IsNull())
    {
        if (!value["IsExist"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SearchResult.IsExist` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isExist = value["IsExist"].GetUint64();
        m_isExistHasBeenSet = true;
    }

    if (value.HasMember("MatchText") && !value["MatchText"].IsNull())
    {
        if (!value["MatchText"].IsString())
        {
            return CoreInternalOutcome(Error("response `SearchResult.MatchText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchText = string(value["MatchText"].GetString());
        m_matchTextHasBeenSet = true;
    }

    if (value.HasMember("Pos") && !value["Pos"].IsNull())
    {
        if (!value["Pos"].IsString())
        {
            return CoreInternalOutcome(Error("response `SearchResult.Pos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pos = string(value["Pos"].GetString());
        m_posHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_isExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExist, allocator);
    }

    if (m_matchTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchText.c_str(), allocator).Move(), allocator);
    }

    if (m_posHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pos.c_str(), allocator).Move(), allocator);
    }

}


string SearchResult::GetText() const
{
    return m_text;
}

void SearchResult::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SearchResult::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

uint64_t SearchResult::GetIsExist() const
{
    return m_isExist;
}

void SearchResult::SetIsExist(const uint64_t& _isExist)
{
    m_isExist = _isExist;
    m_isExistHasBeenSet = true;
}

bool SearchResult::IsExistHasBeenSet() const
{
    return m_isExistHasBeenSet;
}

string SearchResult::GetMatchText() const
{
    return m_matchText;
}

void SearchResult::SetMatchText(const string& _matchText)
{
    m_matchText = _matchText;
    m_matchTextHasBeenSet = true;
}

bool SearchResult::MatchTextHasBeenSet() const
{
    return m_matchTextHasBeenSet;
}

string SearchResult::GetPos() const
{
    return m_pos;
}

void SearchResult::SetPos(const string& _pos)
{
    m_pos = _pos;
    m_posHasBeenSet = true;
}

bool SearchResult::PosHasBeenSet() const
{
    return m_posHasBeenSet;
}

