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

#include <tencentcloud/dnspod/v20210323/model/PackageDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

PackageDetailItem::PackageDetailItem() :
    m_realPriceHasBeenSet(false),
    m_changedTimesHasBeenSet(false),
    m_minTtlHasBeenSet(false),
    m_recordRollHasBeenSet(false),
    m_subDomainLevelHasBeenSet(false),
    m_maxWildcardHasBeenSet(false),
    m_dnsServerRegionHasBeenSet(false),
    m_domainGradeCnHasBeenSet(false),
    m_gradeLevelHasBeenSet(false),
    m_nsHasBeenSet(false),
    m_domainGradeHasBeenSet(false)
{
}

CoreInternalOutcome PackageDetailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RealPrice") && !value["RealPrice"].IsNull())
    {
        if (!value["RealPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetailItem.RealPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realPrice = value["RealPrice"].GetUint64();
        m_realPriceHasBeenSet = true;
    }

    if (value.HasMember("ChangedTimes") && !value["ChangedTimes"].IsNull())
    {
        if (!value["ChangedTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetailItem.ChangedTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_changedTimes = value["ChangedTimes"].GetUint64();
        m_changedTimesHasBeenSet = true;
    }

    if (value.HasMember("MinTtl") && !value["MinTtl"].IsNull())
    {
        if (!value["MinTtl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetailItem.MinTtl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minTtl = value["MinTtl"].GetUint64();
        m_minTtlHasBeenSet = true;
    }

    if (value.HasMember("RecordRoll") && !value["RecordRoll"].IsNull())
    {
        if (!value["RecordRoll"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetailItem.RecordRoll` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordRoll = value["RecordRoll"].GetUint64();
        m_recordRollHasBeenSet = true;
    }

    if (value.HasMember("SubDomainLevel") && !value["SubDomainLevel"].IsNull())
    {
        if (!value["SubDomainLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetailItem.SubDomainLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subDomainLevel = value["SubDomainLevel"].GetUint64();
        m_subDomainLevelHasBeenSet = true;
    }

    if (value.HasMember("MaxWildcard") && !value["MaxWildcard"].IsNull())
    {
        if (!value["MaxWildcard"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetailItem.MaxWildcard` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxWildcard = value["MaxWildcard"].GetUint64();
        m_maxWildcardHasBeenSet = true;
    }

    if (value.HasMember("DnsServerRegion") && !value["DnsServerRegion"].IsNull())
    {
        if (!value["DnsServerRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetailItem.DnsServerRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsServerRegion = string(value["DnsServerRegion"].GetString());
        m_dnsServerRegionHasBeenSet = true;
    }

    if (value.HasMember("DomainGradeCn") && !value["DomainGradeCn"].IsNull())
    {
        if (!value["DomainGradeCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetailItem.DomainGradeCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainGradeCn = string(value["DomainGradeCn"].GetString());
        m_domainGradeCnHasBeenSet = true;
    }

    if (value.HasMember("GradeLevel") && !value["GradeLevel"].IsNull())
    {
        if (!value["GradeLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetailItem.GradeLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gradeLevel = value["GradeLevel"].GetUint64();
        m_gradeLevelHasBeenSet = true;
    }

    if (value.HasMember("Ns") && !value["Ns"].IsNull())
    {
        if (!value["Ns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PackageDetailItem.Ns` is not array type"));

        const rapidjson::Value &tmpValue = value["Ns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ns.push_back((*itr).GetString());
        }
        m_nsHasBeenSet = true;
    }

    if (value.HasMember("DomainGrade") && !value["DomainGrade"].IsNull())
    {
        if (!value["DomainGrade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetailItem.DomainGrade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainGrade = string(value["DomainGrade"].GetString());
        m_domainGradeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackageDetailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_realPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realPrice, allocator);
    }

    if (m_changedTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangedTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_changedTimes, allocator);
    }

    if (m_minTtlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinTtl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minTtl, allocator);
    }

    if (m_recordRollHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordRoll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordRoll, allocator);
    }

    if (m_subDomainLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomainLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subDomainLevel, allocator);
    }

    if (m_maxWildcardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxWildcard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxWildcard, allocator);
    }

    if (m_dnsServerRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsServerRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsServerRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_domainGradeCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainGradeCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainGradeCn.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GradeLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gradeLevel, allocator);
    }

    if (m_nsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ns.begin(); itr != m_ns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainGradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainGrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainGrade.c_str(), allocator).Move(), allocator);
    }

}


uint64_t PackageDetailItem::GetRealPrice() const
{
    return m_realPrice;
}

void PackageDetailItem::SetRealPrice(const uint64_t& _realPrice)
{
    m_realPrice = _realPrice;
    m_realPriceHasBeenSet = true;
}

bool PackageDetailItem::RealPriceHasBeenSet() const
{
    return m_realPriceHasBeenSet;
}

uint64_t PackageDetailItem::GetChangedTimes() const
{
    return m_changedTimes;
}

void PackageDetailItem::SetChangedTimes(const uint64_t& _changedTimes)
{
    m_changedTimes = _changedTimes;
    m_changedTimesHasBeenSet = true;
}

bool PackageDetailItem::ChangedTimesHasBeenSet() const
{
    return m_changedTimesHasBeenSet;
}

uint64_t PackageDetailItem::GetMinTtl() const
{
    return m_minTtl;
}

void PackageDetailItem::SetMinTtl(const uint64_t& _minTtl)
{
    m_minTtl = _minTtl;
    m_minTtlHasBeenSet = true;
}

bool PackageDetailItem::MinTtlHasBeenSet() const
{
    return m_minTtlHasBeenSet;
}

uint64_t PackageDetailItem::GetRecordRoll() const
{
    return m_recordRoll;
}

void PackageDetailItem::SetRecordRoll(const uint64_t& _recordRoll)
{
    m_recordRoll = _recordRoll;
    m_recordRollHasBeenSet = true;
}

bool PackageDetailItem::RecordRollHasBeenSet() const
{
    return m_recordRollHasBeenSet;
}

uint64_t PackageDetailItem::GetSubDomainLevel() const
{
    return m_subDomainLevel;
}

void PackageDetailItem::SetSubDomainLevel(const uint64_t& _subDomainLevel)
{
    m_subDomainLevel = _subDomainLevel;
    m_subDomainLevelHasBeenSet = true;
}

bool PackageDetailItem::SubDomainLevelHasBeenSet() const
{
    return m_subDomainLevelHasBeenSet;
}

uint64_t PackageDetailItem::GetMaxWildcard() const
{
    return m_maxWildcard;
}

void PackageDetailItem::SetMaxWildcard(const uint64_t& _maxWildcard)
{
    m_maxWildcard = _maxWildcard;
    m_maxWildcardHasBeenSet = true;
}

bool PackageDetailItem::MaxWildcardHasBeenSet() const
{
    return m_maxWildcardHasBeenSet;
}

string PackageDetailItem::GetDnsServerRegion() const
{
    return m_dnsServerRegion;
}

void PackageDetailItem::SetDnsServerRegion(const string& _dnsServerRegion)
{
    m_dnsServerRegion = _dnsServerRegion;
    m_dnsServerRegionHasBeenSet = true;
}

bool PackageDetailItem::DnsServerRegionHasBeenSet() const
{
    return m_dnsServerRegionHasBeenSet;
}

string PackageDetailItem::GetDomainGradeCn() const
{
    return m_domainGradeCn;
}

void PackageDetailItem::SetDomainGradeCn(const string& _domainGradeCn)
{
    m_domainGradeCn = _domainGradeCn;
    m_domainGradeCnHasBeenSet = true;
}

bool PackageDetailItem::DomainGradeCnHasBeenSet() const
{
    return m_domainGradeCnHasBeenSet;
}

uint64_t PackageDetailItem::GetGradeLevel() const
{
    return m_gradeLevel;
}

void PackageDetailItem::SetGradeLevel(const uint64_t& _gradeLevel)
{
    m_gradeLevel = _gradeLevel;
    m_gradeLevelHasBeenSet = true;
}

bool PackageDetailItem::GradeLevelHasBeenSet() const
{
    return m_gradeLevelHasBeenSet;
}

vector<string> PackageDetailItem::GetNs() const
{
    return m_ns;
}

void PackageDetailItem::SetNs(const vector<string>& _ns)
{
    m_ns = _ns;
    m_nsHasBeenSet = true;
}

bool PackageDetailItem::NsHasBeenSet() const
{
    return m_nsHasBeenSet;
}

string PackageDetailItem::GetDomainGrade() const
{
    return m_domainGrade;
}

void PackageDetailItem::SetDomainGrade(const string& _domainGrade)
{
    m_domainGrade = _domainGrade;
    m_domainGradeHasBeenSet = true;
}

bool PackageDetailItem::DomainGradeHasBeenSet() const
{
    return m_domainGradeHasBeenSet;
}

