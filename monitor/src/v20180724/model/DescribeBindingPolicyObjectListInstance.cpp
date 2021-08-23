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

#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeBindingPolicyObjectListInstance::DescribeBindingPolicyObjectListInstance() :
    m_uniqueIdHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_isShieldedHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBindingPolicyObjectListInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UniqueId") && !value["UniqueId"].IsNull())
    {
        if (!value["UniqueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBindingPolicyObjectListInstance.UniqueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueId = string(value["UniqueId"].GetString());
        m_uniqueIdHasBeenSet = true;
    }

    if (value.HasMember("Dimensions") && !value["Dimensions"].IsNull())
    {
        if (!value["Dimensions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBindingPolicyObjectListInstance.Dimensions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensions = string(value["Dimensions"].GetString());
        m_dimensionsHasBeenSet = true;
    }

    if (value.HasMember("IsShielded") && !value["IsShielded"].IsNull())
    {
        if (!value["IsShielded"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBindingPolicyObjectListInstance.IsShielded` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isShielded = value["IsShielded"].GetInt64();
        m_isShieldedHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBindingPolicyObjectListInstance.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeBindingPolicyObjectListInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uniqueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueId.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensions.c_str(), allocator).Move(), allocator);
    }

    if (m_isShieldedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShielded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShielded, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


string DescribeBindingPolicyObjectListInstance::GetUniqueId() const
{
    return m_uniqueId;
}

void DescribeBindingPolicyObjectListInstance::SetUniqueId(const string& _uniqueId)
{
    m_uniqueId = _uniqueId;
    m_uniqueIdHasBeenSet = true;
}

bool DescribeBindingPolicyObjectListInstance::UniqueIdHasBeenSet() const
{
    return m_uniqueIdHasBeenSet;
}

string DescribeBindingPolicyObjectListInstance::GetDimensions() const
{
    return m_dimensions;
}

void DescribeBindingPolicyObjectListInstance::SetDimensions(const string& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool DescribeBindingPolicyObjectListInstance::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

int64_t DescribeBindingPolicyObjectListInstance::GetIsShielded() const
{
    return m_isShielded;
}

void DescribeBindingPolicyObjectListInstance::SetIsShielded(const int64_t& _isShielded)
{
    m_isShielded = _isShielded;
    m_isShieldedHasBeenSet = true;
}

bool DescribeBindingPolicyObjectListInstance::IsShieldedHasBeenSet() const
{
    return m_isShieldedHasBeenSet;
}

string DescribeBindingPolicyObjectListInstance::GetRegion() const
{
    return m_region;
}

void DescribeBindingPolicyObjectListInstance::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DescribeBindingPolicyObjectListInstance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

