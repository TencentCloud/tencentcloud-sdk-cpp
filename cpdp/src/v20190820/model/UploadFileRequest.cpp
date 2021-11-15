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

#include <tencentcloud/cpdp/v20190820/model/UploadFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

UploadFileRequest::UploadFileRequest() :
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_fileExtendInfoHasBeenSet(false)
{
}

string UploadFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExtendInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtendInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileExtendInfo.begin(); itr != m_fileExtendInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadFileRequest::GetFileName() const
{
    return m_fileName;
}

void UploadFileRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool UploadFileRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string UploadFileRequest::GetFileType() const
{
    return m_fileType;
}

void UploadFileRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool UploadFileRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string UploadFileRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void UploadFileRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool UploadFileRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string UploadFileRequest::GetFileContent() const
{
    return m_fileContent;
}

void UploadFileRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool UploadFileRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

vector<AnchorExtendInfo> UploadFileRequest::GetFileExtendInfo() const
{
    return m_fileExtendInfo;
}

void UploadFileRequest::SetFileExtendInfo(const vector<AnchorExtendInfo>& _fileExtendInfo)
{
    m_fileExtendInfo = _fileExtendInfo;
    m_fileExtendInfoHasBeenSet = true;
}

bool UploadFileRequest::FileExtendInfoHasBeenSet() const
{
    return m_fileExtendInfoHasBeenSet;
}


