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

#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeInstanceLogRequest::DescribeInstanceLogRequest() :
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_originFileNameHasBeenSet(false)
{
}

string DescribeInstanceLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_brokerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brokerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_originFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginFileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originFileName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceLogRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeInstanceLogRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeInstanceLogRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeInstanceLogRequest::GetCurRunDate() const
{
    return m_curRunDate;
}

void DescribeInstanceLogRequest::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool DescribeInstanceLogRequest::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string DescribeInstanceLogRequest::GetBrokerIp() const
{
    return m_brokerIp;
}

void DescribeInstanceLogRequest::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool DescribeInstanceLogRequest::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string DescribeInstanceLogRequest::GetOriginFileName() const
{
    return m_originFileName;
}

void DescribeInstanceLogRequest::SetOriginFileName(const string& _originFileName)
{
    m_originFileName = _originFileName;
    m_originFileNameHasBeenSet = true;
}

bool DescribeInstanceLogRequest::OriginFileNameHasBeenSet() const
{
    return m_originFileNameHasBeenSet;
}


