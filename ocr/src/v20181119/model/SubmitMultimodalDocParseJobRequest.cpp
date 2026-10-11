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

#include <tencentcloud/ocr/v20181119/model/SubmitMultimodalDocParseJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

SubmitMultimodalDocParseJobRequest::SubmitMultimodalDocParseJobRequest() :
    m_fileTypeHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_fileBase64HasBeenSet(false),
    m_resultTypeHasBeenSet(false),
    m_enableSubImgHasBeenSet(false),
    m_fileStartPageNumberHasBeenSet(false),
    m_fileEndPageNumberHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

string SubmitMultimodalDocParseJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileType, allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_resultTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resultType, allocator);
    }

    if (m_enableSubImgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSubImg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSubImg, allocator);
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

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t SubmitMultimodalDocParseJobRequest::GetFileType() const
{
    return m_fileType;
}

void SubmitMultimodalDocParseJobRequest::SetFileType(const int64_t& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool SubmitMultimodalDocParseJobRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string SubmitMultimodalDocParseJobRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void SubmitMultimodalDocParseJobRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool SubmitMultimodalDocParseJobRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string SubmitMultimodalDocParseJobRequest::GetFileBase64() const
{
    return m_fileBase64;
}

void SubmitMultimodalDocParseJobRequest::SetFileBase64(const string& _fileBase64)
{
    m_fileBase64 = _fileBase64;
    m_fileBase64HasBeenSet = true;
}

bool SubmitMultimodalDocParseJobRequest::FileBase64HasBeenSet() const
{
    return m_fileBase64HasBeenSet;
}

int64_t SubmitMultimodalDocParseJobRequest::GetResultType() const
{
    return m_resultType;
}

void SubmitMultimodalDocParseJobRequest::SetResultType(const int64_t& _resultType)
{
    m_resultType = _resultType;
    m_resultTypeHasBeenSet = true;
}

bool SubmitMultimodalDocParseJobRequest::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

bool SubmitMultimodalDocParseJobRequest::GetEnableSubImg() const
{
    return m_enableSubImg;
}

void SubmitMultimodalDocParseJobRequest::SetEnableSubImg(const bool& _enableSubImg)
{
    m_enableSubImg = _enableSubImg;
    m_enableSubImgHasBeenSet = true;
}

bool SubmitMultimodalDocParseJobRequest::EnableSubImgHasBeenSet() const
{
    return m_enableSubImgHasBeenSet;
}

int64_t SubmitMultimodalDocParseJobRequest::GetFileStartPageNumber() const
{
    return m_fileStartPageNumber;
}

void SubmitMultimodalDocParseJobRequest::SetFileStartPageNumber(const int64_t& _fileStartPageNumber)
{
    m_fileStartPageNumber = _fileStartPageNumber;
    m_fileStartPageNumberHasBeenSet = true;
}

bool SubmitMultimodalDocParseJobRequest::FileStartPageNumberHasBeenSet() const
{
    return m_fileStartPageNumberHasBeenSet;
}

int64_t SubmitMultimodalDocParseJobRequest::GetFileEndPageNumber() const
{
    return m_fileEndPageNumber;
}

void SubmitMultimodalDocParseJobRequest::SetFileEndPageNumber(const int64_t& _fileEndPageNumber)
{
    m_fileEndPageNumber = _fileEndPageNumber;
    m_fileEndPageNumberHasBeenSet = true;
}

bool SubmitMultimodalDocParseJobRequest::FileEndPageNumberHasBeenSet() const
{
    return m_fileEndPageNumberHasBeenSet;
}

int64_t SubmitMultimodalDocParseJobRequest::GetTaskType() const
{
    return m_taskType;
}

void SubmitMultimodalDocParseJobRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool SubmitMultimodalDocParseJobRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}


