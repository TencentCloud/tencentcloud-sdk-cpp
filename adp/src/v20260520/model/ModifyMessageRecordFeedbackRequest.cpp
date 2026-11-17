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

#include <tencentcloud/adp/v20260520/model/ModifyMessageRecordFeedbackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyMessageRecordFeedbackRequest::ModifyMessageRecordFeedbackRequest() :
    m_recordIdHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_reasonListHasBeenSet(false),
    m_feedbackContentHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

string ModifyMessageRecordFeedbackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_score, allocator);
    }

    if (m_reasonListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasonList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reasonList.begin(); itr != m_reasonList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_feedbackContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeedbackContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_feedbackContent.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMessageRecordFeedbackRequest::GetRecordId() const
{
    return m_recordId;
}

void ModifyMessageRecordFeedbackRequest::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool ModifyMessageRecordFeedbackRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string ModifyMessageRecordFeedbackRequest::GetAppKey() const
{
    return m_appKey;
}

void ModifyMessageRecordFeedbackRequest::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool ModifyMessageRecordFeedbackRequest::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

uint64_t ModifyMessageRecordFeedbackRequest::GetScore() const
{
    return m_score;
}

void ModifyMessageRecordFeedbackRequest::SetScore(const uint64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ModifyMessageRecordFeedbackRequest::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<string> ModifyMessageRecordFeedbackRequest::GetReasonList() const
{
    return m_reasonList;
}

void ModifyMessageRecordFeedbackRequest::SetReasonList(const vector<string>& _reasonList)
{
    m_reasonList = _reasonList;
    m_reasonListHasBeenSet = true;
}

bool ModifyMessageRecordFeedbackRequest::ReasonListHasBeenSet() const
{
    return m_reasonListHasBeenSet;
}

string ModifyMessageRecordFeedbackRequest::GetFeedbackContent() const
{
    return m_feedbackContent;
}

void ModifyMessageRecordFeedbackRequest::SetFeedbackContent(const string& _feedbackContent)
{
    m_feedbackContent = _feedbackContent;
    m_feedbackContentHasBeenSet = true;
}

bool ModifyMessageRecordFeedbackRequest::FeedbackContentHasBeenSet() const
{
    return m_feedbackContentHasBeenSet;
}

string ModifyMessageRecordFeedbackRequest::GetAppId() const
{
    return m_appId;
}

void ModifyMessageRecordFeedbackRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ModifyMessageRecordFeedbackRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}


