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

#include <tencentcloud/mps/v20190612/model/AiAnalysisResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiAnalysisResult::AiAnalysisResult() :
    m_typeHasBeenSet(false),
    m_classificationTaskHasBeenSet(false),
    m_coverTaskHasBeenSet(false),
    m_tagTaskHasBeenSet(false),
    m_frameTagTaskHasBeenSet(false),
    m_highlightTaskHasBeenSet(false),
    m_deLogoTaskHasBeenSet(false),
    m_segmentTaskHasBeenSet(false),
    m_headTailTaskHasBeenSet(false),
    m_descriptionTaskHasBeenSet(false),
    m_horizontalToVerticalTaskHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ClassificationTask") && !value["ClassificationTask"].IsNull())
    {
        if (!value["ClassificationTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisResult.ClassificationTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_classificationTask.Deserialize(value["ClassificationTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_classificationTaskHasBeenSet = true;
    }

    if (value.HasMember("CoverTask") && !value["CoverTask"].IsNull())
    {
        if (!value["CoverTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisResult.CoverTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coverTask.Deserialize(value["CoverTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coverTaskHasBeenSet = true;
    }

    if (value.HasMember("TagTask") && !value["TagTask"].IsNull())
    {
        if (!value["TagTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisResult.TagTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tagTask.Deserialize(value["TagTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagTaskHasBeenSet = true;
    }

    if (value.HasMember("FrameTagTask") && !value["FrameTagTask"].IsNull())
    {
        if (!value["FrameTagTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisResult.FrameTagTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_frameTagTask.Deserialize(value["FrameTagTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frameTagTaskHasBeenSet = true;
    }

    if (value.HasMember("HighlightTask") && !value["HighlightTask"].IsNull())
    {
        if (!value["HighlightTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisResult.HighlightTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_highlightTask.Deserialize(value["HighlightTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_highlightTaskHasBeenSet = true;
    }

    if (value.HasMember("DeLogoTask") && !value["DeLogoTask"].IsNull())
    {
        if (!value["DeLogoTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisResult.DeLogoTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deLogoTask.Deserialize(value["DeLogoTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deLogoTaskHasBeenSet = true;
    }

    if (value.HasMember("SegmentTask") && !value["SegmentTask"].IsNull())
    {
        if (!value["SegmentTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisResult.SegmentTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_segmentTask.Deserialize(value["SegmentTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_segmentTaskHasBeenSet = true;
    }

    if (value.HasMember("HeadTailTask") && !value["HeadTailTask"].IsNull())
    {
        if (!value["HeadTailTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisResult.HeadTailTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_headTailTask.Deserialize(value["HeadTailTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headTailTaskHasBeenSet = true;
    }

    if (value.HasMember("DescriptionTask") && !value["DescriptionTask"].IsNull())
    {
        if (!value["DescriptionTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisResult.DescriptionTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_descriptionTask.Deserialize(value["DescriptionTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_descriptionTaskHasBeenSet = true;
    }

    if (value.HasMember("HorizontalToVerticalTask") && !value["HorizontalToVerticalTask"].IsNull())
    {
        if (!value["HorizontalToVerticalTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisResult.HorizontalToVerticalTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_horizontalToVerticalTask.Deserialize(value["HorizontalToVerticalTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_horizontalToVerticalTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_classificationTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coverTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coverTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_frameTagTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameTagTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_frameTagTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_highlightTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighlightTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_highlightTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deLogoTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeLogoTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deLogoTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_segmentTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_segmentTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_headTailTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadTailTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_headTailTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descriptionTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescriptionTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_descriptionTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_horizontalToVerticalTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HorizontalToVerticalTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_horizontalToVerticalTask.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AiAnalysisResult::GetType() const
{
    return m_type;
}

void AiAnalysisResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AiAnalysisResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

AiAnalysisTaskClassificationResult AiAnalysisResult::GetClassificationTask() const
{
    return m_classificationTask;
}

void AiAnalysisResult::SetClassificationTask(const AiAnalysisTaskClassificationResult& _classificationTask)
{
    m_classificationTask = _classificationTask;
    m_classificationTaskHasBeenSet = true;
}

bool AiAnalysisResult::ClassificationTaskHasBeenSet() const
{
    return m_classificationTaskHasBeenSet;
}

AiAnalysisTaskCoverResult AiAnalysisResult::GetCoverTask() const
{
    return m_coverTask;
}

void AiAnalysisResult::SetCoverTask(const AiAnalysisTaskCoverResult& _coverTask)
{
    m_coverTask = _coverTask;
    m_coverTaskHasBeenSet = true;
}

bool AiAnalysisResult::CoverTaskHasBeenSet() const
{
    return m_coverTaskHasBeenSet;
}

AiAnalysisTaskTagResult AiAnalysisResult::GetTagTask() const
{
    return m_tagTask;
}

void AiAnalysisResult::SetTagTask(const AiAnalysisTaskTagResult& _tagTask)
{
    m_tagTask = _tagTask;
    m_tagTaskHasBeenSet = true;
}

bool AiAnalysisResult::TagTaskHasBeenSet() const
{
    return m_tagTaskHasBeenSet;
}

AiAnalysisTaskFrameTagResult AiAnalysisResult::GetFrameTagTask() const
{
    return m_frameTagTask;
}

void AiAnalysisResult::SetFrameTagTask(const AiAnalysisTaskFrameTagResult& _frameTagTask)
{
    m_frameTagTask = _frameTagTask;
    m_frameTagTaskHasBeenSet = true;
}

bool AiAnalysisResult::FrameTagTaskHasBeenSet() const
{
    return m_frameTagTaskHasBeenSet;
}

AiAnalysisTaskHighlightResult AiAnalysisResult::GetHighlightTask() const
{
    return m_highlightTask;
}

void AiAnalysisResult::SetHighlightTask(const AiAnalysisTaskHighlightResult& _highlightTask)
{
    m_highlightTask = _highlightTask;
    m_highlightTaskHasBeenSet = true;
}

bool AiAnalysisResult::HighlightTaskHasBeenSet() const
{
    return m_highlightTaskHasBeenSet;
}

AiAnalysisTaskDelLogoResult AiAnalysisResult::GetDeLogoTask() const
{
    return m_deLogoTask;
}

void AiAnalysisResult::SetDeLogoTask(const AiAnalysisTaskDelLogoResult& _deLogoTask)
{
    m_deLogoTask = _deLogoTask;
    m_deLogoTaskHasBeenSet = true;
}

bool AiAnalysisResult::DeLogoTaskHasBeenSet() const
{
    return m_deLogoTaskHasBeenSet;
}

AiAnalysisTaskSegmentResult AiAnalysisResult::GetSegmentTask() const
{
    return m_segmentTask;
}

void AiAnalysisResult::SetSegmentTask(const AiAnalysisTaskSegmentResult& _segmentTask)
{
    m_segmentTask = _segmentTask;
    m_segmentTaskHasBeenSet = true;
}

bool AiAnalysisResult::SegmentTaskHasBeenSet() const
{
    return m_segmentTaskHasBeenSet;
}

AiAnalysisTaskHeadTailResult AiAnalysisResult::GetHeadTailTask() const
{
    return m_headTailTask;
}

void AiAnalysisResult::SetHeadTailTask(const AiAnalysisTaskHeadTailResult& _headTailTask)
{
    m_headTailTask = _headTailTask;
    m_headTailTaskHasBeenSet = true;
}

bool AiAnalysisResult::HeadTailTaskHasBeenSet() const
{
    return m_headTailTaskHasBeenSet;
}

AiAnalysisTaskDescriptionResult AiAnalysisResult::GetDescriptionTask() const
{
    return m_descriptionTask;
}

void AiAnalysisResult::SetDescriptionTask(const AiAnalysisTaskDescriptionResult& _descriptionTask)
{
    m_descriptionTask = _descriptionTask;
    m_descriptionTaskHasBeenSet = true;
}

bool AiAnalysisResult::DescriptionTaskHasBeenSet() const
{
    return m_descriptionTaskHasBeenSet;
}

AiAnalysisTaskHorizontalToVerticalResult AiAnalysisResult::GetHorizontalToVerticalTask() const
{
    return m_horizontalToVerticalTask;
}

void AiAnalysisResult::SetHorizontalToVerticalTask(const AiAnalysisTaskHorizontalToVerticalResult& _horizontalToVerticalTask)
{
    m_horizontalToVerticalTask = _horizontalToVerticalTask;
    m_horizontalToVerticalTaskHasBeenSet = true;
}

bool AiAnalysisResult::HorizontalToVerticalTaskHasBeenSet() const
{
    return m_horizontalToVerticalTaskHasBeenSet;
}

