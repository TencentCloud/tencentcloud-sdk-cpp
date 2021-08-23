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

#include <tencentcloud/gaap/v20180529/model/AccessConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

AccessConfiguration::AccessConfiguration() :
    m_accessRegionHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_concurrentHasBeenSet(false),
    m_networkTypeHasBeenSet(false)
{
}

CoreInternalOutcome AccessConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessRegion") && !value["AccessRegion"].IsNull())
    {
        if (!value["AccessRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessConfiguration.AccessRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessRegion = string(value["AccessRegion"].GetString());
        m_accessRegionHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessConfiguration.Bandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetUint64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Concurrent") && !value["Concurrent"].IsNull())
    {
        if (!value["Concurrent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessConfiguration.Concurrent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrent = value["Concurrent"].GetUint64();
        m_concurrentHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessConfiguration.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_concurrentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concurrent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrent, allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

}


string AccessConfiguration::GetAccessRegion() const
{
    return m_accessRegion;
}

void AccessConfiguration::SetAccessRegion(const string& _accessRegion)
{
    m_accessRegion = _accessRegion;
    m_accessRegionHasBeenSet = true;
}

bool AccessConfiguration::AccessRegionHasBeenSet() const
{
    return m_accessRegionHasBeenSet;
}

uint64_t AccessConfiguration::GetBandwidth() const
{
    return m_bandwidth;
}

void AccessConfiguration::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool AccessConfiguration::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

uint64_t AccessConfiguration::GetConcurrent() const
{
    return m_concurrent;
}

void AccessConfiguration::SetConcurrent(const uint64_t& _concurrent)
{
    m_concurrent = _concurrent;
    m_concurrentHasBeenSet = true;
}

bool AccessConfiguration::ConcurrentHasBeenSet() const
{
    return m_concurrentHasBeenSet;
}

string AccessConfiguration::GetNetworkType() const
{
    return m_networkType;
}

void AccessConfiguration::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool AccessConfiguration::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

