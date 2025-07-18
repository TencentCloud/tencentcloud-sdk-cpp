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

#include <tencentcloud/cpdp/v20190820/model/UploadTaxListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

UploadTaxListRequest::UploadTaxListRequest() :
    m_channelHasBeenSet(false),
    m_beginMonthHasBeenSet(false),
    m_endMonthHasBeenSet(false),
    m_fileUrlHasBeenSet(false)
{
}

string UploadTaxListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channel, allocator);
    }

    if (m_beginMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginMonth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_endMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndMonth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t UploadTaxListRequest::GetChannel() const
{
    return m_channel;
}

void UploadTaxListRequest::SetChannel(const int64_t& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool UploadTaxListRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string UploadTaxListRequest::GetBeginMonth() const
{
    return m_beginMonth;
}

void UploadTaxListRequest::SetBeginMonth(const string& _beginMonth)
{
    m_beginMonth = _beginMonth;
    m_beginMonthHasBeenSet = true;
}

bool UploadTaxListRequest::BeginMonthHasBeenSet() const
{
    return m_beginMonthHasBeenSet;
}

string UploadTaxListRequest::GetEndMonth() const
{
    return m_endMonth;
}

void UploadTaxListRequest::SetEndMonth(const string& _endMonth)
{
    m_endMonth = _endMonth;
    m_endMonthHasBeenSet = true;
}

bool UploadTaxListRequest::EndMonthHasBeenSet() const
{
    return m_endMonthHasBeenSet;
}

string UploadTaxListRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void UploadTaxListRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool UploadTaxListRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}


