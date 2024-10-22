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

#include <tencentcloud/tsi/v20210325/model/DisplayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsi::V20210325::Model;
using namespace std;

DisplayInfo::DisplayInfo() :
    m_seIdHasBeenSet(false),
    m_seVerHasBeenSet(false),
    m_sourceTextHasBeenSet(false),
    m_targetTextHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_isEndHasBeenSet(false),
    m_audioHasBeenSet(false)
{
}

CoreInternalOutcome DisplayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SeId") && !value["SeId"].IsNull())
    {
        if (!value["SeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayInfo.SeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seId = string(value["SeId"].GetString());
        m_seIdHasBeenSet = true;
    }

    if (value.HasMember("SeVer") && !value["SeVer"].IsNull())
    {
        if (!value["SeVer"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayInfo.SeVer` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_seVer = value["SeVer"].GetUint64();
        m_seVerHasBeenSet = true;
    }

    if (value.HasMember("SourceText") && !value["SourceText"].IsNull())
    {
        if (!value["SourceText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayInfo.SourceText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceText = string(value["SourceText"].GetString());
        m_sourceTextHasBeenSet = true;
    }

    if (value.HasMember("TargetText") && !value["TargetText"].IsNull())
    {
        if (!value["TargetText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayInfo.TargetText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetText = string(value["TargetText"].GetString());
        m_targetTextHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayInfo.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("IsEnd") && !value["IsEnd"].IsNull())
    {
        if (!value["IsEnd"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayInfo.IsEnd` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnd = value["IsEnd"].GetBool();
        m_isEndHasBeenSet = true;
    }

    if (value.HasMember("Audio") && !value["Audio"].IsNull())
    {
        if (!value["Audio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayInfo.Audio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audio = string(value["Audio"].GetString());
        m_audioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_seIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seId.c_str(), allocator).Move(), allocator);
    }

    if (m_seVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seVer, allocator);
    }

    if (m_sourceTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceText.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetText.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_isEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnd, allocator);
    }

    if (m_audioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audio.c_str(), allocator).Move(), allocator);
    }

}


string DisplayInfo::GetSeId() const
{
    return m_seId;
}

void DisplayInfo::SetSeId(const string& _seId)
{
    m_seId = _seId;
    m_seIdHasBeenSet = true;
}

bool DisplayInfo::SeIdHasBeenSet() const
{
    return m_seIdHasBeenSet;
}

uint64_t DisplayInfo::GetSeVer() const
{
    return m_seVer;
}

void DisplayInfo::SetSeVer(const uint64_t& _seVer)
{
    m_seVer = _seVer;
    m_seVerHasBeenSet = true;
}

bool DisplayInfo::SeVerHasBeenSet() const
{
    return m_seVerHasBeenSet;
}

string DisplayInfo::GetSourceText() const
{
    return m_sourceText;
}

void DisplayInfo::SetSourceText(const string& _sourceText)
{
    m_sourceText = _sourceText;
    m_sourceTextHasBeenSet = true;
}

bool DisplayInfo::SourceTextHasBeenSet() const
{
    return m_sourceTextHasBeenSet;
}

string DisplayInfo::GetTargetText() const
{
    return m_targetText;
}

void DisplayInfo::SetTargetText(const string& _targetText)
{
    m_targetText = _targetText;
    m_targetTextHasBeenSet = true;
}

bool DisplayInfo::TargetTextHasBeenSet() const
{
    return m_targetTextHasBeenSet;
}

uint64_t DisplayInfo::GetStartTime() const
{
    return m_startTime;
}

void DisplayInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DisplayInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DisplayInfo::GetEndTime() const
{
    return m_endTime;
}

void DisplayInfo::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DisplayInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

bool DisplayInfo::GetIsEnd() const
{
    return m_isEnd;
}

void DisplayInfo::SetIsEnd(const bool& _isEnd)
{
    m_isEnd = _isEnd;
    m_isEndHasBeenSet = true;
}

bool DisplayInfo::IsEndHasBeenSet() const
{
    return m_isEndHasBeenSet;
}

string DisplayInfo::GetAudio() const
{
    return m_audio;
}

void DisplayInfo::SetAudio(const string& _audio)
{
    m_audio = _audio;
    m_audioHasBeenSet = true;
}

bool DisplayInfo::AudioHasBeenSet() const
{
    return m_audioHasBeenSet;
}

