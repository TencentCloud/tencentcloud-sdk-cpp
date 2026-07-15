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

#include <tencentcloud/iotexplorer/v20190423/model/TalkTTSFlow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkTTSFlow::TalkTTSFlow() :
    m_voiceIdHasBeenSet(false),
    m_speedHasBeenSet(false)
{
}

CoreInternalOutcome TalkTTSFlow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkTTSFlow.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (value.HasMember("Speed") && !value["Speed"].IsNull())
    {
        if (!value["Speed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TalkTTSFlow.Speed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_speed = value["Speed"].GetDouble();
        m_speedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkTTSFlow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_speedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Speed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speed, allocator);
    }

}


string TalkTTSFlow::GetVoiceId() const
{
    return m_voiceId;
}

void TalkTTSFlow::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool TalkTTSFlow::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

double TalkTTSFlow::GetSpeed() const
{
    return m_speed;
}

void TalkTTSFlow::SetSpeed(const double& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool TalkTTSFlow::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

