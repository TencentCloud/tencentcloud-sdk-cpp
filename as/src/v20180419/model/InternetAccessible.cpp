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

#include <tencentcloud/as/v20180419/model/InternetAccessible.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

InternetAccessible::InternetAccessible() :
    m_internetChargeTypeHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_publicIpAssignedHasBeenSet(false),
    m_bandwidthPackageIdHasBeenSet(false),
    m_internetServiceProviderHasBeenSet(false),
    m_iPv4AddressTypeHasBeenSet(false),
    m_antiDDoSPackageIdHasBeenSet(false),
    m_isKeepEIPHasBeenSet(false)
{
}

CoreInternalOutcome InternetAccessible::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InternetChargeType") && !value["InternetChargeType"].IsNull())
    {
        if (!value["InternetChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.InternetChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetChargeType = string(value["InternetChargeType"].GetString());
        m_internetChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.InternetMaxBandwidthOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetUint64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAssigned") && !value["PublicIpAssigned"].IsNull())
    {
        if (!value["PublicIpAssigned"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.PublicIpAssigned` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAssigned = value["PublicIpAssigned"].GetBool();
        m_publicIpAssignedHasBeenSet = true;
    }

    if (value.HasMember("BandwidthPackageId") && !value["BandwidthPackageId"].IsNull())
    {
        if (!value["BandwidthPackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.BandwidthPackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthPackageId = string(value["BandwidthPackageId"].GetString());
        m_bandwidthPackageIdHasBeenSet = true;
    }

    if (value.HasMember("InternetServiceProvider") && !value["InternetServiceProvider"].IsNull())
    {
        if (!value["InternetServiceProvider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.InternetServiceProvider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetServiceProvider = string(value["InternetServiceProvider"].GetString());
        m_internetServiceProviderHasBeenSet = true;
    }

    if (value.HasMember("IPv4AddressType") && !value["IPv4AddressType"].IsNull())
    {
        if (!value["IPv4AddressType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.IPv4AddressType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPv4AddressType = string(value["IPv4AddressType"].GetString());
        m_iPv4AddressTypeHasBeenSet = true;
    }

    if (value.HasMember("AntiDDoSPackageId") && !value["AntiDDoSPackageId"].IsNull())
    {
        if (!value["AntiDDoSPackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.AntiDDoSPackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_antiDDoSPackageId = string(value["AntiDDoSPackageId"].GetString());
        m_antiDDoSPackageIdHasBeenSet = true;
    }

    if (value.HasMember("IsKeepEIP") && !value["IsKeepEIP"].IsNull())
    {
        if (!value["IsKeepEIP"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.IsKeepEIP` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isKeepEIP = value["IsKeepEIP"].GetBool();
        m_isKeepEIPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternetAccessible::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_internetChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_publicIpAssignedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAssigned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicIpAssigned, allocator);
    }

    if (m_bandwidthPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bandwidthPackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_internetServiceProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetServiceProvider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetServiceProvider.c_str(), allocator).Move(), allocator);
    }

    if (m_iPv4AddressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv4AddressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPv4AddressType.c_str(), allocator).Move(), allocator);
    }

    if (m_antiDDoSPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiDDoSPackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_antiDDoSPackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_isKeepEIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKeepEIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isKeepEIP, allocator);
    }

}


string InternetAccessible::GetInternetChargeType() const
{
    return m_internetChargeType;
}

void InternetAccessible::SetInternetChargeType(const string& _internetChargeType)
{
    m_internetChargeType = _internetChargeType;
    m_internetChargeTypeHasBeenSet = true;
}

bool InternetAccessible::InternetChargeTypeHasBeenSet() const
{
    return m_internetChargeTypeHasBeenSet;
}

uint64_t InternetAccessible::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void InternetAccessible::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool InternetAccessible::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

bool InternetAccessible::GetPublicIpAssigned() const
{
    return m_publicIpAssigned;
}

void InternetAccessible::SetPublicIpAssigned(const bool& _publicIpAssigned)
{
    m_publicIpAssigned = _publicIpAssigned;
    m_publicIpAssignedHasBeenSet = true;
}

bool InternetAccessible::PublicIpAssignedHasBeenSet() const
{
    return m_publicIpAssignedHasBeenSet;
}

string InternetAccessible::GetBandwidthPackageId() const
{
    return m_bandwidthPackageId;
}

void InternetAccessible::SetBandwidthPackageId(const string& _bandwidthPackageId)
{
    m_bandwidthPackageId = _bandwidthPackageId;
    m_bandwidthPackageIdHasBeenSet = true;
}

bool InternetAccessible::BandwidthPackageIdHasBeenSet() const
{
    return m_bandwidthPackageIdHasBeenSet;
}

string InternetAccessible::GetInternetServiceProvider() const
{
    return m_internetServiceProvider;
}

void InternetAccessible::SetInternetServiceProvider(const string& _internetServiceProvider)
{
    m_internetServiceProvider = _internetServiceProvider;
    m_internetServiceProviderHasBeenSet = true;
}

bool InternetAccessible::InternetServiceProviderHasBeenSet() const
{
    return m_internetServiceProviderHasBeenSet;
}

string InternetAccessible::GetIPv4AddressType() const
{
    return m_iPv4AddressType;
}

void InternetAccessible::SetIPv4AddressType(const string& _iPv4AddressType)
{
    m_iPv4AddressType = _iPv4AddressType;
    m_iPv4AddressTypeHasBeenSet = true;
}

bool InternetAccessible::IPv4AddressTypeHasBeenSet() const
{
    return m_iPv4AddressTypeHasBeenSet;
}

string InternetAccessible::GetAntiDDoSPackageId() const
{
    return m_antiDDoSPackageId;
}

void InternetAccessible::SetAntiDDoSPackageId(const string& _antiDDoSPackageId)
{
    m_antiDDoSPackageId = _antiDDoSPackageId;
    m_antiDDoSPackageIdHasBeenSet = true;
}

bool InternetAccessible::AntiDDoSPackageIdHasBeenSet() const
{
    return m_antiDDoSPackageIdHasBeenSet;
}

bool InternetAccessible::GetIsKeepEIP() const
{
    return m_isKeepEIP;
}

void InternetAccessible::SetIsKeepEIP(const bool& _isKeepEIP)
{
    m_isKeepEIP = _isKeepEIP;
    m_isKeepEIPHasBeenSet = true;
}

bool InternetAccessible::IsKeepEIPHasBeenSet() const
{
    return m_isKeepEIPHasBeenSet;
}

