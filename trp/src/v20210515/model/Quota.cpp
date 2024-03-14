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

#include <tencentcloud/trp/v20210515/model/Quota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

Quota::Quota() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_quotaIdHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_factoryQuotaHasBeenSet(false),
    m_itemQuotaHasBeenSet(false),
    m_trackQuotaHasBeenSet(false),
    m_saleQuotaHasBeenSet(false),
    m_chainQuotaHasBeenSet(false),
    m_riskQuotaHasBeenSet(false),
    m_aigcTextQuotaHasBeenSet(false),
    m_aigcImageQuotaHasBeenSet(false),
    m_trackTypeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_productCertifyHasBeenSet(false)
{
}

CoreInternalOutcome Quota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("QuotaId") && !value["QuotaId"].IsNull())
    {
        if (!value["QuotaId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.QuotaId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaId = value["QuotaId"].GetUint64();
        m_quotaIdHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.CorpId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = value["CorpId"].GetUint64();
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("Services") && !value["Services"].IsNull())
    {
        if (!value["Services"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Quota.Services` is not array type"));

        const rapidjson::Value &tmpValue = value["Services"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_services.push_back((*itr).GetString());
        }
        m_servicesHasBeenSet = true;
    }

    if (value.HasMember("FactoryQuota") && !value["FactoryQuota"].IsNull())
    {
        if (!value["FactoryQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.FactoryQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_factoryQuota = value["FactoryQuota"].GetInt64();
        m_factoryQuotaHasBeenSet = true;
    }

    if (value.HasMember("ItemQuota") && !value["ItemQuota"].IsNull())
    {
        if (!value["ItemQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.ItemQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemQuota = value["ItemQuota"].GetInt64();
        m_itemQuotaHasBeenSet = true;
    }

    if (value.HasMember("TrackQuota") && !value["TrackQuota"].IsNull())
    {
        if (!value["TrackQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.TrackQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trackQuota = value["TrackQuota"].GetInt64();
        m_trackQuotaHasBeenSet = true;
    }

    if (value.HasMember("SaleQuota") && !value["SaleQuota"].IsNull())
    {
        if (!value["SaleQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.SaleQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_saleQuota = value["SaleQuota"].GetInt64();
        m_saleQuotaHasBeenSet = true;
    }

    if (value.HasMember("ChainQuota") && !value["ChainQuota"].IsNull())
    {
        if (!value["ChainQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.ChainQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chainQuota = value["ChainQuota"].GetInt64();
        m_chainQuotaHasBeenSet = true;
    }

    if (value.HasMember("RiskQuota") && !value["RiskQuota"].IsNull())
    {
        if (!value["RiskQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.RiskQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskQuota = value["RiskQuota"].GetInt64();
        m_riskQuotaHasBeenSet = true;
    }

    if (value.HasMember("AigcTextQuota") && !value["AigcTextQuota"].IsNull())
    {
        if (!value["AigcTextQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.AigcTextQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aigcTextQuota = value["AigcTextQuota"].GetInt64();
        m_aigcTextQuotaHasBeenSet = true;
    }

    if (value.HasMember("AigcImageQuota") && !value["AigcImageQuota"].IsNull())
    {
        if (!value["AigcImageQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.AigcImageQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aigcImageQuota = value["AigcImageQuota"].GetInt64();
        m_aigcImageQuotaHasBeenSet = true;
    }

    if (value.HasMember("TrackType") && !value["TrackType"].IsNull())
    {
        if (!value["TrackType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.TrackType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trackType = value["TrackType"].GetInt64();
        m_trackTypeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ProductCertify") && !value["ProductCertify"].IsNull())
    {
        if (!value["ProductCertify"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.ProductCertify` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_productCertify = value["ProductCertify"].GetUint64();
        m_productCertifyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Quota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaId, allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpId, allocator);
    }

    if (m_servicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Services";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_services.begin(); itr != m_services.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_factoryQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FactoryQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_factoryQuota, allocator);
    }

    if (m_itemQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemQuota, allocator);
    }

    if (m_trackQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trackQuota, allocator);
    }

    if (m_saleQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaleQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_saleQuota, allocator);
    }

    if (m_chainQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chainQuota, allocator);
    }

    if (m_riskQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskQuota, allocator);
    }

    if (m_aigcTextQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AigcTextQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aigcTextQuota, allocator);
    }

    if (m_aigcImageQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AigcImageQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aigcImageQuota, allocator);
    }

    if (m_trackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trackType, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_productCertifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCertify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productCertify, allocator);
    }

}


string Quota::GetStartTime() const
{
    return m_startTime;
}

void Quota::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Quota::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Quota::GetEndTime() const
{
    return m_endTime;
}

