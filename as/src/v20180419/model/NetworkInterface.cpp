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

#include <tencentcloud/as/v20180419/model/NetworkInterface.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

NetworkInterface::NetworkInterface() :
    m_interfaceTypeHasBeenSet(false),
    m_privateIpv4AddressCountHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_isKeepENIHasBeenSet(false)
{
}

CoreInternalOutcome NetworkInterface::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InterfaceType") && !value["InterfaceType"].IsNull())
    {
        if (!value["InterfaceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.InterfaceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interfaceType = string(value["InterfaceType"].GetString());
        m_interfaceTypeHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpv4AddressCount") && !value["PrivateIpv4AddressCount"].IsNull())
    {
        if (!value["PrivateIpv4AddressCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.PrivateIpv4AddressCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpv4AddressCount = value["PrivateIpv4AddressCount"].GetInt64();
        m_privateIpv4AddressCountHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("IsKeepENI") && !value["IsKeepENI"].IsNull())
    {
        if (!value["IsKeepENI"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.IsKeepENI` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isKeepENI = value["IsKeepENI"].GetBool();
        m_isKeepENIHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkInterface::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_interfaceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterfaceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interfaceType.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpv4AddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpv4AddressCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privateIpv4AddressCount, allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isKeepENIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKeepENI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isKeepENI, allocator);
    }

}


string NetworkInterface::GetInterfaceType() const
{
    return m_interfaceType;
}

void NetworkInterface::SetInterfaceType(const string& _interfaceType)
{
    m_interfaceType = _interfaceType;
    m_interfaceTypeHasBeenSet = true;
}

bool NetworkInterface::InterfaceTypeHasBeenSet() const
{
    return m_interfaceTypeHasBeenSet;
}

int64_t NetworkInterface::GetPrivateIpv4AddressCount() const
{
    return m_privateIpv4AddressCount;
}

void NetworkInterface::SetPrivateIpv4AddressCount(const int64_t& _privateIpv4AddressCount)
{
    m_privateIpv4AddressCount = _privateIpv4AddressCount;
    m_privateIpv4AddressCountHasBeenSet = true;
}

bool NetworkInterface::PrivateIpv4AddressCountHasBeenSet() const
{
    return m_privateIpv4AddressCountHasBeenSet;
}

vector<string> NetworkInterface::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void NetworkInterface::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool NetworkInterface::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

bool NetworkInterface::GetIsKeepENI() const
{
    return m_isKeepENI;
}

void NetworkInterface::SetIsKeepENI(const bool& _isKeepENI)
{
    m_isKeepENI = _isKeepENI;
    m_isKeepENIHasBeenSet = true;
}

bool NetworkInterface::IsKeepENIHasBeenSet() const
{
    return m_isKeepENIHasBeenSet;
}

