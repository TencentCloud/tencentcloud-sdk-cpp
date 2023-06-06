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

#include <tencentcloud/ecm/v20190719/model/Node.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

Node::Node() :
    m_zoneInfoHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_regionInfoHasBeenSet(false),
    m_iSPSetHasBeenSet(false),
    m_iSPNumHasBeenSet(false),
    m_lBSupportedHasBeenSet(false)
{
}

CoreInternalOutcome Node::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneInfo") && !value["ZoneInfo"].IsNull())
    {
        if (!value["ZoneInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Node.ZoneInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_zoneInfo.Deserialize(value["ZoneInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_zoneInfoHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Node.Country` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_country.Deserialize(value["Country"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Node.Area` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_area.Deserialize(value["Area"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Node.Province` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_province.Deserialize(value["Province"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Node.City` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_city.Deserialize(value["City"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cityHasBeenSet = true;
    }

    if (value.HasMember("RegionInfo") && !value["RegionInfo"].IsNull())
    {
        if (!value["RegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Node.RegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regionInfo.Deserialize(value["RegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionInfoHasBeenSet = true;
    }

    if (value.HasMember("ISPSet") && !value["ISPSet"].IsNull())
    {
        if (!value["ISPSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Node.ISPSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ISPSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ISP item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_iSPSet.push_back(item);
        }
        m_iSPSetHasBeenSet = true;
    }

    if (value.HasMember("ISPNum") && !value["ISPNum"].IsNull())
    {
        if (!value["ISPNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Node.ISPNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iSPNum = value["ISPNum"].GetInt64();
        m_iSPNumHasBeenSet = true;
    }

    if (value.HasMember("LBSupported") && !value["LBSupported"].IsNull())
    {
        if (!value["LBSupported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Node.LBSupported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_lBSupported = value["LBSupported"].GetBool();
        m_lBSupportedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Node::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_zoneInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_country.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_area.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_province.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_city.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iSPSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISPSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iSPSet.begin(); itr != m_iSPSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_iSPNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISPNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iSPNum, allocator);
    }

    if (m_lBSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LBSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lBSupported, allocator);
    }

}


ZoneInfo Node::GetZoneInfo() const
{
    return m_zoneInfo;
}

void Node::SetZoneInfo(const ZoneInfo& _zoneInfo)
{
    m_zoneInfo = _zoneInfo;
    m_zoneInfoHasBeenSet = true;
}

bool Node::ZoneInfoHasBeenSet() const
{
    return m_zoneInfoHasBeenSet;
}

Country Node::GetCountry() const
{
    return m_country;
}

void Node::SetCountry(const Country& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool Node::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

Area Node::GetArea() const
{
    return m_area;
}

void Node::SetArea(const Area& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool Node::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

Province Node::GetProvince() const
{
    return m_province;
}

void Node::SetProvince(const Province& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool Node::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

City Node::GetCity() const
{
    return m_city;
}

void Node::SetCity(const City& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool Node::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

RegionInfo Node::GetRegionInfo() const
{
    return m_regionInfo;
}

void Node::SetRegionInfo(const RegionInfo& _regionInfo)
{
    m_regionInfo = _regionInfo;
    m_regionInfoHasBeenSet = true;
}

bool Node::RegionInfoHasBeenSet() const
{
    return m_regionInfoHasBeenSet;
}

vector<ISP> Node::GetISPSet() const
{
    return m_iSPSet;
}

void Node::SetISPSet(const vector<ISP>& _iSPSet)
{
    m_iSPSet = _iSPSet;
    m_iSPSetHasBeenSet = true;
}

bool Node::ISPSetHasBeenSet() const
{
    return m_iSPSetHasBeenSet;
}

int64_t Node::GetISPNum() const
{
    return m_iSPNum;
}

void Node::SetISPNum(const int64_t& _iSPNum)
{
    m_iSPNum = _iSPNum;
    m_iSPNumHasBeenSet = true;
}

bool Node::ISPNumHasBeenSet() const
{
    return m_iSPNumHasBeenSet;
}

bool Node::GetLBSupported() const
{
    return m_lBSupported;
}

void Node::SetLBSupported(const bool& _lBSupported)
{
    m_lBSupported = _lBSupported;
    m_lBSupportedHasBeenSet = true;
}

bool Node::LBSupportedHasBeenSet() const
{
    return m_lBSupportedHasBeenSet;
}

