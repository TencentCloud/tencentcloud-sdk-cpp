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

#include <tencentcloud/cynosdb/v20190107/model/SlaveZoneStockInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SlaveZoneStockInfo::SlaveZoneStockInfo() :
    m_slaveZoneHasBeenSet(false),
    m_stockCountHasBeenSet(false),
    m_hasStockHasBeenSet(false)
{
}

CoreInternalOutcome SlaveZoneStockInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SlaveZone") && !value["SlaveZone"].IsNull())
    {
        if (!value["SlaveZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlaveZoneStockInfo.SlaveZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaveZone = string(value["SlaveZone"].GetString());
        m_slaveZoneHasBeenSet = true;
    }

    if (value.HasMember("StockCount") && !value["StockCount"].IsNull())
    {
        if (!value["StockCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SlaveZoneStockInfo.StockCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stockCount = value["StockCount"].GetUint64();
        m_stockCountHasBeenSet = true;
    }

    if (value.HasMember("HasStock") && !value["HasStock"].IsNull())
    {
        if (!value["HasStock"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SlaveZoneStockInfo.HasStock` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasStock = value["HasStock"].GetBool();
        m_hasStockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlaveZoneStockInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_slaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_stockCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StockCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stockCount, allocator);
    }

    if (m_hasStockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasStock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasStock, allocator);
    }

}


string SlaveZoneStockInfo::GetSlaveZone() const
{
    return m_slaveZone;
}

void SlaveZoneStockInfo::SetSlaveZone(const string& _slaveZone)
{
    m_slaveZone = _slaveZone;
    m_slaveZoneHasBeenSet = true;
}

bool SlaveZoneStockInfo::SlaveZoneHasBeenSet() const
{
    return m_slaveZoneHasBeenSet;
}

uint64_t SlaveZoneStockInfo::GetStockCount() const
{
    return m_stockCount;
}

void SlaveZoneStockInfo::SetStockCount(const uint64_t& _stockCount)
{
    m_stockCount = _stockCount;
    m_stockCountHasBeenSet = true;
}

bool SlaveZoneStockInfo::StockCountHasBeenSet() const
{
    return m_stockCountHasBeenSet;
}

bool SlaveZoneStockInfo::GetHasStock() const
{
    return m_hasStock;
}

void SlaveZoneStockInfo::SetHasStock(const bool& _hasStock)
{
    m_hasStock = _hasStock;
    m_hasStockHasBeenSet = true;
}

bool SlaveZoneStockInfo::HasStockHasBeenSet() const
{
    return m_hasStockHasBeenSet;
}

