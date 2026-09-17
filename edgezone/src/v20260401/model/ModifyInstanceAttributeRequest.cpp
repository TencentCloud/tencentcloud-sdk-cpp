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

#include <tencentcloud/edgezone/v20260401/model/ModifyInstanceAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Edgezone::V20260401::Model;
using namespace std;

ModifyInstanceAttributeRequest::ModifyInstanceAttributeRequest() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_newPublicIpHasBeenSet(false),
    m_ipTypeHasBeenSet(false)
{
}

string ModifyInstanceAttributeRequest::ToJsonString() const
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

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_newPublicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewPublicIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newPublicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_ipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceAttributeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceAttributeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceAttributeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyInstanceAttributeRequest::GetInstanceName() const
{
    return m_instanceName;
}

void ModifyInstanceAttributeRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ModifyInstanceAttributeRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ModifyInstanceAttributeRequest::GetNewPublicIp() const
{
    return m_newPublicIp;
}

void ModifyInstanceAttributeRequest::SetNewPublicIp(const string& _newPublicIp)
{
    m_newPublicIp = _newPublicIp;
    m_newPublicIpHasBeenSet = true;
}

bool ModifyInstanceAttributeRequest::NewPublicIpHasBeenSet() const
{
    return m_newPublicIpHasBeenSet;
}

string ModifyInstanceAttributeRequest::GetIpType() const
{
    return m_ipType;
}

void ModifyInstanceAttributeRequest::SetIpType(const string& _ipType)
{
    m_ipType = _ipType;
    m_ipTypeHasBeenSet = true;
}

bool ModifyInstanceAttributeRequest::IpTypeHasBeenSet() const
{
    return m_ipTypeHasBeenSet;
}


