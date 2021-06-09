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

#include <tencentcloud/tci/v20190318/model/SubmitConversationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

SubmitConversationTaskRequest::SubmitConversationTaskRequest() :
    m_langHasBeenSet(false),
    m_studentUrlHasBeenSet(false),
    m_teacherUrlHasBeenSet(false),
    m_voiceEncodeTypeHasBeenSet(false),
    m_voiceFileTypeHasBeenSet(false),
    m_functionsHasBeenSet(false),
    m_vocabLibNameListHasBeenSet(false)
{
}

string SubmitConversationTaskRequest::ToJsonString() const
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

    if (m_studentUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StudentUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_studentUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_teacherUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teacherUrl.c_str(), allocator).Move(), allocator);
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


int64_t SubmitConversationTaskRequest::GetLang() const
{
    return m_lang;
}

void SubmitConversationTaskRequest::SetLang(const int64_t& _lang)
{
    m_lang = _lang;
    m_langHasBeenSet = true;
}

bool SubmitConversationTaskRequest::LangHasBeenSet() const
{
    return m_langHasBeenSet;
}

string SubmitConversationTaskRequest::GetStudentUrl() const
{
    return m_studentUrl;
}

void SubmitConversationTaskRequest::SetStudentUrl(const string& _studentUrl)
{
    m_studentUrl = _studentUrl;
    m_studentUrlHasBeenSet = true;
}

bool SubmitConversationTaskRequest::StudentUrlHasBeenSet() const
{
    return m_studentUrlHasBeenSet;
}

string SubmitConversationTaskRequest::GetTeacherUrl() const
{
    return m_teacherUrl;
}

void SubmitConversationTaskRequest::SetTeacherUrl(const string& _teacherUrl)
{
    m_teacherUrl = _teacherUrl;
    m_teacherUrlHasBeenSet = true;
}

bool SubmitConversationTaskRequest::TeacherUrlHasBeenSet() const
{
    return m_teacherUrlHasBeenSet;
}

int64_t SubmitConversationTaskRequest::GetVoiceEncodeType() const
{
    return m_voiceEncodeType;
}

void SubmitConversationTaskRequest::SetVoiceEncodeType(const int64_t& _voiceEncodeType)
{
    m_voiceEncodeType = _voiceEncodeType;
    m_voiceEncodeTypeHasBeenSet = true;
}

bool SubmitConversationTaskRequest::VoiceEncodeTypeHasBeenSet() const
{
    return m_voiceEncodeTypeHasBeenSet;
}

int64_t SubmitConversationTaskRequest::GetVoiceFileType() const
{
    return m_voiceFileType;
}

void SubmitConversationTaskRequest::SetVoiceFileType(const int64_t& _voiceFileType)
{
    m_voiceFileType = _voiceFileType;
    m_voiceFileTypeHasBeenSet = true;
}

bool SubmitConversationTaskRequest::VoiceFileTypeHasBeenSet() const
{
    return m_voiceFileTypeHasBeenSet;
}

Function SubmitConversationTaskRequest::GetFunctions() const
{
    return m_functions;
}

void SubmitConversationTaskRequest::SetFunctions(const Function& _functions)
{
    m_functions = _functions;
    m_functionsHasBeenSet = true;
}

bool SubmitConversationTaskRequest::FunctionsHasBeenSet() const
{
    return m_functionsHasBeenSet;
}

vector<string> SubmitConversationTaskRequest::GetVocabLibNameList() const
{
    return m_vocabLibNameList;
}

void SubmitConversationTaskRequest::SetVocabLibNameList(const vector<string>& _vocabLibNameList)
{
    m_vocabLibNameList = _vocabLibNameList;
    m_vocabLibNameListHasBeenSet = true;
}

bool SubmitConversationTaskRequest::VocabLibNameListHasBeenSet() const
{
    return m_vocabLibNameListHasBeenSet;
}


