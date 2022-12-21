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

#include <tencentcloud/vod/v20180717/model/MediaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaInfo::MediaInfo() :
    m_basicInfoHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_transcodeInfoHasBeenSet(false),
    m_animatedGraphicsInfoHasBeenSet(false),
    m_sampleSnapshotInfoHasBeenSet(false),
    m_imageSpriteInfoHasBeenSet(false),
    m_snapshotByTimeOffsetInfoHasBeenSet(false),
    m_keyFrameDescInfoHasBeenSet(false),
    m_adaptiveDynamicStreamingInfoHasBeenSet(false),
    m_miniProgramReviewInfoHasBeenSet(false),
    m_subtitleInfoHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_reviewInfoHasBeenSet(false)
{
}

CoreInternalOutcome MediaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BasicInfo") && !value["BasicInfo"].IsNull())
    {
        if (!value["BasicInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.BasicInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicInfo.Deserialize(value["BasicInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicInfoHasBeenSet = true;
    }

    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(value["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }

    if (value.HasMember("TranscodeInfo") && !value["TranscodeInfo"].IsNull())
    {
        if (!value["TranscodeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.TranscodeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transcodeInfo.Deserialize(value["TranscodeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transcodeInfoHasBeenSet = true;
    }

    if (value.HasMember("AnimatedGraphicsInfo") && !value["AnimatedGraphicsInfo"].IsNull())
    {
        if (!value["AnimatedGraphicsInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.AnimatedGraphicsInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_animatedGraphicsInfo.Deserialize(value["AnimatedGraphicsInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_animatedGraphicsInfoHasBeenSet = true;
    }

    if (value.HasMember("SampleSnapshotInfo") && !value["SampleSnapshotInfo"].IsNull())
    {
        if (!value["SampleSnapshotInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.SampleSnapshotInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sampleSnapshotInfo.Deserialize(value["SampleSnapshotInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sampleSnapshotInfoHasBeenSet = true;
    }

    if (value.HasMember("ImageSpriteInfo") && !value["ImageSpriteInfo"].IsNull())
    {
        if (!value["ImageSpriteInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.ImageSpriteInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageSpriteInfo.Deserialize(value["ImageSpriteInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageSpriteInfoHasBeenSet = true;
    }

    if (value.HasMember("SnapshotByTimeOffsetInfo") && !value["SnapshotByTimeOffsetInfo"].IsNull())
    {
        if (!value["SnapshotByTimeOffsetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.SnapshotByTimeOffsetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_snapshotByTimeOffsetInfo.Deserialize(value["SnapshotByTimeOffsetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_snapshotByTimeOffsetInfoHasBeenSet = true;
    }

    if (value.HasMember("KeyFrameDescInfo") && !value["KeyFrameDescInfo"].IsNull())
    {
        if (!value["KeyFrameDescInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.KeyFrameDescInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_keyFrameDescInfo.Deserialize(value["KeyFrameDescInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_keyFrameDescInfoHasBeenSet = true;
    }

    if (value.HasMember("AdaptiveDynamicStreamingInfo") && !value["AdaptiveDynamicStreamingInfo"].IsNull())
    {
        if (!value["AdaptiveDynamicStreamingInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.AdaptiveDynamicStreamingInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adaptiveDynamicStreamingInfo.Deserialize(value["AdaptiveDynamicStreamingInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adaptiveDynamicStreamingInfoHasBeenSet = true;
    }

    if (value.HasMember("MiniProgramReviewInfo") && !value["MiniProgramReviewInfo"].IsNull())
    {
        if (!value["MiniProgramReviewInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.MiniProgramReviewInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_miniProgramReviewInfo.Deserialize(value["MiniProgramReviewInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_miniProgramReviewInfoHasBeenSet = true;
    }

    if (value.HasMember("SubtitleInfo") && !value["SubtitleInfo"].IsNull())
    {
        if (!value["SubtitleInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.SubtitleInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitleInfo.Deserialize(value["SubtitleInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleInfoHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("ReviewInfo") && !value["ReviewInfo"].IsNull())
    {
        if (!value["ReviewInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.ReviewInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reviewInfo.Deserialize(value["ReviewInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reviewInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_basicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transcodeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transcodeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_animatedGraphicsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnimatedGraphicsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_animatedGraphicsInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sampleSnapshotInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleSnapshotInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sampleSnapshotInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageSpriteInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSpriteInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageSpriteInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_snapshotByTimeOffsetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotByTimeOffsetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_snapshotByTimeOffsetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_keyFrameDescInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyFrameDescInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_keyFrameDescInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_adaptiveDynamicStreamingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdaptiveDynamicStreamingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adaptiveDynamicStreamingInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_miniProgramReviewInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniProgramReviewInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_miniProgramReviewInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subtitleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitleInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reviewInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


MediaBasicInfo MediaInfo::GetBasicInfo() const
{
    return m_basicInfo;
}

void MediaInfo::SetBasicInfo(const MediaBasicInfo& _basicInfo)
{
    m_basicInfo = _basicInfo;
    m_basicInfoHasBeenSet = true;
}

bool MediaInfo::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}

MediaMetaData MediaInfo::GetMetaData() const
{
    return m_metaData;
}

void MediaInfo::SetMetaData(const MediaMetaData& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool MediaInfo::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

MediaTranscodeInfo MediaInfo::GetTranscodeInfo() const
{
    return m_transcodeInfo;
}

void MediaInfo::SetTranscodeInfo(const MediaTranscodeInfo& _transcodeInfo)
{
    m_transcodeInfo = _transcodeInfo;
    m_transcodeInfoHasBeenSet = true;
}

bool MediaInfo::TranscodeInfoHasBeenSet() const
{
    return m_transcodeInfoHasBeenSet;
}

MediaAnimatedGraphicsInfo MediaInfo::GetAnimatedGraphicsInfo() const
{
    return m_animatedGraphicsInfo;
}

void MediaInfo::SetAnimatedGraphicsInfo(const MediaAnimatedGraphicsInfo& _animatedGraphicsInfo)
{
    m_animatedGraphicsInfo = _animatedGraphicsInfo;
    m_animatedGraphicsInfoHasBeenSet = true;
}

bool MediaInfo::AnimatedGraphicsInfoHasBeenSet() const
{
    return m_animatedGraphicsInfoHasBeenSet;
}

MediaSampleSnapshotInfo MediaInfo::GetSampleSnapshotInfo() const
{
    return m_sampleSnapshotInfo;
}

void MediaInfo::SetSampleSnapshotInfo(const MediaSampleSnapshotInfo& _sampleSnapshotInfo)
{
    m_sampleSnapshotInfo = _sampleSnapshotInfo;
    m_sampleSnapshotInfoHasBeenSet = true;
}

bool MediaInfo::SampleSnapshotInfoHasBeenSet() const
{
    return m_sampleSnapshotInfoHasBeenSet;
}

MediaImageSpriteInfo MediaInfo::GetImageSpriteInfo() const
{
    return m_imageSpriteInfo;
}

void MediaInfo::SetImageSpriteInfo(const MediaImageSpriteInfo& _imageSpriteInfo)
{
    m_imageSpriteInfo = _imageSpriteInfo;
    m_imageSpriteInfoHasBeenSet = true;
}

bool MediaInfo::ImageSpriteInfoHasBeenSet() const
{
    return m_imageSpriteInfoHasBeenSet;
}

MediaSnapshotByTimeOffsetInfo MediaInfo::GetSnapshotByTimeOffsetInfo() const
{
    return m_snapshotByTimeOffsetInfo;
}

void MediaInfo::SetSnapshotByTimeOffsetInfo(const MediaSnapshotByTimeOffsetInfo& _snapshotByTimeOffsetInfo)
{
    m_snapshotByTimeOffsetInfo = _snapshotByTimeOffsetInfo;
    m_snapshotByTimeOffsetInfoHasBeenSet = true;
}

bool MediaInfo::SnapshotByTimeOffsetInfoHasBeenSet() const
{
    return m_snapshotByTimeOffsetInfoHasBeenSet;
}

MediaKeyFrameDescInfo MediaInfo::GetKeyFrameDescInfo() const
{
    return m_keyFrameDescInfo;
}

void MediaInfo::SetKeyFrameDescInfo(const MediaKeyFrameDescInfo& _keyFrameDescInfo)
{
    m_keyFrameDescInfo = _keyFrameDescInfo;
    m_keyFrameDescInfoHasBeenSet = true;
}

bool MediaInfo::KeyFrameDescInfoHasBeenSet() const
{
    return m_keyFrameDescInfoHasBeenSet;
}

MediaAdaptiveDynamicStreamingInfo MediaInfo::GetAdaptiveDynamicStreamingInfo() const
{
    return m_adaptiveDynamicStreamingInfo;
}

void MediaInfo::SetAdaptiveDynamicStreamingInfo(const MediaAdaptiveDynamicStreamingInfo& _adaptiveDynamicStreamingInfo)
{
    m_adaptiveDynamicStreamingInfo = _adaptiveDynamicStreamingInfo;
    m_adaptiveDynamicStreamingInfoHasBeenSet = true;
}

bool MediaInfo::AdaptiveDynamicStreamingInfoHasBeenSet() const
{
    return m_adaptiveDynamicStreamingInfoHasBeenSet;
}

MediaMiniProgramReviewInfo MediaInfo::GetMiniProgramReviewInfo() const
{
    return m_miniProgramReviewInfo;
}

void MediaInfo::SetMiniProgramReviewInfo(const MediaMiniProgramReviewInfo& _miniProgramReviewInfo)
{
    m_miniProgramReviewInfo = _miniProgramReviewInfo;
    m_miniProgramReviewInfoHasBeenSet = true;
}

bool MediaInfo::MiniProgramReviewInfoHasBeenSet() const
{
    return m_miniProgramReviewInfoHasBeenSet;
}

MediaSubtitleInfo MediaInfo::GetSubtitleInfo() const
{
    return m_subtitleInfo;
}

void MediaInfo::SetSubtitleInfo(const MediaSubtitleInfo& _subtitleInfo)
{
    m_subtitleInfo = _subtitleInfo;
    m_subtitleInfoHasBeenSet = true;
}

bool MediaInfo::SubtitleInfoHasBeenSet() const
{
    return m_subtitleInfoHasBeenSet;
}

string MediaInfo::GetFileId() const
{
    return m_fileId;
}

void MediaInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool MediaInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

FileReviewInfo MediaInfo::GetReviewInfo() const
{
    return m_reviewInfo;
}

void MediaInfo::SetReviewInfo(const FileReviewInfo& _reviewInfo)
{
    m_reviewInfo = _reviewInfo;
    m_reviewInfoHasBeenSet = true;
}

bool MediaInfo::ReviewInfoHasBeenSet() const
{
    return m_reviewInfoHasBeenSet;
}

