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

#include <tencentcloud/tci/v20190318/model/SubmitPartialBodyClassTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

SubmitPartialBodyClassTaskRequest::SubmitPartialBodyClassTaskRequest() :
    m_fileContentHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_langHasBeenSet(false),
    m_librarySetHasBeenSet(false),
    m_maxVideoDurationHasBeenSet(false),
    m_vocabLibNameListHasBeenSet(false),
    m_voiceEncodeTypeHasBeenSet(false),
    m_voiceFileTypeHasBeenSet(false)
{
}

string SubmitPartialBodyClassTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_langHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lang, allocator);
    }

    if (m_librarySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibrarySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_librarySet.begin(); itr != m_librarySet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxVideoDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxVideoDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxVideoDuration, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitPartialBodyClassTaskRequest::GetFileContent() const
{
    return m_fileContent;
}

void SubmitPartialBodyClassTaskRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool SubmitPartialBodyClassTaskRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string SubmitPartialBodyClassTaskRequest::GetFileType() const
{
    return m_fileType;
}

void SubmitPartialBodyClassTaskRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool SubmitPartialBodyClassTaskRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

int64_t SubmitPartialBodyClassTaskRequest::GetLang() const
{
    return m_lang;
}

void SubmitPartialBodyClassTaskRequest::SetLang(const int64_t& _lang)
{
    m_lang = _lang;
    m_langHasBeenSet = true;
}

bool SubmitPartialBodyClassTaskRequest::LangHasBeenSet() const
{
    return m_langHasBeenSet;
}

vector<string> SubmitPartialBodyClassTaskRequest::GetLibrarySet() const
{
    return m_librarySet;
}

void SubmitPartialBodyClassTaskRequest::SetLibrarySet(const vector<string>& _librarySet)
{
    m_librarySet = _librarySet;
    m_librarySetHasBeenSet = true;
}

bool SubmitPartialBodyClassTaskRequest::LibrarySetHasBeenSet() const
{
    return m_librarySetHasBeenSet;
}

int64_t SubmitPartialBodyClassTaskRequest::GetMaxVideoDuration() const
{
    return m_maxVideoDuration;
}

void SubmitPartialBodyClassTaskRequest::SetMaxVideoDuration(const int64_t& _maxVideoDuration)
{
    m_maxVideoDuration = _maxVideoDuration;
    m_maxVideoDurationHasBeenSet = true;
}

bool SubmitPartialBodyClassTaskRequest::MaxVideoDurationHasBeenSet() const
{
    return m_maxVideoDurationHasBeenSet;
}

vector<string> SubmitPartialBodyClassTaskRequest::GetVocabLibNameList() const
{
    return m_vocabLibNameList;
}

void SubmitPartialBodyClassTaskRequest::SetVocabLibNameList(const vector<string>& _vocabLibNameList)
{
    m_vocabLibNameList = _vocabLibNameList;
    m_vocabLibNameListHasBeenSet = true;
}

bool SubmitPartialBodyClassTaskRequest::VocabLibNameListHasBeenSet() const
{
    return m_vocabLibNameListHasBeenSet;
}

int64_t SubmitPartialBodyClassTaskRequest::GetVoiceEncodeType() const
{
    return m_voiceEncodeType;
}

void SubmitPartialBodyClassTaskRequest::SetVoiceEncodeType(const int64_t& _voiceEncodeType)
{
    m_voiceEncodeType = _voiceEncodeType;
    m_voiceEncodeTypeHasBeenSet = true;
}

bool SubmitPartialBodyClassTaskRequest::VoiceEncodeTypeHasBeenSet() const
{
    return m_voiceEncodeTypeHasBeenSet;
}

int64_t SubmitPartialBodyClassTaskRequest::GetVoiceFileType() const
{
    return m_voiceFileType;
}

void SubmitPartialBodyClassTaskRequest::SetVoiceFileType(const int64_t& _voiceFileType)
{
    m_voiceFileType = _voiceFileType;
    m_voiceFileTypeHasBeenSet = true;
}

bool SubmitPartialBodyClassTaskRequest::VoiceFileTypeHasBeenSet() const
{
    return m_voiceFileTypeHasBeenSet;
}


