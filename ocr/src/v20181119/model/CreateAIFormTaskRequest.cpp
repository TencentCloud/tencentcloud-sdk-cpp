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

#include <tencentcloud/ocr/v20181119/model/CreateAIFormTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

CreateAIFormTaskRequest::CreateAIFormTaskRequest() :
    m_fileListHasBeenSet(false),
    m_firstNotesHasBeenSet(false),
    m_secondNotesHasBeenSet(false)
{
}

string CreateAIFormTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileList.begin(); itr != m_fileList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_firstNotesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstNotes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firstNotes.c_str(), allocator).Move(), allocator);
    }

    if (m_secondNotesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondNotes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secondNotes.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<SmartFormFileUrl> CreateAIFormTaskRequest::GetFileList() const
{
    return m_fileList;
}

void CreateAIFormTaskRequest::SetFileList(const vector<SmartFormFileUrl>& _fileList)
{
    m_fileList = _fileList;
    m_fileListHasBeenSet = true;
}

bool CreateAIFormTaskRequest::FileListHasBeenSet() const
{
    return m_fileListHasBeenSet;
}

string CreateAIFormTaskRequest::GetFirstNotes() const
{
    return m_firstNotes;
}

void CreateAIFormTaskRequest::SetFirstNotes(const string& _firstNotes)
{
    m_firstNotes = _firstNotes;
    m_firstNotesHasBeenSet = true;
}

bool CreateAIFormTaskRequest::FirstNotesHasBeenSet() const
{
    return m_firstNotesHasBeenSet;
}

string CreateAIFormTaskRequest::GetSecondNotes() const
{
    return m_secondNotes;
}

void CreateAIFormTaskRequest::SetSecondNotes(const string& _secondNotes)
{
    m_secondNotes = _secondNotes;
    m_secondNotesHasBeenSet = true;
}

bool CreateAIFormTaskRequest::SecondNotesHasBeenSet() const
{
    return m_secondNotesHasBeenSet;
}


