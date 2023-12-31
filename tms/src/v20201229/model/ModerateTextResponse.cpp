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

#include <tencentcloud/tms/v20201229/model/ModerateTextResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20201229::Model;
using namespace std;

ModerateTextResponse::ModerateTextResponse() :
    m_dataIdHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_tcLabelCodesHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_moderationDetailsHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome ModerateTextResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DataId") && !rsp["DataId"].IsNull())
    {
        if (!rsp["DataId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(rsp["DataId"].GetString());
        m_dataIdHasBeenSet = true;
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

    if (rsp.HasMember("Suggestion") && !rsp["Suggestion"].IsNull())
    {
        if (!rsp["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(rsp["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (rsp.HasMember("Label") && !rsp["Label"].IsNull())
    {
        if (!rsp["Label"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Label` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_label.Deserialize(rsp["Label"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_labelHasBeenSet = true;
    }

    if (rsp.HasMember("TcLabelCodes") && !rsp["TcLabelCodes"].IsNull())
    {
        if (!rsp["TcLabelCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TcLabelCodes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TcLabelCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tcLabelCodes.push_back((*itr).GetString());
        }
        m_tcLabelCodesHasBeenSet = true;
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

    if (rsp.HasMember("ModerationDetails") && !rsp["ModerationDetails"].IsNull())
    {
        if (!rsp["ModerationDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModerationDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ModerationDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModerationDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_moderationDetails.push_back(item);
        }
        m_moderationDetailsHasBeenSet = true;
    }

    if (rsp.HasMember("Score") && !rsp["Score"].IsNull())
    {
        if (!rsp["Score"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = rsp["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModerateTextResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_label.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tcLabelCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcLabelCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tcLabelCodes.begin(); itr != m_tcLabelCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_moderationDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModerationDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_moderationDetails.begin(); itr != m_moderationDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
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


string ModerateTextResponse::GetDataId() const
{
    return m_dataId;
}

bool ModerateTextResponse::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string ModerateTextResponse::GetBizType() const
{
    return m_bizType;
}

bool ModerateTextResponse::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string ModerateTextResponse::GetSuggestion() const
{
    return m_suggestion;
}

bool ModerateTextResponse::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

LabelGrade ModerateTextResponse::GetLabel() const
{
    return m_label;
}

bool ModerateTextResponse::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

vector<string> ModerateTextResponse::GetTcLabelCodes() const
{
    return m_tcLabelCodes;
}

bool ModerateTextResponse::TcLabelCodesHasBeenSet() const
{
    return m_tcLabelCodesHasBeenSet;
}

vector<string> ModerateTextResponse::GetKeywords() const
{
    return m_keywords;
}

bool ModerateTextResponse::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

vector<ModerationDetail> ModerateTextResponse::GetModerationDetails() const
{
    return m_moderationDetails;
}

bool ModerateTextResponse::ModerationDetailsHasBeenSet() const
{
    return m_moderationDetailsHasBeenSet;
}

uint64_t ModerateTextResponse::GetScore() const
{
    return m_score;
}

bool ModerateTextResponse::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}


