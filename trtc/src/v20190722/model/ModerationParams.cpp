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

#include <tencentcloud/trtc/v20190722/model/ModerationParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

ModerationParams::ModerationParams() :
    m_moderationTypeHasBeenSet(false),
    m_maxIdleTimeHasBeenSet(false),
    m_sliceAudioHasBeenSet(false),
    m_sliceVideoHasBeenSet(false),
    m_moderationSupplierHasBeenSet(false),
    m_moderationSupplierParamHasBeenSet(false),
    m_saveModerationFileHasBeenSet(false),
    m_callbackAllResultsHasBeenSet(false),
    m_subscribeStreamUserIdsHasBeenSet(false)
{
}

CoreInternalOutcome ModerationParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModerationType") && !value["ModerationType"].IsNull())
    {
        if (!value["ModerationType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationParams.ModerationType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_moderationType = value["ModerationType"].GetUint64();
        m_moderationTypeHasBeenSet = true;
    }

    if (value.HasMember("MaxIdleTime") && !value["MaxIdleTime"].IsNull())
    {
        if (!value["MaxIdleTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationParams.MaxIdleTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxIdleTime = value["MaxIdleTime"].GetUint64();
        m_maxIdleTimeHasBeenSet = true;
    }

    if (value.HasMember("SliceAudio") && !value["SliceAudio"].IsNull())
    {
        if (!value["SliceAudio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationParams.SliceAudio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sliceAudio = value["SliceAudio"].GetUint64();
        m_sliceAudioHasBeenSet = true;
    }

    if (value.HasMember("SliceVideo") && !value["SliceVideo"].IsNull())
    {
        if (!value["SliceVideo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationParams.SliceVideo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sliceVideo = value["SliceVideo"].GetUint64();
        m_sliceVideoHasBeenSet = true;
    }

    if (value.HasMember("ModerationSupplier") && !value["ModerationSupplier"].IsNull())
    {
        if (!value["ModerationSupplier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationParams.ModerationSupplier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moderationSupplier = string(value["ModerationSupplier"].GetString());
        m_moderationSupplierHasBeenSet = true;
    }

    if (value.HasMember("ModerationSupplierParam") && !value["ModerationSupplierParam"].IsNull())
    {
        if (!value["ModerationSupplierParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationParams.ModerationSupplierParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_moderationSupplierParam.Deserialize(value["ModerationSupplierParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_moderationSupplierParamHasBeenSet = true;
    }

    if (value.HasMember("SaveModerationFile") && !value["SaveModerationFile"].IsNull())
    {
        if (!value["SaveModerationFile"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationParams.SaveModerationFile` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_saveModerationFile = value["SaveModerationFile"].GetUint64();
        m_saveModerationFileHasBeenSet = true;
    }

    if (value.HasMember("CallbackAllResults") && !value["CallbackAllResults"].IsNull())
    {
        if (!value["CallbackAllResults"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationParams.CallbackAllResults` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_callbackAllResults = value["CallbackAllResults"].GetUint64();
        m_callbackAllResultsHasBeenSet = true;
    }

    if (value.HasMember("SubscribeStreamUserIds") && !value["SubscribeStreamUserIds"].IsNull())
    {
        if (!value["SubscribeStreamUserIds"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationParams.SubscribeStreamUserIds` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subscribeStreamUserIds.Deserialize(value["SubscribeStreamUserIds"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subscribeStreamUserIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModerationParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_sliceAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SliceAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sliceAudio, allocator);
    }

    if (m_sliceVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SliceVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sliceVideo, allocator);
    }

    if (m_moderationSupplierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModerationSupplier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moderationSupplier.c_str(), allocator).Move(), allocator);
    }

    if (m_moderationSupplierParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModerationSupplierParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_moderationSupplierParam.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_subscribeStreamUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeStreamUserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subscribeStreamUserIds.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t ModerationParams::GetModerationType() const
{
    return m_moderationType;
}

void ModerationParams::SetModerationType(const uint64_t& _moderationType)
{
    m_moderationType = _moderationType;
    m_moderationTypeHasBeenSet = true;
}

bool ModerationParams::ModerationTypeHasBeenSet() const
{
    return m_moderationTypeHasBeenSet;
}

uint64_t ModerationParams::GetMaxIdleTime() const
{
    return m_maxIdleTime;
}

void ModerationParams::SetMaxIdleTime(const uint64_t& _maxIdleTime)
{
    m_maxIdleTime = _maxIdleTime;
    m_maxIdleTimeHasBeenSet = true;
}

bool ModerationParams::MaxIdleTimeHasBeenSet() const
{
    return m_maxIdleTimeHasBeenSet;
}

uint64_t ModerationParams::GetSliceAudio() const
{
    return m_sliceAudio;
}

void ModerationParams::SetSliceAudio(const uint64_t& _sliceAudio)
{
    m_sliceAudio = _sliceAudio;
    m_sliceAudioHasBeenSet = true;
}

bool ModerationParams::SliceAudioHasBeenSet() const
{
    return m_sliceAudioHasBeenSet;
}

uint64_t ModerationParams::GetSliceVideo() const
{
    return m_sliceVideo;
}

void ModerationParams::SetSliceVideo(const uint64_t& _sliceVideo)
{
    m_sliceVideo = _sliceVideo;
    m_sliceVideoHasBeenSet = true;
}

bool ModerationParams::SliceVideoHasBeenSet() const
{
    return m_sliceVideoHasBeenSet;
}

string ModerationParams::GetModerationSupplier() const
{
    return m_moderationSupplier;
}

void ModerationParams::SetModerationSupplier(const string& _moderationSupplier)
{
    m_moderationSupplier = _moderationSupplier;
    m_moderationSupplierHasBeenSet = true;
}

bool ModerationParams::ModerationSupplierHasBeenSet() const
{
    return m_moderationSupplierHasBeenSet;
}

ModerationSupplierParam ModerationParams::GetModerationSupplierParam() const
{
    return m_moderationSupplierParam;
}

void ModerationParams::SetModerationSupplierParam(const ModerationSupplierParam& _moderationSupplierParam)
{
    m_moderationSupplierParam = _moderationSupplierParam;
    m_moderationSupplierParamHasBeenSet = true;
}

bool ModerationParams::ModerationSupplierParamHasBeenSet() const
{
    return m_moderationSupplierParamHasBeenSet;
}

uint64_t ModerationParams::GetSaveModerationFile() const
{
    return m_saveModerationFile;
}

void ModerationParams::SetSaveModerationFile(const uint64_t& _saveModerationFile)
{
    m_saveModerationFile = _saveModerationFile;
    m_saveModerationFileHasBeenSet = true;
}

bool ModerationParams::SaveModerationFileHasBeenSet() const
{
    return m_saveModerationFileHasBeenSet;
}

uint64_t ModerationParams::GetCallbackAllResults() const
{
    return m_callbackAllResults;
}

void ModerationParams::SetCallbackAllResults(const uint64_t& _callbackAllResults)
{
    m_callbackAllResults = _callbackAllResults;
    m_callbackAllResultsHasBeenSet = true;
}

bool ModerationParams::CallbackAllResultsHasBeenSet() const
{
    return m_callbackAllResultsHasBeenSet;
}

SubscribeModerationUserIds ModerationParams::GetSubscribeStreamUserIds() const
{
    return m_subscribeStreamUserIds;
}

void ModerationParams::SetSubscribeStreamUserIds(const SubscribeModerationUserIds& _subscribeStreamUserIds)
{
    m_subscribeStreamUserIds = _subscribeStreamUserIds;
    m_subscribeStreamUserIdsHasBeenSet = true;
}

bool ModerationParams::SubscribeStreamUserIdsHasBeenSet() const
{
    return m_subscribeStreamUserIdsHasBeenSet;
}

