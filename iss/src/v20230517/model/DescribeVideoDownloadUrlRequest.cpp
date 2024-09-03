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

#include <tencentcloud/iss/v20230517/model/DescribeVideoDownloadUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeVideoDownloadUrlRequest::DescribeVideoDownloadUrlRequest() :
    m_channelIdHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_isRespActualTimeHasBeenSet(false),
    m_isInternalHasBeenSet(false),
    m_expiresHasBeenSet(false),
    m_isSupportG711HasBeenSet(false)
{
}

string DescribeVideoDownloadUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_isRespActualTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRespActualTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRespActualTime, allocator);
    }

    if (m_isInternalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInternal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInternal, allocator);
    }

    if (m_expiresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expires";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expires, allocator);
    }

    if (m_isSupportG711HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportG711";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSupportG711, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeVideoDownloadUrlRequest::GetChannelId() const
{
    return m_channelId;
}

void DescribeVideoDownloadUrlRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DescribeVideoDownloadUrlRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string DescribeVideoDownloadUrlRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeVideoDownloadUrlRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeVideoDownloadUrlRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeVideoDownloadUrlRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeVideoDownloadUrlRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeVideoDownloadUrlRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeVideoDownloadUrlRequest::GetFileType() const
{
    return m_fileType;
}

void DescribeVideoDownloadUrlRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DescribeVideoDownloadUrlRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

bool DescribeVideoDownloadUrlRequest::GetIsRespActualTime() const
{
    return m_isRespActualTime;
}

void DescribeVideoDownloadUrlRequest::SetIsRespActualTime(const bool& _isRespActualTime)
{
    m_isRespActualTime = _isRespActualTime;
    m_isRespActualTimeHasBeenSet = true;
}

bool DescribeVideoDownloadUrlRequest::IsRespActualTimeHasBeenSet() const
{
    return m_isRespActualTimeHasBeenSet;
}

bool DescribeVideoDownloadUrlRequest::GetIsInternal() const
{
    return m_isInternal;
}

void DescribeVideoDownloadUrlRequest::SetIsInternal(const bool& _isInternal)
{
    m_isInternal = _isInternal;
    m_isInternalHasBeenSet = true;
}

bool DescribeVideoDownloadUrlRequest::IsInternalHasBeenSet() const
{
    return m_isInternalHasBeenSet;
}

int64_t DescribeVideoDownloadUrlRequest::GetExpires() const
{
    return m_expires;
}

void DescribeVideoDownloadUrlRequest::SetExpires(const int64_t& _expires)
{
    m_expires = _expires;
    m_expiresHasBeenSet = true;
}

bool DescribeVideoDownloadUrlRequest::ExpiresHasBeenSet() const
{
    return m_expiresHasBeenSet;
}

bool DescribeVideoDownloadUrlRequest::GetIsSupportG711() const
{
    return m_isSupportG711;
}

void DescribeVideoDownloadUrlRequest::SetIsSupportG711(const bool& _isSupportG711)
{
    m_isSupportG711 = _isSupportG711;
    m_isSupportG711HasBeenSet = true;
}

bool DescribeVideoDownloadUrlRequest::IsSupportG711HasBeenSet() const
{
    return m_isSupportG711HasBeenSet;
}


