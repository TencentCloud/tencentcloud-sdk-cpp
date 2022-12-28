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

#include <tencentcloud/region/v20220627/model/RegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Region::V20220627::Model;
using namespace std;

RegionInfo::RegionInfo() :
    m_regionHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionStateHasBeenSet(false),
    m_regionTypeMCHasBeenSet(false),
    m_locationMCHasBeenSet(false),
    m_regionNameMCHasBeenSet(false),
    m_regionIdMCHasBeenSet(false)
{
}

CoreInternalOutcome RegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionState") && !value["RegionState"].IsNull())
    {
        if (!value["RegionState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionState = string(value["RegionState"].GetString());
        m_regionStateHasBeenSet = true;
    }

    if (value.HasMember("RegionTypeMC") && !value["RegionTypeMC"].IsNull())
    {
        if (!value["RegionTypeMC"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionTypeMC` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionTypeMC = value["RegionTypeMC"].GetInt64();
        m_regionTypeMCHasBeenSet = true;
    }

    if (value.HasMember("LocationMC") && !value["LocationMC"].IsNull())
    {
        if (!value["LocationMC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.LocationMC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locationMC = string(value["LocationMC"].GetString());
        m_locationMCHasBeenSet = true;
    }

    if (value.HasMember("RegionNameMC") && !value["RegionNameMC"].IsNull())
    {
        if (!value["RegionNameMC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionNameMC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionNameMC = string(value["RegionNameMC"].GetString());
        m_regionNameMCHasBeenSet = true;
    }

    if (value.HasMember("RegionIdMC") && !value["RegionIdMC"].IsNull())
    {
        if (!value["RegionIdMC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionIdMC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionIdMC = string(value["RegionIdMC"].GetString());
        m_regionIdMCHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionState.c_str(), allocator).Move(), allocator);
    }

    if (m_regionTypeMCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionTypeMC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionTypeMC, allocator);
    }

    if (m_locationMCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationMC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locationMC.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameMCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionNameMC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionNameMC.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdMCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionIdMC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionIdMC.c_str(), allocator).Move(), allocator);
    }

}


string RegionInfo::GetRegion() const
{
    return m_region;
}

void RegionInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RegionInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string RegionInfo::GetRegionName() const
{
    return m_regionName;
}

void RegionInfo::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool RegionInfo::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string RegionInfo::GetRegionState() const
{
    return m_regionState;
}

void RegionInfo::SetRegionState(const string& _regionState)
{
    m_regionState = _regionState;
    m_regionStateHasBeenSet = true;
}

bool RegionInfo::RegionStateHasBeenSet() const
{
    return m_regionStateHasBeenSet;
}

int64_t RegionInfo::GetRegionTypeMC() const
{
    return m_regionTypeMC;
}

void RegionInfo::SetRegionTypeMC(const int64_t& _regionTypeMC)
{
    m_regionTypeMC = _regionTypeMC;
    m_regionTypeMCHasBeenSet = true;
}

bool RegionInfo::RegionTypeMCHasBeenSet() const
{
    return m_regionTypeMCHasBeenSet;
}

string RegionInfo::GetLocationMC() const
{
    return m_locationMC;
}

void RegionInfo::SetLocationMC(const string& _locationMC)
{
    m_locationMC = _locationMC;
    m_locationMCHasBeenSet = true;
}

bool RegionInfo::LocationMCHasBeenSet() const
{
    return m_locationMCHasBeenSet;
}

string RegionInfo::GetRegionNameMC() const
{
    return m_regionNameMC;
}

void RegionInfo::SetRegionNameMC(const string& _regionNameMC)
{
    m_regionNameMC = _regionNameMC;
    m_regionNameMCHasBeenSet = true;
}

bool RegionInfo::RegionNameMCHasBeenSet() const
{
    return m_regionNameMCHasBeenSet;
}

string RegionInfo::GetRegionIdMC() const
{
    return m_regionIdMC;
}

void RegionInfo::SetRegionIdMC(const string& _regionIdMC)
{
    m_regionIdMC = _regionIdMC;
    m_regionIdMCHasBeenSet = true;
}

bool RegionInfo::RegionIdMCHasBeenSet() const
{
    return m_regionIdMCHasBeenSet;
}

