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

#include <tencentcloud/tione/v20211111/model/ContainerStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ContainerStatus::ContainerStatus() :
    m_restartCountHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_readyHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome ContainerStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RestartCount") && !value["RestartCount"].IsNull())
    {
        if (!value["RestartCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStatus.RestartCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restartCount = value["RestartCount"].GetInt64();
        m_restartCountHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStatus.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Ready") && !value["Ready"].IsNull())
    {
        if (!value["Ready"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStatus.Ready` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ready = value["Ready"].GetBool();
        m_readyHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStatus.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStatus.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_restartCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartCount, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_readyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ready";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ready, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


int64_t ContainerStatus::GetRestartCount() const
{
    return m_restartCount;
}

void ContainerStatus::SetRestartCount(const int64_t& _restartCount)
{
    m_restartCount = _restartCount;
    m_restartCountHasBeenSet = true;
}

bool ContainerStatus::RestartCountHasBeenSet() const
{
    return m_restartCountHasBeenSet;
}

string ContainerStatus::GetState() const
{
    return m_state;
}

void ContainerStatus::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ContainerStatus::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

bool ContainerStatus::GetReady() const
{
    return m_ready;
}

void ContainerStatus::SetReady(const bool& _ready)
{
    m_ready = _ready;
    m_readyHasBeenSet = true;
}

bool ContainerStatus::ReadyHasBeenSet() const
{
    return m_readyHasBeenSet;
}

string ContainerStatus::GetReason() const
{
    return m_reason;
}

void ContainerStatus::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ContainerStatus::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string ContainerStatus::GetMessage() const
{
    return m_message;
}

void ContainerStatus::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ContainerStatus::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

