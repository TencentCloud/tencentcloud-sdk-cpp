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

#include <tencentcloud/live/v20180801/model/DescribeTimeShiftRecordDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeTimeShiftRecordDetailRequest::DescribeTimeShiftRecordDetailRequest() :
    m_domainHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_domainGroupHasBeenSet(false),
    m_transCodeIdHasBeenSet(false)
{
}

string DescribeTimeShiftRecordDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_domainGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_transCodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransCodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transCodeId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTimeShiftRecordDetailRequest::GetDomain() const
{
    return m_domain;
}

void DescribeTimeShiftRecordDetailRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeTimeShiftRecordDetailRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeTimeShiftRecordDetailRequest::GetAppName() const
{
    return m_appName;
}

void DescribeTimeShiftRecordDetailRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DescribeTimeShiftRecordDetailRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DescribeTimeShiftRecordDetailRequest::GetStreamName() const
{
    return m_streamName;
}

void DescribeTimeShiftRecordDetailRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool DescribeTimeShiftRecordDetailRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

int64_t DescribeTimeShiftRecordDetailRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTimeShiftRecordDetailRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTimeShiftRecordDetailRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTimeShiftRecordDetailRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTimeShiftRecordDetailRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTimeShiftRecordDetailRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTimeShiftRecordDetailRequest::GetDomainGroup() const
{
    return m_domainGroup;
}

void DescribeTimeShiftRecordDetailRequest::SetDomainGroup(const string& _domainGroup)
{
    m_domainGroup = _domainGroup;
    m_domainGroupHasBeenSet = true;
}

bool DescribeTimeShiftRecordDetailRequest::DomainGroupHasBeenSet() const
{
    return m_domainGroupHasBeenSet;
}

uint64_t DescribeTimeShiftRecordDetailRequest::GetTransCodeId() const
{
    return m_transCodeId;
}

void DescribeTimeShiftRecordDetailRequest::SetTransCodeId(const uint64_t& _transCodeId)
{
    m_transCodeId = _transCodeId;
    m_transCodeIdHasBeenSet = true;
}

bool DescribeTimeShiftRecordDetailRequest::TransCodeIdHasBeenSet() const
{
    return m_transCodeIdHasBeenSet;
}


