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

#include <tencentcloud/vod/v20180717/model/AigcVideoRedrawTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcVideoRedrawTaskInput::AigcVideoRedrawTaskInput() :
    m_fileInfoHasBeenSet(false),
    m_outputConfigHasBeenSet(false)
{
}

CoreInternalOutcome AigcVideoRedrawTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileInfo") && !value["FileInfo"].IsNull())
    {
        if (!value["FileInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoRedrawTaskInput.FileInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileInfo.Deserialize(value["FileInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileInfoHasBeenSet = true;
    }

    if (value.HasMember("OutputConfig") && !value["OutputConfig"].IsNull())
    {
        if (!value["OutputConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoRedrawTaskInput.OutputConfig` is not object type").SetRequestId(requestId));
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

void AigcVideoRedrawTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileInfo.ToJsonObject(value[key.c_str()], allocator);
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


AigcVideoRedrawTaskInputFileInfo AigcVideoRedrawTaskInput::GetFileInfo() const
{
    return m_fileInfo;
}

void AigcVideoRedrawTaskInput::SetFileInfo(const AigcVideoRedrawTaskInputFileInfo& _fileInfo)
{
    m_fileInfo = _fileInfo;
    m_fileInfoHasBeenSet = true;
}

bool AigcVideoRedrawTaskInput::FileInfoHasBeenSet() const
{
    return m_fileInfoHasBeenSet;
}

AigcVideoRedrawOutputConfig AigcVideoRedrawTaskInput::GetOutputConfig() const
{
    return m_outputConfig;
}

void AigcVideoRedrawTaskInput::SetOutputConfig(const AigcVideoRedrawOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool AigcVideoRedrawTaskInput::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

