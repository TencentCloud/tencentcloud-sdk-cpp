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

#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceNetworkAddressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

ModifyDBInstanceNetworkAddressRequest::ModifyDBInstanceNetworkAddressRequest() :
    m_instanceIdHasBeenSet(false),
    m_oldIpExpiredTimeHasBeenSet(false),
    m_newUniqVpcIdHasBeenSet(false),
    m_newUniqSubnetIdHasBeenSet(false),
    m_networkAddressesHasBeenSet(false)
{
}

string ModifyDBInstanceNetworkAddressRequest::ToJsonString() const
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

    if (m_oldIpExpiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldIpExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_oldIpExpiredTime, allocator);
    }

    if (m_newUniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewUniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newUniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_newUniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewUniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newUniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAddresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_networkAddresses.begin(); itr != m_networkAddresses.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceNetworkAddressRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDBInstanceNetworkAddressRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDBInstanceNetworkAddressRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ModifyDBInstanceNetworkAddressRequest::GetOldIpExpiredTime() const
{
    return m_oldIpExpiredTime;
}

void ModifyDBInstanceNetworkAddressRequest::SetOldIpExpiredTime(const uint64_t& _oldIpExpiredTime)
{
    m_oldIpExpiredTime = _oldIpExpiredTime;
    m_oldIpExpiredTimeHasBeenSet = true;
}

bool ModifyDBInstanceNetworkAddressRequest::OldIpExpiredTimeHasBeenSet() const
{
    return m_oldIpExpiredTimeHasBeenSet;
}

string ModifyDBInstanceNetworkAddressRequest::GetNewUniqVpcId() const
{
    return m_newUniqVpcId;
}

void ModifyDBInstanceNetworkAddressRequest::SetNewUniqVpcId(const string& _newUniqVpcId)
{
    m_newUniqVpcId = _newUniqVpcId;
    m_newUniqVpcIdHasBeenSet = true;
}

bool ModifyDBInstanceNetworkAddressRequest::NewUniqVpcIdHasBeenSet() const
{
    return m_newUniqVpcIdHasBeenSet;
}

string ModifyDBInstanceNetworkAddressRequest::GetNewUniqSubnetId() const
{
    return m_newUniqSubnetId;
}

void ModifyDBInstanceNetworkAddressRequest::SetNewUniqSubnetId(const string& _newUniqSubnetId)
{
    m_newUniqSubnetId = _newUniqSubnetId;
    m_newUniqSubnetIdHasBeenSet = true;
}

bool ModifyDBInstanceNetworkAddressRequest::NewUniqSubnetIdHasBeenSet() const
{
    return m_newUniqSubnetIdHasBeenSet;
}

vector<ModifyNetworkAddress> ModifyDBInstanceNetworkAddressRequest::GetNetworkAddresses() const
{
    return m_networkAddresses;
}

void ModifyDBInstanceNetworkAddressRequest::SetNetworkAddresses(const vector<ModifyNetworkAddress>& _networkAddresses)
{
    m_networkAddresses = _networkAddresses;
    m_networkAddressesHasBeenSet = true;
}

bool ModifyDBInstanceNetworkAddressRequest::NetworkAddressesHasBeenSet() const
{
    return m_networkAddressesHasBeenSet;
}


