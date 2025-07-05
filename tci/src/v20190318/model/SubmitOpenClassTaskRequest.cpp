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

#include <tencentcloud/tci/v20190318/model/SubmitOpenClassTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

SubmitOpenClassTaskRequest::SubmitOpenClassTaskRequest() :
    m_fileContentHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_librarySetHasBeenSet(false),
    m_maxVideoDurationHasBeenSet(false)
{
}

string SubmitOpenClassTaskRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitOpenClassTaskRequest::GetFileContent() const
{
    return m_fileContent;
}

void SubmitOpenClassTaskRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool SubmitOpenClassTaskRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string SubmitOpenClassTaskRequest::GetFileType() const
{
    return m_fileType;
}

void SubmitOpenClassTaskRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool SubmitOpenClassTaskRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

vector<string> SubmitOpenClassTaskRequest::GetLibrarySet() const
{
    return m_librarySet;
}

void SubmitOpenClassTaskRequest::SetLibrarySet(const vector<string>& _librarySet)
{
    m_librarySet = _librarySet;
    m_librarySetHasBeenSet = true;
}

bool SubmitOpenClassTaskRequest::LibrarySetHasBeenSet() const
{
    return m_librarySetHasBeenSet;
}

int64_t SubmitOpenClassTaskRequest::GetMaxVideoDuration() const
{
    return m_maxVideoDuration;
}

void SubmitOpenClassTaskRequest::SetMaxVideoDuration(const int64_t& _maxVideoDuration)
{
    m_maxVideoDuration = _maxVideoDuration;
    m_maxVideoDurationHasBeenSet = true;
}

bool SubmitOpenClassTaskRequest::MaxVideoDurationHasBeenSet() const
{
    return m_maxVideoDurationHasBeenSet;
}


