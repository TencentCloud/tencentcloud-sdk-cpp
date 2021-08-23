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

#include <tencentcloud/gaap/v20180529/model/DomainAccessRegionDict.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

DomainAccessRegionDict::DomainAccessRegionDict() :
    m_nationCountryInnerListHasBeenSet(false),
    m_proxyListHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_geographicalZoneInnerCodeHasBeenSet(false),
    m_continentInnerCodeHasBeenSet(false),
    m_regionNameHasBeenSet(false)
{
}

CoreInternalOutcome DomainAccessRegionDict::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NationCountryInnerList") && !value["NationCountryInnerList"].IsNull())
    {
        if (!value["NationCountryInnerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainAccessRegionDict.NationCountryInnerList` is not array type"));

        const rapidjson::Value &tmpValue = value["NationCountryInnerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NationCountryInnerInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nationCountryInnerList.push_back(item);
        }
        m_nationCountryInnerListHasBeenSet = true;
    }

    if (value.HasMember("ProxyList") && !value["ProxyList"].IsNull())
    {
        if (!value["ProxyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainAccessRegionDict.ProxyList` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyIdDict item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyList.push_back(item);
        }
        m_proxyListHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAccessRegionDict.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("GeographicalZoneInnerCode") && !value["GeographicalZoneInnerCode"].IsNull())
    {
        if (!value["GeographicalZoneInnerCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAccessRegionDict.GeographicalZoneInnerCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_geographicalZoneInnerCode = string(value["GeographicalZoneInnerCode"].GetString());
        m_geographicalZoneInnerCodeHasBeenSet = true;
    }

    if (value.HasMember("ContinentInnerCode") && !value["ContinentInnerCode"].IsNull())
    {
        if (!value["ContinentInnerCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAccessRegionDict.ContinentInnerCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_continentInnerCode = string(value["ContinentInnerCode"].GetString());
        m_continentInnerCodeHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAccessRegionDict.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainAccessRegionDict::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nationCountryInnerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationCountryInnerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nationCountryInnerList.begin(); itr != m_nationCountryInnerList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_proxyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyList.begin(); itr != m_proxyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_geographicalZoneInnerCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeographicalZoneInnerCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_geographicalZoneInnerCode.c_str(), allocator).Move(), allocator);
    }

    if (m_continentInnerCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinentInnerCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_continentInnerCode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

}


vector<NationCountryInnerInfo> DomainAccessRegionDict::GetNationCountryInnerList() const
{
    return m_nationCountryInnerList;
}

void DomainAccessRegionDict::SetNationCountryInnerList(const vector<NationCountryInnerInfo>& _nationCountryInnerList)
{
    m_nationCountryInnerList = _nationCountryInnerList;
    m_nationCountryInnerListHasBeenSet = true;
}

bool DomainAccessRegionDict::NationCountryInnerListHasBeenSet() const
{
    return m_nationCountryInnerListHasBeenSet;
}

vector<ProxyIdDict> DomainAccessRegionDict::GetProxyList() const
{
    return m_proxyList;
}

void DomainAccessRegionDict::SetProxyList(const vector<ProxyIdDict>& _proxyList)
{
    m_proxyList = _proxyList;
    m_proxyListHasBeenSet = true;
}

bool DomainAccessRegionDict::ProxyListHasBeenSet() const
{
    return m_proxyListHasBeenSet;
}

string DomainAccessRegionDict::GetRegionId() const
{
    return m_regionId;
}

void DomainAccessRegionDict::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool DomainAccessRegionDict::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string DomainAccessRegionDict::GetGeographicalZoneInnerCode() const
{
    return m_geographicalZoneInnerCode;
}

void DomainAccessRegionDict::SetGeographicalZoneInnerCode(const string& _geographicalZoneInnerCode)
{
    m_geographicalZoneInnerCode = _geographicalZoneInnerCode;
    m_geographicalZoneInnerCodeHasBeenSet = true;
}

bool DomainAccessRegionDict::GeographicalZoneInnerCodeHasBeenSet() const
{
    return m_geographicalZoneInnerCodeHasBeenSet;
}

string DomainAccessRegionDict::GetContinentInnerCode() const
{
    return m_continentInnerCode;
}

void DomainAccessRegionDict::SetContinentInnerCode(const string& _continentInnerCode)
{
    m_continentInnerCode = _continentInnerCode;
    m_continentInnerCodeHasBeenSet = true;
}

bool DomainAccessRegionDict::ContinentInnerCodeHasBeenSet() const
{
    return m_continentInnerCodeHasBeenSet;
}

string DomainAccessRegionDict::GetRegionName() const
{
    return m_regionName;
}

void DomainAccessRegionDict::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool DomainAccessRegionDict::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

