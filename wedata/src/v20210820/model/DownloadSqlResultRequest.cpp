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

#include <tencentcloud/wedata/v20210820/model/DownloadSqlResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DownloadSqlResultRequest::DownloadSqlResultRequest() :
    m_detailIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_separatorCharHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string DownloadSqlResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_detailIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_detailId, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_separatorCharHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeparatorChar";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_separatorChar.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DownloadSqlResultRequest::GetDetailId() const
{
    return m_detailId;
}

void DownloadSqlResultRequest::SetDetailId(const uint64_t& _detailId)
{
    m_detailId = _detailId;
    m_detailIdHasBeenSet = true;
}

bool DownloadSqlResultRequest::DetailIdHasBeenSet() const
{
    return m_detailIdHasBeenSet;
}

string DownloadSqlResultRequest::GetFileName() const
{
    return m_fileName;
}

void DownloadSqlResultRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DownloadSqlResultRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string DownloadSqlResultRequest::GetSeparatorChar() const
{
    return m_separatorChar;
}

void DownloadSqlResultRequest::SetSeparatorChar(const string& _separatorChar)
{
    m_separatorChar = _separatorChar;
    m_separatorCharHasBeenSet = true;
}

bool DownloadSqlResultRequest::SeparatorCharHasBeenSet() const
{
    return m_separatorCharHasBeenSet;
}

string DownloadSqlResultRequest::GetProjectId() const
{
    return m_projectId;
}

void DownloadSqlResultRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DownloadSqlResultRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