void Quota::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Quota::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t Quota::GetQuotaId() const
{
    return m_quotaId;
}

void Quota::SetQuotaId(const uint64_t& _quotaId)
{
    m_quotaId = _quotaId;
    m_quotaIdHasBeenSet = true;
}

bool Quota::QuotaIdHasBeenSet() const
{
    return m_quotaIdHasBeenSet;
}

uint64_t Quota::GetCorpId() const
{
    return m_corpId;
}

void Quota::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool Quota::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

vector<string> Quota::GetServices() const
{
    return m_services;
}

void Quota::SetServices(const vector<string>& _services)
{
    m_services = _services;
    m_servicesHasBeenSet = true;
}

bool Quota::ServicesHasBeenSet() const
{
    return m_servicesHasBeenSet;
}

int64_t Quota::GetFactoryQuota() const
{
    return m_factoryQuota;
}

void Quota::SetFactoryQuota(const int64_t& _factoryQuota)
{
    m_factoryQuota = _factoryQuota;
    m_factoryQuotaHasBeenSet = true;
}

bool Quota::FactoryQuotaHasBeenSet() const
{
    return m_factoryQuotaHasBeenSet;
}

int64_t Quota::GetItemQuota() const
{
    return m_itemQuota;
}

void Quota::SetItemQuota(const int64_t& _itemQuota)
{
    m_itemQuota = _itemQuota;
    m_itemQuotaHasBeenSet = true;
}

bool Quota::ItemQuotaHasBeenSet() const
{
    return m_itemQuotaHasBeenSet;
}

int64_t Quota::GetTrackQuota() const
{
    return m_trackQuota;
}

void Quota::SetTrackQuota(const int64_t& _trackQuota)
{
    m_trackQuota = _trackQuota;
    m_trackQuotaHasBeenSet = true;
}

bool Quota::TrackQuotaHasBeenSet() const
{
    return m_trackQuotaHasBeenSet;
}

int64_t Quota::GetSaleQuota() const
{
    return m_saleQuota;
}

void Quota::SetSaleQuota(const int64_t& _saleQuota)
{
    m_saleQuota = _saleQuota;
    m_saleQuotaHasBeenSet = true;
}

bool Quota::SaleQuotaHasBeenSet() const
{
    return m_saleQuotaHasBeenSet;
}

int64_t Quota::GetChainQuota() const
{
    return m_chainQuota;
}

void Quota::SetChainQuota(const int64_t& _chainQuota)
{
    m_chainQuota = _chainQuota;
    m_chainQuotaHasBeenSet = true;
}

bool Quota::ChainQuotaHasBeenSet() const
{
    return m_chainQuotaHasBeenSet;
}

int64_t Quota::GetRiskQuota() const
{
    return m_riskQuota;
}

void Quota::SetRiskQuota(const int64_t& _riskQuota)
{
    m_riskQuota = _riskQuota;
    m_riskQuotaHasBeenSet = true;
}

bool Quota::RiskQuotaHasBeenSet() const
{
    return m_riskQuotaHasBeenSet;
}

int64_t Quota::GetAigcTextQuota() const
{
    return m_aigcTextQuota;
}

void Quota::SetAigcTextQuota(const int64_t& _aigcTextQuota)
{
    m_aigcTextQuota = _aigcTextQuota;
    m_aigcTextQuotaHasBeenSet = true;
}

bool Quota::AigcTextQuotaHasBeenSet() const
{
    return m_aigcTextQuotaHasBeenSet;
}

int64_t Quota::GetAigcImageQuota() const
{
    return m_aigcImageQuota;
}

void Quota::SetAigcImageQuota(const int64_t& _aigcImageQuota)
{
    m_aigcImageQuota = _aigcImageQuota;
    m_aigcImageQuotaHasBeenSet = true;
}

bool Quota::AigcImageQuotaHasBeenSet() const
{
    return m_aigcImageQuotaHasBeenSet;
}

int64_t Quota::GetTrackType() const
{
    return m_trackType;
}

void Quota::SetTrackType(const int64_t& _trackType)
{
    m_trackType = _trackType;
    m_trackTypeHasBeenSet = true;
}

bool Quota::TrackTypeHasBeenSet() const
{
    return m_trackTypeHasBeenSet;
}

string Quota::GetVersion() const
{
    return m_version;
}

void Quota::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool Quota::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

uint64_t Quota::GetProductCertify() const
{
    return m_productCertify;
}

void Quota::SetProductCertify(const uint64_t& _productCertify)
{
    m_productCertify = _productCertify;
    m_productCertifyHasBeenSet = true;
}

bool Quota::ProductCertifyHasBeenSet() const
{
    return m_productCertifyHasBeenSet;
}

