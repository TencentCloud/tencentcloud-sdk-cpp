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

#include <tencentcloud/wedata/v20210820/model/PreviewDataTableCsvRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

PreviewDataTableCsvRequest::PreviewDataTableCsvRequest() :
    m_projectIdHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_headerLineHasBeenSet(false),
    m_columnDelimiterHasBeenSet(false),
    m_escapeHasBeenSet(false),
    m_quoteHasBeenSet(false)
{
}

string PreviewDataTableCsvRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_headerLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_headerLine, allocator);
    }

    if (m_columnDelimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnDelimiter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_columnDelimiter.c_str(), allocator).Move(), allocator);
    }

    if (m_escapeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Escape";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_escape.c_str(), allocator).Move(), allocator);
    }

    if (m_quoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quote";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quote.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PreviewDataTableCsvRequest::GetProjectId() const
{
    return m_projectId;
}

void PreviewDataTableCsvRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool PreviewDataTableCsvRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string PreviewDataTableCsvRequest::GetBucketName() const
{
    return m_bucketName;
}

void PreviewDataTableCsvRequest::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool PreviewDataTableCsvRequest::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string PreviewDataTableCsvRequest::GetFilePath() const
{
    return m_filePath;
}

void PreviewDataTableCsvRequest::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool PreviewDataTableCsvRequest::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

bool PreviewDataTableCsvRequest::GetHeaderLine() const
{
    return m_headerLine;
}

void PreviewDataTableCsvRequest::SetHeaderLine(const bool& _headerLine)
{
    m_headerLine = _headerLine;
    m_headerLineHasBeenSet = true;
}

bool PreviewDataTableCsvRequest::HeaderLineHasBeenSet() const
{
    return m_headerLineHasBeenSet;
}

string PreviewDataTableCsvRequest::GetColumnDelimiter() const
{
    return m_columnDelimiter;
}

void PreviewDataTableCsvRequest::SetColumnDelimiter(const string& _columnDelimiter)
{
    m_columnDelimiter = _columnDelimiter;
    m_columnDelimiterHasBeenSet = true;
}

bool PreviewDataTableCsvRequest::ColumnDelimiterHasBeenSet() const
{
    return m_columnDelimiterHasBeenSet;
}

string PreviewDataTableCsvRequest::GetEscape() const
{
    return m_escape;
}

void PreviewDataTableCsvRequest::SetEscape(const string& _escape)
{
    m_escape = _escape;
    m_escapeHasBeenSet = true;
}

bool PreviewDataTableCsvRequest::EscapeHasBeenSet() const
{
    return m_escapeHasBeenSet;
}

string PreviewDataTableCsvRequest::GetQuote() const
{
    return m_quote;
}

void PreviewDataTableCsvRequest::SetQuote(const string& _quote)
{
    m_quote = _quote;
    m_quoteHasBeenSet = true;
}

bool PreviewDataTableCsvRequest::QuoteHasBeenSet() const
{
    return m_quoteHasBeenSet;
}


