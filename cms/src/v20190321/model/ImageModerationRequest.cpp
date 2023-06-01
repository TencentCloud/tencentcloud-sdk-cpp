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

#include <tencentcloud/cms/v20190321/model/ImageModerationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

ImageModerationRequest::ImageModerationRequest() :
    m_fileUrlHasBeenSet(false),
    m_fileMD5HasBeenSet(false),
    m_fileContentHasBeenSet(false)
{
}

string ImageModerationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMD5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImageModerationRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void ImageModerationRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool ImageModerationRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string ImageModerationRequest::GetFileMD5() const
{
    return m_fileMD5;
}

void ImageModerationRequest::SetFileMD5(const string& _fileMD5)
{
    m_fileMD5 = _fileMD5;
    m_fileMD5HasBeenSet = true;
}

bool ImageModerationRequest::FileMD5HasBeenSet() const
{
    return m_fileMD5HasBeenSet;
}

string ImageModerationRequest::GetFileContent() const
{
    return m_fileContent;
}

void ImageModerationRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool ImageModerationRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}


