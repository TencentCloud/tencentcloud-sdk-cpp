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

#include <tencentcloud/mps/v20190612/model/FlowRealtimeStatusCommon.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

FlowRealtimeStatusCommon::FlowRealtimeStatusCommon() :
    m_stateHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_connectedTimeHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_reconnectionsHasBeenSet(false)
{
}

CoreInternalOutcome FlowRealtimeStatusCommon::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusCommon.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusCommon.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("ConnectedTime") && !value["ConnectedTime"].IsNull())
    {
        if (!value["ConnectedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusCommon.ConnectedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectedTime = value["ConnectedTime"].GetInt64();
        m_connectedTimeHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusCommon.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Reconnections") && !value["Reconnections"].IsNull())
    {
        if (!value["Reconnections"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusCommon.Reconnections` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reconnections = value["Reconnections"].GetInt64();
        m_reconnectionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowRealtimeStatusCommon::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_connectedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectedTime, allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_reconnectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reconnections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reconnections, allocator);
    }

}


string FlowRealtimeStatusCommon::GetState() const
{
    return m_state;
}

void FlowRealtimeStatusCommon::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool FlowRealtimeStatusCommon::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string FlowRealtimeStatusCommon::GetMode() const
{
    return m_mode;
}

void FlowRealtimeStatusCommon::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool FlowRealtimeStatusCommon::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t FlowRealtimeStatusCommon::GetConnectedTime() const
{
    return m_connectedTime;
}

void FlowRealtimeStatusCommon::SetConnectedTime(const int64_t& _connectedTime)
{
    m_connectedTime = _connectedTime;
    m_connectedTimeHasBeenSet = true;
}

bool FlowRealtimeStatusCommon::ConnectedTimeHasBeenSet() const
{
    return m_connectedTimeHasBeenSet;
}

int64_t FlowRealtimeStatusCommon::GetBitrate() const
{
    return m_bitrate;
}

void FlowRealtimeStatusCommon::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool FlowRealtimeStatusCommon::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

int64_t FlowRealtimeStatusCommon::GetReconnections() const
{
    return m_reconnections;
}

void FlowRealtimeStatusCommon::SetReconnections(const int64_t& _reconnections)
{
    m_reconnections = _reconnections;
    m_reconnectionsHasBeenSet = true;
}

bool FlowRealtimeStatusCommon::ReconnectionsHasBeenSet() const
{
    return m_reconnectionsHasBeenSet;
}

