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

#include <tencentcloud/youmall/v20180228/model/PersonTracePoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

PersonTracePoint::PersonTracePoint() :
    m_mallAreaIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_mallAreaTypeHasBeenSet(false),
    m_traceEventTypeHasBeenSet(false),
    m_traceEventTimeHasBeenSet(false),
    m_capPicHasBeenSet(false),
    m_shoppingBagTypeHasBeenSet(false),
    m_shoppingBagCountHasBeenSet(false)
{
}

CoreInternalOutcome PersonTracePoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MallAreaId") && !value["MallAreaId"].IsNull())
    {
        if (!value["MallAreaId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonTracePoint.MallAreaId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mallAreaId = value["MallAreaId"].GetUint64();
        m_mallAreaIdHasBeenSet = true;
    }

    if (value.HasMember("ShopId") && !value["ShopId"].IsNull())
    {
        if (!value["ShopId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonTracePoint.ShopId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = value["ShopId"].GetUint64();
        m_shopIdHasBeenSet = true;
    }

    if (value.HasMember("MallAreaType") && !value["MallAreaType"].IsNull())
    {
        if (!value["MallAreaType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonTracePoint.MallAreaType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mallAreaType = value["MallAreaType"].GetUint64();
        m_mallAreaTypeHasBeenSet = true;
    }

    if (value.HasMember("TraceEventType") && !value["TraceEventType"].IsNull())
    {
        if (!value["TraceEventType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonTracePoint.TraceEventType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_traceEventType = value["TraceEventType"].GetUint64();
        m_traceEventTypeHasBeenSet = true;
    }

    if (value.HasMember("TraceEventTime") && !value["TraceEventTime"].IsNull())
    {
        if (!value["TraceEventTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonTracePoint.TraceEventTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceEventTime = string(value["TraceEventTime"].GetString());
        m_traceEventTimeHasBeenSet = true;
    }

    if (value.HasMember("CapPic") && !value["CapPic"].IsNull())
    {
        if (!value["CapPic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonTracePoint.CapPic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capPic = string(value["CapPic"].GetString());
        m_capPicHasBeenSet = true;
    }

    if (value.HasMember("ShoppingBagType") && !value["ShoppingBagType"].IsNull())
    {
        if (!value["ShoppingBagType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonTracePoint.ShoppingBagType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shoppingBagType = value["ShoppingBagType"].GetUint64();
        m_shoppingBagTypeHasBeenSet = true;
    }

    if (value.HasMember("ShoppingBagCount") && !value["ShoppingBagCount"].IsNull())
    {
        if (!value["ShoppingBagCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonTracePoint.ShoppingBagCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shoppingBagCount = value["ShoppingBagCount"].GetUint64();
        m_shoppingBagCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonTracePoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mallAreaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MallAreaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mallAreaId, allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shopId, allocator);
    }

    if (m_mallAreaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MallAreaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mallAreaType, allocator);
    }

    if (m_traceEventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceEventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_traceEventType, allocator);
    }

    if (m_traceEventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceEventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceEventTime.c_str(), allocator).Move(), allocator);
    }

    if (m_capPicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapPic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capPic.c_str(), allocator).Move(), allocator);
    }

    if (m_shoppingBagTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShoppingBagType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shoppingBagType, allocator);
    }

    if (m_shoppingBagCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShoppingBagCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shoppingBagCount, allocator);
    }

}


uint64_t PersonTracePoint::GetMallAreaId() const
{
    return m_mallAreaId;
}

void PersonTracePoint::SetMallAreaId(const uint64_t& _mallAreaId)
{
    m_mallAreaId = _mallAreaId;
    m_mallAreaIdHasBeenSet = true;
}

bool PersonTracePoint::MallAreaIdHasBeenSet() const
{
    return m_mallAreaIdHasBeenSet;
}

uint64_t PersonTracePoint::GetShopId() const
{
    return m_shopId;
}

void PersonTracePoint::SetShopId(const uint64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool PersonTracePoint::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

uint64_t PersonTracePoint::GetMallAreaType() const
{
    return m_mallAreaType;
}

void PersonTracePoint::SetMallAreaType(const uint64_t& _mallAreaType)
{
    m_mallAreaType = _mallAreaType;
    m_mallAreaTypeHasBeenSet = true;
}

bool PersonTracePoint::MallAreaTypeHasBeenSet() const
{
    return m_mallAreaTypeHasBeenSet;
}

uint64_t PersonTracePoint::GetTraceEventType() const
{
    return m_traceEventType;
}

void PersonTracePoint::SetTraceEventType(const uint64_t& _traceEventType)
{
    m_traceEventType = _traceEventType;
    m_traceEventTypeHasBeenSet = true;
}

bool PersonTracePoint::TraceEventTypeHasBeenSet() const
{
    return m_traceEventTypeHasBeenSet;
}

string PersonTracePoint::GetTraceEventTime() const
{
    return m_traceEventTime;
}

void PersonTracePoint::SetTraceEventTime(const string& _traceEventTime)
{
    m_traceEventTime = _traceEventTime;
    m_traceEventTimeHasBeenSet = true;
}

bool PersonTracePoint::TraceEventTimeHasBeenSet() const
{
    return m_traceEventTimeHasBeenSet;
}

string PersonTracePoint::GetCapPic() const
{
    return m_capPic;
}

void PersonTracePoint::SetCapPic(const string& _capPic)
{
    m_capPic = _capPic;
    m_capPicHasBeenSet = true;
}

bool PersonTracePoint::CapPicHasBeenSet() const
{
    return m_capPicHasBeenSet;
}

uint64_t PersonTracePoint::GetShoppingBagType() const
{
    return m_shoppingBagType;
}

void PersonTracePoint::SetShoppingBagType(const uint64_t& _shoppingBagType)
{
    m_shoppingBagType = _shoppingBagType;
    m_shoppingBagTypeHasBeenSet = true;
}

bool PersonTracePoint::ShoppingBagTypeHasBeenSet() const
{
    return m_shoppingBagTypeHasBeenSet;
}

uint64_t PersonTracePoint::GetShoppingBagCount() const
{
    return m_shoppingBagCount;
}

void PersonTracePoint::SetShoppingBagCount(const uint64_t& _shoppingBagCount)
{
    m_shoppingBagCount = _shoppingBagCount;
    m_shoppingBagCountHasBeenSet = true;
}

bool PersonTracePoint::ShoppingBagCountHasBeenSet() const
{
    return m_shoppingBagCountHasBeenSet;
}

