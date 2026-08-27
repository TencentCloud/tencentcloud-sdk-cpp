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

#include <tencentcloud/monitor/v20230616/model/DispenseRegion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

DispenseRegion::DispenseRegion() :
    m_regionHasBeenSet(false),
    m_regionCnNameHasBeenSet(false),
    m_regionEnNameHasBeenSet(false),
    m_ruleNumberHasBeenSet(false)
{
}

CoreInternalOutcome DispenseRegion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DispenseRegion.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionCnName") && !value["RegionCnName"].IsNull())
    {
        if (!value["RegionCnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DispenseRegion.RegionCnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCnName = string(value["RegionCnName"].GetString());
        m_regionCnNameHasBeenSet = true;
    }

    if (value.HasMember("RegionEnName") && !value["RegionEnName"].IsNull())
    {
        if (!value["RegionEnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DispenseRegion.RegionEnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionEnName = string(value["RegionEnName"].GetString());
        m_regionEnNameHasBeenSet = true;
    }

    if (value.HasMember("RuleNumber") && !value["RuleNumber"].IsNull())
    {
        if (!value["RuleNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DispenseRegion.RuleNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleNumber = value["RuleNumber"].GetInt64();
        m_ruleNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DispenseRegion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCnName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionEnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionEnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionEnName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleNumber, allocator);
    }

}


string DispenseRegion::GetRegion() const
{
    return m_region;
}

void DispenseRegion::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DispenseRegion::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DispenseRegion::GetRegionCnName() const
{
    return m_regionCnName;
}

void DispenseRegion::SetRegionCnName(const string& _regionCnName)
{
    m_regionCnName = _regionCnName;
    m_regionCnNameHasBeenSet = true;
}

bool DispenseRegion::RegionCnNameHasBeenSet() const
{
    return m_regionCnNameHasBeenSet;
}

string DispenseRegion::GetRegionEnName() const
{
    return m_regionEnName;
}

void DispenseRegion::SetRegionEnName(const string& _regionEnName)
{
    m_regionEnName = _regionEnName;
    m_regionEnNameHasBeenSet = true;
}

bool DispenseRegion::RegionEnNameHasBeenSet() const
{
    return m_regionEnNameHasBeenSet;
}

int64_t DispenseRegion::GetRuleNumber() const
{
    return m_ruleNumber;
}

void DispenseRegion::SetRuleNumber(const int64_t& _ruleNumber)
{
    m_ruleNumber = _ruleNumber;
    m_ruleNumberHasBeenSet = true;
}

bool DispenseRegion::RuleNumberHasBeenSet() const
{
    return m_ruleNumberHasBeenSet;
}

