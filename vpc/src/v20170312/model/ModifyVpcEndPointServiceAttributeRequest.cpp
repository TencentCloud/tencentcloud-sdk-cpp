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

#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointServiceAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyVpcEndPointServiceAttributeRequest::ModifyVpcEndPointServiceAttributeRequest() :
    m_endPointServiceIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_endPointServiceNameHasBeenSet(false),
    m_autoAcceptFlagHasBeenSet(false),
    m_serviceInstanceIdHasBeenSet(false),
    m_ipAddressTypeHasBeenSet(false)
{
}

string ModifyVpcEndPointServiceAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_endPointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPointServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPointServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoAcceptFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAcceptFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoAcceptFlag, allocator);
    }

    if (m_serviceInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipAddressType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVpcEndPointServiceAttributeRequest::GetEndPointServiceId() const
{
    return m_endPointServiceId;
}

void ModifyVpcEndPointServiceAttributeRequest::SetEndPointServiceId(const string& _endPointServiceId)
{
    m_endPointServiceId = _endPointServiceId;
    m_endPointServiceIdHasBeenSet = true;
}

bool ModifyVpcEndPointServiceAttributeRequest::EndPointServiceIdHasBeenSet() const
{
    return m_endPointServiceIdHasBeenSet;
}

string ModifyVpcEndPointServiceAttributeRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyVpcEndPointServiceAttributeRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyVpcEndPointServiceAttributeRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifyVpcEndPointServiceAttributeRequest::GetEndPointServiceName() const
{
    return m_endPointServiceName;
}

void ModifyVpcEndPointServiceAttributeRequest::SetEndPointServiceName(const string& _endPointServiceName)
{
    m_endPointServiceName = _endPointServiceName;
    m_endPointServiceNameHasBeenSet = true;
}

bool ModifyVpcEndPointServiceAttributeRequest::EndPointServiceNameHasBeenSet() const
{
    return m_endPointServiceNameHasBeenSet;
}

bool ModifyVpcEndPointServiceAttributeRequest::GetAutoAcceptFlag() const
{
    return m_autoAcceptFlag;
}

void ModifyVpcEndPointServiceAttributeRequest::SetAutoAcceptFlag(const bool& _autoAcceptFlag)
{
    m_autoAcceptFlag = _autoAcceptFlag;
    m_autoAcceptFlagHasBeenSet = true;
}

bool ModifyVpcEndPointServiceAttributeRequest::AutoAcceptFlagHasBeenSet() const
{
    return m_autoAcceptFlagHasBeenSet;
}

string ModifyVpcEndPointServiceAttributeRequest::GetServiceInstanceId() const
{
    return m_serviceInstanceId;
}

void ModifyVpcEndPointServiceAttributeRequest::SetServiceInstanceId(const string& _serviceInstanceId)
{
    m_serviceInstanceId = _serviceInstanceId;
    m_serviceInstanceIdHasBeenSet = true;
}

bool ModifyVpcEndPointServiceAttributeRequest::ServiceInstanceIdHasBeenSet() const
{
    return m_serviceInstanceIdHasBeenSet;
}

string ModifyVpcEndPointServiceAttributeRequest::GetIpAddressType() const
{
    return m_ipAddressType;
}

void ModifyVpcEndPointServiceAttributeRequest::SetIpAddressType(const string& _ipAddressType)
{
    m_ipAddressType = _ipAddressType;
    m_ipAddressTypeHasBeenSet = true;
}

bool ModifyVpcEndPointServiceAttributeRequest::IpAddressTypeHasBeenSet() const
{
    return m_ipAddressTypeHasBeenSet;
}


