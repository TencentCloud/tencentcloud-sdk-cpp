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

#include <tencentcloud/ccc/v20200210/model/StaffStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

StaffStatus::StaffStatus() :
    m_cursorHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_staffEmailHasBeenSet(false),
    m_staffNoHasBeenSet(false)
{
}

CoreInternalOutcome StaffStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cursor") && !value["Cursor"].IsNull())
    {
        if (!value["Cursor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatus.Cursor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cursor = string(value["Cursor"].GetString());
        m_cursorHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatus.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatus.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatus.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("StaffEmail") && !value["StaffEmail"].IsNull())
    {
        if (!value["StaffEmail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatus.StaffEmail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffEmail = string(value["StaffEmail"].GetString());
        m_staffEmailHasBeenSet = true;
    }

    if (value.HasMember("StaffNo") && !value["StaffNo"].IsNull())
    {
        if (!value["StaffNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffStatus.StaffNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffNo = string(value["StaffNo"].GetString());
        m_staffNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaffStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cursor.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_staffEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffEmail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staffEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_staffNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staffNo.c_str(), allocator).Move(), allocator);
    }

}


string StaffStatus::GetCursor() const
{
    return m_cursor;
}

void StaffStatus::SetCursor(const string& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool StaffStatus::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}

int64_t StaffStatus::GetTimestamp() const
{
    return m_timestamp;
}

void StaffStatus::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool StaffStatus::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string StaffStatus::GetStatus() const
{
    return m_status;
}

void StaffStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StaffStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string StaffStatus::GetSessionId() const
{
    return m_sessionId;
}

void StaffStatus::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool StaffStatus::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string StaffStatus::GetReason() const
{
    return m_reason;
}

void StaffStatus::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool StaffStatus::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string StaffStatus::GetStaffEmail() const
{
    return m_staffEmail;
}

void StaffStatus::SetStaffEmail(const string& _staffEmail)
{
    m_staffEmail = _staffEmail;
    m_staffEmailHasBeenSet = true;
}

bool StaffStatus::StaffEmailHasBeenSet() const
{
    return m_staffEmailHasBeenSet;
}

string StaffStatus::GetStaffNo() const
{
    return m_staffNo;
}

void StaffStatus::SetStaffNo(const string& _staffNo)
{
    m_staffNo = _staffNo;
    m_staffNoHasBeenSet = true;
}

bool StaffStatus::StaffNoHasBeenSet() const
{
    return m_staffNoHasBeenSet;
}

