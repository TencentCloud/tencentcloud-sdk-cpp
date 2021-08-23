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

#include <tencentcloud/ecm/v20190719/model/InstanceNetworkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

InstanceNetworkInfo::InstanceNetworkInfo() :
    m_addressInfoSetHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_networkInterfaceNameHasBeenSet(false),
    m_primaryHasBeenSet(false)
{
}

CoreInternalOutcome InstanceNetworkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressInfoSet") && !value["AddressInfoSet"].IsNull())
    {
        if (!value["AddressInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceNetworkInfo.AddressInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AddressInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AddressInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_addressInfoSet.push_back(item);
        }
        m_addressInfoSetHasBeenSet = true;
    }

    if (value.HasMember("NetworkInterfaceId") && !value["NetworkInterfaceId"].IsNull())
    {
        if (!value["NetworkInterfaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNetworkInfo.NetworkInterfaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceId = string(value["NetworkInterfaceId"].GetString());
        m_networkInterfaceIdHasBeenSet = true;
    }

    if (value.HasMember("NetworkInterfaceName") && !value["NetworkInterfaceName"].IsNull())
    {
        if (!value["NetworkInterfaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNetworkInfo.NetworkInterfaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceName = string(value["NetworkInterfaceName"].GetString());
        m_networkInterfaceNameHasBeenSet = true;
    }

    if (value.HasMember("Primary") && !value["Primary"].IsNull())
    {
        if (!value["Primary"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNetworkInfo.Primary` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_primary = value["Primary"].GetBool();
        m_primaryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceNetworkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addressInfoSet.begin(); itr != m_addressInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_networkInterfaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInterfaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Primary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_primary, allocator);
    }

}


vector<AddressInfo> InstanceNetworkInfo::GetAddressInfoSet() const
{
    return m_addressInfoSet;
}

void InstanceNetworkInfo::SetAddressInfoSet(const vector<AddressInfo>& _addressInfoSet)
{
    m_addressInfoSet = _addressInfoSet;
    m_addressInfoSetHasBeenSet = true;
}

bool InstanceNetworkInfo::AddressInfoSetHasBeenSet() const
{
    return m_addressInfoSetHasBeenSet;
}

string InstanceNetworkInfo::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void InstanceNetworkInfo::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool InstanceNetworkInfo::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

string InstanceNetworkInfo::GetNetworkInterfaceName() const
{
    return m_networkInterfaceName;
}

void InstanceNetworkInfo::SetNetworkInterfaceName(const string& _networkInterfaceName)
{
    m_networkInterfaceName = _networkInterfaceName;
    m_networkInterfaceNameHasBeenSet = true;
}

bool InstanceNetworkInfo::NetworkInterfaceNameHasBeenSet() const
{
    return m_networkInterfaceNameHasBeenSet;
}

bool InstanceNetworkInfo::GetPrimary() const
{
    return m_primary;
}

void InstanceNetworkInfo::SetPrimary(const bool& _primary)
{
    m_primary = _primary;
    m_primaryHasBeenSet = true;
}

bool InstanceNetworkInfo::PrimaryHasBeenSet() const
{
    return m_primaryHasBeenSet;
}

