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

#include <tencentcloud/npp/v20190823/model/DescribeCallBackCdrRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Npp::V20190823::Model;
using namespace std;

DescribeCallBackCdrRequest::DescribeCallBackCdrRequest() :
    m_bizAppIdHasBeenSet(false),
    m_callIdHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_startTimeStampHasBeenSet(false),
    m_endTimeStampHasBeenSet(false)
{
}

string DescribeCallBackCdrRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_callIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTimeStamp.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTimeStamp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCallBackCdrRequest::GetBizAppId() const
{
    return m_bizAppId;
}

void DescribeCallBackCdrRequest::SetBizAppId(const string& _bizAppId)
{
    m_bizAppId = _bizAppId;
    m_bizAppIdHasBeenSet = true;
}

bool DescribeCallBackCdrRequest::BizAppIdHasBeenSet() const
{
    return m_bizAppIdHasBeenSet;
}

string DescribeCallBackCdrRequest::GetCallId() const
{
    return m_callId;
}

void DescribeCallBackCdrRequest::SetCallId(const string& _callId)
{
    m_callId = _callId;
    m_callIdHasBeenSet = true;
}

bool DescribeCallBackCdrRequest::CallIdHasBeenSet() const
{
    return m_callIdHasBeenSet;
}

string DescribeCallBackCdrRequest::GetSrc() const
{
    return m_src;
}

void DescribeCallBackCdrRequest::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool DescribeCallBackCdrRequest::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string DescribeCallBackCdrRequest::GetStartTimeStamp() const
{
    return m_startTimeStamp;
}

void DescribeCallBackCdrRequest::SetStartTimeStamp(const string& _startTimeStamp)
{
    m_startTimeStamp = _startTimeStamp;
    m_startTimeStampHasBeenSet = true;
}

bool DescribeCallBackCdrRequest::StartTimeStampHasBeenSet() const
{
    return m_startTimeStampHasBeenSet;
}

string DescribeCallBackCdrRequest::GetEndTimeStamp() const
{
    return m_endTimeStamp;
}

void DescribeCallBackCdrRequest::SetEndTimeStamp(const string& _endTimeStamp)
{
    m_endTimeStamp = _endTimeStamp;
    m_endTimeStampHasBeenSet = true;
}

bool DescribeCallBackCdrRequest::EndTimeStampHasBeenSet() const
{
    return m_endTimeStampHasBeenSet;
}


