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

#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectDimension.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

BindingPolicyObjectDimension::BindingPolicyObjectDimension() :
    m_regionHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_eventDimensionsHasBeenSet(false)
{
}

CoreInternalOutcome BindingPolicyObjectDimension::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindingPolicyObjectDimension.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BindingPolicyObjectDimension.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("Dimensions") && !value["Dimensions"].IsNull())
    {
        if (!value["Dimensions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindingPolicyObjectDimension.Dimensions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensions = string(value["Dimensions"].GetString());
        m_dimensionsHasBeenSet = true;
    }

    if (value.HasMember("EventDimensions") && !value["EventDimensions"].IsNull())
    {
        if (!value["EventDimensions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindingPolicyObjectDimension.EventDimensions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventDimensions = string(value["EventDimensions"].GetString());
        m_eventDimensionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindingPolicyObjectDimension::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensions.c_str(), allocator).Move(), allocator);
    }

    if (m_eventDimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventDimensions.c_str(), allocator).Move(), allocator);
    }

}


string BindingPolicyObjectDimension::GetRegion() const
{
    return m_region;
}

void BindingPolicyObjectDimension::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BindingPolicyObjectDimension::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t BindingPolicyObjectDimension::GetRegionId() const
{
    return m_regionId;
}

void BindingPolicyObjectDimension::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool BindingPolicyObjectDimension::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string BindingPolicyObjectDimension::GetDimensions() const
{
    return m_dimensions;
}

void BindingPolicyObjectDimension::SetDimensions(const string& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool BindingPolicyObjectDimension::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

string BindingPolicyObjectDimension::GetEventDimensions() const
{
    return m_eventDimensions;
}

void BindingPolicyObjectDimension::SetEventDimensions(const string& _eventDimensions)
{
    m_eventDimensions = _eventDimensions;
    m_eventDimensionsHasBeenSet = true;
}

bool BindingPolicyObjectDimension::EventDimensionsHasBeenSet() const
{
    return m_eventDimensionsHasBeenSet;
}

