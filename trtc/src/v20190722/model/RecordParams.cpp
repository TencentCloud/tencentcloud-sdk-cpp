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

#include <tencentcloud/trtc/v20190722/model/RecordParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

RecordParams::RecordParams() :
    m_recordModeHasBeenSet(false),
    m_maxIdleTimeHasBeenSet(false),
    m_streamTypeHasBeenSet(false),
    m_subscribeStreamUserIdsHasBeenSet(false),
    m_outputFormatHasBeenSet(false),
    m_avMergeHasBeenSet(false),
    m_maxMediaFileDurationHasBeenSet(false),
    m_mediaIdHasBeenSet(false),
    m_fillTypeHasBeenSet(false)
{
}

CoreInternalOutcome RecordParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordMode") && !value["RecordMode"].IsNull())
    {
        if (!value["RecordMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParams.RecordMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordMode = value["RecordMode"].GetUint64();
        m_recordModeHasBeenSet = true;
    }

    if (value.HasMember("MaxIdleTime") && !value["MaxIdleTime"].IsNull())
    {
        if (!value["MaxIdleTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParams.MaxIdleTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxIdleTime = value["MaxIdleTime"].GetUint64();
        m_maxIdleTimeHasBeenSet = true;
    }

    if (value.HasMember("StreamType") && !value["StreamType"].IsNull())
    {
        if (!value["StreamType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParams.StreamType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_streamType = value["StreamType"].GetUint64();
        m_streamTypeHasBeenSet = true;
    }

    if (value.HasMember("SubscribeStreamUserIds") && !value["SubscribeStreamUserIds"].IsNull())
    {
        if (!value["SubscribeStreamUserIds"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParams.SubscribeStreamUserIds` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subscribeStreamUserIds.Deserialize(value["SubscribeStreamUserIds"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subscribeStreamUserIdsHasBeenSet = true;
    }

    if (value.HasMember("OutputFormat") && !value["OutputFormat"].IsNull())
    {
        if (!value["OutputFormat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParams.OutputFormat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputFormat = value["OutputFormat"].GetUint64();
        m_outputFormatHasBeenSet = true;
    }

    if (value.HasMember("AvMerge") && !value["AvMerge"].IsNull())
    {
        if (!value["AvMerge"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParams.AvMerge` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_avMerge = value["AvMerge"].GetUint64();
        m_avMergeHasBeenSet = true;
    }

    if (value.HasMember("MaxMediaFileDuration") && !value["MaxMediaFileDuration"].IsNull())
    {
        if (!value["MaxMediaFileDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParams.MaxMediaFileDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMediaFileDuration = value["MaxMediaFileDuration"].GetUint64();
        m_maxMediaFileDurationHasBeenSet = true;
    }

    if (value.HasMember("MediaId") && !value["MediaId"].IsNull())
    {
        if (!value["MediaId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParams.MediaId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediaId = value["MediaId"].GetUint64();
        m_mediaIdHasBeenSet = true;
    }

    if (value.HasMember("FillType") && !value["FillType"].IsNull())
    {
        if (!value["FillType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordParams.FillType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fillType = value["FillType"].GetUint64();
        m_fillTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordMode, allocator);
    }

    if (m_maxIdleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxIdleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxIdleTime, allocator);
    }

    if (m_streamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamType, allocator);
    }

    if (m_subscribeStreamUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeStreamUserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subscribeStreamUserIds.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputFormat, allocator);
    }

    if (m_avMergeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvMerge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avMerge, allocator);
    }

    if (m_maxMediaFileDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMediaFileDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMediaFileDuration, allocator);
    }

    if (m_mediaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediaId, allocator);
    }

    if (m_fillTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fillType, allocator);
    }

}


uint64_t RecordParams::GetRecordMode() const
{
    return m_recordMode;
}

void RecordParams::SetRecordMode(const uint64_t& _recordMode)
{
    m_recordMode = _recordMode;
    m_recordModeHasBeenSet = true;
}

bool RecordParams::RecordModeHasBeenSet() const
{
    return m_recordModeHasBeenSet;
}

uint64_t RecordParams::GetMaxIdleTime() const
{
    return m_maxIdleTime;
}

void RecordParams::SetMaxIdleTime(const uint64_t& _maxIdleTime)
{
    m_maxIdleTime = _maxIdleTime;
    m_maxIdleTimeHasBeenSet = true;
}

bool RecordParams::MaxIdleTimeHasBeenSet() const
{
    return m_maxIdleTimeHasBeenSet;
}

uint64_t RecordParams::GetStreamType() const
{
    return m_streamType;
}

void RecordParams::SetStreamType(const uint64_t& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool RecordParams::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

SubscribeStreamUserIds RecordParams::GetSubscribeStreamUserIds() const
{
    return m_subscribeStreamUserIds;
}

void RecordParams::SetSubscribeStreamUserIds(const SubscribeStreamUserIds& _subscribeStreamUserIds)
{
    m_subscribeStreamUserIds = _subscribeStreamUserIds;
    m_subscribeStreamUserIdsHasBeenSet = true;
}

bool RecordParams::SubscribeStreamUserIdsHasBeenSet() const
{
    return m_subscribeStreamUserIdsHasBeenSet;
}

uint64_t RecordParams::GetOutputFormat() const
{
    return m_outputFormat;
}

void RecordParams::SetOutputFormat(const uint64_t& _outputFormat)
{
    m_outputFormat = _outputFormat;
    m_outputFormatHasBeenSet = true;
}

bool RecordParams::OutputFormatHasBeenSet() const
{
    return m_outputFormatHasBeenSet;
}

uint64_t RecordParams::GetAvMerge() const
{
    return m_avMerge;
}

void RecordParams::SetAvMerge(const uint64_t& _avMerge)
{
    m_avMerge = _avMerge;
    m_avMergeHasBeenSet = true;
}

bool RecordParams::AvMergeHasBeenSet() const
{
    return m_avMergeHasBeenSet;
}

uint64_t RecordParams::GetMaxMediaFileDuration() const
{
    return m_maxMediaFileDuration;
}

void RecordParams::SetMaxMediaFileDuration(const uint64_t& _maxMediaFileDuration)
{
    m_maxMediaFileDuration = _maxMediaFileDuration;
    m_maxMediaFileDurationHasBeenSet = true;
}

bool RecordParams::MaxMediaFileDurationHasBeenSet() const
{
    return m_maxMediaFileDurationHasBeenSet;
}

uint64_t RecordParams::GetMediaId() const
{
    return m_mediaId;
}

void RecordParams::SetMediaId(const uint64_t& _mediaId)
{
    m_mediaId = _mediaId;
    m_mediaIdHasBeenSet = true;
}

bool RecordParams::MediaIdHasBeenSet() const
{
    return m_mediaIdHasBeenSet;
}

uint64_t RecordParams::GetFillType() const
{
    return m_fillType;
}

void RecordParams::SetFillType(const uint64_t& _fillType)
{
    m_fillType = _fillType;
    m_fillTypeHasBeenSet = true;
}

bool RecordParams::FillTypeHasBeenSet() const
{
    return m_fillTypeHasBeenSet;
}

