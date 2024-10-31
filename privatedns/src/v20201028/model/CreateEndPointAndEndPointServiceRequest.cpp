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

#include <tencentcloud/privatedns/v20201028/model/CreateEndPointAndEndPointServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

CreateEndPointAndEndPointServiceRequest::CreateEndPointAndEndPointServiceRequest() :
    m_vpcIdHasBeenSet(false),
    m_autoAcceptFlagHasBeenSet(false),
    m_serviceInstanceIdHasBeenSet(false),
    m_endPointNameHasBeenSet(false),
    m_endPointRegionHasBeenSet(false),
    m_endPointServiceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_ipNumHasBeenSet(false)
{
}

string CreateEndPointAndEndPointServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
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

    if (m_endPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPointRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPointServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_ipNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEndPointAndEndPointServiceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateEndPointAndEndPointServiceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateEndPointAndEndPointServiceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

bool CreateEndPointAndEndPointServiceRequest::GetAutoAcceptFlag() const
{
    return m_autoAcceptFlag;
}

void CreateEndPointAndEndPointServiceRequest::SetAutoAcceptFlag(const bool& _autoAcceptFlag)
{
    m_autoAcceptFlag = _autoAcceptFlag;
    m_autoAcceptFlagHasBeenSet = true;
}

bool CreateEndPointAndEndPointServiceRequest::AutoAcceptFlagHasBeenSet() const
{
    return m_autoAcceptFlagHasBeenSet;
}

string CreateEndPointAndEndPointServiceRequest::GetServiceInstanceId() const
{
    return m_serviceInstanceId;
}

void CreateEndPointAndEndPointServiceRequest::SetServiceInstanceId(const string& _serviceInstanceId)
{
    m_serviceInstanceId = _serviceInstanceId;
    m_serviceInstanceIdHasBeenSet = true;
}

bool CreateEndPointAndEndPointServiceRequest::ServiceInstanceIdHasBeenSet() const
{
    return m_serviceInstanceIdHasBeenSet;
}

string CreateEndPointAndEndPointServiceRequest::GetEndPointName() const
{
    return m_endPointName;
}

void CreateEndPointAndEndPointServiceRequest::SetEndPointName(const string& _endPointName)
{
    m_endPointName = _endPointName;
    m_endPointNameHasBeenSet = true;
}

bool CreateEndPointAndEndPointServiceRequest::EndPointNameHasBeenSet() const
{
    return m_endPointNameHasBeenSet;
}

string CreateEndPointAndEndPointServiceRequest::GetEndPointRegion() const
{
    return m_endPointRegion;
}

void CreateEndPointAndEndPointServiceRequest::SetEndPointRegion(const string& _endPointRegion)
{
    m_endPointRegion = _endPointRegion;
    m_endPointRegionHasBeenSet = true;
}

bool CreateEndPointAndEndPointServiceRequest::EndPointRegionHasBeenSet() const
{
    return m_endPointRegionHasBeenSet;
}

string CreateEndPointAndEndPointServiceRequest::GetEndPointServiceName() const
{
    return m_endPointServiceName;
}

void CreateEndPointAndEndPointServiceRequest::SetEndPointServiceName(const string& _endPointServiceName)
{
    m_endPointServiceName = _endPointServiceName;
    m_endPointServiceNameHasBeenSet = true;
}

bool CreateEndPointAndEndPointServiceRequest::EndPointServiceNameHasBeenSet() const
{
    return m_endPointServiceNameHasBeenSet;
}

string CreateEndPointAndEndPointServiceRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateEndPointAndEndPointServiceRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateEndPointAndEndPointServiceRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

int64_t CreateEndPointAndEndPointServiceRequest::GetIpNum() const
{
    return m_ipNum;
}

void CreateEndPointAndEndPointServiceRequest::SetIpNum(const int64_t& _ipNum)
{
    m_ipNum = _ipNum;
    m_ipNumHasBeenSet = true;
}

bool CreateEndPointAndEndPointServiceRequest::IpNumHasBeenSet() const
{
    return m_ipNumHasBeenSet;
}


