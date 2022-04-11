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

#include <tencentcloud/icr/v20211014/model/RspMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Icr::V20211014::Model;
using namespace std;

RspMetadata::RspMetadata() :
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_sessionIDHasBeenSet(false),
    m_sessionDeltaHasBeenSet(false)
{
}

CoreInternalOutcome RspMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RspMetadata.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RspMetadata.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("SessionID") && !value["SessionID"].IsNull())
    {
        if (!value["SessionID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RspMetadata.SessionID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionID = string(value["SessionID"].GetString());
        m_sessionIDHasBeenSet = true;
    }

    if (value.HasMember("SessionDelta") && !value["SessionDelta"].IsNull())
    {
        if (!value["SessionDelta"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RspMetadata.SessionDelta` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionDelta = string(value["SessionDelta"].GetString());
        m_sessionDeltaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RspMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionID.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionDeltaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionDelta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionDelta.c_str(), allocator).Move(), allocator);
    }

}


int64_t RspMetadata::GetCode() const
{
    return m_code;
}

void RspMetadata::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool RspMetadata::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string RspMetadata::GetMessage() const
{
    return m_message;
}

void RspMetadata::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool RspMetadata::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string RspMetadata::GetSessionID() const
{
    return m_sessionID;
}

void RspMetadata::SetSessionID(const string& _sessionID)
{
    m_sessionID = _sessionID;
    m_sessionIDHasBeenSet = true;
}

bool RspMetadata::SessionIDHasBeenSet() const
{
    return m_sessionIDHasBeenSet;
}

string RspMetadata::GetSessionDelta() const
{
    return m_sessionDelta;
}

void RspMetadata::SetSessionDelta(const string& _sessionDelta)
{
    m_sessionDelta = _sessionDelta;
    m_sessionDeltaHasBeenSet = true;
}

bool RspMetadata::SessionDeltaHasBeenSet() const
{
    return m_sessionDeltaHasBeenSet;
}

