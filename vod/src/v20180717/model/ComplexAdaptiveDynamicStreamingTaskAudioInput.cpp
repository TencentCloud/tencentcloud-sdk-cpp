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

#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskAudioInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ComplexAdaptiveDynamicStreamingTaskAudioInput::ComplexAdaptiveDynamicStreamingTaskAudioInput() :
    m_fileIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_defaultHasBeenSet(false)
{
}

CoreInternalOutcome ComplexAdaptiveDynamicStreamingTaskAudioInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTaskAudioInput.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTaskAudioInput.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTaskAudioInput.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTaskAudioInput.Default` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_default = string(value["Default"].GetString());
        m_defaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplexAdaptiveDynamicStreamingTaskAudioInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_default.c_str(), allocator).Move(), allocator);
    }

}


string ComplexAdaptiveDynamicStreamingTaskAudioInput::GetFileId() const
{
    return m_fileId;
}

void ComplexAdaptiveDynamicStreamingTaskAudioInput::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTaskAudioInput::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string ComplexAdaptiveDynamicStreamingTaskAudioInput::GetName() const
{
    return m_name;
}

void ComplexAdaptiveDynamicStreamingTaskAudioInput::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTaskAudioInput::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ComplexAdaptiveDynamicStreamingTaskAudioInput::GetLanguage() const
{
    return m_language;
}

void ComplexAdaptiveDynamicStreamingTaskAudioInput::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTaskAudioInput::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

string ComplexAdaptiveDynamicStreamingTaskAudioInput::GetDefault() const
{
    return m_default;
}

void ComplexAdaptiveDynamicStreamingTaskAudioInput::SetDefault(const string& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTaskAudioInput::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

