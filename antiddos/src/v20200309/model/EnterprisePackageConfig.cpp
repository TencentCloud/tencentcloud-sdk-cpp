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

#include <tencentcloud/antiddos/v20200309/model/EnterprisePackageConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

EnterprisePackageConfig::EnterprisePackageConfig() :
    m_regionHasBeenSet(false),
    m_protectIpCountHasBeenSet(false),
    m_basicProtectBandwidthHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_elasticProtectBandwidthHasBeenSet(false),
    m_elasticBandwidthFlagHasBeenSet(false)
{
}

CoreInternalOutcome EnterprisePackageConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterprisePackageConfig.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ProtectIpCount") && !value["ProtectIpCount"].IsNull())
    {
        if (!value["ProtectIpCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterprisePackageConfig.ProtectIpCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectIpCount = value["ProtectIpCount"].GetUint64();
        m_protectIpCountHasBeenSet = true;
    }

    if (value.HasMember("BasicProtectBandwidth") && !value["BasicProtectBandwidth"].IsNull())
    {
        if (!value["BasicProtectBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterprisePackageConfig.BasicProtectBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_basicProtectBandwidth = value["BasicProtectBandwidth"].GetUint64();
        m_basicProtectBandwidthHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterprisePackageConfig.Bandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetUint64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("ElasticProtectBandwidth") && !value["ElasticProtectBandwidth"].IsNull())
    {
        if (!value["ElasticProtectBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterprisePackageConfig.ElasticProtectBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticProtectBandwidth = value["ElasticProtectBandwidth"].GetUint64();
        m_elasticProtectBandwidthHasBeenSet = true;
    }

    if (value.HasMember("ElasticBandwidthFlag") && !value["ElasticBandwidthFlag"].IsNull())
    {
        if (!value["ElasticBandwidthFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnterprisePackageConfig.ElasticBandwidthFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_elasticBandwidthFlag = value["ElasticBandwidthFlag"].GetBool();
        m_elasticBandwidthFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnterprisePackageConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_protectIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectIpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectIpCount, allocator);
    }

    if (m_basicProtectBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicProtectBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_basicProtectBandwidth, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_elasticProtectBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticProtectBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticProtectBandwidth, allocator);
    }

    if (m_elasticBandwidthFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticBandwidthFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticBandwidthFlag, allocator);
    }

}


string EnterprisePackageConfig::GetRegion() const
{
    return m_region;
}

void EnterprisePackageConfig::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool EnterprisePackageConfig::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t EnterprisePackageConfig::GetProtectIpCount() const
{
    return m_protectIpCount;
}

void EnterprisePackageConfig::SetProtectIpCount(const uint64_t& _protectIpCount)
{
    m_protectIpCount = _protectIpCount;
    m_protectIpCountHasBeenSet = true;
}

bool EnterprisePackageConfig::ProtectIpCountHasBeenSet() const
{
    return m_protectIpCountHasBeenSet;
}

uint64_t EnterprisePackageConfig::GetBasicProtectBandwidth() const
{
    return m_basicProtectBandwidth;
}

void EnterprisePackageConfig::SetBasicProtectBandwidth(const uint64_t& _basicProtectBandwidth)
{
    m_basicProtectBandwidth = _basicProtectBandwidth;
    m_basicProtectBandwidthHasBeenSet = true;
}

bool EnterprisePackageConfig::BasicProtectBandwidthHasBeenSet() const
{
    return m_basicProtectBandwidthHasBeenSet;
}

uint64_t EnterprisePackageConfig::GetBandwidth() const
{
    return m_bandwidth;
}

void EnterprisePackageConfig::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool EnterprisePackageConfig::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

uint64_t EnterprisePackageConfig::GetElasticProtectBandwidth() const
{
    return m_elasticProtectBandwidth;
}

void EnterprisePackageConfig::SetElasticProtectBandwidth(const uint64_t& _elasticProtectBandwidth)
{
    m_elasticProtectBandwidth = _elasticProtectBandwidth;
    m_elasticProtectBandwidthHasBeenSet = true;
}

bool EnterprisePackageConfig::ElasticProtectBandwidthHasBeenSet() const
{
    return m_elasticProtectBandwidthHasBeenSet;
}

bool EnterprisePackageConfig::GetElasticBandwidthFlag() const
{
    return m_elasticBandwidthFlag;
}

void EnterprisePackageConfig::SetElasticBandwidthFlag(const bool& _elasticBandwidthFlag)
{
    m_elasticBandwidthFlag = _elasticBandwidthFlag;
    m_elasticBandwidthFlagHasBeenSet = true;
}

bool EnterprisePackageConfig::ElasticBandwidthFlagHasBeenSet() const
{
    return m_elasticBandwidthFlagHasBeenSet;
}

