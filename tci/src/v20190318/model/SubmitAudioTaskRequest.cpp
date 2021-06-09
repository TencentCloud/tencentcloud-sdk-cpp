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

#include <tencentcloud/tci/v20190318/model/SubmitAudioTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

SubmitAudioTaskRequest::SubmitAudioTaskRequest() :
    m_langHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_voiceEncodeTypeHasBeenSet(false),
    m_voiceFileTypeHasBeenSet(false),
    m_functionsHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_muteThresholdHasBeenSet(false),
    m_vocabLibNameListHasBeenSet(false)
{
}

string SubmitAudioTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_langHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lang, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceEncodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceEncodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceEncodeType, allocator);
    }

    if (m_voiceFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceFileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceFileType, allocator);
    }

    if (m_functionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Functions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_functions.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_muteThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MuteThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_muteThreshold, allocator);
    }

    if (m_vocabLibNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VocabLibNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vocabLibNameList.begin(); itr != m_vocabLibNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t SubmitAudioTaskRequest::GetLang() const
{
    return m_lang;
}

void SubmitAudioTaskRequest::SetLang(const int64_t& _lang)
{
    m_lang = _lang;
    m_langHasBeenSet = true;
}

bool SubmitAudioTaskRequest::LangHasBeenSet() const
{
    return m_langHasBeenSet;
}

string SubmitAudioTaskRequest::GetUrl() const
{
    return m_url;
}

void SubmitAudioTaskRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SubmitAudioTaskRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t SubmitAudioTaskRequest::GetVoiceEncodeType() const
{
    return m_voiceEncodeType;
}

void SubmitAudioTaskRequest::SetVoiceEncodeType(const int64_t& _voiceEncodeType)
{
    m_voiceEncodeType = _voiceEncodeType;
    m_voiceEncodeTypeHasBeenSet = true;
}

bool SubmitAudioTaskRequest::VoiceEncodeTypeHasBeenSet() const
{
    return m_voiceEncodeTypeHasBeenSet;
}

int64_t SubmitAudioTaskRequest::GetVoiceFileType() const
{
    return m_voiceFileType;
}

void SubmitAudioTaskRequest::SetVoiceFileType(const int64_t& _voiceFileType)
{
    m_voiceFileType = _voiceFileType;
    m_voiceFileTypeHasBeenSet = true;
}

bool SubmitAudioTaskRequest::VoiceFileTypeHasBeenSet() const
{
    return m_voiceFileTypeHasBeenSet;
}

Function SubmitAudioTaskRequest::GetFunctions() const
{
    return m_functions;
}

void SubmitAudioTaskRequest::SetFunctions(const Function& _functions)
{
    m_functions = _functions;
    m_functionsHasBeenSet = true;
}

bool SubmitAudioTaskRequest::FunctionsHasBeenSet() const
{
    return m_functionsHasBeenSet;
}

string SubmitAudioTaskRequest::GetFileType() const
{
    return m_fileType;
}

void SubmitAudioTaskRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool SubmitAudioTaskRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

int64_t SubmitAudioTaskRequest::GetMuteThreshold() const
{
    return m_muteThreshold;
}

void SubmitAudioTaskRequest::SetMuteThreshold(const int64_t& _muteThreshold)
{
    m_muteThreshold = _muteThreshold;
    m_muteThresholdHasBeenSet = true;
}

bool SubmitAudioTaskRequest::MuteThresholdHasBeenSet() const
{
    return m_muteThresholdHasBeenSet;
}

vector<string> SubmitAudioTaskRequest::GetVocabLibNameList() const
{
    return m_vocabLibNameList;
}

void SubmitAudioTaskRequest::SetVocabLibNameList(const vector<string>& _vocabLibNameList)
{
    m_vocabLibNameList = _vocabLibNameList;
    m_vocabLibNameListHasBeenSet = true;
}

bool SubmitAudioTaskRequest::VocabLibNameListHasBeenSet() const
{
    return m_vocabLibNameListHasBeenSet;
}


