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

#include <tencentcloud/npp/v20190823/model/DescribeCallBackStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Npp::V20190823::Model;
using namespace std;

DescribeCallBackStatusRequest::DescribeCallBackStatusRequest() :
    m_bizAppIdHasBeenSet(false),
    m_callIdHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_dstHasBeenSet(false),
    m_callStatusHasBeenSet(false)
{
}

string DescribeCallBackStatusRequest::ToJsonString() const
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

    if (m_dstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dst";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dst.c_str(), allocator).Move(), allocator);
    }

    if (m_callStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callStatus.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCallBackStatusRequest::GetBizAppId() const
{
    return m_bizAppId;
}

void DescribeCallBackStatusRequest::SetBizAppId(const string& _bizAppId)
{
    m_bizAppId = _bizAppId;
    m_bizAppIdHasBeenSet = true;
}

bool DescribeCallBackStatusRequest::BizAppIdHasBeenSet() const
{
    return m_bizAppIdHasBeenSet;
}

string DescribeCallBackStatusRequest::GetCallId() const
{
    return m_callId;
}

void DescribeCallBackStatusRequest::SetCallId(const string& _callId)
{
    m_callId = _callId;
    m_callIdHasBeenSet = true;
}

bool DescribeCallBackStatusRequest::CallIdHasBeenSet() const
{
    return m_callIdHasBeenSet;
}

string DescribeCallBackStatusRequest::GetSrc() const
{
    return m_src;
}

void DescribeCallBackStatusRequest::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool DescribeCallBackStatusRequest::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string DescribeCallBackStatusRequest::GetDst() const
{
    return m_dst;
}

void DescribeCallBackStatusRequest::SetDst(const string& _dst)
{
    m_dst = _dst;
    m_dstHasBeenSet = true;
}

bool DescribeCallBackStatusRequest::DstHasBeenSet() const
{
    return m_dstHasBeenSet;
}

string DescribeCallBackStatusRequest::GetCallStatus() const
{
    return m_callStatus;
}

void DescribeCallBackStatusRequest::SetCallStatus(const string& _callStatus)
{
    m_callStatus = _callStatus;
    m_callStatusHasBeenSet = true;
}

bool DescribeCallBackStatusRequest::CallStatusHasBeenSet() const
{
    return m_callStatusHasBeenSet;
}


