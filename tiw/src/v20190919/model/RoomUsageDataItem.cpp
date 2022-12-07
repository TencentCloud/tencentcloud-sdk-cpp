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

#include <tencentcloud/tiw/v20190919/model/RoomUsageDataItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

RoomUsageDataItem::RoomUsageDataItem() :
    m_timeHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_subProductHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_roomIDHasBeenSet(false)
{
}

CoreInternalOutcome RoomUsageDataItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomUsageDataItem.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomUsageDataItem.SdkAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = value["SdkAppId"].GetInt64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("SubProduct") && !value["SubProduct"].IsNull())
    {
        if (!value["SubProduct"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomUsageDataItem.SubProduct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProduct = string(value["SubProduct"].GetString());
        m_subProductHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RoomUsageDataItem.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("RoomID") && !value["RoomID"].IsNull())
    {
        if (!value["RoomID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomUsageDataItem.RoomID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roomID = value["RoomID"].GetUint64();
        m_roomIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoomUsageDataItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_subProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProduct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProduct.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_roomIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomID, allocator);
    }

}


string RoomUsageDataItem::GetTime() const
{
    return m_time;
}

void RoomUsageDataItem::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool RoomUsageDataItem::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t RoomUsageDataItem::GetSdkAppId() const
{
    return m_sdkAppId;
}

void RoomUsageDataItem::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool RoomUsageDataItem::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string RoomUsageDataItem::GetSubProduct() const
{
    return m_subProduct;
}

void RoomUsageDataItem::SetSubProduct(const string& _subProduct)
{
    m_subProduct = _subProduct;
    m_subProductHasBeenSet = true;
}

bool RoomUsageDataItem::SubProductHasBeenSet() const
{
    return m_subProductHasBeenSet;
}

double RoomUsageDataItem::GetValue() const
{
    return m_value;
}

void RoomUsageDataItem::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool RoomUsageDataItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

uint64_t RoomUsageDataItem::GetRoomID() const
{
    return m_roomID;
}

void RoomUsageDataItem::SetRoomID(const uint64_t& _roomID)
{
    m_roomID = _roomID;
    m_roomIDHasBeenSet = true;
}

bool RoomUsageDataItem::RoomIDHasBeenSet() const
{
    return m_roomIDHasBeenSet;
}

