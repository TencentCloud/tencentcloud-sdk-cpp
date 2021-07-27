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

#include <tencentcloud/market/v20191010/model/SyncUserAndOrderInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Market::V20191010::Model;
using namespace std;

SyncUserAndOrderInfoDetail::SyncUserAndOrderInfoDetail() :
    m_totalCountHasBeenSet(false),
    m_marketOrdersHasBeenSet(false),
    m_ownerUinHasBeenSet(false)
{
}

CoreInternalOutcome SyncUserAndOrderInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SyncUserAndOrderInfoDetail.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("MarketOrders") && !value["MarketOrders"].IsNull())
    {
        if (!value["MarketOrders"].IsArray())
            return CoreInternalOutcome(Error("response `SyncUserAndOrderInfoDetail.MarketOrders` is not array type"));

        const rapidjson::Value &tmpValue = value["MarketOrders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_marketOrders.push_back((*itr).GetString());
        }
        m_marketOrdersHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncUserAndOrderInfoDetail.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncUserAndOrderInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_marketOrdersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarketOrders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_marketOrders.begin(); itr != m_marketOrders.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SyncUserAndOrderInfoDetail::GetTotalCount() const
{
    return m_totalCount;
}

void SyncUserAndOrderInfoDetail::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool SyncUserAndOrderInfoDetail::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<string> SyncUserAndOrderInfoDetail::GetMarketOrders() const
{
    return m_marketOrders;
}

void SyncUserAndOrderInfoDetail::SetMarketOrders(const vector<string>& _marketOrders)
{
    m_marketOrders = _marketOrders;
    m_marketOrdersHasBeenSet = true;
}

bool SyncUserAndOrderInfoDetail::MarketOrdersHasBeenSet() const
{
    return m_marketOrdersHasBeenSet;
}

string SyncUserAndOrderInfoDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void SyncUserAndOrderInfoDetail::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool SyncUserAndOrderInfoDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

