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

#include <tencentcloud/iotexplorer/v20190423/model/PositionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

PositionItem::PositionItem() :
    m_createTimeHasBeenSet(false),
    m_longitudeHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_locationTypeHasBeenSet(false),
    m_accuracyHasBeenSet(false)
{
}

CoreInternalOutcome PositionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionItem.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Longitude") && !value["Longitude"].IsNull())
    {
        if (!value["Longitude"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PositionItem.Longitude` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_longitude = value["Longitude"].GetDouble();
        m_longitudeHasBeenSet = true;
    }

    if (value.HasMember("Latitude") && !value["Latitude"].IsNull())
    {
        if (!value["Latitude"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PositionItem.Latitude` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_latitude = value["Latitude"].GetDouble();
        m_latitudeHasBeenSet = true;
    }

    if (value.HasMember("LocationType") && !value["LocationType"].IsNull())
    {
        if (!value["LocationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PositionItem.LocationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locationType = string(value["LocationType"].GetString());
        m_locationTypeHasBeenSet = true;
    }

    if (value.HasMember("Accuracy") && !value["Accuracy"].IsNull())
    {
        if (!value["Accuracy"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PositionItem.Accuracy` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_accuracy = value["Accuracy"].GetDouble();
        m_accuracyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PositionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_longitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Longitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longitude, allocator);
    }

    if (m_latitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latitude, allocator);
    }

    if (m_locationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locationType.c_str(), allocator).Move(), allocator);
    }

    if (m_accuracyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Accuracy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accuracy, allocator);
    }

}


int64_t PositionItem::GetCreateTime() const
{
    return m_createTime;
}

void PositionItem::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PositionItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

double PositionItem::GetLongitude() const
{
    return m_longitude;
}

void PositionItem::SetLongitude(const double& _longitude)
{
    m_longitude = _longitude;
    m_longitudeHasBeenSet = true;
}

bool PositionItem::LongitudeHasBeenSet() const
{
    return m_longitudeHasBeenSet;
}

double PositionItem::GetLatitude() const
{
    return m_latitude;
}

void PositionItem::SetLatitude(const double& _latitude)
{
    m_latitude = _latitude;
    m_latitudeHasBeenSet = true;
}

bool PositionItem::LatitudeHasBeenSet() const
{
    return m_latitudeHasBeenSet;
}

string PositionItem::GetLocationType() const
{
    return m_locationType;
}

void PositionItem::SetLocationType(const string& _locationType)
{
    m_locationType = _locationType;
    m_locationTypeHasBeenSet = true;
}

bool PositionItem::LocationTypeHasBeenSet() const
{
    return m_locationTypeHasBeenSet;
}

double PositionItem::GetAccuracy() const
{
    return m_accuracy;
}

void PositionItem::SetAccuracy(const double& _accuracy)
{
    m_accuracy = _accuracy;
    m_accuracyHasBeenSet = true;
}

bool PositionItem::AccuracyHasBeenSet() const
{
    return m_accuracyHasBeenSet;
}

