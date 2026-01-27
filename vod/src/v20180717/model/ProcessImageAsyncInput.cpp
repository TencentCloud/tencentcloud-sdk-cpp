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

#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProcessImageAsyncInput::ProcessImageAsyncInput() :
    m_fileIdHasBeenSet(false),
    m_imageTaskInputHasBeenSet(false),
    m_outputConfigHasBeenSet(false)
{
}

CoreInternalOutcome ProcessImageAsyncInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessImageAsyncInput.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("ImageTaskInput") && !value["ImageTaskInput"].IsNull())
    {
        if (!value["ImageTaskInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessImageAsyncInput.ImageTaskInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageTaskInput.Deserialize(value["ImageTaskInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageTaskInputHasBeenSet = true;
    }

    if (value.HasMember("OutputConfig") && !value["OutputConfig"].IsNull())
    {
        if (!value["OutputConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessImageAsyncInput.OutputConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputConfig.Deserialize(value["OutputConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessImageAsyncInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTaskInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTaskInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageTaskInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ProcessImageAsyncInput::GetFileId() const
{
    return m_fileId;
}

void ProcessImageAsyncInput::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool ProcessImageAsyncInput::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

ProcessImageAsyncTaskInput ProcessImageAsyncInput::GetImageTaskInput() const
{
    return m_imageTaskInput;
}

void ProcessImageAsyncInput::SetImageTaskInput(const ProcessImageAsyncTaskInput& _imageTaskInput)
{
    m_imageTaskInput = _imageTaskInput;
    m_imageTaskInputHasBeenSet = true;
}

bool ProcessImageAsyncInput::ImageTaskInputHasBeenSet() const
{
    return m_imageTaskInputHasBeenSet;
}

ProcessImageAsyncOutputConfig ProcessImageAsyncInput::GetOutputConfig() const
{
    return m_outputConfig;
}

void ProcessImageAsyncInput::SetOutputConfig(const ProcessImageAsyncOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool ProcessImageAsyncInput::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

