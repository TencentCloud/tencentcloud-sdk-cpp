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

#include <tencentcloud/gaap/v20180529/model/GlobalDns.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

GlobalDns::GlobalDns() :
    m_dnsRecordIdHasBeenSet(false),
    m_countryAreaListHasBeenSet(false),
    m_accessListHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome GlobalDns::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DnsRecordId") && !value["DnsRecordId"].IsNull())
    {
        if (!value["DnsRecordId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalDns.DnsRecordId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dnsRecordId = value["DnsRecordId"].GetUint64();
        m_dnsRecordIdHasBeenSet = true;
    }

    if (value.HasMember("CountryAreaList") && !value["CountryAreaList"].IsNull())
    {
        if (!value["CountryAreaList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GlobalDns.CountryAreaList` is not array type"));

        const rapidjson::Value &tmpValue = value["CountryAreaList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CountryAreaMap item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_countryAreaList.push_back(item);
        }
        m_countryAreaListHasBeenSet = true;
    }

    if (value.HasMember("AccessList") && !value["AccessList"].IsNull())
    {
        if (!value["AccessList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GlobalDns.AccessList` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyAccessInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accessList.push_back(item);
        }
        m_accessListHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalDns.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GlobalDns::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dnsRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dnsRecordId, allocator);
    }

    if (m_countryAreaListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryAreaList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_countryAreaList.begin(); itr != m_countryAreaList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_accessListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessList.begin(); itr != m_accessList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


uint64_t GlobalDns::GetDnsRecordId() const
{
    return m_dnsRecordId;
}

void GlobalDns::SetDnsRecordId(const uint64_t& _dnsRecordId)
{
    m_dnsRecordId = _dnsRecordId;
    m_dnsRecordIdHasBeenSet = true;
}

bool GlobalDns::DnsRecordIdHasBeenSet() const
{
    return m_dnsRecordIdHasBeenSet;
}

vector<CountryAreaMap> GlobalDns::GetCountryAreaList() const
{
    return m_countryAreaList;
}

void GlobalDns::SetCountryAreaList(const vector<CountryAreaMap>& _countryAreaList)
{
    m_countryAreaList = _countryAreaList;
    m_countryAreaListHasBeenSet = true;
}

bool GlobalDns::CountryAreaListHasBeenSet() const
{
    return m_countryAreaListHasBeenSet;
}

vector<ProxyAccessInfo> GlobalDns::GetAccessList() const
{
    return m_accessList;
}

void GlobalDns::SetAccessList(const vector<ProxyAccessInfo>& _accessList)
{
    m_accessList = _accessList;
    m_accessListHasBeenSet = true;
}

bool GlobalDns::AccessListHasBeenSet() const
{
    return m_accessListHasBeenSet;
}

int64_t GlobalDns::GetStatus() const
{
    return m_status;
}

void GlobalDns::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GlobalDns::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

