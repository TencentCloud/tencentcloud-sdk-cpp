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

#include <tencentcloud/tms/v20201229/model/TextModerationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20201229::Model;
using namespace std;

TextModerationResponse::TextModerationResponse() :
    m_bizTypeHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_detailResultsHasBeenSet(false),
    m_riskDetailsHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_dataIdHasBeenSet(false),
    m_subLabelHasBeenSet(false),
    m_contextTextHasBeenSet(false),
    m_sentimentAnalysisHasBeenSet(false),
    m_hitTypeHasBeenSet(false)
{
}

CoreInternalOutcome TextModerationResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("BizType") && !rsp["BizType"].IsNull())
    {
        if (!rsp["BizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(rsp["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Label") && !rsp["Label"].IsNull())
    {
        if (!rsp["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(rsp["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (rsp.HasMember("Suggestion") && !rsp["Suggestion"].IsNull())
    {
        if (!rsp["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(rsp["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (rsp.HasMember("Keywords") && !rsp["Keywords"].IsNull())
    {
        if (!rsp["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Keywords` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Keywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (rsp.HasMember("Score") && !rsp["Score"].IsNull())
    {
        if (!rsp["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = rsp["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (rsp.HasMember("DetailResults") && !rsp["DetailResults"].IsNull())
    {
        if (!rsp["DetailResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DetailResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetailResults item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailResults.push_back(item);
        }
        m_detailResultsHasBeenSet = true;
    }

    if (rsp.HasMember("RiskDetails") && !rsp["RiskDetails"].IsNull())
    {
        if (!rsp["RiskDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskDetails"];
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

    if (rsp.HasMember("Extra") && !rsp["Extra"].IsNull())
    {
        if (!rsp["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(rsp["Extra"].GetString());
        m_extraHasBeenSet = true;
    }

    if (rsp.HasMember("DataId") && !rsp["DataId"].IsNull())
    {
        if (!rsp["DataId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(rsp["DataId"].GetString());
        m_dataIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubLabel") && !rsp["SubLabel"].IsNull())
    {
        if (!rsp["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(rsp["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }

    if (rsp.HasMember("ContextText") && !rsp["ContextText"].IsNull())
    {
        if (!rsp["ContextText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContextText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contextText = string(rsp["ContextText"].GetString());
        m_contextTextHasBeenSet = true;
    }

    if (rsp.HasMember("SentimentAnalysis") && !rsp["SentimentAnalysis"].IsNull())
    {
        if (!rsp["SentimentAnalysis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SentimentAnalysis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sentimentAnalysis.Deserialize(rsp["SentimentAnalysis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sentimentAnalysisHasBeenSet = true;
    }

    if (rsp.HasMember("HitType") && !rsp["HitType"].IsNull())
    {
        if (!rsp["HitType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HitType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hitType = string(rsp["HitType"].GetString());
        m_hitTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string TextModerationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
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

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_detailResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailResults.begin(); itr != m_detailResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_dataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_subLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_contextTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContextText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contextText.c_str(), allocator).Move(), allocator);
    }

    if (m_sentimentAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentimentAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sentimentAnalysis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hitType.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string TextModerationResponse::GetBizType() const
{
    return m_bizType;
}

bool TextModerationResponse::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string TextModerationResponse::GetLabel() const
{
    return m_label;
}

bool TextModerationResponse::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string TextModerationResponse::GetSuggestion() const
{
    return m_suggestion;
}

bool TextModerationResponse::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

vector<string> TextModerationResponse::GetKeywords() const
{
    return m_keywords;
}

bool TextModerationResponse::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

int64_t TextModerationResponse::GetScore() const
{
    return m_score;
}

bool TextModerationResponse::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<DetailResults> TextModerationResponse::GetDetailResults() const
{
    return m_detailResults;
}

bool TextModerationResponse::DetailResultsHasBeenSet() const
{
    return m_detailResultsHasBeenSet;
}

vector<RiskDetails> TextModerationResponse::GetRiskDetails() const
{
    return m_riskDetails;
}

bool TextModerationResponse::RiskDetailsHasBeenSet() const
{
    return m_riskDetailsHasBeenSet;
}

string TextModerationResponse::GetExtra() const
{
    return m_extra;
}

bool TextModerationResponse::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

string TextModerationResponse::GetDataId() const
{
    return m_dataId;
}

bool TextModerationResponse::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string TextModerationResponse::GetSubLabel() const
{
    return m_subLabel;
}

bool TextModerationResponse::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

string TextModerationResponse::GetContextText() const
{
    return m_contextText;
}

bool TextModerationResponse::ContextTextHasBeenSet() const
{
    return m_contextTextHasBeenSet;
}

SentimentAnalysis TextModerationResponse::GetSentimentAnalysis() const
{
    return m_sentimentAnalysis;
}

bool TextModerationResponse::SentimentAnalysisHasBeenSet() const
{
    return m_sentimentAnalysisHasBeenSet;
}

string TextModerationResponse::GetHitType() const
{
    return m_hitType;
}

bool TextModerationResponse::HitTypeHasBeenSet() const
{
    return m_hitTypeHasBeenSet;
}


