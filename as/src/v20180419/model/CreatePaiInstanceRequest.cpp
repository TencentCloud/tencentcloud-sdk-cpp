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

#include <tencentcloud/as/v20180419/model/CreatePaiInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

CreatePaiInstanceRequest::CreatePaiInstanceRequest() :
    m_domainNameHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_initScriptHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false)
{
}

string CreatePaiInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_internetAccessibleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_initScriptHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InitScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_initScript.c_str(), allocator).Move(), allocator);
    }

    if (m_zonesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceTypes.begin(); itr != m_instanceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_loginSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePaiInstanceRequest::GetDomainName() const
{
    return m_domainName;
}

void CreatePaiInstanceRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool CreatePaiInstanceRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

InternetAccessible CreatePaiInstanceRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void CreatePaiInstanceRequest::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool CreatePaiInstanceRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

string CreatePaiInstanceRequest::GetInitScript() const
{
    return m_initScript;
}

void CreatePaiInstanceRequest::SetInitScript(const string& _initScript)
{
    m_initScript = _initScript;
    m_initScriptHasBeenSet = true;
}

bool CreatePaiInstanceRequest::InitScriptHasBeenSet() const
{
    return m_initScriptHasBeenSet;
}

vector<string> CreatePaiInstanceRequest::GetZones() const
{
    return m_zones;
}

void CreatePaiInstanceRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CreatePaiInstanceRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

string CreatePaiInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreatePaiInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreatePaiInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> CreatePaiInstanceRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void CreatePaiInstanceRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool CreatePaiInstanceRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string CreatePaiInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreatePaiInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreatePaiInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<string> CreatePaiInstanceRequest::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void CreatePaiInstanceRequest::SetInstanceTypes(const vector<string>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool CreatePaiInstanceRequest::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

LoginSettings CreatePaiInstanceRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void CreatePaiInstanceRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool CreatePaiInstanceRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

string CreatePaiInstanceRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreatePaiInstanceRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreatePaiInstanceRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

InstanceChargePrepaid CreatePaiInstanceRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void CreatePaiInstanceRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool CreatePaiInstanceRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}


