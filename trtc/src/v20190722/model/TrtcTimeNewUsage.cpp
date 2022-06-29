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

#include <tencentcloud/trtc/v20190722/model/TrtcTimeNewUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TrtcTimeNewUsage::TrtcTimeNewUsage() :
    m_timeKeyHasBeenSet(false),
    m_voiceUserNumHasBeenSet(false),
    m_videoTimeHasBeenSet(false),
    m_class1VideoTimeHasBeenSet(false),
    m_class2VideoTimeHasBeenSet(false),
    m_class3VideoTimeHasBeenSet(false),
    m_audioTimeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_video2KTimeHasBeenSet(false),
    m_video4KTimeHasBeenSet(false)
{
}

CoreInternalOutcome TrtcTimeNewUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeKey") && !value["TimeKey"].IsNull())
    {
        if (!value["TimeKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcTimeNewUsage.TimeKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeKey = string(value["TimeKey"].GetString());
        m_timeKeyHasBeenSet = true;
    }

    if (value.HasMember("VoiceUserNum") && !value["VoiceUserNum"].IsNull())
    {
        if (!value["VoiceUserNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcTimeNewUsage.VoiceUserNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_voiceUserNum = value["VoiceUserNum"].GetUint64();
        m_voiceUserNumHasBeenSet = true;
    }

    if (value.HasMember("VideoTime") && !value["VideoTime"].IsNull())
    {
        if (!value["VideoTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcTimeNewUsage.VideoTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTime = value["VideoTime"].GetUint64();
        m_videoTimeHasBeenSet = true;
    }

    if (value.HasMember("Class1VideoTime") && !value["Class1VideoTime"].IsNull())
    {
        if (!value["Class1VideoTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcTimeNewUsage.Class1VideoTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_class1VideoTime = value["Class1VideoTime"].GetUint64();
        m_class1VideoTimeHasBeenSet = true;
    }

    if (value.HasMember("Class2VideoTime") && !value["Class2VideoTime"].IsNull())
    {
        if (!value["Class2VideoTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcTimeNewUsage.Class2VideoTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_class2VideoTime = value["Class2VideoTime"].GetUint64();
        m_class2VideoTimeHasBeenSet = true;
    }

    if (value.HasMember("Class3VideoTime") && !value["Class3VideoTime"].IsNull())
    {
        if (!value["Class3VideoTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcTimeNewUsage.Class3VideoTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_class3VideoTime = value["Class3VideoTime"].GetUint64();
        m_class3VideoTimeHasBeenSet = true;
    }

    if (value.HasMember("AudioTime") && !value["AudioTime"].IsNull())
    {
        if (!value["AudioTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcTimeNewUsage.AudioTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioTime = value["AudioTime"].GetUint64();
        m_audioTimeHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcTimeNewUsage.Bandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetDouble();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Video2KTime") && !value["Video2KTime"].IsNull())
    {
        if (!value["Video2KTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcTimeNewUsage.Video2KTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_video2KTime = value["Video2KTime"].GetUint64();
        m_video2KTimeHasBeenSet = true;
    }

    if (value.HasMember("Video4KTime") && !value["Video4KTime"].IsNull())
    {
        if (!value["Video4KTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcTimeNewUsage.Video4KTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_video4KTime = value["Video4KTime"].GetUint64();
        m_video4KTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrtcTimeNewUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeKey.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceUserNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceUserNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voiceUserNum, allocator);
    }

    if (m_videoTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTime, allocator);
    }

    if (m_class1VideoTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Class1VideoTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_class1VideoTime, allocator);
    }

    if (m_class2VideoTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Class2VideoTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_class2VideoTime, allocator);
    }

    if (m_class3VideoTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Class3VideoTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_class3VideoTime, allocator);
    }

    if (m_audioTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioTime, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_video2KTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Video2KTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_video2KTime, allocator);
    }

    if (m_video4KTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Video4KTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_video4KTime, allocator);
    }

}


string TrtcTimeNewUsage::GetTimeKey() const
{
    return m_timeKey;
}

void TrtcTimeNewUsage::SetTimeKey(const string& _timeKey)
{
    m_timeKey = _timeKey;
    m_timeKeyHasBeenSet = true;
}

bool TrtcTimeNewUsage::TimeKeyHasBeenSet() const
{
    return m_timeKeyHasBeenSet;
}

uint64_t TrtcTimeNewUsage::GetVoiceUserNum() const
{
    return m_voiceUserNum;
}

void TrtcTimeNewUsage::SetVoiceUserNum(const uint64_t& _voiceUserNum)
{
    m_voiceUserNum = _voiceUserNum;
    m_voiceUserNumHasBeenSet = true;
}

bool TrtcTimeNewUsage::VoiceUserNumHasBeenSet() const
{
    return m_voiceUserNumHasBeenSet;
}

uint64_t TrtcTimeNewUsage::GetVideoTime() const
{
    return m_videoTime;
}

void TrtcTimeNewUsage::SetVideoTime(const uint64_t& _videoTime)
{
    m_videoTime = _videoTime;
    m_videoTimeHasBeenSet = true;
}

bool TrtcTimeNewUsage::VideoTimeHasBeenSet() const
{
    return m_videoTimeHasBeenSet;
}

uint64_t TrtcTimeNewUsage::GetClass1VideoTime() const
{
    return m_class1VideoTime;
}

void TrtcTimeNewUsage::SetClass1VideoTime(const uint64_t& _class1VideoTime)
{
    m_class1VideoTime = _class1VideoTime;
    m_class1VideoTimeHasBeenSet = true;
}

bool TrtcTimeNewUsage::Class1VideoTimeHasBeenSet() const
{
    return m_class1VideoTimeHasBeenSet;
}

uint64_t TrtcTimeNewUsage::GetClass2VideoTime() const
{
    return m_class2VideoTime;
}

void TrtcTimeNewUsage::SetClass2VideoTime(const uint64_t& _class2VideoTime)
{
    m_class2VideoTime = _class2VideoTime;
    m_class2VideoTimeHasBeenSet = true;
}

bool TrtcTimeNewUsage::Class2VideoTimeHasBeenSet() const
{
    return m_class2VideoTimeHasBeenSet;
}

uint64_t TrtcTimeNewUsage::GetClass3VideoTime() const
{
    return m_class3VideoTime;
}

void TrtcTimeNewUsage::SetClass3VideoTime(const uint64_t& _class3VideoTime)
{
    m_class3VideoTime = _class3VideoTime;
    m_class3VideoTimeHasBeenSet = true;
}

bool TrtcTimeNewUsage::Class3VideoTimeHasBeenSet() const
{
    return m_class3VideoTimeHasBeenSet;
}

uint64_t TrtcTimeNewUsage::GetAudioTime() const
{
    return m_audioTime;
}

void TrtcTimeNewUsage::SetAudioTime(const uint64_t& _audioTime)
{
    m_audioTime = _audioTime;
    m_audioTimeHasBeenSet = true;
}

bool TrtcTimeNewUsage::AudioTimeHasBeenSet() const
{
    return m_audioTimeHasBeenSet;
}

double TrtcTimeNewUsage::GetBandwidth() const
{
    return m_bandwidth;
}

void TrtcTimeNewUsage::SetBandwidth(const double& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool TrtcTimeNewUsage::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

uint64_t TrtcTimeNewUsage::GetVideo2KTime() const
{
    return m_video2KTime;
}

void TrtcTimeNewUsage::SetVideo2KTime(const uint64_t& _video2KTime)
{
    m_video2KTime = _video2KTime;
    m_video2KTimeHasBeenSet = true;
}

bool TrtcTimeNewUsage::Video2KTimeHasBeenSet() const
{
    return m_video2KTimeHasBeenSet;
}

uint64_t TrtcTimeNewUsage::GetVideo4KTime() const
{
    return m_video4KTime;
}

void TrtcTimeNewUsage::SetVideo4KTime(const uint64_t& _video4KTime)
{
    m_video4KTime = _video4KTime;
    m_video4KTimeHasBeenSet = true;
}

bool TrtcTimeNewUsage::Video4KTimeHasBeenSet() const
{
    return m_video4KTimeHasBeenSet;
}

