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

#include <tencentcloud/ssa/v20180608/model/DomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

DomainInfo::DomainInfo() :
    m_domainHasBeenSet(false),
    m_resolveAddrHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_riskVulCountHasBeenSet(false),
    m_sensitiveCountHasBeenSet(false),
    m_horseLinkCountHasBeenSet(false),
    m_webModifyCountHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_discoverTimeHasBeenSet(false),
    m_scanTaskCountHasBeenSet(false),
    m_portRiskHasBeenSet(false),
    m_weekPwdCountHasBeenSet(false),
    m_assetLocationHasBeenSet(false)
{
}

CoreInternalOutcome DomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("ResolveAddr") && !value["ResolveAddr"].IsNull())
    {
        if (!value["ResolveAddr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainInfo.ResolveAddr` is not array type"));

        const rapidjson::Value &tmpValue = value["ResolveAddr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resolveAddr.push_back((*itr).GetString());
        }
        m_resolveAddrHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Region` is not array type"));

        const rapidjson::Value &tmpValue = value["Region"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_region.push_back((*itr).GetString());
        }
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainInfo.AssetType` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetType.push_back((*itr).GetString());
        }
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskVulCount") && !value["RiskVulCount"].IsNull())
    {
        if (!value["RiskVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.RiskVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskVulCount = value["RiskVulCount"].GetUint64();
        m_riskVulCountHasBeenSet = true;
    }

    if (value.HasMember("SensitiveCount") && !value["SensitiveCount"].IsNull())
    {
        if (!value["SensitiveCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.SensitiveCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveCount = value["SensitiveCount"].GetUint64();
        m_sensitiveCountHasBeenSet = true;
    }

    if (value.HasMember("HorseLinkCount") && !value["HorseLinkCount"].IsNull())
    {
        if (!value["HorseLinkCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.HorseLinkCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_horseLinkCount = value["HorseLinkCount"].GetUint64();
        m_horseLinkCountHasBeenSet = true;
    }

    if (value.HasMember("WebModifyCount") && !value["WebModifyCount"].IsNull())
    {
        if (!value["WebModifyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.WebModifyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webModifyCount = value["WebModifyCount"].GetUint64();
        m_webModifyCountHasBeenSet = true;
    }

    if (value.HasMember("ScanTime") && !value["ScanTime"].IsNull())
    {
        if (!value["ScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.ScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = string(value["ScanTime"].GetString());
        m_scanTimeHasBeenSet = true;
    }

    if (value.HasMember("DiscoverTime") && !value["DiscoverTime"].IsNull())
    {
        if (!value["DiscoverTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.DiscoverTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discoverTime = string(value["DiscoverTime"].GetString());
        m_discoverTimeHasBeenSet = true;
    }

    if (value.HasMember("ScanTaskCount") && !value["ScanTaskCount"].IsNull())
    {
        if (!value["ScanTaskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.ScanTaskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanTaskCount = value["ScanTaskCount"].GetUint64();
        m_scanTaskCountHasBeenSet = true;
    }

    if (value.HasMember("PortRisk") && !value["PortRisk"].IsNull())
    {
        if (!value["PortRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.PortRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portRisk = value["PortRisk"].GetUint64();
        m_portRiskHasBeenSet = true;
    }

    if (value.HasMember("WeekPwdCount") && !value["WeekPwdCount"].IsNull())
    {
        if (!value["WeekPwdCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.WeekPwdCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weekPwdCount = value["WeekPwdCount"].GetUint64();
        m_weekPwdCountHasBeenSet = true;
    }

    if (value.HasMember("AssetLocation") && !value["AssetLocation"].IsNull())
    {
        if (!value["AssetLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.AssetLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetLocation = string(value["AssetLocation"].GetString());
        m_assetLocationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_resolveAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolveAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resolveAddr.begin(); itr != m_resolveAddr.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_region.begin(); itr != m_region.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetType.begin(); itr != m_assetType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_riskVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskVulCount, allocator);
    }

    if (m_sensitiveCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveCount, allocator);
    }

    if (m_horseLinkCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HorseLinkCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_horseLinkCount, allocator);
    }

    if (m_webModifyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebModifyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webModifyCount, allocator);
    }

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_discoverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscoverTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discoverTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanTaskCount, allocator);
    }

    if (m_portRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portRisk, allocator);
    }

    if (m_weekPwdCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekPwdCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weekPwdCount, allocator);
    }

    if (m_assetLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetLocation.c_str(), allocator).Move(), allocator);
    }

}


string DomainInfo::GetDomain() const
{
    return m_domain;
}

void DomainInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> DomainInfo::GetResolveAddr() const
{
    return m_resolveAddr;
}

void DomainInfo::SetResolveAddr(const vector<string>& _resolveAddr)
{
    m_resolveAddr = _resolveAddr;
    m_resolveAddrHasBeenSet = true;
}

bool DomainInfo::ResolveAddrHasBeenSet() const
{
    return m_resolveAddrHasBeenSet;
}

vector<string> DomainInfo::GetRegion() const
{
    return m_region;
}

void DomainInfo::SetRegion(const vector<string>& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DomainInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<string> DomainInfo::GetAssetType() const
{
    return m_assetType;
}

void DomainInfo::SetAssetType(const vector<string>& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DomainInfo::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

uint64_t DomainInfo::GetRiskVulCount() const
{
    return m_riskVulCount;
}

void DomainInfo::SetRiskVulCount(const uint64_t& _riskVulCount)
{
    m_riskVulCount = _riskVulCount;
    m_riskVulCountHasBeenSet = true;
}

bool DomainInfo::RiskVulCountHasBeenSet() const
{
    return m_riskVulCountHasBeenSet;
}

uint64_t DomainInfo::GetSensitiveCount() const
{
    return m_sensitiveCount;
}

void DomainInfo::SetSensitiveCount(const uint64_t& _sensitiveCount)
{
    m_sensitiveCount = _sensitiveCount;
    m_sensitiveCountHasBeenSet = true;
}

bool DomainInfo::SensitiveCountHasBeenSet() const
{
    return m_sensitiveCountHasBeenSet;
}

uint64_t DomainInfo::GetHorseLinkCount() const
{
    return m_horseLinkCount;
}

void DomainInfo::SetHorseLinkCount(const uint64_t& _horseLinkCount)
{
    m_horseLinkCount = _horseLinkCount;
    m_horseLinkCountHasBeenSet = true;
}

bool DomainInfo::HorseLinkCountHasBeenSet() const
{
    return m_horseLinkCountHasBeenSet;
}

uint64_t DomainInfo::GetWebModifyCount() const
{
    return m_webModifyCount;
}

void DomainInfo::SetWebModifyCount(const uint64_t& _webModifyCount)
{
    m_webModifyCount = _webModifyCount;
    m_webModifyCountHasBeenSet = true;
}

bool DomainInfo::WebModifyCountHasBeenSet() const
{
    return m_webModifyCountHasBeenSet;
}

string DomainInfo::GetScanTime() const
{
    return m_scanTime;
}

void DomainInfo::SetScanTime(const string& _scanTime)
{
    m_scanTime = _scanTime;
    m_scanTimeHasBeenSet = true;
}

bool DomainInfo::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

string DomainInfo::GetDiscoverTime() const
{
    return m_discoverTime;
}

void DomainInfo::SetDiscoverTime(const string& _discoverTime)
{
    m_discoverTime = _discoverTime;
    m_discoverTimeHasBeenSet = true;
}

bool DomainInfo::DiscoverTimeHasBeenSet() const
{
    return m_discoverTimeHasBeenSet;
}

uint64_t DomainInfo::GetScanTaskCount() const
{
    return m_scanTaskCount;
}

void DomainInfo::SetScanTaskCount(const uint64_t& _scanTaskCount)
{
    m_scanTaskCount = _scanTaskCount;
    m_scanTaskCountHasBeenSet = true;
}

bool DomainInfo::ScanTaskCountHasBeenSet() const
{
    return m_scanTaskCountHasBeenSet;
}

uint64_t DomainInfo::GetPortRisk() const
{
    return m_portRisk;
}

void DomainInfo::SetPortRisk(const uint64_t& _portRisk)
{
    m_portRisk = _portRisk;
    m_portRiskHasBeenSet = true;
}

bool DomainInfo::PortRiskHasBeenSet() const
{
    return m_portRiskHasBeenSet;
}

uint64_t DomainInfo::GetWeekPwdCount() const
{
    return m_weekPwdCount;
}

void DomainInfo::SetWeekPwdCount(const uint64_t& _weekPwdCount)
{
    m_weekPwdCount = _weekPwdCount;
    m_weekPwdCountHasBeenSet = true;
}

bool DomainInfo::WeekPwdCountHasBeenSet() const
{
    return m_weekPwdCountHasBeenSet;
}

string DomainInfo::GetAssetLocation() const
{
    return m_assetLocation;
}

void DomainInfo::SetAssetLocation(const string& _assetLocation)
{
    m_assetLocation = _assetLocation;
    m_assetLocationHasBeenSet = true;
}

bool DomainInfo::AssetLocationHasBeenSet() const
{
    return m_assetLocationHasBeenSet;
}

