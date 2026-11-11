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

#include <tencentcloud/mps/v20190612/model/ModelChatContentPart.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModelChatContentPart::ModelChatContentPart() :
    m_typeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_inputImageHasBeenSet(false),
    m_inputVideoHasBeenSet(false),
    m_inputAudioHasBeenSet(false),
    m_inputFileHasBeenSet(false)
{
}

CoreInternalOutcome ModelChatContentPart::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChatContentPart.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChatContentPart.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("InputImage") && !value["InputImage"].IsNull())
    {
        if (!value["InputImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChatContentPart.InputImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputImage.Deserialize(value["InputImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputImageHasBeenSet = true;
    }

    if (value.HasMember("InputVideo") && !value["InputVideo"].IsNull())
    {
        if (!value["InputVideo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChatContentPart.InputVideo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputVideo.Deserialize(value["InputVideo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputVideoHasBeenSet = true;
    }

    if (value.HasMember("InputAudio") && !value["InputAudio"].IsNull())
    {
        if (!value["InputAudio"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChatContentPart.InputAudio` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputAudio.Deserialize(value["InputAudio"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputAudioHasBeenSet = true;
    }

    if (value.HasMember("InputFile") && !value["InputFile"].IsNull())
    {
        if (!value["InputFile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChatContentPart.InputFile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputFile.Deserialize(value["InputFile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputFileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelChatContentPart::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_inputImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inputVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputVideo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inputAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputAudio.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inputFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputFile.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModelChatContentPart::GetType() const
{
    return m_type;
}

void ModelChatContentPart::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModelChatContentPart::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModelChatContentPart::GetText() const
{
    return m_text;
}

void ModelChatContentPart::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ModelChatContentPart::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

ModelChatInputImage ModelChatContentPart::GetInputImage() const
{
    return m_inputImage;
}

void ModelChatContentPart::SetInputImage(const ModelChatInputImage& _inputImage)
{
    m_inputImage = _inputImage;
    m_inputImageHasBeenSet = true;
}

bool ModelChatContentPart::InputImageHasBeenSet() const
{
    return m_inputImageHasBeenSet;
}

ModelChatInputVideo ModelChatContentPart::GetInputVideo() const
{
    return m_inputVideo;
}

void ModelChatContentPart::SetInputVideo(const ModelChatInputVideo& _inputVideo)
{
    m_inputVideo = _inputVideo;
    m_inputVideoHasBeenSet = true;
}

bool ModelChatContentPart::InputVideoHasBeenSet() const
{
    return m_inputVideoHasBeenSet;
}

ModelChatInputAudio ModelChatContentPart::GetInputAudio() const
{
    return m_inputAudio;
}

void ModelChatContentPart::SetInputAudio(const ModelChatInputAudio& _inputAudio)
{
    m_inputAudio = _inputAudio;
    m_inputAudioHasBeenSet = true;
}

bool ModelChatContentPart::InputAudioHasBeenSet() const
{
    return m_inputAudioHasBeenSet;
}

ModelChatInputFile ModelChatContentPart::GetInputFile() const
{
    return m_inputFile;
}

void ModelChatContentPart::SetInputFile(const ModelChatInputFile& _inputFile)
{
    m_inputFile = _inputFile;
    m_inputFileHasBeenSet = true;
}

bool ModelChatContentPart::InputFileHasBeenSet() const
{
    return m_inputFileHasBeenSet;
}

