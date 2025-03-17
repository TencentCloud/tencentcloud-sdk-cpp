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

#include <tencentcloud/hunyuan/v20230901/model/GroupChatCompletionsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

GroupChatCompletionsResponse::GroupChatCompletionsResponse() :
    m_createdHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_idHasBeenSet(false),
    m_choicesHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_searchInfoHasBeenSet(false),
    m_replacesHasBeenSet(false),
    m_recommendedQuestionsHasBeenSet(false)
{
}

CoreInternalOutcome GroupChatCompletionsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Created") && !rsp["Created"].IsNull())
    {
        if (!rsp["Created"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Created` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_created = rsp["Created"].GetInt64();
        m_createdHasBeenSet = true;
    }

    if (rsp.HasMember("Usage") && !rsp["Usage"].IsNull())
    {
        if (!rsp["Usage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Usage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_usage.Deserialize(rsp["Usage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_usageHasBeenSet = true;
    }

    if (rsp.HasMember("Note") && !rsp["Note"].IsNull())
    {
        if (!rsp["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(rsp["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(rsp["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("Choices") && !rsp["Choices"].IsNull())
    {
        if (!rsp["Choices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Choices` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Choices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Choice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_choices.push_back(item);
        }
        m_choicesHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMsg") && !rsp["ErrorMsg"].IsNull())
    {
        if (!rsp["ErrorMsg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMsg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errorMsg.Deserialize(rsp["ErrorMsg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorMsgHasBeenSet = true;
    }

    if (rsp.HasMember("SearchInfo") && !rsp["SearchInfo"].IsNull())
    {
        if (!rsp["SearchInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SearchInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_searchInfo.Deserialize(rsp["SearchInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_searchInfoHasBeenSet = true;
    }

    if (rsp.HasMember("Replaces") && !rsp["Replaces"].IsNull())
    {
        if (!rsp["Replaces"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Replaces` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Replaces"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Replace item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_replaces.push_back(item);
        }
        m_replacesHasBeenSet = true;
    }

    if (rsp.HasMember("RecommendedQuestions") && !rsp["RecommendedQuestions"].IsNull())
    {
        if (!rsp["RecommendedQuestions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecommendedQuestions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RecommendedQuestions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recommendedQuestions.push_back((*itr).GetString());
        }
        m_recommendedQuestionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GroupChatCompletionsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_createdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Created";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_created, allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_usage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_choicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Choices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_choices.begin(); itr != m_choices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errorMsg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_searchInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_replacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_replaces.begin(); itr != m_replaces.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_recommendedQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecommendedQuestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recommendedQuestions.begin(); itr != m_recommendedQuestions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


int64_t GroupChatCompletionsResponse::GetCreated() const
{
    return m_created;
}

bool GroupChatCompletionsResponse::CreatedHasBeenSet() const
{
    return m_createdHasBeenSet;
}

Usage GroupChatCompletionsResponse::GetUsage() const
{
    return m_usage;
}

bool GroupChatCompletionsResponse::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

string GroupChatCompletionsResponse::GetNote() const
{
    return m_note;
}

bool GroupChatCompletionsResponse::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string GroupChatCompletionsResponse::GetId() const
{
    return m_id;
}

bool GroupChatCompletionsResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<Choice> GroupChatCompletionsResponse::GetChoices() const
{
    return m_choices;
}

bool GroupChatCompletionsResponse::ChoicesHasBeenSet() const
{
    return m_choicesHasBeenSet;
}

ErrorMsg GroupChatCompletionsResponse::GetErrorMsg() const
{
    return m_errorMsg;
}

bool GroupChatCompletionsResponse::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

SearchInfo GroupChatCompletionsResponse::GetSearchInfo() const
{
    return m_searchInfo;
}

bool GroupChatCompletionsResponse::SearchInfoHasBeenSet() const
{
    return m_searchInfoHasBeenSet;
}

vector<Replace> GroupChatCompletionsResponse::GetReplaces() const
{
    return m_replaces;
}

bool GroupChatCompletionsResponse::ReplacesHasBeenSet() const
{
    return m_replacesHasBeenSet;
}

vector<string> GroupChatCompletionsResponse::GetRecommendedQuestions() const
{
    return m_recommendedQuestions;
}

bool GroupChatCompletionsResponse::RecommendedQuestionsHasBeenSet() const
{
    return m_recommendedQuestionsHasBeenSet;
}


