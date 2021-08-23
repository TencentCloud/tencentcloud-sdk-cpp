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

#include <tencentcloud/ame/v20190916/model/Package.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

Package::Package() :
    m_orderIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_authorizedAreaHasBeenSet(false),
    m_authorizedLimitHasBeenSet(false),
    m_termOfValidityHasBeenSet(false),
    m_commercialHasBeenSet(false),
    m_packagePriceHasBeenSet(false),
    m_effectTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_usedCountHasBeenSet(false),
    m_useRangesHasBeenSet(false)
{
}

CoreInternalOutcome Package::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedArea") && !value["AuthorizedArea"].IsNull())
    {
        if (!value["AuthorizedArea"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.AuthorizedArea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedArea = string(value["AuthorizedArea"].GetString());
        m_authorizedAreaHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedLimit") && !value["AuthorizedLimit"].IsNull())
    {
        if (!value["AuthorizedLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Package.AuthorizedLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedLimit = value["AuthorizedLimit"].GetInt64();
        m_authorizedLimitHasBeenSet = true;
    }

    if (value.HasMember("TermOfValidity") && !value["TermOfValidity"].IsNull())
    {
        if (!value["TermOfValidity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Package.TermOfValidity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_termOfValidity = value["TermOfValidity"].GetInt64();
        m_termOfValidityHasBeenSet = true;
    }

    if (value.HasMember("Commercial") && !value["Commercial"].IsNull())
    {
        if (!value["Commercial"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Package.Commercial` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commercial = value["Commercial"].GetInt64();
        m_commercialHasBeenSet = true;
    }

    if (value.HasMember("PackagePrice") && !value["PackagePrice"].IsNull())
    {
        if (!value["PackagePrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Package.PackagePrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_packagePrice = value["PackagePrice"].GetDouble();
        m_packagePriceHasBeenSet = true;
    }

    if (value.HasMember("EffectTime") && !value["EffectTime"].IsNull())
    {
        if (!value["EffectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.EffectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectTime = string(value["EffectTime"].GetString());
        m_effectTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("UsedCount") && !value["UsedCount"].IsNull())
    {
        if (!value["UsedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Package.UsedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedCount = value["UsedCount"].GetInt64();
        m_usedCountHasBeenSet = true;
    }

    if (value.HasMember("UseRanges") && !value["UseRanges"].IsNull())
    {
        if (!value["UseRanges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Package.UseRanges` is not array type"));

        const rapidjson::Value &tmpValue = value["UseRanges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UseRange item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_useRanges.push_back(item);
        }
        m_useRangesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Package::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizedArea.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizedLimit, allocator);
    }

    if (m_termOfValidityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TermOfValidity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_termOfValidity, allocator);
    }

    if (m_commercialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Commercial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commercial, allocator);
    }

    if (m_packagePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackagePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packagePrice, allocator);
    }

    if (m_effectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_usedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedCount, allocator);
    }

    if (m_useRangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseRanges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_useRanges.begin(); itr != m_useRanges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Package::GetOrderId() const
{
    return m_orderId;
}

void Package::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool Package::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string Package::GetName() const
{
    return m_name;
}

void Package::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Package::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Package::GetAuthorizedArea() const
{
    return m_authorizedArea;
}

void Package::SetAuthorizedArea(const string& _authorizedArea)
{
    m_authorizedArea = _authorizedArea;
    m_authorizedAreaHasBeenSet = true;
}

bool Package::AuthorizedAreaHasBeenSet() const
{
    return m_authorizedAreaHasBeenSet;
}

int64_t Package::GetAuthorizedLimit() const
{
    return m_authorizedLimit;
}

void Package::SetAuthorizedLimit(const int64_t& _authorizedLimit)
{
    m_authorizedLimit = _authorizedLimit;
    m_authorizedLimitHasBeenSet = true;
}

bool Package::AuthorizedLimitHasBeenSet() const
{
    return m_authorizedLimitHasBeenSet;
}

int64_t Package::GetTermOfValidity() const
{
    return m_termOfValidity;
}

void Package::SetTermOfValidity(const int64_t& _termOfValidity)
{
    m_termOfValidity = _termOfValidity;
    m_termOfValidityHasBeenSet = true;
}

bool Package::TermOfValidityHasBeenSet() const
{
    return m_termOfValidityHasBeenSet;
}

int64_t Package::GetCommercial() const
{
    return m_commercial;
}

void Package::SetCommercial(const int64_t& _commercial)
{
    m_commercial = _commercial;
    m_commercialHasBeenSet = true;
}

bool Package::CommercialHasBeenSet() const
{
    return m_commercialHasBeenSet;
}

double Package::GetPackagePrice() const
{
    return m_packagePrice;
}

void Package::SetPackagePrice(const double& _packagePrice)
{
    m_packagePrice = _packagePrice;
    m_packagePriceHasBeenSet = true;
}

bool Package::PackagePriceHasBeenSet() const
{
    return m_packagePriceHasBeenSet;
}

string Package::GetEffectTime() const
{
    return m_effectTime;
}

void Package::SetEffectTime(const string& _effectTime)
{
    m_effectTime = _effectTime;
    m_effectTimeHasBeenSet = true;
}

bool Package::EffectTimeHasBeenSet() const
{
    return m_effectTimeHasBeenSet;
}

string Package::GetExpireTime() const
{
    return m_expireTime;
}

void Package::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Package::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t Package::GetUsedCount() const
{
    return m_usedCount;
}

void Package::SetUsedCount(const int64_t& _usedCount)
{
    m_usedCount = _usedCount;
    m_usedCountHasBeenSet = true;
}

bool Package::UsedCountHasBeenSet() const
{
    return m_usedCountHasBeenSet;
}

vector<UseRange> Package::GetUseRanges() const
{
    return m_useRanges;
}

void Package::SetUseRanges(const vector<UseRange>& _useRanges)
{
    m_useRanges = _useRanges;
    m_useRangesHasBeenSet = true;
}

bool Package::UseRangesHasBeenSet() const
{
    return m_useRangesHasBeenSet;
}

