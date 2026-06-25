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

#include <tencentcloud/ocr/v20181119/model/MultimodalDocParseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

MultimodalDocParseRequest::MultimodalDocParseRequest() :
    m_fileUrlHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_resultTypeHasBeenSet(false),
    m_enableSubImgHasBeenSet(false),
    m_pageRangeHasBeenSet(false)
{
}

string MultimodalDocParseRequest::ToJsonString() const
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

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileType, allocator);
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

    if (m_pageRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageRange.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string MultimodalDocParseRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void MultimodalDocParseRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool MultimodalDocParseRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

int64_t MultimodalDocParseRequest::GetFileType() const
{
    return m_fileType;
}

void MultimodalDocParseRequest::SetFileType(const int64_t& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool MultimodalDocParseRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

int64_t MultimodalDocParseRequest::GetResultType() const
{
    return m_resultType;
}

void MultimodalDocParseRequest::SetResultType(const int64_t& _resultType)
{
    m_resultType = _resultType;
    m_resultTypeHasBeenSet = true;
}

bool MultimodalDocParseRequest::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

bool MultimodalDocParseRequest::GetEnableSubImg() const
{
    return m_enableSubImg;
}

void MultimodalDocParseRequest::SetEnableSubImg(const bool& _enableSubImg)
{
    m_enableSubImg = _enableSubImg;
    m_enableSubImgHasBeenSet = true;
}

bool MultimodalDocParseRequest::EnableSubImgHasBeenSet() const
{
    return m_enableSubImgHasBeenSet;
}

string MultimodalDocParseRequest::GetPageRange() const
{
    return m_pageRange;
}

void MultimodalDocParseRequest::SetPageRange(const string& _pageRange)
{
    m_pageRange = _pageRange;
    m_pageRangeHasBeenSet = true;
}

bool MultimodalDocParseRequest::PageRangeHasBeenSet() const
{
    return m_pageRangeHasBeenSet;
}


