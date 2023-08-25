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

#include <tencentcloud/dsgc/v20190723/model/ProcessHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ProcessHistory::ProcessHistory() :
    m_timeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_handlerHasBeenSet(false),
    m_noteHasBeenSet(false)
{
}

CoreInternalOutcome ProcessHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessHistory.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessHistory.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Handler") && !value["Handler"].IsNull())
    {
        if (!value["Handler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessHistory.Handler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handler = string(value["Handler"].GetString());
        m_handlerHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessHistory.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_handlerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Handler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handler.c_str(), allocator).Move(), allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

}


string ProcessHistory::GetTime() const
{
    return m_time;
}

void ProcessHistory::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool ProcessHistory::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t ProcessHistory::GetStatus() const
{
    return m_status;
}

void ProcessHistory::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProcessHistory::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ProcessHistory::GetHandler() const
{
    return m_handler;
}

void ProcessHistory::SetHandler(const string& _handler)
{
    m_handler = _handler;
    m_handlerHasBeenSet = true;
}

bool ProcessHistory::HandlerHasBeenSet() const
{
    return m_handlerHasBeenSet;
}

string ProcessHistory::GetNote() const
{
    return m_note;
}

void ProcessHistory::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool ProcessHistory::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

