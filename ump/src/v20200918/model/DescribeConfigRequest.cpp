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

#include <tencentcloud/ump/v20200918/model/DescribeConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

DescribeConfigRequest::DescribeConfigRequest() :
    m_sessionIdHasBeenSet(false),
    m_cameraSignHasBeenSet(false),
    m_cameraAppIdHasBeenSet(false),
    m_cameraTimestampHasBeenSet(false),
    m_serverMacHasBeenSet(false),
    m_groupCodeHasBeenSet(false),
    m_mallIdHasBeenSet(false)
{
}

string DescribeConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_cameraSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraSign";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cameraSign.c_str(), allocator).Move(), allocator);
    }

    if (m_cameraAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cameraAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_cameraTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cameraTimestamp, allocator);
    }

    if (m_serverMacHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerMac";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverMac.c_str(), allocator).Move(), allocator);
    }

    if (m_groupCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupCode.c_str(), allocator).Move(), allocator);
    }

    if (m_mallIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MallId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mallId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeConfigRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeConfigRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeConfigRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string DescribeConfigRequest::GetCameraSign() const
{
    return m_cameraSign;
}

void DescribeConfigRequest::SetCameraSign(const string& _cameraSign)
{
    m_cameraSign = _cameraSign;
    m_cameraSignHasBeenSet = true;
}

bool DescribeConfigRequest::CameraSignHasBeenSet() const
{
    return m_cameraSignHasBeenSet;
}

string DescribeConfigRequest::GetCameraAppId() const
{
    return m_cameraAppId;
}

void DescribeConfigRequest::SetCameraAppId(const string& _cameraAppId)
{
    m_cameraAppId = _cameraAppId;
    m_cameraAppIdHasBeenSet = true;
}

bool DescribeConfigRequest::CameraAppIdHasBeenSet() const
{
    return m_cameraAppIdHasBeenSet;
}

int64_t DescribeConfigRequest::GetCameraTimestamp() const
{
    return m_cameraTimestamp;
}

void DescribeConfigRequest::SetCameraTimestamp(const int64_t& _cameraTimestamp)
{
    m_cameraTimestamp = _cameraTimestamp;
    m_cameraTimestampHasBeenSet = true;
}

bool DescribeConfigRequest::CameraTimestampHasBeenSet() const
{
    return m_cameraTimestampHasBeenSet;
}

string DescribeConfigRequest::GetServerMac() const
{
    return m_serverMac;
}

void DescribeConfigRequest::SetServerMac(const string& _serverMac)
{
    m_serverMac = _serverMac;
    m_serverMacHasBeenSet = true;
}

bool DescribeConfigRequest::ServerMacHasBeenSet() const
{
    return m_serverMacHasBeenSet;
}

string DescribeConfigRequest::GetGroupCode() const
{
    return m_groupCode;
}

void DescribeConfigRequest::SetGroupCode(const string& _groupCode)
{
    m_groupCode = _groupCode;
    m_groupCodeHasBeenSet = true;
}

bool DescribeConfigRequest::GroupCodeHasBeenSet() const
{
    return m_groupCodeHasBeenSet;
}

uint64_t DescribeConfigRequest::GetMallId() const
{
    return m_mallId;
}

void DescribeConfigRequest::SetMallId(const uint64_t& _mallId)
{
    m_mallId = _mallId;
    m_mallIdHasBeenSet = true;
}

bool DescribeConfigRequest::MallIdHasBeenSet() const
{
    return m_mallIdHasBeenSet;
}


