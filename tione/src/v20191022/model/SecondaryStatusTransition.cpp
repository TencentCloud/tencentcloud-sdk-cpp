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

#include <tencentcloud/tione/v20191022/model/SecondaryStatusTransition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

SecondaryStatusTransition::SecondaryStatusTransition() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

CoreInternalOutcome SecondaryStatusTransition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecondaryStatusTransition.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecondaryStatusTransition.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecondaryStatusTransition.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusMessage") && !value["StatusMessage"].IsNull())
    {
        if (!value["StatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecondaryStatusTransition.StatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMessage = string(value["StatusMessage"].GetString());
        m_statusMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecondaryStatusTransition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusMessage.c_str(), allocator).Move(), allocator);
    }

}


string SecondaryStatusTransition::GetStartTime() const
{
    return m_startTime;
}

void SecondaryStatusTransition::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SecondaryStatusTransition::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SecondaryStatusTransition::GetEndTime() const
{
    return m_endTime;
}

void SecondaryStatusTransition::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SecondaryStatusTransition::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SecondaryStatusTransition::GetStatus() const
{
    return m_status;
}

void SecondaryStatusTransition::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SecondaryStatusTransition::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SecondaryStatusTransition::GetStatusMessage() const
{
    return m_statusMessage;
}

void SecondaryStatusTransition::SetStatusMessage(const string& _statusMessage)
{
    m_statusMessage = _statusMessage;
    m_statusMessageHasBeenSet = true;
}

bool SecondaryStatusTransition::StatusMessageHasBeenSet() const
{
    return m_statusMessageHasBeenSet;
}

