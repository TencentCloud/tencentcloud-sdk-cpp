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

#include <tencentcloud/cvd/v20201104/model/DescribeInstanceLoginMsgRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

DescribeInstanceLoginMsgRequest::DescribeInstanceLoginMsgRequest() :
    m_instanceIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_desktopNameHasBeenSet(false),
    m_forceHasBeenSet(false),
    m_isInternalHasBeenSet(false)
{
}

string DescribeInstanceLoginMsgRequest::ToJsonString() const
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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_desktopNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesktopName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desktopName.c_str(), allocator).Move(), allocator);
    }

    if (m_forceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Force";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_force, allocator);
    }

    if (m_isInternalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInternal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInternal, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceLoginMsgRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstanceLoginMsgRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstanceLoginMsgRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeInstanceLoginMsgRequest::GetUserId() const
{
    return m_userId;
}

void DescribeInstanceLoginMsgRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeInstanceLoginMsgRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeInstanceLoginMsgRequest::GetDesktopName() const
{
    return m_desktopName;
}

void DescribeInstanceLoginMsgRequest::SetDesktopName(const string& _desktopName)
{
    m_desktopName = _desktopName;
    m_desktopNameHasBeenSet = true;
}

bool DescribeInstanceLoginMsgRequest::DesktopNameHasBeenSet() const
{
    return m_desktopNameHasBeenSet;
}

bool DescribeInstanceLoginMsgRequest::GetForce() const
{
    return m_force;
}

void DescribeInstanceLoginMsgRequest::SetForce(const bool& _force)
{
    m_force = _force;
    m_forceHasBeenSet = true;
}

bool DescribeInstanceLoginMsgRequest::ForceHasBeenSet() const
{
    return m_forceHasBeenSet;
}

bool DescribeInstanceLoginMsgRequest::GetIsInternal() const
{
    return m_isInternal;
}

void DescribeInstanceLoginMsgRequest::SetIsInternal(const bool& _isInternal)
{
    m_isInternal = _isInternal;
    m_isInternalHasBeenSet = true;
}

bool DescribeInstanceLoginMsgRequest::IsInternalHasBeenSet() const
{
    return m_isInternalHasBeenSet;
}


