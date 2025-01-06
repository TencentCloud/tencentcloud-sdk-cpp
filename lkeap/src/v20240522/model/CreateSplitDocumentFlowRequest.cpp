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

#include <tencentcloud/lkeap/v20240522/model/CreateSplitDocumentFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

CreateSplitDocumentFlowRequest::CreateSplitDocumentFlowRequest() :
    m_fileTypeHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileBase64HasBeenSet(false),
    m_fileStartPageNumberHasBeenSet(false),
    m_fileEndPageNumberHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

string CreateSplitDocumentFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_fileStartPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileStartPageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileStartPageNumber, allocator);
    }

    if (m_fileEndPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileEndPageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileEndPageNumber, allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSplitDocumentFlowRequest::GetFileType() const
{
    return m_fileType;
}

void CreateSplitDocumentFlowRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool CreateSplitDocumentFlowRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string CreateSplitDocumentFlowRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void CreateSplitDocumentFlowRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool CreateSplitDocumentFlowRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string CreateSplitDocumentFlowRequest::GetFileName() const
{
    return m_fileName;
}

void CreateSplitDocumentFlowRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CreateSplitDocumentFlowRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string CreateSplitDocumentFlowRequest::GetFileBase64() const
{
    return m_fileBase64;
}

void CreateSplitDocumentFlowRequest::SetFileBase64(const string& _fileBase64)
{
    m_fileBase64 = _fileBase64;
    m_fileBase64HasBeenSet = true;
}

bool CreateSplitDocumentFlowRequest::FileBase64HasBeenSet() const
{
    return m_fileBase64HasBeenSet;
}

int64_t CreateSplitDocumentFlowRequest::GetFileStartPageNumber() const
{
    return m_fileStartPageNumber;
}

void CreateSplitDocumentFlowRequest::SetFileStartPageNumber(const int64_t& _fileStartPageNumber)
{
    m_fileStartPageNumber = _fileStartPageNumber;
    m_fileStartPageNumberHasBeenSet = true;
}

bool CreateSplitDocumentFlowRequest::FileStartPageNumberHasBeenSet() const
{
    return m_fileStartPageNumberHasBeenSet;
}

int64_t CreateSplitDocumentFlowRequest::GetFileEndPageNumber() const
{
    return m_fileEndPageNumber;
}

void CreateSplitDocumentFlowRequest::SetFileEndPageNumber(const int64_t& _fileEndPageNumber)
{
    m_fileEndPageNumber = _fileEndPageNumber;
    m_fileEndPageNumberHasBeenSet = true;
}

bool CreateSplitDocumentFlowRequest::FileEndPageNumberHasBeenSet() const
{
    return m_fileEndPageNumberHasBeenSet;
}

CreateSplitDocumentFlowConfig CreateSplitDocumentFlowRequest::GetConfig() const
{
    return m_config;
}

void CreateSplitDocumentFlowRequest::SetConfig(const CreateSplitDocumentFlowConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool CreateSplitDocumentFlowRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}


