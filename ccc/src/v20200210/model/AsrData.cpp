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

#include <tencentcloud/ccc/v20200210/model/AsrData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AsrData::AsrData() :
    m_userHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

CoreInternalOutcome AsrData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrData.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrData.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrData.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Start") && !value["Start"].IsNull())
    {
        if (!value["Start"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrData.Start` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_start = value["Start"].GetInt64();
        m_startHasBeenSet = true;
    }

    if (value.HasMember("End") && !value["End"].IsNull())
    {
        if (!value["End"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrData.End` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_end = value["End"].GetInt64();
        m_endHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsrData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_start, allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_end, allocator);
    }

}


string AsrData::GetUser() const
{
    return m_user;
}

void AsrData::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AsrData::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AsrData::GetMessage() const
{
    return m_message;
}

void AsrData::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool AsrData::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t AsrData::GetTimestamp() const
{
    return m_timestamp;
}

void AsrData::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool AsrData::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

int64_t AsrData::GetStart() const
{
    return m_start;
}

void AsrData::SetStart(const int64_t& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool AsrData::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

int64_t AsrData::GetEnd() const
{
    return m_end;
}

void AsrData::SetEnd(const int64_t& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool AsrData::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

