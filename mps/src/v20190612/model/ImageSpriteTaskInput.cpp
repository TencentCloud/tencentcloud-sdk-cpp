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

#include <tencentcloud/mps/v20190612/model/ImageSpriteTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ImageSpriteTaskInput::ImageSpriteTaskInput() :
    m_definitionHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputObjectPathHasBeenSet(false),
    m_webVttObjectNameHasBeenSet(false),
    m_objectNumberFormatHasBeenSet(false)
{
}

CoreInternalOutcome ImageSpriteTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSpriteTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSpriteTaskInput.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }

    if (value.HasMember("OutputObjectPath") && !value["OutputObjectPath"].IsNull())
    {
        if (!value["OutputObjectPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSpriteTaskInput.OutputObjectPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputObjectPath = string(value["OutputObjectPath"].GetString());
        m_outputObjectPathHasBeenSet = true;
    }

    if (value.HasMember("WebVttObjectName") && !value["WebVttObjectName"].IsNull())
    {
        if (!value["WebVttObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSpriteTaskInput.WebVttObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webVttObjectName = string(value["WebVttObjectName"].GetString());
        m_webVttObjectNameHasBeenSet = true;
    }

    if (value.HasMember("ObjectNumberFormat") && !value["ObjectNumberFormat"].IsNull())
    {
        if (!value["ObjectNumberFormat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSpriteTaskInput.ObjectNumberFormat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_objectNumberFormat.Deserialize(value["ObjectNumberFormat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_objectNumberFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageSpriteTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputObjectPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputObjectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputObjectPath.c_str(), allocator).Move(), allocator);
    }

    if (m_webVttObjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebVttObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webVttObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_objectNumberFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectNumberFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objectNumberFormat.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t ImageSpriteTaskInput::GetDefinition() const
{
    return m_definition;
}

void ImageSpriteTaskInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ImageSpriteTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

TaskOutputStorage ImageSpriteTaskInput::GetOutputStorage() const
{
    return m_outputStorage;
}

void ImageSpriteTaskInput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool ImageSpriteTaskInput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string ImageSpriteTaskInput::GetOutputObjectPath() const
{
    return m_outputObjectPath;
}

void ImageSpriteTaskInput::SetOutputObjectPath(const string& _outputObjectPath)
{
    m_outputObjectPath = _outputObjectPath;
    m_outputObjectPathHasBeenSet = true;
}

bool ImageSpriteTaskInput::OutputObjectPathHasBeenSet() const
{
    return m_outputObjectPathHasBeenSet;
}

string ImageSpriteTaskInput::GetWebVttObjectName() const
{
    return m_webVttObjectName;
}

void ImageSpriteTaskInput::SetWebVttObjectName(const string& _webVttObjectName)
{
    m_webVttObjectName = _webVttObjectName;
    m_webVttObjectNameHasBeenSet = true;
}

bool ImageSpriteTaskInput::WebVttObjectNameHasBeenSet() const
{
    return m_webVttObjectNameHasBeenSet;
}

NumberFormat ImageSpriteTaskInput::GetObjectNumberFormat() const
{
    return m_objectNumberFormat;
}

void ImageSpriteTaskInput::SetObjectNumberFormat(const NumberFormat& _objectNumberFormat)
{
    m_objectNumberFormat = _objectNumberFormat;
    m_objectNumberFormatHasBeenSet = true;
}

bool ImageSpriteTaskInput::ObjectNumberFormatHasBeenSet() const
{
    return m_objectNumberFormatHasBeenSet;
}

