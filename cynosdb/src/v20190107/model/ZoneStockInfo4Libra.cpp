/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cynosdb/v20190107/model/ZoneStockInfo4Libra.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ZoneStockInfo4Libra::ZoneStockInfo4Libra() :
    m_zoneHasBeenSet(false),
    m_hasStockHasBeenSet(false)
{
}

CoreInternalOutcome ZoneStockInfo4Libra::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStockInfo4Libra.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("HasStock") && !value["HasStock"].IsNull())
    {
        if (!value["HasStock"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneStockInfo4Libra.HasStock` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasStock = value["HasStock"].GetBool();
        m_hasStockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneStockInfo4Libra::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string ZoneStockInfo4Libra::GetZone() const
{
    return m_zone;
}

void ZoneStockInfo4Libra::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ZoneStockInfo4Libra::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

bool ZoneStockInfo4Libra::GetHasStock() const
{
    return m_hasStock;
}

void ZoneStockInfo4Libra::SetHasStock(const bool& _hasStock)
{
    m_hasStock = _hasStock;
    m_hasStockHasBeenSet = true;
}

bool ZoneStockInfo4Libra::HasStockHasBeenSet() const
{
    return m_hasStockHasBeenSet;
}

