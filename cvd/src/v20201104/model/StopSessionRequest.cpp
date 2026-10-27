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

#include <tencentcloud/cvd/v20201104/model/StopSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

StopSessionRequest::StopSessionRequest() :
    m_instanceRegionHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_isDisconnectHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

string StopSessionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_isDisconnectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDisconnect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDisconnect, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StopSessionRequest::GetInstanceRegion() const
{
    return m_instanceRegion;
}

void StopSessionRequest::SetInstanceRegion(const string& _instanceRegion)
{
    m_instanceRegion = _instanceRegion;
    m_instanceRegionHasBeenSet = true;
}

bool StopSessionRequest::InstanceRegionHasBeenSet() const
{
    return m_instanceRegionHasBeenSet;
}

string StopSessionRequest::GetHostName() const
{
    return m_hostName;
}

void StopSessionRequest::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool StopSessionRequest::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

bool StopSessionRequest::GetIsDisconnect() const
{
    return m_isDisconnect;
}

void StopSessionRequest::SetIsDisconnect(const bool& _isDisconnect)
{
    m_isDisconnect = _isDisconnect;
    m_isDisconnectHasBeenSet = true;
}

bool StopSessionRequest::IsDisconnectHasBeenSet() const
{
    return m_isDisconnectHasBeenSet;
}

string StopSessionRequest::GetUserId() const
{
    return m_userId;
}

void StopSessionRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool StopSessionRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}


