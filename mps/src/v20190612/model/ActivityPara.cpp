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

#include <tencentcloud/mps/v20190612/model/ActivityPara.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ActivityPara::ActivityPara() :
    m_transcodeTaskHasBeenSet(false),
    m_animatedGraphicTaskHasBeenSet(false),
    m_snapshotByTimeOffsetTaskHasBeenSet(false),
    m_sampleSnapshotTaskHasBeenSet(false),
    m_imageSpriteTaskHasBeenSet(false),
    m_adaptiveDynamicStreamingTaskHasBeenSet(false),
    m_aiContentReviewTaskHasBeenSet(false),
    m_aiAnalysisTaskHasBeenSet(false),
    m_aiRecognitionTaskHasBeenSet(false),
    m_qualityControlTaskHasBeenSet(false),
    m_smartSubtitlesTaskHasBeenSet(false)
{
}

CoreInternalOutcome ActivityPara::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TranscodeTask") && !value["TranscodeTask"].IsNull())
    {
        if (!value["TranscodeTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityPara.TranscodeTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ActivityPara.AnimatedGraphicTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ActivityPara.SnapshotByTimeOffsetTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ActivityPara.SampleSnapshotTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ActivityPara.ImageSpriteTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ActivityPara.AdaptiveDynamicStreamingTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adaptiveDynamicStreamingTask.Deserialize(value["AdaptiveDynamicStreamingTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adaptiveDynamicStreamingTaskHasBeenSet = true;
    }

    if (value.HasMember("AiContentReviewTask") && !value["AiContentReviewTask"].IsNull())
    {
        if (!value["AiContentReviewTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityPara.AiContentReviewTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiContentReviewTask.Deserialize(value["AiContentReviewTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiContentReviewTaskHasBeenSet = true;
    }

    if (value.HasMember("AiAnalysisTask") && !value["AiAnalysisTask"].IsNull())
    {
        if (!value["AiAnalysisTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityPara.AiAnalysisTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiAnalysisTask.Deserialize(value["AiAnalysisTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiAnalysisTaskHasBeenSet = true;
    }

    if (value.HasMember("AiRecognitionTask") && !value["AiRecognitionTask"].IsNull())
    {
        if (!value["AiRecognitionTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityPara.AiRecognitionTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiRecognitionTask.Deserialize(value["AiRecognitionTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiRecognitionTaskHasBeenSet = true;
    }

    if (value.HasMember("QualityControlTask") && !value["QualityControlTask"].IsNull())
    {
        if (!value["QualityControlTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityPara.QualityControlTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ActivityPara.SmartSubtitlesTask` is not object type").SetRequestId(requestId));
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

void ActivityPara::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_aiContentReviewTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiContentReviewTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiContentReviewTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiAnalysisTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiAnalysisTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiAnalysisTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiRecognitionTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiRecognitionTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiRecognitionTask.ToJsonObject(value[key.c_str()], allocator);
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


TranscodeTaskInput ActivityPara::GetTranscodeTask() const
{
    return m_transcodeTask;
}

void ActivityPara::SetTranscodeTask(const TranscodeTaskInput& _transcodeTask)
{
    m_transcodeTask = _transcodeTask;
    m_transcodeTaskHasBeenSet = true;
}

bool ActivityPara::TranscodeTaskHasBeenSet() const
{
    return m_transcodeTaskHasBeenSet;
}

AnimatedGraphicTaskInput ActivityPara::GetAnimatedGraphicTask() const
{
    return m_animatedGraphicTask;
}

void ActivityPara::SetAnimatedGraphicTask(const AnimatedGraphicTaskInput& _animatedGraphicTask)
{
    m_animatedGraphicTask = _animatedGraphicTask;
    m_animatedGraphicTaskHasBeenSet = true;
}

bool ActivityPara::AnimatedGraphicTaskHasBeenSet() const
{
    return m_animatedGraphicTaskHasBeenSet;
}

SnapshotByTimeOffsetTaskInput ActivityPara::GetSnapshotByTimeOffsetTask() const
{
    return m_snapshotByTimeOffsetTask;
}

void ActivityPara::SetSnapshotByTimeOffsetTask(const SnapshotByTimeOffsetTaskInput& _snapshotByTimeOffsetTask)
{
    m_snapshotByTimeOffsetTask = _snapshotByTimeOffsetTask;
    m_snapshotByTimeOffsetTaskHasBeenSet = true;
}

bool ActivityPara::SnapshotByTimeOffsetTaskHasBeenSet() const
{
    return m_snapshotByTimeOffsetTaskHasBeenSet;
}

SampleSnapshotTaskInput ActivityPara::GetSampleSnapshotTask() const
{
    return m_sampleSnapshotTask;
}

void ActivityPara::SetSampleSnapshotTask(const SampleSnapshotTaskInput& _sampleSnapshotTask)
{
    m_sampleSnapshotTask = _sampleSnapshotTask;
    m_sampleSnapshotTaskHasBeenSet = true;
}

bool ActivityPara::SampleSnapshotTaskHasBeenSet() const
{
    return m_sampleSnapshotTaskHasBeenSet;
}

ImageSpriteTaskInput ActivityPara::GetImageSpriteTask() const
{
    return m_imageSpriteTask;
}

void ActivityPara::SetImageSpriteTask(const ImageSpriteTaskInput& _imageSpriteTask)
{
    m_imageSpriteTask = _imageSpriteTask;
    m_imageSpriteTaskHasBeenSet = true;
}

bool ActivityPara::ImageSpriteTaskHasBeenSet() const
{
    return m_imageSpriteTaskHasBeenSet;
}

AdaptiveDynamicStreamingTaskInput ActivityPara::GetAdaptiveDynamicStreamingTask() const
{
    return m_adaptiveDynamicStreamingTask;
}

void ActivityPara::SetAdaptiveDynamicStreamingTask(const AdaptiveDynamicStreamingTaskInput& _adaptiveDynamicStreamingTask)
{
    m_adaptiveDynamicStreamingTask = _adaptiveDynamicStreamingTask;
    m_adaptiveDynamicStreamingTaskHasBeenSet = true;
}

bool ActivityPara::AdaptiveDynamicStreamingTaskHasBeenSet() const
{
    return m_adaptiveDynamicStreamingTaskHasBeenSet;
}

AiContentReviewTaskInput ActivityPara::GetAiContentReviewTask() const
{
    return m_aiContentReviewTask;
}

void ActivityPara::SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask)
{
    m_aiContentReviewTask = _aiContentReviewTask;
    m_aiContentReviewTaskHasBeenSet = true;
}

bool ActivityPara::AiContentReviewTaskHasBeenSet() const
{
    return m_aiContentReviewTaskHasBeenSet;
}

AiAnalysisTaskInput ActivityPara::GetAiAnalysisTask() const
{
    return m_aiAnalysisTask;
}

void ActivityPara::SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask)
{
    m_aiAnalysisTask = _aiAnalysisTask;
    m_aiAnalysisTaskHasBeenSet = true;
}

bool ActivityPara::AiAnalysisTaskHasBeenSet() const
{
    return m_aiAnalysisTaskHasBeenSet;
}

AiRecognitionTaskInput ActivityPara::GetAiRecognitionTask() const
{
    return m_aiRecognitionTask;
}

void ActivityPara::SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask)
{
    m_aiRecognitionTask = _aiRecognitionTask;
    m_aiRecognitionTaskHasBeenSet = true;
}

bool ActivityPara::AiRecognitionTaskHasBeenSet() const
{
    return m_aiRecognitionTaskHasBeenSet;
}

AiQualityControlTaskInput ActivityPara::GetQualityControlTask() const
{
    return m_qualityControlTask;
}

void ActivityPara::SetQualityControlTask(const AiQualityControlTaskInput& _qualityControlTask)
{
    m_qualityControlTask = _qualityControlTask;
    m_qualityControlTaskHasBeenSet = true;
}

bool ActivityPara::QualityControlTaskHasBeenSet() const
{
    return m_qualityControlTaskHasBeenSet;
}

SmartSubtitlesTaskInput ActivityPara::GetSmartSubtitlesTask() const
{
    return m_smartSubtitlesTask;
}

void ActivityPara::SetSmartSubtitlesTask(const SmartSubtitlesTaskInput& _smartSubtitlesTask)
{
    m_smartSubtitlesTask = _smartSubtitlesTask;
    m_smartSubtitlesTaskHasBeenSet = true;
}

bool ActivityPara::SmartSubtitlesTaskHasBeenSet() const
{
    return m_smartSubtitlesTaskHasBeenSet;
}

