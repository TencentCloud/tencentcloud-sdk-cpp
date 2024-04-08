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

#include <tencentcloud/ccc/v20200210/model/DescribeIvrAudioListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeIvrAudioListRequest::DescribeIvrAudioListRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_customFileNameHasBeenSet(false),
    m_audioFileNameHasBeenSet(false),
    m_fileIdHasBeenSet(false)
{
}

string DescribeIvrAudioListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_customFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomFileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customFileName.begin(); itr != m_customFileName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_audioFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_audioFileName.begin(); itr != m_audioFileName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileId.begin(); itr != m_fileId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeIvrAudioListRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeIvrAudioListRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeIvrAudioListRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t DescribeIvrAudioListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeIvrAudioListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeIvrAudioListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeIvrAudioListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeIvrAudioListRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeIvrAudioListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

vector<string> DescribeIvrAudioListRequest::GetCustomFileName() const
{
    return m_customFileName;
}

void DescribeIvrAudioListRequest::SetCustomFileName(const vector<string>& _customFileName)
{
    m_customFileName = _customFileName;
    m_customFileNameHasBeenSet = true;
}

bool DescribeIvrAudioListRequest::CustomFileNameHasBeenSet() const
{
    return m_customFileNameHasBeenSet;
}

vector<string> DescribeIvrAudioListRequest::GetAudioFileName() const
{
    return m_audioFileName;
}

void DescribeIvrAudioListRequest::SetAudioFileName(const vector<string>& _audioFileName)
{
    m_audioFileName = _audioFileName;
    m_audioFileNameHasBeenSet = true;
}

bool DescribeIvrAudioListRequest::AudioFileNameHasBeenSet() const
{
    return m_audioFileNameHasBeenSet;
}

vector<uint64_t> DescribeIvrAudioListRequest::GetFileId() const
{
    return m_fileId;
}

void DescribeIvrAudioListRequest::SetFileId(const vector<uint64_t>& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool DescribeIvrAudioListRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}


