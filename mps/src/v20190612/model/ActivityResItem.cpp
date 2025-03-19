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

#include <tencentcloud/mps/v20190612/model/ActivityResItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ActivityResItem::ActivityResItem() :
    m_transcodeTaskHasBeenSet(false),
    m_animatedGraphicTaskHasBeenSet(false),
    m_snapshotByTimeOffsetTaskHasBeenSet(false),
    m_sampleSnapshotTaskHasBeenSet(false),
    m_imageSpriteTaskHasBeenSet(false),
    m_adaptiveDynamicStreamingTaskHasBeenSet(false),
    m_recognitionTaskHasBeenSet(false),
    m_reviewTaskHasBeenSet(false),
    m_analysisTaskHasBeenSet(false),
    m_qualityControlTaskHasBeenSet(false),
    m_smartSubtitlesTaskHasBeenSet(false)
{
}

CoreInternalOutcome ActivityResItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TranscodeTask") && !value["TranscodeTask"].IsNull())
    {
        if (!value["TranscodeTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityResItem.TranscodeTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ActivityResItem.AnimatedGraphicTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ActivityResItem.SnapshotByTimeOffsetTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ActivityResItem.SampleSnapshotTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ActivityResItem.ImageSpriteTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageSpriteTask.Deserialize(value["ImageSpriteTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageSpriteTaskHasBeenSet = true;
    }

    if (value.HasMember("AdaptiveDynamicStreamingTask") && !value["AdaptiveDynamicStreamingTask"].IsNull())
    {
        if (!value["AdaptiveDynamicStreamingTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityResItem.AdaptiveDynamicStreamingTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adaptiveDynamicStreamingTask.Deserialize(value["AdaptiveDynamicStreamingTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adaptiveDynamicStreamingTaskHasBeenSet = true;
    }

    if (value.HasMember("RecognitionTask") && !value["RecognitionTask"].IsNull())
    {
        if (!value["RecognitionTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityResItem.RecognitionTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_recognitionTask.Deserialize(value["RecognitionTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_recognitionTaskHasBeenSet = true;
    }

    if (value.HasMember("ReviewTask") && !value["ReviewTask"].IsNull())
    {
        if (!value["ReviewTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityResItem.ReviewTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reviewTask.Deserialize(value["ReviewTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reviewTaskHasBeenSet = true;
    }

    if (value.HasMember("AnalysisTask") && !value["AnalysisTask"].IsNull())
    {
        if (!value["AnalysisTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityResItem.AnalysisTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_analysisTask.Deserialize(value["AnalysisTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_analysisTaskHasBeenSet = true;
    }

    if (value.HasMember("QualityControlTask") && !value["QualityControlTask"].IsNull())
    {
        if (!value["QualityControlTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityResItem.QualityControlTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qualityControlTask.Deserialize(value["QualityControlTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qualityControlTaskHasBeenSet = true;
    }

    if (value.HasMember("SmartSubtitlesTask") && !value["SmartSubtitlesTask"].IsNull())
    {
        if (!value["SmartSubtitlesTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityResItem.SmartSubtitlesTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_smartSubtitlesTask.Deserialize(value["SmartSubtitlesTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smartSubtitlesTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActivityResItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_adaptiveDynamicStreamingTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdaptiveDynamicStreamingTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adaptiveDynamicStreamingTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_recognitionTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognitionTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_recognitionTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reviewTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reviewTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_analysisTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_analysisTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qualityControlTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityControlTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qualityControlTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_smartSubtitlesTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartSubtitlesTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smartSubtitlesTask.ToJsonObject(value[key.c_str()], allocator);
    }

}


MediaProcessTaskTranscodeResult ActivityResItem::GetTranscodeTask() const
{
    return m_transcodeTask;
}

void ActivityResItem::SetTranscodeTask(const MediaProcessTaskTranscodeResult& _transcodeTask)
{
    m_transcodeTask = _transcodeTask;
    m_transcodeTaskHasBeenSet = true;
}

bool ActivityResItem::TranscodeTaskHasBeenSet() const
{
    return m_transcodeTaskHasBeenSet;
}

MediaProcessTaskAnimatedGraphicResult ActivityResItem::GetAnimatedGraphicTask() const
{
    return m_animatedGraphicTask;
}

void ActivityResItem::SetAnimatedGraphicTask(const MediaProcessTaskAnimatedGraphicResult& _animatedGraphicTask)
{
    m_animatedGraphicTask = _animatedGraphicTask;
    m_animatedGraphicTaskHasBeenSet = true;
}

bool ActivityResItem::AnimatedGraphicTaskHasBeenSet() const
{
    return m_animatedGraphicTaskHasBeenSet;
}

MediaProcessTaskSnapshotByTimeOffsetResult ActivityResItem::GetSnapshotByTimeOffsetTask() const
{
    return m_snapshotByTimeOffsetTask;
}

void ActivityResItem::SetSnapshotByTimeOffsetTask(const MediaProcessTaskSnapshotByTimeOffsetResult& _snapshotByTimeOffsetTask)
{
    m_snapshotByTimeOffsetTask = _snapshotByTimeOffsetTask;
    m_snapshotByTimeOffsetTaskHasBeenSet = true;
}

bool ActivityResItem::SnapshotByTimeOffsetTaskHasBeenSet() const
{
    return m_snapshotByTimeOffsetTaskHasBeenSet;
}

MediaProcessTaskSampleSnapshotResult ActivityResItem::GetSampleSnapshotTask() const
{
    return m_sampleSnapshotTask;
}

void ActivityResItem::SetSampleSnapshotTask(const MediaProcessTaskSampleSnapshotResult& _sampleSnapshotTask)
{
    m_sampleSnapshotTask = _sampleSnapshotTask;
    m_sampleSnapshotTaskHasBeenSet = true;
}

bool ActivityResItem::SampleSnapshotTaskHasBeenSet() const
{
    return m_sampleSnapshotTaskHasBeenSet;
}

MediaProcessTaskImageSpriteResult ActivityResItem::GetImageSpriteTask() const
{
    return m_imageSpriteTask;
}

void ActivityResItem::SetImageSpriteTask(const MediaProcessTaskImageSpriteResult& _imageSpriteTask)
{
    m_imageSpriteTask = _imageSpriteTask;
    m_imageSpriteTaskHasBeenSet = true;
}

bool ActivityResItem::ImageSpriteTaskHasBeenSet() const
{
    return m_imageSpriteTaskHasBeenSet;
}

MediaProcessTaskAdaptiveDynamicStreamingResult ActivityResItem::GetAdaptiveDynamicStreamingTask() const
{
    return m_adaptiveDynamicStreamingTask;
}

void ActivityResItem::SetAdaptiveDynamicStreamingTask(const MediaProcessTaskAdaptiveDynamicStreamingResult& _adaptiveDynamicStreamingTask)
{
    m_adaptiveDynamicStreamingTask = _adaptiveDynamicStreamingTask;
    m_adaptiveDynamicStreamingTaskHasBeenSet = true;
}

bool ActivityResItem::AdaptiveDynamicStreamingTaskHasBeenSet() const
{
    return m_adaptiveDynamicStreamingTaskHasBeenSet;
}

ScheduleRecognitionTaskResult ActivityResItem::GetRecognitionTask() const
{
    return m_recognitionTask;
}

void ActivityResItem::SetRecognitionTask(const ScheduleRecognitionTaskResult& _recognitionTask)
{
    m_recognitionTask = _recognitionTask;
    m_recognitionTaskHasBeenSet = true;
}

bool ActivityResItem::RecognitionTaskHasBeenSet() const
{
    return m_recognitionTaskHasBeenSet;
}

ScheduleReviewTaskResult ActivityResItem::GetReviewTask() const
{
    return m_reviewTask;
}

void ActivityResItem::SetReviewTask(const ScheduleReviewTaskResult& _reviewTask)
{
    m_reviewTask = _reviewTask;
    m_reviewTaskHasBeenSet = true;
}

bool ActivityResItem::ReviewTaskHasBeenSet() const
{
    return m_reviewTaskHasBeenSet;
}

ScheduleAnalysisTaskResult ActivityResItem::GetAnalysisTask() const
{
    return m_analysisTask;
}

void ActivityResItem::SetAnalysisTask(const ScheduleAnalysisTaskResult& _analysisTask)
{
    m_analysisTask = _analysisTask;
    m_analysisTaskHasBeenSet = true;
}

bool ActivityResItem::AnalysisTaskHasBeenSet() const
{
    return m_analysisTaskHasBeenSet;
}

ScheduleQualityControlTaskResult ActivityResItem::GetQualityControlTask() const
{
    return m_qualityControlTask;
}

void ActivityResItem::SetQualityControlTask(const ScheduleQualityControlTaskResult& _qualityControlTask)
{
    m_qualityControlTask = _qualityControlTask;
    m_qualityControlTaskHasBeenSet = true;
}

bool ActivityResItem::QualityControlTaskHasBeenSet() const
{
    return m_qualityControlTaskHasBeenSet;
}

ScheduleSmartSubtitleTaskResult ActivityResItem::GetSmartSubtitlesTask() const
{
    return m_smartSubtitlesTask;
}

void ActivityResItem::SetSmartSubtitlesTask(const ScheduleSmartSubtitleTaskResult& _smartSubtitlesTask)
{
    m_smartSubtitlesTask = _smartSubtitlesTask;
    m_smartSubtitlesTaskHasBeenSet = true;
}

bool ActivityResItem::SmartSubtitlesTaskHasBeenSet() const
{
    return m_smartSubtitlesTaskHasBeenSet;
}

