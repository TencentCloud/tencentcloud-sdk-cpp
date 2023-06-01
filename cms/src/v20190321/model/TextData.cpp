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
using namespace std;

TextData::TextData() :
    m_evilTypeHasBeenSet(false),
    m_evilFlagHasBeenSet(false),
    m_dataIdHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_resHasBeenSet(false),
    m_riskDetailsHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_commonHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_detailResultHasBeenSet(false),
    m_customResultHasBeenSet(false),
    m_evilLabelHasBeenSet(false)
{
}

CoreInternalOutcome TextData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.EvilType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetInt64();
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("EvilFlag") && !value["EvilFlag"].IsNull())
    {
        if (!value["EvilFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.EvilFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilFlag = value["EvilFlag"].GetInt64();
        m_evilFlagHasBeenSet = true;
    }

    if (value.HasMember("DataId") && !value["DataId"].IsNull())
    {
        if (!value["DataId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(value["DataId"].GetString());
        m_dataIdHasBeenSet = true;
    }

    if (value.HasMember("Extra") && !value["Extra"].IsNull())
    {
        if (!value["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(value["Extra"].GetString());
        m_extraHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.BizType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = value["BizType"].GetUint64();
        m_bizTypeHasBeenSet = true;
    }

    if (value.HasMember("Res") && !value["Res"].IsNull())
    {
        if (!value["Res"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.Res` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_res.Deserialize(value["Res"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resHasBeenSet = true;
    }

    if (value.HasMember("RiskDetails") && !value["RiskDetails"].IsNull())
    {
        if (!value["RiskDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextData.RiskDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskDetails item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskDetails.push_back(item);
        }
        m_riskDetailsHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.ID` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iD.Deserialize(value["ID"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Common") && !value["Common"].IsNull())
    {
        if (!value["Common"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.Common` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_common.Deserialize(value["Common"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_commonHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextData.Keywords` is not array type"));

        const rapidjson::Value &tmpValue = value["Keywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("DetailResult") && !value["DetailResult"].IsNull())
    {
        if (!value["DetailResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextData.DetailResult` is not array type"));

        const rapidjson::Value &tmpValue = value["DetailResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("CustomResult") && !value["CustomResult"].IsNull())
    {
        if (!value["CustomResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextData.CustomResult` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("EvilLabel") && !value["EvilLabel"].IsNull())
    {
        if (!value["EvilLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextData.EvilLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evilLabel = string(value["EvilLabel"].GetString());
        m_evilLabelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_evilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

    if (m_evilFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilFlag, allocator);
    }

    if (m_dataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizType, allocator);
    }

    if (m_resHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Res";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_res.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_riskDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskDetails.begin(); itr != m_riskDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iD.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_commonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Common";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_common.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

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

    if (m_detailResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailResult.begin(); itr != m_detailResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_customResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customResult.begin(); itr != m_customResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_evilLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evilLabel.c_str(), allocator).Move(), allocator);
    }

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

string TextData::GetDataId() const
{
    return m_dataId;
}

void TextData::SetDataId(const string& _dataId)
{
    m_dataId = _dataId;
    m_dataIdHasBeenSet = true;
}

bool TextData::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string TextData::GetExtra() const
{
    return m_extra;
}

void TextData::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool TextData::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
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

vector<RiskDetails> TextData::GetRiskDetails() const
{
    return m_riskDetails;
}

void TextData::SetRiskDetails(const vector<RiskDetails>& _riskDetails)
{
    m_riskDetails = _riskDetails;
    m_riskDetailsHasBeenSet = true;
}

bool TextData::RiskDetailsHasBeenSet() const
{
    return m_riskDetailsHasBeenSet;
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

