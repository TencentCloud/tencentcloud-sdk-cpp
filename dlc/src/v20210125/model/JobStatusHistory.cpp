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

#include <tencentcloud/dlc/v20210125/model/JobStatusHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

JobStatusHistory::JobStatusHistory() :
    m_idHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_fromStateHasBeenSet(false),
    m_toStateHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_transitionTimeHasBeenSet(false)
{
}

CoreInternalOutcome JobStatusHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatusHistory.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatusHistory.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatusHistory.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("FromState") && !value["FromState"].IsNull())
    {
        if (!value["FromState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatusHistory.FromState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromState = string(value["FromState"].GetString());
        m_fromStateHasBeenSet = true;
    }

    if (value.HasMember("ToState") && !value["ToState"].IsNull())
    {
        if (!value["ToState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatusHistory.ToState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toState = string(value["ToState"].GetString());
        m_toStateHasBeenSet = true;
    }

    if (value.HasMember("Event") && !value["Event"].IsNull())
    {
        if (!value["Event"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatusHistory.Event` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_event = string(value["Event"].GetString());
        m_eventHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatusHistory.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("TransitionTime") && !value["TransitionTime"].IsNull())
    {
        if (!value["TransitionTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatusHistory.TransitionTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transitionTime = value["TransitionTime"].GetUint64();
        m_transitionTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobStatusHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_fromStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromState.c_str(), allocator).Move(), allocator);
    }

    if (m_toStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toState.c_str(), allocator).Move(), allocator);
    }

    if (m_eventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Event";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_event.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_transitionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransitionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transitionTime, allocator);
    }

}


int64_t JobStatusHistory::GetId() const
{
    return m_id;
}

void JobStatusHistory::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool JobStatusHistory::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string JobStatusHistory::GetJobId() const
{
    return m_jobId;
}

void JobStatusHistory::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool JobStatusHistory::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string JobStatusHistory::GetJobName() const
{
    return m_jobName;
}

void JobStatusHistory::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool JobStatusHistory::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string JobStatusHistory::GetFromState() const
{
    return m_fromState;
}

void JobStatusHistory::SetFromState(const string& _fromState)
{
    m_fromState = _fromState;
    m_fromStateHasBeenSet = true;
}

bool JobStatusHistory::FromStateHasBeenSet() const
{
    return m_fromStateHasBeenSet;
}

string JobStatusHistory::GetToState() const
{
    return m_toState;
}

void JobStatusHistory::SetToState(const string& _toState)
{
    m_toState = _toState;
    m_toStateHasBeenSet = true;
}

bool JobStatusHistory::ToStateHasBeenSet() const
{
    return m_toStateHasBeenSet;
}

string JobStatusHistory::GetEvent() const
{
    return m_event;
}

void JobStatusHistory::SetEvent(const string& _event)
{
    m_event = _event;
    m_eventHasBeenSet = true;
}

bool JobStatusHistory::EventHasBeenSet() const
{
    return m_eventHasBeenSet;
}

string JobStatusHistory::GetMessage() const
{
    return m_message;
}

void JobStatusHistory::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool JobStatusHistory::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

uint64_t JobStatusHistory::GetTransitionTime() const
{
    return m_transitionTime;
}

void JobStatusHistory::SetTransitionTime(const uint64_t& _transitionTime)
{
    m_transitionTime = _transitionTime;
    m_transitionTimeHasBeenSet = true;
}

bool JobStatusHistory::TransitionTimeHasBeenSet() const
{
    return m_transitionTimeHasBeenSet;
}

