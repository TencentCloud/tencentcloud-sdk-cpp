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

#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateVpcEndPointServiceRequest::CreateVpcEndPointServiceRequest() :
    m_vpcIdHasBeenSet(false),
    m_endPointServiceNameHasBeenSet(false),
    m_autoAcceptFlagHasBeenSet(false),
    m_serviceInstanceIdHasBeenSet(false),
    m_isPassServiceHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ipAddressTypeHasBeenSet(false)
{
}

string CreateVpcEndPointServiceRequest::ToJsonString() const
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

    if (m_isPassServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPassService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPassService, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string CreateVpcEndPointServiceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateVpcEndPointServiceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateVpcEndPointServiceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateVpcEndPointServiceRequest::GetEndPointServiceName() const
{
    return m_endPointServiceName;
}

void CreateVpcEndPointServiceRequest::SetEndPointServiceName(const string& _endPointServiceName)
{
    m_endPointServiceName = _endPointServiceName;
    m_endPointServiceNameHasBeenSet = true;
}

bool CreateVpcEndPointServiceRequest::EndPointServiceNameHasBeenSet() const
{
    return m_endPointServiceNameHasBeenSet;
}

bool CreateVpcEndPointServiceRequest::GetAutoAcceptFlag() const
{
    return m_autoAcceptFlag;
}

void CreateVpcEndPointServiceRequest::SetAutoAcceptFlag(const bool& _autoAcceptFlag)
{
    m_autoAcceptFlag = _autoAcceptFlag;
    m_autoAcceptFlagHasBeenSet = true;
}

bool CreateVpcEndPointServiceRequest::AutoAcceptFlagHasBeenSet() const
{
    return m_autoAcceptFlagHasBeenSet;
}

string CreateVpcEndPointServiceRequest::GetServiceInstanceId() const
{
    return m_serviceInstanceId;
}

void CreateVpcEndPointServiceRequest::SetServiceInstanceId(const string& _serviceInstanceId)
{
    m_serviceInstanceId = _serviceInstanceId;
    m_serviceInstanceIdHasBeenSet = true;
}

bool CreateVpcEndPointServiceRequest::ServiceInstanceIdHasBeenSet() const
{
    return m_serviceInstanceIdHasBeenSet;
}

bool CreateVpcEndPointServiceRequest::GetIsPassService() const
{
    return m_isPassService;
}

void CreateVpcEndPointServiceRequest::SetIsPassService(const bool& _isPassService)
{
    m_isPassService = _isPassService;
    m_isPassServiceHasBeenSet = true;
}

bool CreateVpcEndPointServiceRequest::IsPassServiceHasBeenSet() const
{
    return m_isPassServiceHasBeenSet;
}

string CreateVpcEndPointServiceRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateVpcEndPointServiceRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateVpcEndPointServiceRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

vector<Tag> CreateVpcEndPointServiceRequest::GetTags() const
{
    return m_tags;
}

void CreateVpcEndPointServiceRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateVpcEndPointServiceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateVpcEndPointServiceRequest::GetIpAddressType() const
{
    return m_ipAddressType;
}

void CreateVpcEndPointServiceRequest::SetIpAddressType(const string& _ipAddressType)
{
    m_ipAddressType = _ipAddressType;
    m_ipAddressTypeHasBeenSet = true;
}

bool CreateVpcEndPointServiceRequest::IpAddressTypeHasBeenSet() const
{
    return m_ipAddressTypeHasBeenSet;
}


