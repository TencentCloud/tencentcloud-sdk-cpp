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

#include <tencentcloud/ccc/v20200210/model/UserReplyEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

UserReplyEvent::UserReplyEvent() :
    m_aSRTranscriptHasBeenSet(false),
    m_matchedIntentHasBeenSet(false),
    m_extractedSlotsHasBeenSet(false),
    m_branchTypeHasBeenSet(false)
{
}

CoreInternalOutcome UserReplyEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ASRTranscript") && !value["ASRTranscript"].IsNull())
    {
        if (!value["ASRTranscript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserReplyEvent.ASRTranscript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aSRTranscript = string(value["ASRTranscript"].GetString());
        m_aSRTranscriptHasBeenSet = true;
    }

    if (value.HasMember("MatchedIntent") && !value["MatchedIntent"].IsNull())
    {
        if (!value["MatchedIntent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserReplyEvent.MatchedIntent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchedIntent = string(value["MatchedIntent"].GetString());
        m_matchedIntentHasBeenSet = true;
    }

    if (value.HasMember("ExtractedSlots") && !value["ExtractedSlots"].IsNull())
    {
        if (!value["ExtractedSlots"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserReplyEvent.ExtractedSlots` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extractedSlots = string(value["ExtractedSlots"].GetString());
        m_extractedSlotsHasBeenSet = true;
    }

    if (value.HasMember("BranchType") && !value["BranchType"].IsNull())
    {
        if (!value["BranchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserReplyEvent.BranchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_branchType = string(value["BranchType"].GetString());
        m_branchTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserReplyEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aSRTranscriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ASRTranscript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aSRTranscript.c_str(), allocator).Move(), allocator);
    }

    if (m_matchedIntentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchedIntent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchedIntent.c_str(), allocator).Move(), allocator);
    }

    if (m_extractedSlotsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractedSlots";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extractedSlots.c_str(), allocator).Move(), allocator);
    }

    if (m_branchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BranchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_branchType.c_str(), allocator).Move(), allocator);
    }

}


string UserReplyEvent::GetASRTranscript() const
{
    return m_aSRTranscript;
}

void UserReplyEvent::SetASRTranscript(const string& _aSRTranscript)
{
    m_aSRTranscript = _aSRTranscript;
    m_aSRTranscriptHasBeenSet = true;
}

bool UserReplyEvent::ASRTranscriptHasBeenSet() const
{
    return m_aSRTranscriptHasBeenSet;
}

string UserReplyEvent::GetMatchedIntent() const
{
    return m_matchedIntent;
}

void UserReplyEvent::SetMatchedIntent(const string& _matchedIntent)
{
    m_matchedIntent = _matchedIntent;
    m_matchedIntentHasBeenSet = true;
}

bool UserReplyEvent::MatchedIntentHasBeenSet() const
{
    return m_matchedIntentHasBeenSet;
}

string UserReplyEvent::GetExtractedSlots() const
{
    return m_extractedSlots;
}

void UserReplyEvent::SetExtractedSlots(const string& _extractedSlots)
{
    m_extractedSlots = _extractedSlots;
    m_extractedSlotsHasBeenSet = true;
}

bool UserReplyEvent::ExtractedSlotsHasBeenSet() const
{
    return m_extractedSlotsHasBeenSet;
}

string UserReplyEvent::GetBranchType() const
{
    return m_branchType;
}

void UserReplyEvent::SetBranchType(const string& _branchType)
{
    m_branchType = _branchType;
    m_branchTypeHasBeenSet = true;
}

bool UserReplyEvent::BranchTypeHasBeenSet() const
{
    return m_branchTypeHasBeenSet;
}

