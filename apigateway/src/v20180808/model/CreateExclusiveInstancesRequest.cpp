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

#include <tencentcloud/apigateway/v20180808/model/CreateExclusiveInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

CreateExclusiveInstancesRequest::CreateExclusiveInstancesRequest() :
    m_zonesHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false)
{
}

string CreateExclusiveInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_vpcConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceDescription.c_str(), allocator).Move(), allocator);
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

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoRenewFlag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateExclusiveInstancesRequest::GetZones() const
{
    return m_zones;
}

void CreateExclusiveInstancesRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CreateExclusiveInstancesRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

string CreateExclusiveInstancesRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateExclusiveInstancesRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateExclusiveInstancesRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

InstanceNetworkConfig CreateExclusiveInstancesRequest::GetNetworkConfig() const
{
    return m_networkConfig;
}

void CreateExclusiveInstancesRequest::SetNetworkConfig(const InstanceNetworkConfig& _networkConfig)
{
    m_networkConfig = _networkConfig;
    m_networkConfigHasBeenSet = true;
}

bool CreateExclusiveInstancesRequest::NetworkConfigHasBeenSet() const
{
    return m_networkConfigHasBeenSet;
}

VpcConfig CreateExclusiveInstancesRequest::GetVpcConfig() const
{
    return m_vpcConfig;
}

void CreateExclusiveInstancesRequest::SetVpcConfig(const VpcConfig& _vpcConfig)
{
    m_vpcConfig = _vpcConfig;
    m_vpcConfigHasBeenSet = true;
}

bool CreateExclusiveInstancesRequest::VpcConfigHasBeenSet() const
{
    return m_vpcConfigHasBeenSet;
}

string CreateExclusiveInstancesRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateExclusiveInstancesRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateExclusiveInstancesRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CreateExclusiveInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateExclusiveInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateExclusiveInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreateExclusiveInstancesRequest::GetInstanceDescription() const
{
    return m_instanceDescription;
}

void CreateExclusiveInstancesRequest::SetInstanceDescription(const string& _instanceDescription)
{
    m_instanceDescription = _instanceDescription;
    m_instanceDescriptionHasBeenSet = true;
}

bool CreateExclusiveInstancesRequest::InstanceDescriptionHasBeenSet() const
{
    return m_instanceDescriptionHasBeenSet;
}

vector<Tag> CreateExclusiveInstancesRequest::GetTags() const
{
    return m_tags;
}

void CreateExclusiveInstancesRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateExclusiveInstancesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t CreateExclusiveInstancesRequest::GetPeriod() const
{
    return m_period;
}

void CreateExclusiveInstancesRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateExclusiveInstancesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CreateExclusiveInstancesRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateExclusiveInstancesRequest::SetAutoRenewFlag(const string& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateExclusiveInstancesRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}


