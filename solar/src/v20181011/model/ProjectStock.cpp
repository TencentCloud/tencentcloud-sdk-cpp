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

#include <tencentcloud/solar/v20181011/model/ProjectStock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

ProjectStock::ProjectStock() :
    m_prizeIdHasBeenSet(false),
    m_prizeBatHasBeenSet(false),
    m_prizeNameHasBeenSet(false),
    m_usedStockHasBeenSet(false),
    m_remainStockHasBeenSet(false),
    m_poolIdxHasBeenSet(false),
    m_poolNameHasBeenSet(false)
{
}

CoreInternalOutcome ProjectStock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrizeId") && !value["PrizeId"].IsNull())
    {
        if (!value["PrizeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectStock.PrizeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prizeId = string(value["PrizeId"].GetString());
        m_prizeIdHasBeenSet = true;
    }

    if (value.HasMember("PrizeBat") && !value["PrizeBat"].IsNull())
    {
        if (!value["PrizeBat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectStock.PrizeBat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_prizeBat = value["PrizeBat"].GetUint64();
        m_prizeBatHasBeenSet = true;
    }

    if (value.HasMember("PrizeName") && !value["PrizeName"].IsNull())
    {
        if (!value["PrizeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectStock.PrizeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prizeName = string(value["PrizeName"].GetString());
        m_prizeNameHasBeenSet = true;
    }

    if (value.HasMember("UsedStock") && !value["UsedStock"].IsNull())
    {
        if (!value["UsedStock"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectStock.UsedStock` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedStock = value["UsedStock"].GetUint64();
        m_usedStockHasBeenSet = true;
    }

    if (value.HasMember("RemainStock") && !value["RemainStock"].IsNull())
    {
        if (!value["RemainStock"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectStock.RemainStock` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_remainStock = value["RemainStock"].GetUint64();
        m_remainStockHasBeenSet = true;
    }

    if (value.HasMember("PoolIdx") && !value["PoolIdx"].IsNull())
    {
        if (!value["PoolIdx"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectStock.PoolIdx` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_poolIdx = value["PoolIdx"].GetUint64();
        m_poolIdxHasBeenSet = true;
    }

    if (value.HasMember("PoolName") && !value["PoolName"].IsNull())
    {
        if (!value["PoolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectStock.PoolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_poolName = string(value["PoolName"].GetString());
        m_poolNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectStock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_prizeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrizeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prizeId.c_str(), allocator).Move(), allocator);
    }

    if (m_prizeBatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrizeBat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_prizeBat, allocator);
    }

    if (m_prizeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrizeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prizeName.c_str(), allocator).Move(), allocator);
    }

    if (m_usedStockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedStock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedStock, allocator);
    }

    if (m_remainStockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainStock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainStock, allocator);
    }

    if (m_poolIdxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolIdx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_poolIdx, allocator);
    }

    if (m_poolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_poolName.c_str(), allocator).Move(), allocator);
    }

}


string ProjectStock::GetPrizeId() const
{
    return m_prizeId;
}

void ProjectStock::SetPrizeId(const string& _prizeId)
{
    m_prizeId = _prizeId;
    m_prizeIdHasBeenSet = true;
}

bool ProjectStock::PrizeIdHasBeenSet() const
{
    return m_prizeIdHasBeenSet;
}

uint64_t ProjectStock::GetPrizeBat() const
{
    return m_prizeBat;
}

void ProjectStock::SetPrizeBat(const uint64_t& _prizeBat)
{
    m_prizeBat = _prizeBat;
    m_prizeBatHasBeenSet = true;
}

bool ProjectStock::PrizeBatHasBeenSet() const
{
    return m_prizeBatHasBeenSet;
}

string ProjectStock::GetPrizeName() const
{
    return m_prizeName;
}

void ProjectStock::SetPrizeName(const string& _prizeName)
{
    m_prizeName = _prizeName;
    m_prizeNameHasBeenSet = true;
}

bool ProjectStock::PrizeNameHasBeenSet() const
{
    return m_prizeNameHasBeenSet;
}

uint64_t ProjectStock::GetUsedStock() const
{
    return m_usedStock;
}

void ProjectStock::SetUsedStock(const uint64_t& _usedStock)
{
    m_usedStock = _usedStock;
    m_usedStockHasBeenSet = true;
}

bool ProjectStock::UsedStockHasBeenSet() const
{
    return m_usedStockHasBeenSet;
}

uint64_t ProjectStock::GetRemainStock() const
{
    return m_remainStock;
}

void ProjectStock::SetRemainStock(const uint64_t& _remainStock)
{
    m_remainStock = _remainStock;
    m_remainStockHasBeenSet = true;
}

bool ProjectStock::RemainStockHasBeenSet() const
{
    return m_remainStockHasBeenSet;
}

uint64_t ProjectStock::GetPoolIdx() const
{
    return m_poolIdx;
}

void ProjectStock::SetPoolIdx(const uint64_t& _poolIdx)
{
    m_poolIdx = _poolIdx;
    m_poolIdxHasBeenSet = true;
}

bool ProjectStock::PoolIdxHasBeenSet() const
{
    return m_poolIdxHasBeenSet;
}

string ProjectStock::GetPoolName() const
{
    return m_poolName;
}

void ProjectStock::SetPoolName(const string& _poolName)
{
    m_poolName = _poolName;
    m_poolNameHasBeenSet = true;
}

bool ProjectStock::PoolNameHasBeenSet() const
{
    return m_poolNameHasBeenSet;
}

