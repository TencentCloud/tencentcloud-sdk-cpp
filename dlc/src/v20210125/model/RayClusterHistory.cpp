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

#include <tencentcloud/dlc/v20210125/model/RayClusterHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

RayClusterHistory::RayClusterHistory() :
    m_idHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_fromStateHasBeenSet(false),
    m_toStateHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_transitionTimeHasBeenSet(false)
{
}

CoreInternalOutcome RayClusterHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterHistory.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterHistory.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterHistory.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("FromState") && !value["FromState"].IsNull())
    {
        if (!value["FromState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterHistory.FromState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromState = string(value["FromState"].GetString());
        m_fromStateHasBeenSet = true;
    }

    if (value.HasMember("ToState") && !value["ToState"].IsNull())
    {
        if (!value["ToState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterHistory.ToState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toState = string(value["ToState"].GetString());
        m_toStateHasBeenSet = true;
    }

    if (value.HasMember("Event") && !value["Event"].IsNull())
    {
        if (!value["Event"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterHistory.Event` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_event = string(value["Event"].GetString());
        m_eventHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterHistory.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("TransitionTime") && !value["TransitionTime"].IsNull())
    {
        if (!value["TransitionTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterHistory.TransitionTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transitionTime = value["TransitionTime"].GetInt64();
        m_transitionTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RayClusterHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
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


int64_t RayClusterHistory::GetId() const
{
    return m_id;
}

void RayClusterHistory::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RayClusterHistory::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RayClusterHistory::GetClusterId() const
{
    return m_clusterId;
}

void RayClusterHistory::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RayClusterHistory::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RayClusterHistory::GetClusterName() const
{
    return m_clusterName;
}

void RayClusterHistory::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool RayClusterHistory::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string RayClusterHistory::GetFromState() const
{
    return m_fromState;
}

void RayClusterHistory::SetFromState(const string& _fromState)
{
    m_fromState = _fromState;
    m_fromStateHasBeenSet = true;
}

bool RayClusterHistory::FromStateHasBeenSet() const
{
    return m_fromStateHasBeenSet;
}

string RayClusterHistory::GetToState() const
{
    return m_toState;
}

void RayClusterHistory::SetToState(const string& _toState)
{
    m_toState = _toState;
    m_toStateHasBeenSet = true;
}

bool RayClusterHistory::ToStateHasBeenSet() const
{
    return m_toStateHasBeenSet;
}

string RayClusterHistory::GetEvent() const
{
    return m_event;
}

void RayClusterHistory::SetEvent(const string& _event)
{
    m_event = _event;
    m_eventHasBeenSet = true;
}

bool RayClusterHistory::EventHasBeenSet() const
{
    return m_eventHasBeenSet;
}

string RayClusterHistory::GetMessage() const
{
    return m_message;
}

void RayClusterHistory::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool RayClusterHistory::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t RayClusterHistory::GetTransitionTime() const
{
    return m_transitionTime;
}

void RayClusterHistory::SetTransitionTime(const int64_t& _transitionTime)
{
    m_transitionTime = _transitionTime;
    m_transitionTimeHasBeenSet = true;
}

bool RayClusterHistory::TransitionTimeHasBeenSet() const
{
    return m_transitionTimeHasBeenSet;
}

