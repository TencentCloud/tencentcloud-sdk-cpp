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

#include <tencentcloud/cms/v20190321/model/TextData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

TextData::TextData() :
    m_evilFlagHasBeenSet(false),
    m_evilTypeHasBeenSet(false),
    m_commonHasBeenSet(false),
    m_customResultHasBeenSet(false),
    m_detailResultHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_resHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_evilLabelHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_suggestionHasBeenSet(false)
{
}

CoreInternalOutcome TextData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("EvilFlag") && !value["EvilFlag"].IsNull())
    {
        if (!value["EvilFlag"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TextData.EvilFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilFlag = value["EvilFlag"].GetInt64();
        m_evilFlagHasBeenSet = true;
    }

    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TextData.EvilType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetInt64();
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("Common") && !value["Common"].IsNull())
    {
        if (!value["Common"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TextData.Common` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_common.Deserialize(value["Common"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_commonHasBeenSet = true;
    }

    if (value.HasMember("CustomResult") && !value["CustomResult"].IsNull())
    {
        if (!value["CustomResult"].IsArray())
            return CoreInternalOutcome(Error("response `TextData.CustomResult` is not array type"));

        const Value &tmpValue = value["CustomResult"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customResult.push_back(item);
        }
        m_customResultHasBeenSet = true;
    }

    if (value.HasMember("DetailResult") && !value["DetailResult"].IsNull())
    {
        if (!value["DetailResult"].IsArray())
            return CoreInternalOutcome(Error("response `TextData.DetailResult` is not array type"));

        const Value &tmpValue = value["DetailResult"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetailResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailResult.push_back(item);
        }
        m_detailResultHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TextData.ID` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iD.Deserialize(value["ID"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Res") && !value["Res"].IsNull())
    {
        if (!value["Res"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TextData.Res` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_res.Deserialize(value["Res"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TextData.BizType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = value["BizType"].GetUint64();
        m_bizTypeHasBeenSet = true;
    }

    if (value.HasMember("EvilLabel") && !value["EvilLabel"].IsNull())
    {
        if (!value["EvilLabel"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextData.EvilLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evilLabel = string(value["EvilLabel"].GetString());
        m_evilLabelHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Error("response `TextData.Keywords` is not array type"));

        const Value &tmpValue = value["Keywords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TextData.Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextData.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_evilFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilFlag, allocator);
    }

    if (m_evilTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

    if (m_commonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Common";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_common.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customResultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customResult.begin(); itr != m_customResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_detailResultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DetailResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailResult.begin(); itr != m_detailResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_iDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_iD.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Res";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_res.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizType, allocator);
    }

    if (m_evilLabelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_evilLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scoreHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

}


int64_t TextData::GetEvilFlag() const
{
    return m_evilFlag;
}

void TextData::SetEvilFlag(const int64_t& _evilFlag)
{
    m_evilFlag = _evilFlag;
    m_evilFlagHasBeenSet = true;
}

bool TextData::EvilFlagHasBeenSet() const
{
    return m_evilFlagHasBeenSet;
}

int64_t TextData::GetEvilType() const
{
    return m_evilType;
}

void TextData::SetEvilType(const int64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool TextData::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

TextOutputComm TextData::GetCommon() const
{
    return m_common;
}

void TextData::SetCommon(const TextOutputComm& _common)
{
    m_common = _common;
    m_commonHasBeenSet = true;
}

bool TextData::CommonHasBeenSet() const
{
    return m_commonHasBeenSet;
}

vector<CustomResult> TextData::GetCustomResult() const
{
    return m_customResult;
}

void TextData::SetCustomResult(const vector<CustomResult>& _customResult)
{
    m_customResult = _customResult;
    m_customResultHasBeenSet = true;
}

bool TextData::CustomResultHasBeenSet() const
{
    return m_customResultHasBeenSet;
}

vector<DetailResult> TextData::GetDetailResult() const
{
    return m_detailResult;
}

void TextData::SetDetailResult(const vector<DetailResult>& _detailResult)
{
    m_detailResult = _detailResult;
    m_detailResultHasBeenSet = true;
}

bool TextData::DetailResultHasBeenSet() const
{
    return m_detailResultHasBeenSet;
}

TextOutputID TextData::GetID() const
{
    return m_iD;
}

void TextData::SetID(const TextOutputID& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool TextData::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

TextOutputRes TextData::GetRes() const
{
    return m_res;
}

void TextData::SetRes(const TextOutputRes& _res)
{
    m_res = _res;
    m_resHasBeenSet = true;
}

bool TextData::ResHasBeenSet() const
{
    return m_resHasBeenSet;
}

uint64_t TextData::GetBizType() const
{
    return m_bizType;
}

void TextData::SetBizType(const uint64_t& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool TextData::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string TextData::GetEvilLabel() const
{
    return m_evilLabel;
}

void TextData::SetEvilLabel(const string& _evilLabel)
{
    m_evilLabel = _evilLabel;
    m_evilLabelHasBeenSet = true;
}

bool TextData::EvilLabelHasBeenSet() const
{
    return m_evilLabelHasBeenSet;
}

vector<string> TextData::GetKeywords() const
{
    return m_keywords;
}

void TextData::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool TextData::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

uint64_t TextData::GetScore() const
{
    return m_score;
}

void TextData::SetScore(const uint64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool TextData::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string TextData::GetSuggestion() const
{
    return m_suggestion;
}

void TextData::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool TextData::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

