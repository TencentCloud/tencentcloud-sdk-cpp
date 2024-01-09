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

#include <tencentcloud/cynosdb/v20190107/model/ZoneStockInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ZoneStockInfo::ZoneStockInfo() :
    m_zoneHasBeenSet(false),
    m_hasStockHasBeenSet(false),
    m_stockCountHasBeenSet(false),
    m_slaveZoneStockInfosHasBeenSet(false)
{
}

CoreInternalOutcome ZoneStockInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStockInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("HasStock") && !value["HasStock"].IsNull())
    {
        if (!value["HasStock"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStockInfo.HasStock` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasStock = value["HasStock"].GetBool();
        m_hasStockHasBeenSet = true;
    }

    if (value.HasMember("StockCount") && !value["StockCount"].IsNull())
    {
        if (!value["StockCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStockInfo.StockCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stockCount = value["StockCount"].GetInt64();
        m_stockCountHasBeenSet = true;
    }

    if (value.HasMember("SlaveZoneStockInfos") && !value["SlaveZoneStockInfos"].IsNull())
    {
        if (!value["SlaveZoneStockInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneStockInfo.SlaveZoneStockInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["SlaveZoneStockInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SlaveZoneStockInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_slaveZoneStockInfos.push_back(item);
        }
        m_slaveZoneStockInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneStockInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_hasStockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasStock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasStock, allocator);
    }

    if (m_stockCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StockCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stockCount, allocator);
    }

    if (m_slaveZoneStockInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZoneStockInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slaveZoneStockInfos.begin(); itr != m_slaveZoneStockInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ZoneStockInfo::GetZone() const
{
    return m_zone;
}

void ZoneStockInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ZoneStockInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

bool ZoneStockInfo::GetHasStock() const
{
    return m_hasStock;
}

void ZoneStockInfo::SetHasStock(const bool& _hasStock)
{
    m_hasStock = _hasStock;
    m_hasStockHasBeenSet = true;
}

bool ZoneStockInfo::HasStockHasBeenSet() const
{
    return m_hasStockHasBeenSet;
}

int64_t ZoneStockInfo::GetStockCount() const
{
    return m_stockCount;
}

void ZoneStockInfo::SetStockCount(const int64_t& _stockCount)
{
    m_stockCount = _stockCount;
    m_stockCountHasBeenSet = true;
}

bool ZoneStockInfo::StockCountHasBeenSet() const
{
    return m_stockCountHasBeenSet;
}

vector<SlaveZoneStockInfo> ZoneStockInfo::GetSlaveZoneStockInfos() const
{
    return m_slaveZoneStockInfos;
}

void ZoneStockInfo::SetSlaveZoneStockInfos(const vector<SlaveZoneStockInfo>& _slaveZoneStockInfos)
{
    m_slaveZoneStockInfos = _slaveZoneStockInfos;
    m_slaveZoneStockInfosHasBeenSet = true;
}

bool ZoneStockInfo::SlaveZoneStockInfosHasBeenSet() const
{
    return m_slaveZoneStockInfosHasBeenSet;
}

