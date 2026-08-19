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

#include <tencentcloud/csip/v20221121/model/AIAnalysisSession.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AIAnalysisSession::AIAnalysisSession() :
    m_titleHasBeenSet(false),
    m_sessionIDHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_isPinnedHasBeenSet(false)
{
}

CoreInternalOutcome AIAnalysisSession::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAnalysisSession.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("SessionID") && !value["SessionID"].IsNull())
    {
        if (!value["SessionID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAnalysisSession.SessionID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionID = string(value["SessionID"].GetString());
        m_sessionIDHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIAnalysisSession.ModifyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = value["ModifyTime"].GetInt64();
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("IsPinned") && !value["IsPinned"].IsNull())
    {
        if (!value["IsPinned"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIAnalysisSession.IsPinned` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPinned = value["IsPinned"].GetBool();
        m_isPinnedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIAnalysisSession::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionID.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyTime, allocator);
    }

    if (m_isPinnedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPinned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPinned, allocator);
    }

}


string AIAnalysisSession::GetTitle() const
{
    return m_title;
}

void AIAnalysisSession::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool AIAnalysisSession::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string AIAnalysisSession::GetSessionID() const
{
    return m_sessionID;
}

void AIAnalysisSession::SetSessionID(const string& _sessionID)
{
    m_sessionID = _sessionID;
    m_sessionIDHasBeenSet = true;
}

bool AIAnalysisSession::SessionIDHasBeenSet() const
{
    return m_sessionIDHasBeenSet;
}

int64_t AIAnalysisSession::GetModifyTime() const
{
    return m_modifyTime;
}

void AIAnalysisSession::SetModifyTime(const int64_t& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool AIAnalysisSession::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

bool AIAnalysisSession::GetIsPinned() const
{
    return m_isPinned;
}

void AIAnalysisSession::SetIsPinned(const bool& _isPinned)
{
    m_isPinned = _isPinned;
    m_isPinnedHasBeenSet = true;
}

bool AIAnalysisSession::IsPinnedHasBeenSet() const
{
    return m_isPinnedHasBeenSet;
}

