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

#include <tencentcloud/vod/v20180717/model/AiRecognitionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiRecognitionResult::AiRecognitionResult() :
    m_typeHasBeenSet(false),
    m_headTailTaskHasBeenSet(false),
    m_segmentTaskHasBeenSet(false),
    m_faceTaskHasBeenSet(false),
    m_asrWordsTaskHasBeenSet(false),
    m_asrFullTextTaskHasBeenSet(false),
    m_asrTranslateTaskHasBeenSet(false),
    m_ocrWordsTaskHasBeenSet(false),
    m_ocrFullTextTaskHasBeenSet(false),
    m_objectTaskHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("HeadTailTask") && !value["HeadTailTask"].IsNull())
    {
        if (!value["HeadTailTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionResult.HeadTailTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_headTailTask.Deserialize(value["HeadTailTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headTailTaskHasBeenSet = true;
    }

    if (value.HasMember("SegmentTask") && !value["SegmentTask"].IsNull())
    {
        if (!value["SegmentTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionResult.SegmentTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_segmentTask.Deserialize(value["SegmentTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_segmentTaskHasBeenSet = true;
    }

    if (value.HasMember("FaceTask") && !value["FaceTask"].IsNull())
    {
        if (!value["FaceTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionResult.FaceTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceTask.Deserialize(value["FaceTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceTaskHasBeenSet = true;
    }

    if (value.HasMember("AsrWordsTask") && !value["AsrWordsTask"].IsNull())
    {
        if (!value["AsrWordsTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionResult.AsrWordsTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrWordsTask.Deserialize(value["AsrWordsTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrWordsTaskHasBeenSet = true;
    }

    if (value.HasMember("AsrFullTextTask") && !value["AsrFullTextTask"].IsNull())
    {
        if (!value["AsrFullTextTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionResult.AsrFullTextTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrFullTextTask.Deserialize(value["AsrFullTextTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrFullTextTaskHasBeenSet = true;
    }

    if (value.HasMember("AsrTranslateTask") && !value["AsrTranslateTask"].IsNull())
    {
        if (!value["AsrTranslateTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionResult.AsrTranslateTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrTranslateTask.Deserialize(value["AsrTranslateTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrTranslateTaskHasBeenSet = true;
    }

    if (value.HasMember("OcrWordsTask") && !value["OcrWordsTask"].IsNull())
    {
        if (!value["OcrWordsTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionResult.OcrWordsTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ocrWordsTask.Deserialize(value["OcrWordsTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ocrWordsTaskHasBeenSet = true;
    }

    if (value.HasMember("OcrFullTextTask") && !value["OcrFullTextTask"].IsNull())
    {
        if (!value["OcrFullTextTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionResult.OcrFullTextTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ocrFullTextTask.Deserialize(value["OcrFullTextTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ocrFullTextTaskHasBeenSet = true;
    }

    if (value.HasMember("ObjectTask") && !value["ObjectTask"].IsNull())
    {
        if (!value["ObjectTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionResult.ObjectTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_objectTask.Deserialize(value["ObjectTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_objectTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_headTailTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadTailTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_headTailTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_segmentTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_segmentTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_faceTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_asrWordsTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrWordsTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrWordsTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_asrFullTextTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrFullTextTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrFullTextTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_asrTranslateTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrTranslateTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrTranslateTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ocrWordsTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrWordsTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ocrWordsTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ocrFullTextTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrFullTextTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ocrFullTextTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_objectTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objectTask.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AiRecognitionResult::GetType() const
{
    return m_type;
}

void AiRecognitionResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AiRecognitionResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

AiRecognitionTaskHeadTailResult AiRecognitionResult::GetHeadTailTask() const
{
    return m_headTailTask;
}

void AiRecognitionResult::SetHeadTailTask(const AiRecognitionTaskHeadTailResult& _headTailTask)
{
    m_headTailTask = _headTailTask;
    m_headTailTaskHasBeenSet = true;
}

bool AiRecognitionResult::HeadTailTaskHasBeenSet() const
{
    return m_headTailTaskHasBeenSet;
}

AiRecognitionTaskSegmentResult AiRecognitionResult::GetSegmentTask() const
{
    return m_segmentTask;
}

void AiRecognitionResult::SetSegmentTask(const AiRecognitionTaskSegmentResult& _segmentTask)
{
    m_segmentTask = _segmentTask;
    m_segmentTaskHasBeenSet = true;
}

bool AiRecognitionResult::SegmentTaskHasBeenSet() const
{
    return m_segmentTaskHasBeenSet;
}

AiRecognitionTaskFaceResult AiRecognitionResult::GetFaceTask() const
{
    return m_faceTask;
}

void AiRecognitionResult::SetFaceTask(const AiRecognitionTaskFaceResult& _faceTask)
{
    m_faceTask = _faceTask;
    m_faceTaskHasBeenSet = true;
}

bool AiRecognitionResult::FaceTaskHasBeenSet() const
{
    return m_faceTaskHasBeenSet;
}

AiRecognitionTaskAsrWordsResult AiRecognitionResult::GetAsrWordsTask() const
{
    return m_asrWordsTask;
}

void AiRecognitionResult::SetAsrWordsTask(const AiRecognitionTaskAsrWordsResult& _asrWordsTask)
{
    m_asrWordsTask = _asrWordsTask;
    m_asrWordsTaskHasBeenSet = true;
}

bool AiRecognitionResult::AsrWordsTaskHasBeenSet() const
{
    return m_asrWordsTaskHasBeenSet;
}

AiRecognitionTaskAsrFullTextResult AiRecognitionResult::GetAsrFullTextTask() const
{
    return m_asrFullTextTask;
}

void AiRecognitionResult::SetAsrFullTextTask(const AiRecognitionTaskAsrFullTextResult& _asrFullTextTask)
{
    m_asrFullTextTask = _asrFullTextTask;
    m_asrFullTextTaskHasBeenSet = true;
}

bool AiRecognitionResult::AsrFullTextTaskHasBeenSet() const
{
    return m_asrFullTextTaskHasBeenSet;
}

AiRecognitionTaskAsrTranslateResult AiRecognitionResult::GetAsrTranslateTask() const
{
    return m_asrTranslateTask;
}

void AiRecognitionResult::SetAsrTranslateTask(const AiRecognitionTaskAsrTranslateResult& _asrTranslateTask)
{
    m_asrTranslateTask = _asrTranslateTask;
    m_asrTranslateTaskHasBeenSet = true;
}

bool AiRecognitionResult::AsrTranslateTaskHasBeenSet() const
{
    return m_asrTranslateTaskHasBeenSet;
}

AiRecognitionTaskOcrWordsResult AiRecognitionResult::GetOcrWordsTask() const
{
    return m_ocrWordsTask;
}

void AiRecognitionResult::SetOcrWordsTask(const AiRecognitionTaskOcrWordsResult& _ocrWordsTask)
{
    m_ocrWordsTask = _ocrWordsTask;
    m_ocrWordsTaskHasBeenSet = true;
}

bool AiRecognitionResult::OcrWordsTaskHasBeenSet() const
{
    return m_ocrWordsTaskHasBeenSet;
}

AiRecognitionTaskOcrFullTextResult AiRecognitionResult::GetOcrFullTextTask() const
{
    return m_ocrFullTextTask;
}

void AiRecognitionResult::SetOcrFullTextTask(const AiRecognitionTaskOcrFullTextResult& _ocrFullTextTask)
{
    m_ocrFullTextTask = _ocrFullTextTask;
    m_ocrFullTextTaskHasBeenSet = true;
}

bool AiRecognitionResult::OcrFullTextTaskHasBeenSet() const
{
    return m_ocrFullTextTaskHasBeenSet;
}

AiRecognitionTaskObjectResult AiRecognitionResult::GetObjectTask() const
{
    return m_objectTask;
}

void AiRecognitionResult::SetObjectTask(const AiRecognitionTaskObjectResult& _objectTask)
{
    m_objectTask = _objectTask;
    m_objectTaskHasBeenSet = true;
}

bool AiRecognitionResult::ObjectTaskHasBeenSet() const
{
    return m_objectTaskHasBeenSet;
}

