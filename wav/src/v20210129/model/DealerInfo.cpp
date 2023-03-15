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

#include <tencentcloud/wav/v20210129/model/DealerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

DealerInfo::DealerInfo() :
    m_dealerIdHasBeenSet(false),
    m_dealerNameHasBeenSet(false),
    m_provinceCodeHasBeenSet(false),
    m_cityCodeListHasBeenSet(false),
    m_brandIdListHasBeenSet(false)
{
}

CoreInternalOutcome DealerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DealerId") && !value["DealerId"].IsNull())
    {
        if (!value["DealerId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DealerInfo.DealerId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dealerId = value["DealerId"].GetUint64();
        m_dealerIdHasBeenSet = true;
    }

    if (value.HasMember("DealerName") && !value["DealerName"].IsNull())
    {
        if (!value["DealerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DealerInfo.DealerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealerName = string(value["DealerName"].GetString());
        m_dealerNameHasBeenSet = true;
    }

    if (value.HasMember("ProvinceCode") && !value["ProvinceCode"].IsNull())
    {
        if (!value["ProvinceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DealerInfo.ProvinceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinceCode = string(value["ProvinceCode"].GetString());
        m_provinceCodeHasBeenSet = true;
    }

    if (value.HasMember("CityCodeList") && !value["CityCodeList"].IsNull())
    {
        if (!value["CityCodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DealerInfo.CityCodeList` is not array type"));

        const rapidjson::Value &tmpValue = value["CityCodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cityCodeList.push_back((*itr).GetString());
        }
        m_cityCodeListHasBeenSet = true;
    }

    if (value.HasMember("BrandIdList") && !value["BrandIdList"].IsNull())
    {
        if (!value["BrandIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DealerInfo.BrandIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["BrandIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_brandIdList.push_back((*itr).GetString());
        }
        m_brandIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DealerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dealerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dealerId, allocator);
    }

    if (m_dealerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealerName.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provinceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_cityCodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityCodeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cityCodeList.begin(); itr != m_cityCodeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_brandIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_brandIdList.begin(); itr != m_brandIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t DealerInfo::GetDealerId() const
{
    return m_dealerId;
}

void DealerInfo::SetDealerId(const uint64_t& _dealerId)
{
    m_dealerId = _dealerId;
    m_dealerIdHasBeenSet = true;
}

bool DealerInfo::DealerIdHasBeenSet() const
{
    return m_dealerIdHasBeenSet;
}

string DealerInfo::GetDealerName() const
{
    return m_dealerName;
}

void DealerInfo::SetDealerName(const string& _dealerName)
{
    m_dealerName = _dealerName;
    m_dealerNameHasBeenSet = true;
}

bool DealerInfo::DealerNameHasBeenSet() const
{
    return m_dealerNameHasBeenSet;
}

string DealerInfo::GetProvinceCode() const
{
    return m_provinceCode;
}

void DealerInfo::SetProvinceCode(const string& _provinceCode)
{
    m_provinceCode = _provinceCode;
    m_provinceCodeHasBeenSet = true;
}

bool DealerInfo::ProvinceCodeHasBeenSet() const
{
    return m_provinceCodeHasBeenSet;
}

vector<string> DealerInfo::GetCityCodeList() const
{
    return m_cityCodeList;
}

void DealerInfo::SetCityCodeList(const vector<string>& _cityCodeList)
{
    m_cityCodeList = _cityCodeList;
    m_cityCodeListHasBeenSet = true;
}

bool DealerInfo::CityCodeListHasBeenSet() const
{
    return m_cityCodeListHasBeenSet;
}

vector<string> DealerInfo::GetBrandIdList() const
{
    return m_brandIdList;
}

void DealerInfo::SetBrandIdList(const vector<string>& _brandIdList)
{
    m_brandIdList = _brandIdList;
    m_brandIdListHasBeenSet = true;
}

bool DealerInfo::BrandIdListHasBeenSet() const
{
    return m_brandIdListHasBeenSet;
}

