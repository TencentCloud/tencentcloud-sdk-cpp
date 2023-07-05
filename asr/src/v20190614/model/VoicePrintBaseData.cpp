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

#include <tencentcloud/asr/v20190614/model/VoicePrintBaseData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

VoicePrintBaseData::VoicePrintBaseData() :
    m_voicePrintIdHasBeenSet(false),
    m_speakerNickHasBeenSet(false)
{
}

CoreInternalOutcome VoicePrintBaseData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoicePrintId") && !value["VoicePrintId"].IsNull())
    {
        if (!value["VoicePrintId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintBaseData.VoicePrintId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voicePrintId = string(value["VoicePrintId"].GetString());
        m_voicePrintIdHasBeenSet = true;
    }

    if (value.HasMember("SpeakerNick") && !value["SpeakerNick"].IsNull())
    {
        if (!value["SpeakerNick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintBaseData.SpeakerNick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_speakerNick = string(value["SpeakerNick"].GetString());
        m_speakerNickHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoicePrintBaseData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voicePrintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicePrintId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voicePrintId.c_str(), allocator).Move(), allocator);
    }

    if (m_speakerNickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerNick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_speakerNick.c_str(), allocator).Move(), allocator);
    }

}


string VoicePrintBaseData::GetVoicePrintId() const
{
    return m_voicePrintId;
}

void VoicePrintBaseData::SetVoicePrintId(const string& _voicePrintId)
{
    m_voicePrintId = _voicePrintId;
    m_voicePrintIdHasBeenSet = true;
}

bool VoicePrintBaseData::VoicePrintIdHasBeenSet() const
{
    return m_voicePrintIdHasBeenSet;
}

string VoicePrintBaseData::GetSpeakerNick() const
{
    return m_speakerNick;
}

void VoicePrintBaseData::SetSpeakerNick(const string& _speakerNick)
{
    m_speakerNick = _speakerNick;
    m_speakerNickHasBeenSet = true;
}

bool VoicePrintBaseData::SpeakerNickHasBeenSet() const
{
    return m_speakerNickHasBeenSet;
}

