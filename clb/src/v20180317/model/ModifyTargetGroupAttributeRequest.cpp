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

#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyTargetGroupAttributeRequest::ModifyTargetGroupAttributeRequest() :
    m_targetGroupIdHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_keepaliveEnableHasBeenSet(false),
    m_sessionExpireTimeHasBeenSet(false)
{
}

string ModifyTargetGroupAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_weight, allocator);
    }

    if (m_keepaliveEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepaliveEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keepaliveEnable, allocator);
    }

    if (m_sessionExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionExpireTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTargetGroupAttributeRequest::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void ModifyTargetGroupAttributeRequest::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

string ModifyTargetGroupAttributeRequest::GetTargetGroupName() const
{
    return m_targetGroupName;
}

void ModifyTargetGroupAttributeRequest::SetTargetGroupName(const string& _targetGroupName)
{
    m_targetGroupName = _targetGroupName;
    m_targetGroupNameHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::TargetGroupNameHasBeenSet() const
{
    return m_targetGroupNameHasBeenSet;
}

uint64_t ModifyTargetGroupAttributeRequest::GetPort() const
{
    return m_port;
}

void ModifyTargetGroupAttributeRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t ModifyTargetGroupAttributeRequest::GetWeight() const
{
    return m_weight;
}

void ModifyTargetGroupAttributeRequest::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

bool ModifyTargetGroupAttributeRequest::GetKeepaliveEnable() const
{
    return m_keepaliveEnable;
}

void ModifyTargetGroupAttributeRequest::SetKeepaliveEnable(const bool& _keepaliveEnable)
{
    m_keepaliveEnable = _keepaliveEnable;
    m_keepaliveEnableHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::KeepaliveEnableHasBeenSet() const
{
    return m_keepaliveEnableHasBeenSet;
}

uint64_t ModifyTargetGroupAttributeRequest::GetSessionExpireTime() const
{
    return m_sessionExpireTime;
}

void ModifyTargetGroupAttributeRequest::SetSessionExpireTime(const uint64_t& _sessionExpireTime)
{
    m_sessionExpireTime = _sessionExpireTime;
    m_sessionExpireTimeHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::SessionExpireTimeHasBeenSet() const
{
    return m_sessionExpireTimeHasBeenSet;
}


