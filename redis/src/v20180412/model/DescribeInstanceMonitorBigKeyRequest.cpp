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

#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeInstanceMonitorBigKeyRequest::DescribeInstanceMonitorBigKeyRequest() :
    m_instanceIdHasBeenSet(false),
    m_reqTypeHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

string DescribeInstanceMonitorBigKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_reqTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reqType, allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceMonitorBigKeyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstanceMonitorBigKeyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstanceMonitorBigKeyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeInstanceMonitorBigKeyRequest::GetReqType() const
{
    return m_reqType;
}

void DescribeInstanceMonitorBigKeyRequest::SetReqType(const int64_t& _reqType)
{
    m_reqType = _reqType;
    m_reqTypeHasBeenSet = true;
}

bool DescribeInstanceMonitorBigKeyRequest::ReqTypeHasBeenSet() const
{
    return m_reqTypeHasBeenSet;
}

string DescribeInstanceMonitorBigKeyRequest::GetDate() const
{
    return m_date;
}

void DescribeInstanceMonitorBigKeyRequest::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DescribeInstanceMonitorBigKeyRequest::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}


