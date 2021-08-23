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

#include <tencentcloud/vod/v20180717/model/MediaProcessTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaProcessTaskResult::MediaProcessTaskResult() :
    m_typeHasBeenSet(false),
    m_transcodeTaskHasBeenSet(false),
    m_animatedGraphicTaskHasBeenSet(false),
    m_snapshotByTimeOffsetTaskHasBeenSet(false),
    m_sampleSnapshotTaskHasBeenSet(false),
    m_imageSpriteTaskHasBeenSet(false),
    m_coverBySnapshotTaskHasBeenSet(false),
    m_adaptiveDynamicStreamingTaskHasBeenSet(false)
{
}

CoreInternalOutcome MediaProcessTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TranscodeTask") && !value["TranscodeTask"].IsNull())
    {
        if (!value["TranscodeTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.TranscodeTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transcodeTask.Deserialize(value["TranscodeTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transcodeTaskHasBeenSet = true;
    }

    if (value.HasMember("AnimatedGraphicTask") && !value["AnimatedGraphicTask"].IsNull())
    {
        if (!value["AnimatedGraphicTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.AnimatedGraphicTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_animatedGraphicTask.Deserialize(value["AnimatedGraphicTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_animatedGraphicTaskHasBeenSet = true;
    }

    if (value.HasMember("SnapshotByTimeOffsetTask") && !value["SnapshotByTimeOffsetTask"].IsNull())
    {
        if (!value["SnapshotByTimeOffsetTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.SnapshotByTimeOffsetTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_snapshotByTimeOffsetTask.Deserialize(value["SnapshotByTimeOffsetTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_snapshotByTimeOffsetTaskHasBeenSet = true;
    }

    if (value.HasMember("SampleSnapshotTask") && !value["SampleSnapshotTask"].IsNull())
    {
        if (!value["SampleSnapshotTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.SampleSnapshotTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sampleSnapshotTask.Deserialize(value["SampleSnapshotTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sampleSnapshotTaskHasBeenSet = true;
    }

    if (value.HasMember("ImageSpriteTask") && !value["ImageSpriteTask"].IsNull())
    {
        if (!value["ImageSpriteTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.ImageSpriteTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageSpriteTask.Deserialize(value["ImageSpriteTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageSpriteTaskHasBeenSet = true;
    }

    if (value.HasMember("CoverBySnapshotTask") && !value["CoverBySnapshotTask"].IsNull())
    {
        if (!value["CoverBySnapshotTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.CoverBySnapshotTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coverBySnapshotTask.Deserialize(value["CoverBySnapshotTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coverBySnapshotTaskHasBeenSet = true;
    }

    if (value.HasMember("AdaptiveDynamicStreamingTask") && !value["AdaptiveDynamicStreamingTask"].IsNull())
    {
        if (!value["AdaptiveDynamicStreamingTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaProcessTaskResult.AdaptiveDynamicStreamingTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adaptiveDynamicStreamingTask.Deserialize(value["AdaptiveDynamicStreamingTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adaptiveDynamicStreamingTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaProcessTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_transcodeTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transcodeTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_animatedGraphicTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnimatedGraphicTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_animatedGraphicTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_snapshotByTimeOffsetTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotByTimeOffsetTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_snapshotByTimeOffsetTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sampleSnapshotTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleSnapshotTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sampleSnapshotTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageSpriteTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSpriteTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageSpriteTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coverBySnapshotTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverBySnapshotTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coverBySnapshotTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_adaptiveDynamicStreamingTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdaptiveDynamicStreamingTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adaptiveDynamicStreamingTask.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MediaProcessTaskResult::GetType() const
{
    return m_type;
}

void MediaProcessTaskResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MediaProcessTaskResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

MediaProcessTaskTranscodeResult MediaProcessTaskResult::GetTranscodeTask() const
{
    return m_transcodeTask;
}

void MediaProcessTaskResult::SetTranscodeTask(const MediaProcessTaskTranscodeResult& _transcodeTask)
{
    m_transcodeTask = _transcodeTask;
    m_transcodeTaskHasBeenSet = true;
}

bool MediaProcessTaskResult::TranscodeTaskHasBeenSet() const
{
    return m_transcodeTaskHasBeenSet;
}

MediaProcessTaskAnimatedGraphicResult MediaProcessTaskResult::GetAnimatedGraphicTask() const
{
    return m_animatedGraphicTask;
}

void MediaProcessTaskResult::SetAnimatedGraphicTask(const MediaProcessTaskAnimatedGraphicResult& _animatedGraphicTask)
{
    m_animatedGraphicTask = _animatedGraphicTask;
    m_animatedGraphicTaskHasBeenSet = true;
}

bool MediaProcessTaskResult::AnimatedGraphicTaskHasBeenSet() const
{
    return m_animatedGraphicTaskHasBeenSet;
}

MediaProcessTaskSnapshotByTimeOffsetResult MediaProcessTaskResult::GetSnapshotByTimeOffsetTask() const
{
    return m_snapshotByTimeOffsetTask;
}

void MediaProcessTaskResult::SetSnapshotByTimeOffsetTask(const MediaProcessTaskSnapshotByTimeOffsetResult& _snapshotByTimeOffsetTask)
{
    m_snapshotByTimeOffsetTask = _snapshotByTimeOffsetTask;
    m_snapshotByTimeOffsetTaskHasBeenSet = true;
}

bool MediaProcessTaskResult::SnapshotByTimeOffsetTaskHasBeenSet() const
{
    return m_snapshotByTimeOffsetTaskHasBeenSet;
}

MediaProcessTaskSampleSnapshotResult MediaProcessTaskResult::GetSampleSnapshotTask() const
{
    return m_sampleSnapshotTask;
}

void MediaProcessTaskResult::SetSampleSnapshotTask(const MediaProcessTaskSampleSnapshotResult& _sampleSnapshotTask)
{
    m_sampleSnapshotTask = _sampleSnapshotTask;
    m_sampleSnapshotTaskHasBeenSet = true;
}

bool MediaProcessTaskResult::SampleSnapshotTaskHasBeenSet() const
{
    return m_sampleSnapshotTaskHasBeenSet;
}

MediaProcessTaskImageSpriteResult MediaProcessTaskResult::GetImageSpriteTask() const
{
    return m_imageSpriteTask;
}

void MediaProcessTaskResult::SetImageSpriteTask(const MediaProcessTaskImageSpriteResult& _imageSpriteTask)
{
    m_imageSpriteTask = _imageSpriteTask;
    m_imageSpriteTaskHasBeenSet = true;
}

bool MediaProcessTaskResult::ImageSpriteTaskHasBeenSet() const
{
    return m_imageSpriteTaskHasBeenSet;
}

MediaProcessTaskCoverBySnapshotResult MediaProcessTaskResult::GetCoverBySnapshotTask() const
{
    return m_coverBySnapshotTask;
}

void MediaProcessTaskResult::SetCoverBySnapshotTask(const MediaProcessTaskCoverBySnapshotResult& _coverBySnapshotTask)
{
    m_coverBySnapshotTask = _coverBySnapshotTask;
    m_coverBySnapshotTaskHasBeenSet = true;
}

bool MediaProcessTaskResult::CoverBySnapshotTaskHasBeenSet() const
{
    return m_coverBySnapshotTaskHasBeenSet;
}

MediaProcessTaskAdaptiveDynamicStreamingResult MediaProcessTaskResult::GetAdaptiveDynamicStreamingTask() const
{
    return m_adaptiveDynamicStreamingTask;
}

void MediaProcessTaskResult::SetAdaptiveDynamicStreamingTask(const MediaProcessTaskAdaptiveDynamicStreamingResult& _adaptiveDynamicStreamingTask)
{
    m_adaptiveDynamicStreamingTask = _adaptiveDynamicStreamingTask;
    m_adaptiveDynamicStreamingTaskHasBeenSet = true;
}

bool MediaProcessTaskResult::AdaptiveDynamicStreamingTaskHasBeenSet() const
{
    return m_adaptiveDynamicStreamingTaskHasBeenSet;
}

