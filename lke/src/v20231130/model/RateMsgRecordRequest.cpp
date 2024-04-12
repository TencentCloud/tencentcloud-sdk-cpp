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

#include <tencentcloud/lke/v20231130/model/RateMsgRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

RateMsgRecordRequest::RateMsgRecordRequest() :
    m_botAppKeyHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_reasonsHasBeenSet(false)
{
}

string RateMsgRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotAppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botAppKey.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_score, allocator);
    }

    if (m_reasonsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reasons";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reasons.begin(); itr != m_reasons.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RateMsgRecordRequest::GetBotAppKey() const
{
    return m_botAppKey;
}

void RateMsgRecordRequest::SetBotAppKey(const string& _botAppKey)
{
    m_botAppKey = _botAppKey;
    m_botAppKeyHasBeenSet = true;
}

bool RateMsgRecordRequest::BotAppKeyHasBeenSet() const
{
    return m_botAppKeyHasBeenSet;
}

string RateMsgRecordRequest::GetRecordId() const
{
    return m_recordId;
}

void RateMsgRecordRequest::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool RateMsgRecordRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

uint64_t RateMsgRecordRequest::GetScore() const
{
    return m_score;
}

void RateMsgRecordRequest::SetScore(const uint64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool RateMsgRecordRequest::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<string> RateMsgRecordRequest::GetReasons() const
{
    return m_reasons;
}

void RateMsgRecordRequest::SetReasons(const vector<string>& _reasons)
{
    m_reasons = _reasons;
    m_reasonsHasBeenSet = true;
}

bool RateMsgRecordRequest::ReasonsHasBeenSet() const
{
    return m_reasonsHasBeenSet;
}


