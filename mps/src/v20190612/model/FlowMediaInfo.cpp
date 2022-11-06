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

#include <tencentcloud/mps/v20190612/model/FlowMediaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

FlowMediaInfo::FlowMediaInfo() :
    m_timestampHasBeenSet(false),
    m_networkHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_audioHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_clientIpHasBeenSet(false)
{
}

CoreInternalOutcome FlowMediaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowMediaInfo.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Network") && !value["Network"].IsNull())
    {
        if (!value["Network"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowMediaInfo.Network` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_network = value["Network"].GetInt64();
        m_networkHasBeenSet = true;
    }

    if (value.HasMember("Video") && !value["Video"].IsNull())
    {
        if (!value["Video"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowMediaInfo.Video` is not array type"));

        const rapidjson::Value &tmpValue = value["Video"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowMediaVideo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_video.push_back(item);
        }
        m_videoHasBeenSet = true;
    }

    if (value.HasMember("Audio") && !value["Audio"].IsNull())
    {
        if (!value["Audio"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowMediaInfo.Audio` is not array type"));

        const rapidjson::Value &tmpValue = value["Audio"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowMediaAudio item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audio.push_back(item);
        }
        m_audioHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowMediaInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowMediaInfo.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowMediaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_networkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Network";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_network, allocator);
    }

    if (m_videoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Video";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_video.begin(); itr != m_video.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_audioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audio.begin(); itr != m_audio.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

}


int64_t FlowMediaInfo::GetTimestamp() const
{
    return m_timestamp;
}

void FlowMediaInfo::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool FlowMediaInfo::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

int64_t FlowMediaInfo::GetNetwork() const
{
    return m_network;
}

void FlowMediaInfo::SetNetwork(const int64_t& _network)
{
    m_network = _network;
    m_networkHasBeenSet = true;
}

bool FlowMediaInfo::NetworkHasBeenSet() const
{
    return m_networkHasBeenSet;
}

vector<FlowMediaVideo> FlowMediaInfo::GetVideo() const
{
    return m_video;
}

void FlowMediaInfo::SetVideo(const vector<FlowMediaVideo>& _video)
{
    m_video = _video;
    m_videoHasBeenSet = true;
}

bool FlowMediaInfo::VideoHasBeenSet() const
{
    return m_videoHasBeenSet;
}

vector<FlowMediaAudio> FlowMediaInfo::GetAudio() const
{
    return m_audio;
}

void FlowMediaInfo::SetAudio(const vector<FlowMediaAudio>& _audio)
{
    m_audio = _audio;
    m_audioHasBeenSet = true;
}

bool FlowMediaInfo::AudioHasBeenSet() const
{
    return m_audioHasBeenSet;
}

string FlowMediaInfo::GetSessionId() const
{
    return m_sessionId;
}

void FlowMediaInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool FlowMediaInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string FlowMediaInfo::GetClientIp() const
{
    return m_clientIp;
}

void FlowMediaInfo::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool FlowMediaInfo::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

