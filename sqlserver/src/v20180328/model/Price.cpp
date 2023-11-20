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

#include <tencentcloud/sqlserver/v20180328/model/Price.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

Price::Price() :
    m_prepaidPriceHasBeenSet(false),
    m_prepaidPriceUnitHasBeenSet(false),
    m_postpaidPriceHasBeenSet(false),
    m_postpaidPriceUnitHasBeenSet(false)
{
}

CoreInternalOutcome Price::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrepaidPrice") && !value["PrepaidPrice"].IsNull())
    {
        if (!value["PrepaidPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Price.PrepaidPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_prepaidPrice = value["PrepaidPrice"].GetUint64();
        m_prepaidPriceHasBeenSet = true;
    }

    if (value.HasMember("PrepaidPriceUnit") && !value["PrepaidPriceUnit"].IsNull())
    {
        if (!value["PrepaidPriceUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Price.PrepaidPriceUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prepaidPriceUnit = string(value["PrepaidPriceUnit"].GetString());
        m_prepaidPriceUnitHasBeenSet = true;
    }

    if (value.HasMember("PostpaidPrice") && !value["PostpaidPrice"].IsNull())
    {
        if (!value["PostpaidPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Price.PostpaidPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_postpaidPrice = value["PostpaidPrice"].GetUint64();
        m_postpaidPriceHasBeenSet = true;
    }

    if (value.HasMember("PostpaidPriceUnit") && !value["PostpaidPriceUnit"].IsNull())
    {
        if (!value["PostpaidPriceUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Price.PostpaidPriceUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postpaidPriceUnit = string(value["PostpaidPriceUnit"].GetString());
        m_postpaidPriceUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Price::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_prepaidPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepaidPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_prepaidPrice, allocator);
    }

    if (m_prepaidPriceUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepaidPriceUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prepaidPriceUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_postpaidPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostpaidPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postpaidPrice, allocator);
    }

    if (m_postpaidPriceUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostpaidPriceUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postpaidPriceUnit.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Price::GetPrepaidPrice() const
{
    return m_prepaidPrice;
}

void Price::SetPrepaidPrice(const uint64_t& _prepaidPrice)
{
    m_prepaidPrice = _prepaidPrice;
    m_prepaidPriceHasBeenSet = true;
}

bool Price::PrepaidPriceHasBeenSet() const
{
    return m_prepaidPriceHasBeenSet;
}

string Price::GetPrepaidPriceUnit() const
{
    return m_prepaidPriceUnit;
}

void Price::SetPrepaidPriceUnit(const string& _prepaidPriceUnit)
{
    m_prepaidPriceUnit = _prepaidPriceUnit;
    m_prepaidPriceUnitHasBeenSet = true;
}

bool Price::PrepaidPriceUnitHasBeenSet() const
{
    return m_prepaidPriceUnitHasBeenSet;
}

uint64_t Price::GetPostpaidPrice() const
{
    return m_postpaidPrice;
}

void Price::SetPostpaidPrice(const uint64_t& _postpaidPrice)
{
    m_postpaidPrice = _postpaidPrice;
    m_postpaidPriceHasBeenSet = true;
}

bool Price::PostpaidPriceHasBeenSet() const
{
    return m_postpaidPriceHasBeenSet;
}

string Price::GetPostpaidPriceUnit() const
{
    return m_postpaidPriceUnit;
}

void Price::SetPostpaidPriceUnit(const string& _postpaidPriceUnit)
{
    m_postpaidPriceUnit = _postpaidPriceUnit;
    m_postpaidPriceUnitHasBeenSet = true;
}

bool Price::PostpaidPriceUnitHasBeenSet() const
{
    return m_postpaidPriceUnitHasBeenSet;
}

