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

#include <tencentcloud/teo/v20220901/model/ModifyLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyLoadBalancerRequest::ModifyLoadBalancerRequest() :
    m_zoneIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_originGroupsHasBeenSet(false),
    m_healthCheckerHasBeenSet(false),
    m_steeringPolicyHasBeenSet(false),
    m_failoverPolicyHasBeenSet(false)
{
}

string ModifyLoadBalancerRequest::ToJsonString() const
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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


string ModifyLoadBalancerRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyLoadBalancerRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyLoadBalancerRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyLoadBalancerRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyLoadBalancerRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyLoadBalancerRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyLoadBalancerRequest::GetName() const
{
    return m_name;
}

void ModifyLoadBalancerRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyLoadBalancerRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<OriginGroupInLoadBalancer> ModifyLoadBalancerRequest::GetOriginGroups() const
{
    return m_originGroups;
}

void ModifyLoadBalancerRequest::SetOriginGroups(const vector<OriginGroupInLoadBalancer>& _originGroups)
{
    m_originGroups = _originGroups;
    m_originGroupsHasBeenSet = true;
}

bool ModifyLoadBalancerRequest::OriginGroupsHasBeenSet() const
{
    return m_originGroupsHasBeenSet;
}

HealthChecker ModifyLoadBalancerRequest::GetHealthChecker() const
{
    return m_healthChecker;
}

void ModifyLoadBalancerRequest::SetHealthChecker(const HealthChecker& _healthChecker)
{
    m_healthChecker = _healthChecker;
    m_healthCheckerHasBeenSet = true;
}

bool ModifyLoadBalancerRequest::HealthCheckerHasBeenSet() const
{
    return m_healthCheckerHasBeenSet;
}

string ModifyLoadBalancerRequest::GetSteeringPolicy() const
{
    return m_steeringPolicy;
}

void ModifyLoadBalancerRequest::SetSteeringPolicy(const string& _steeringPolicy)
{
    m_steeringPolicy = _steeringPolicy;
    m_steeringPolicyHasBeenSet = true;
}

bool ModifyLoadBalancerRequest::SteeringPolicyHasBeenSet() const
{
    return m_steeringPolicyHasBeenSet;
}

string ModifyLoadBalancerRequest::GetFailoverPolicy() const
{
    return m_failoverPolicy;
}

void ModifyLoadBalancerRequest::SetFailoverPolicy(const string& _failoverPolicy)
{
    m_failoverPolicy = _failoverPolicy;
    m_failoverPolicyHasBeenSet = true;
}

bool ModifyLoadBalancerRequest::FailoverPolicyHasBeenSet() const
{
    return m_failoverPolicyHasBeenSet;
}


