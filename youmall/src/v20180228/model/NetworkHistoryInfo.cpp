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

#include <tencentcloud/youmall/v20180228/model/NetworkHistoryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

NetworkHistoryInfo::NetworkHistoryInfo() :
    m_countHasBeenSet(false),
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_shopNameHasBeenSet(false),
    m_infosHasBeenSet(false)
{
}

CoreInternalOutcome NetworkHistoryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkHistoryInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("CompanyId") && !value["CompanyId"].IsNull())
    {
        if (!value["CompanyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkHistoryInfo.CompanyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyId = string(value["CompanyId"].GetString());
        m_companyIdHasBeenSet = true;
    }

    if (value.HasMember("ShopId") && !value["ShopId"].IsNull())
    {
        if (!value["ShopId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkHistoryInfo.ShopId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = value["ShopId"].GetInt64();
        m_shopIdHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkHistoryInfo.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkHistoryInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("ShopName") && !value["ShopName"].IsNull())
    {
        if (!value["ShopName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkHistoryInfo.ShopName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopName = string(value["ShopName"].GetString());
        m_shopNameHasBeenSet = true;
    }

    if (value.HasMember("Infos") && !value["Infos"].IsNull())
    {
        if (!value["Infos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkHistoryInfo.Infos` is not array type"));

        const rapidjson::Value &tmpValue = value["Infos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_infos.push_back(item);
        }
        m_infosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkHistoryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyId.c_str(), allocator).Move(), allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shopId, allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_shopNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopName.c_str(), allocator).Move(), allocator);
    }

    if (m_infosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Infos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_infos.begin(); itr != m_infos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t NetworkHistoryInfo::GetCount() const
{
    return m_count;
}

void NetworkHistoryInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool NetworkHistoryInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string NetworkHistoryInfo::GetCompanyId() const
{
    return m_companyId;
}

void NetworkHistoryInfo::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool NetworkHistoryInfo::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t NetworkHistoryInfo::GetShopId() const
{
    return m_shopId;
}

void NetworkHistoryInfo::SetShopId(const int64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool NetworkHistoryInfo::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

string NetworkHistoryInfo::GetProvince() const
{
    return m_province;
}

void NetworkHistoryInfo::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool NetworkHistoryInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string NetworkHistoryInfo::GetCity() const
{
    return m_city;
}

void NetworkHistoryInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool NetworkHistoryInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string NetworkHistoryInfo::GetShopName() const
{
    return m_shopName;
}

void NetworkHistoryInfo::SetShopName(const string& _shopName)
{
    m_shopName = _shopName;
    m_shopNameHasBeenSet = true;
}

bool NetworkHistoryInfo::ShopNameHasBeenSet() const
{
    return m_shopNameHasBeenSet;
}

vector<NetworkInfo> NetworkHistoryInfo::GetInfos() const
{
    return m_infos;
}

void NetworkHistoryInfo::SetInfos(const vector<NetworkInfo>& _infos)
{
    m_infos = _infos;
    m_infosHasBeenSet = true;
}

bool NetworkHistoryInfo::InfosHasBeenSet() const
{
    return m_infosHasBeenSet;
}

