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

#include <tencentcloud/essbasic/v20201222/model/UploadFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

UploadFilesRequest::UploadFilesRequest() :
    m_callerHasBeenSet(false),
    m_businessTypeHasBeenSet(false),
    m_fileInfosHasBeenSet(false),
    m_fileUrlsHasBeenSet(false),
    m_coverRectHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_customIdsHasBeenSet(false)
{
}

string UploadFilesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_businessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileInfos.begin(); itr != m_fileInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_fileUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileUrls.begin(); itr != m_fileUrls.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_coverRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverRect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_coverRect, allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_customIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customIds.begin(); itr != m_customIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller UploadFilesRequest::GetCaller() const
{
    return m_caller;
}

void UploadFilesRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool UploadFilesRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string UploadFilesRequest::GetBusinessType() const
{
    return m_businessType;
}

void UploadFilesRequest::SetBusinessType(const string& _businessType)
{
    m_businessType = _businessType;
    m_businessTypeHasBeenSet = true;
}

bool UploadFilesRequest::BusinessTypeHasBeenSet() const
{
    return m_businessTypeHasBeenSet;
}

vector<UploadFile> UploadFilesRequest::GetFileInfos() const
{
    return m_fileInfos;
}

void UploadFilesRequest::SetFileInfos(const vector<UploadFile>& _fileInfos)
{
    m_fileInfos = _fileInfos;
    m_fileInfosHasBeenSet = true;
}

bool UploadFilesRequest::FileInfosHasBeenSet() const
{
    return m_fileInfosHasBeenSet;
}

vector<string> UploadFilesRequest::GetFileUrls() const
{
    return m_fileUrls;
}

void UploadFilesRequest::SetFileUrls(const vector<string>& _fileUrls)
{
    m_fileUrls = _fileUrls;
    m_fileUrlsHasBeenSet = true;
}

bool UploadFilesRequest::FileUrlsHasBeenSet() const
{
    return m_fileUrlsHasBeenSet;
}

bool UploadFilesRequest::GetCoverRect() const
{
    return m_coverRect;
}

void UploadFilesRequest::SetCoverRect(const bool& _coverRect)
{
    m_coverRect = _coverRect;
    m_coverRectHasBeenSet = true;
}

bool UploadFilesRequest::CoverRectHasBeenSet() const
{
    return m_coverRectHasBeenSet;
}

string UploadFilesRequest::GetFileType() const
{
    return m_fileType;
}

void UploadFilesRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool UploadFilesRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

vector<string> UploadFilesRequest::GetCustomIds() const
{
    return m_customIds;
}

void UploadFilesRequest::SetCustomIds(const vector<string>& _customIds)
{
    m_customIds = _customIds;
    m_customIdsHasBeenSet = true;
}

bool UploadFilesRequest::CustomIdsHasBeenSet() const
{
    return m_customIdsHasBeenSet;
}


