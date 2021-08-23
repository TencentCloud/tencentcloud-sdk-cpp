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

#include <tencentcloud/lighthouse/v20200324/model/RegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

RegionInfo::RegionInfo() :
    m_regionHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionStateHasBeenSet(false),
    m_isChinaMainlandHasBeenSet(false)
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

    if (value.HasMember("IsChinaMainland") && !value["IsChinaMainland"].IsNull())
    {
        if (!value["IsChinaMainland"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.IsChinaMainland` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isChinaMainland = value["IsChinaMainland"].GetBool();
        m_isChinaMainlandHasBeenSet = true;
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

    if (m_isChinaMainlandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsChinaMainland";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isChinaMainland, allocator);
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

bool RegionInfo::GetIsChinaMainland() const
{
    return m_isChinaMainland;
}

void RegionInfo::SetIsChinaMainland(const bool& _isChinaMainland)
{
    m_isChinaMainland = _isChinaMainland;
    m_isChinaMainlandHasBeenSet = true;
}

bool RegionInfo::IsChinaMainlandHasBeenSet() const
{
    return m_isChinaMainlandHasBeenSet;
}

