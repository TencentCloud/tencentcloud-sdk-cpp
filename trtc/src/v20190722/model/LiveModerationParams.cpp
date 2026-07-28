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

#include <tencentcloud/trtc/v20190722/model/LiveModerationParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

LiveModerationParams::LiveModerationParams() :
    m_moderationTypeHasBeenSet(false),
    m_maxIdleTimeHasBeenSet(false),
    m_sliceVideoHasBeenSet(false),
    m_sliceAudioHasBeenSet(false),
    m_saveModerationFileHasBeenSet(false),
    m_callbackAllResultsHasBeenSet(false)
{
}

CoreInternalOutcome LiveModerationParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModerationType") && !value["ModerationType"].IsNull())
    {
        if (!value["ModerationType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveModerationParams.ModerationType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_moderationType = value["ModerationType"].GetUint64();
        m_moderationTypeHasBeenSet = true;
    }

    if (value.HasMember("MaxIdleTime") && !value["MaxIdleTime"].IsNull())
    {
        if (!value["MaxIdleTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveModerationParams.MaxIdleTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxIdleTime = value["MaxIdleTime"].GetUint64();
        m_maxIdleTimeHasBeenSet = true;
    }

    if (value.HasMember("SliceVideo") && !value["SliceVideo"].IsNull())
    {
        if (!value["SliceVideo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveModerationParams.SliceVideo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sliceVideo = value["SliceVideo"].GetUint64();
        m_sliceVideoHasBeenSet = true;
    }

    if (value.HasMember("SliceAudio") && !value["SliceAudio"].IsNull())
    {
        if (!value["SliceAudio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveModerationParams.SliceAudio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sliceAudio = value["SliceAudio"].GetUint64();
        m_sliceAudioHasBeenSet = true;
    }

    if (value.HasMember("SaveModerationFile") && !value["SaveModerationFile"].IsNull())
    {
        if (!value["SaveModerationFile"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveModerationParams.SaveModerationFile` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_saveModerationFile = value["SaveModerationFile"].GetUint64();
        m_saveModerationFileHasBeenSet = true;
    }

    if (value.HasMember("CallbackAllResults") && !value["CallbackAllResults"].IsNull())
    {
        if (!value["CallbackAllResults"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveModerationParams.CallbackAllResults` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_callbackAllResults = value["CallbackAllResults"].GetUint64();
        m_callbackAllResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveModerationParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_moderationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModerationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_moderationType, allocator);
    }

    if (m_maxIdleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxIdleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxIdleTime, allocator);
    }

    if (m_sliceVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SliceVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sliceVideo, allocator);
    }

    if (m_sliceAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SliceAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sliceAudio, allocator);
    }

    if (m_saveModerationFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveModerationFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_saveModerationFile, allocator);
    }

    if (m_callbackAllResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackAllResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callbackAllResults, allocator);
    }

}


uint64_t LiveModerationParams::GetModerationType() const
{
    return m_moderationType;
}

void LiveModerationParams::SetModerationType(const uint64_t& _moderationType)
{
    m_moderationType = _moderationType;
    m_moderationTypeHasBeenSet = true;
}

bool LiveModerationParams::ModerationTypeHasBeenSet() const
{
    return m_moderationTypeHasBeenSet;
}

uint64_t LiveModerationParams::GetMaxIdleTime() const
{
    return m_maxIdleTime;
}

void LiveModerationParams::SetMaxIdleTime(const uint64_t& _maxIdleTime)
{
    m_maxIdleTime = _maxIdleTime;
    m_maxIdleTimeHasBeenSet = true;
}

bool LiveModerationParams::MaxIdleTimeHasBeenSet() const
{
    return m_maxIdleTimeHasBeenSet;
}

uint64_t LiveModerationParams::GetSliceVideo() const
{
    return m_sliceVideo;
}

void LiveModerationParams::SetSliceVideo(const uint64_t& _sliceVideo)
{
    m_sliceVideo = _sliceVideo;
    m_sliceVideoHasBeenSet = true;
}

bool LiveModerationParams::SliceVideoHasBeenSet() const
{
    return m_sliceVideoHasBeenSet;
}

uint64_t LiveModerationParams::GetSliceAudio() const
{
    return m_sliceAudio;
}

void LiveModerationParams::SetSliceAudio(const uint64_t& _sliceAudio)
{
    m_sliceAudio = _sliceAudio;
    m_sliceAudioHasBeenSet = true;
}

bool LiveModerationParams::SliceAudioHasBeenSet() const
{
    return m_sliceAudioHasBeenSet;
}

uint64_t LiveModerationParams::GetSaveModerationFile() const
{
    return m_saveModerationFile;
}

void LiveModerationParams::SetSaveModerationFile(const uint64_t& _saveModerationFile)
{
    m_saveModerationFile = _saveModerationFile;
    m_saveModerationFileHasBeenSet = true;
}

bool LiveModerationParams::SaveModerationFileHasBeenSet() const
{
    return m_saveModerationFileHasBeenSet;
}

uint64_t LiveModerationParams::GetCallbackAllResults() const
{
    return m_callbackAllResults;
}

void LiveModerationParams::SetCallbackAllResults(const uint64_t& _callbackAllResults)
{
    m_callbackAllResults = _callbackAllResults;
    m_callbackAllResultsHasBeenSet = true;
}

bool LiveModerationParams::CallbackAllResultsHasBeenSet() const
{
    return m_callbackAllResultsHasBeenSet;
}

