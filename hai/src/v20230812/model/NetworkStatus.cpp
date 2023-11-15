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

#include <tencentcloud/hai/v20230812/model/NetworkStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

NetworkStatus::NetworkStatus() :
    m_instanceIdHasBeenSet(false),
    m_addressIpHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_totalTrafficAmountHasBeenSet(false),
    m_remainingTrafficAmountHasBeenSet(false)
{
}

CoreInternalOutcome NetworkStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStatus.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AddressIp") && !value["AddressIp"].IsNull())
    {
        if (!value["AddressIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStatus.AddressIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIp = string(value["AddressIp"].GetString());
        m_addressIpHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStatus.Bandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetUint64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("TotalTrafficAmount") && !value["TotalTrafficAmount"].IsNull())
    {
        if (!value["TotalTrafficAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStatus.TotalTrafficAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalTrafficAmount = value["TotalTrafficAmount"].GetDouble();
        m_totalTrafficAmountHasBeenSet = true;
    }

    if (value.HasMember("RemainingTrafficAmount") && !value["RemainingTrafficAmount"].IsNull())
    {
        if (!value["RemainingTrafficAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStatus.RemainingTrafficAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingTrafficAmount = value["RemainingTrafficAmount"].GetDouble();
        m_remainingTrafficAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressIp.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_totalTrafficAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTrafficAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTrafficAmount, allocator);
    }

    if (m_remainingTrafficAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingTrafficAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingTrafficAmount, allocator);
    }

}


string NetworkStatus::GetInstanceId() const
{
    return m_instanceId;
}

void NetworkStatus::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool NetworkStatus::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string NetworkStatus::GetAddressIp() const
{
    return m_addressIp;
}

void NetworkStatus::SetAddressIp(const string& _addressIp)
{
    m_addressIp = _addressIp;
    m_addressIpHasBeenSet = true;
}

bool NetworkStatus::AddressIpHasBeenSet() const
{
    return m_addressIpHasBeenSet;
}

uint64_t NetworkStatus::GetBandwidth() const
{
    return m_bandwidth;
}

void NetworkStatus::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool NetworkStatus::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

double NetworkStatus::GetTotalTrafficAmount() const
{
    return m_totalTrafficAmount;
}

void NetworkStatus::SetTotalTrafficAmount(const double& _totalTrafficAmount)
{
    m_totalTrafficAmount = _totalTrafficAmount;
    m_totalTrafficAmountHasBeenSet = true;
}

bool NetworkStatus::TotalTrafficAmountHasBeenSet() const
{
    return m_totalTrafficAmountHasBeenSet;
}

double NetworkStatus::GetRemainingTrafficAmount() const
{
    return m_remainingTrafficAmount;
}

void NetworkStatus::SetRemainingTrafficAmount(const double& _remainingTrafficAmount)
{
    m_remainingTrafficAmount = _remainingTrafficAmount;
    m_remainingTrafficAmountHasBeenSet = true;
}

bool NetworkStatus::RemainingTrafficAmountHasBeenSet() const
{
    return m_remainingTrafficAmountHasBeenSet;
}

