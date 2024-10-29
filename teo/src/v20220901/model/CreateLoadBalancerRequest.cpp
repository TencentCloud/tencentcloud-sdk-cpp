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

#include <tencentcloud/teo/v20220901/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateLoadBalancerRequest::CreateLoadBalancerRequest() :
    m_zoneIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_originGroupsHasBeenSet(false),
    m_healthCheckerHasBeenSet(false),
    m_steeringPolicyHasBeenSet(false),
    m_failoverPolicyHasBeenSet(false)
{
}

string CreateLoadBalancerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_originGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originGroups.begin(); itr != m_originGroups.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_healthCheckerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthChecker";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthChecker.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_steeringPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SteeringPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_steeringPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_failoverPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailoverPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_failoverPolicy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLoadBalancerRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateLoadBalancerRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateLoadBalancerRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateLoadBalancerRequest::GetName() const
{
    return m_name;
}

void CreateLoadBalancerRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateLoadBalancerRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateLoadBalancerRequest::GetType() const
{
    return m_type;
}

void CreateLoadBalancerRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateLoadBalancerRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<OriginGroupInLoadBalancer> CreateLoadBalancerRequest::GetOriginGroups() const
{
    return m_originGroups;
}

void CreateLoadBalancerRequest::SetOriginGroups(const vector<OriginGroupInLoadBalancer>& _originGroups)
{
    m_originGroups = _originGroups;
    m_originGroupsHasBeenSet = true;
}

bool CreateLoadBalancerRequest::OriginGroupsHasBeenSet() const
{
    return m_originGroupsHasBeenSet;
}

HealthChecker CreateLoadBalancerRequest::GetHealthChecker() const
{
    return m_healthChecker;
}

void CreateLoadBalancerRequest::SetHealthChecker(const HealthChecker& _healthChecker)
{
    m_healthChecker = _healthChecker;
    m_healthCheckerHasBeenSet = true;
}

bool CreateLoadBalancerRequest::HealthCheckerHasBeenSet() const
{
    return m_healthCheckerHasBeenSet;
}

string CreateLoadBalancerRequest::GetSteeringPolicy() const
{
    return m_steeringPolicy;
}

void CreateLoadBalancerRequest::SetSteeringPolicy(const string& _steeringPolicy)
{
    m_steeringPolicy = _steeringPolicy;
    m_steeringPolicyHasBeenSet = true;
}

bool CreateLoadBalancerRequest::SteeringPolicyHasBeenSet() const
{
    return m_steeringPolicyHasBeenSet;
}

string CreateLoadBalancerRequest::GetFailoverPolicy() const
{
    return m_failoverPolicy;
}

void CreateLoadBalancerRequest::SetFailoverPolicy(const string& _failoverPolicy)
{
    m_failoverPolicy = _failoverPolicy;
    m_failoverPolicyHasBeenSet = true;
}

bool CreateLoadBalancerRequest::FailoverPolicyHasBeenSet() const
{
    return m_failoverPolicyHasBeenSet;
}


