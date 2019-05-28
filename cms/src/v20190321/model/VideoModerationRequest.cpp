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

#include <tencentcloud/cms/v20190321/model/VideoModerationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

VideoModerationRequest::VideoModerationRequest() :
    m_callbackUrlHasBeenSet(false),
    m_fileMD5HasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_fileUrlHasBeenSet(false)
{
}

string VideoModerationRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callbackUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMD5HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileMD5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VideoModerationRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void VideoModerationRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool VideoModerationRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string VideoModerationRequest::GetFileMD5() const
{
    return m_fileMD5;
}

void VideoModerationRequest::SetFileMD5(const string& _fileMD5)
{
    m_fileMD5 = _fileMD5;
    m_fileMD5HasBeenSet = true;
}

bool VideoModerationRequest::FileMD5HasBeenSet() const
{
    return m_fileMD5HasBeenSet;
}

string VideoModerationRequest::GetFileContent() const
{
    return m_fileContent;
}

void VideoModerationRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool VideoModerationRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string VideoModerationRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void VideoModerationRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool VideoModerationRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}


