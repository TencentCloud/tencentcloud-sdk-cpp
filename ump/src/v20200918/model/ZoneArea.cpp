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

#include <tencentcloud/ump/v20200918/model/ZoneArea.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

ZoneArea::ZoneArea() :
    m_zoneIdHasBeenSet(false),
    m_shopAreaHasBeenSet(false)
{
}

CoreInternalOutcome ZoneArea::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneArea.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ShopArea") && !value["ShopArea"].IsNull())
    {
        if (!value["ShopArea"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneArea.ShopArea` is not array type"));

        const rapidjson::Value &tmpValue = value["ShopArea"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_shopArea.push_back(item);
        }
        m_shopAreaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneArea::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_shopAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_shopArea.begin(); itr != m_shopArea.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ZoneArea::GetZoneId() const
{
    return m_zoneId;
}

void ZoneArea::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneArea::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<Point> ZoneArea::GetShopArea() const
{
    return m_shopArea;
}

void ZoneArea::SetShopArea(const vector<Point>& _shopArea)
{
    m_shopArea = _shopArea;
    m_shopAreaHasBeenSet = true;
}

bool ZoneArea::ShopAreaHasBeenSet() const
{
    return m_shopAreaHasBeenSet;
}

