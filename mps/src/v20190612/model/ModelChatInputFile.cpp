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

#include <tencentcloud/mps/v20190612/model/ModelChatInputFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModelChatInputFile::ModelChatInputFile() :
    m_inputInfoHasBeenSet(false),
    m_filenameHasBeenSet(false)
{
}

CoreInternalOutcome ModelChatInputFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputInfo") && !value["InputInfo"].IsNull())
    {
        if (!value["InputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChatInputFile.InputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputInfo.Deserialize(value["InputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputInfoHasBeenSet = true;
    }

    if (value.HasMember("Filename") && !value["Filename"].IsNull())
    {
        if (!value["Filename"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChatInputFile.Filename` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filename = string(value["Filename"].GetString());
        m_filenameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelChatInputFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_filenameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filename";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filename.c_str(), allocator).Move(), allocator);
    }

}


ModelChatMediaInputInfo ModelChatInputFile::GetInputInfo() const
{
    return m_inputInfo;
}

void ModelChatInputFile::SetInputInfo(const ModelChatMediaInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool ModelChatInputFile::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

string ModelChatInputFile::GetFilename() const
{
    return m_filename;
}

void ModelChatInputFile::SetFilename(const string& _filename)
{
    m_filename = _filename;
    m_filenameHasBeenSet = true;
}

bool ModelChatInputFile::FilenameHasBeenSet() const
{
    return m_filenameHasBeenSet;
}

