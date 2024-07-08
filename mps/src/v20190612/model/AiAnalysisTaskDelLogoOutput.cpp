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

#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskDelLogoOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiAnalysisTaskDelLogoOutput::AiAnalysisTaskDelLogoOutput() :
    m_pathHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_originSubtitlePathHasBeenSet(false),
    m_translateSubtitlePathHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskDelLogoOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDelLogoOutput.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDelLogoOutput.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }

    if (value.HasMember("OriginSubtitlePath") && !value["OriginSubtitlePath"].IsNull())
    {
        if (!value["OriginSubtitlePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDelLogoOutput.OriginSubtitlePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originSubtitlePath = string(value["OriginSubtitlePath"].GetString());
        m_originSubtitlePathHasBeenSet = true;
    }

    if (value.HasMember("TranslateSubtitlePath") && !value["TranslateSubtitlePath"].IsNull())
    {
        if (!value["TranslateSubtitlePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDelLogoOutput.TranslateSubtitlePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translateSubtitlePath = string(value["TranslateSubtitlePath"].GetString());
        m_translateSubtitlePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskDelLogoOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originSubtitlePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginSubtitlePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originSubtitlePath.c_str(), allocator).Move(), allocator);
    }

    if (m_translateSubtitlePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateSubtitlePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translateSubtitlePath.c_str(), allocator).Move(), allocator);
    }

}


string AiAnalysisTaskDelLogoOutput::GetPath() const
{
    return m_path;
}

void AiAnalysisTaskDelLogoOutput::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool AiAnalysisTaskDelLogoOutput::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

TaskOutputStorage AiAnalysisTaskDelLogoOutput::GetOutputStorage() const
{
    return m_outputStorage;
}

void AiAnalysisTaskDelLogoOutput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool AiAnalysisTaskDelLogoOutput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string AiAnalysisTaskDelLogoOutput::GetOriginSubtitlePath() const
{
    return m_originSubtitlePath;
}

void AiAnalysisTaskDelLogoOutput::SetOriginSubtitlePath(const string& _originSubtitlePath)
{
    m_originSubtitlePath = _originSubtitlePath;
    m_originSubtitlePathHasBeenSet = true;
}

bool AiAnalysisTaskDelLogoOutput::OriginSubtitlePathHasBeenSet() const
{
    return m_originSubtitlePathHasBeenSet;
}

string AiAnalysisTaskDelLogoOutput::GetTranslateSubtitlePath() const
{
    return m_translateSubtitlePath;
}

void AiAnalysisTaskDelLogoOutput::SetTranslateSubtitlePath(const string& _translateSubtitlePath)
{
    m_translateSubtitlePath = _translateSubtitlePath;
    m_translateSubtitlePathHasBeenSet = true;
}

bool AiAnalysisTaskDelLogoOutput::TranslateSubtitlePathHasBeenSet() const
{
    return m_translateSubtitlePathHasBeenSet;
}

