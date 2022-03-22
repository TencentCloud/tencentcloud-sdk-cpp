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

#include <tencentcloud/privatedns/v20201028/model/TldQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

TldQuota::TldQuota() :
    m_totalHasBeenSet(false),
    m_usedHasBeenSet(false),
    m_stockHasBeenSet(false),
    m_quotaHasBeenSet(false)
{
}

CoreInternalOutcome TldQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TldQuota.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TldQuota.Used` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetInt64();
        m_usedHasBeenSet = true;
    }

    if (value.HasMember("Stock") && !value["Stock"].IsNull())
    {
        if (!value["Stock"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TldQuota.Stock` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stock = value["Stock"].GetInt64();
        m_stockHasBeenSet = true;
    }

    if (value.HasMember("Quota") && !value["Quota"].IsNull())
    {
        if (!value["Quota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TldQuota.Quota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quota = value["Quota"].GetInt64();
        m_quotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TldQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

    if (m_stockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stock, allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quota, allocator);
    }

}


int64_t TldQuota::GetTotal() const
{
    return m_total;
}

void TldQuota::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool TldQuota::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t TldQuota::GetUsed() const
{
    return m_used;
}

void TldQuota::SetUsed(const int64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool TldQuota::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

int64_t TldQuota::GetStock() const
{
    return m_stock;
}

void TldQuota::SetStock(const int64_t& _stock)
{
    m_stock = _stock;
    m_stockHasBeenSet = true;
}

bool TldQuota::StockHasBeenSet() const
{
    return m_stockHasBeenSet;
}

int64_t TldQuota::GetQuota() const
{
    return m_quota;
}

void TldQuota::SetQuota(const int64_t& _quota)
{
    m_quota = _quota;
    m_quotaHasBeenSet = true;
}

bool TldQuota::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

