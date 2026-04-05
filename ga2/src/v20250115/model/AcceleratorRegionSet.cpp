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

#include <tencentcloud/ga2/v20250115/model/AcceleratorRegionSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

AcceleratorRegionSet::AcceleratorRegionSet() :
    m_nameHasBeenSet(false),
    m_isAvailableHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_areaNameHasBeenSet(false),
    m_isChinaMainlandHasBeenSet(false),
    m_supportIspTypeHasBeenSet(false),
    m_isTencentRegionHasBeenSet(false)
{
}

CoreInternalOutcome AcceleratorRegionSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcceleratorRegionSet.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IsAvailable") && !value["IsAvailable"].IsNull())
    {
        if (!value["IsAvailable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AcceleratorRegionSet.IsAvailable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAvailable = value["IsAvailable"].GetInt64();
        m_isAvailableHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcceleratorRegionSet.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AreaName") && !value["AreaName"].IsNull())
    {
        if (!value["AreaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcceleratorRegionSet.AreaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaName = string(value["AreaName"].GetString());
        m_areaNameHasBeenSet = true;
    }

    if (value.HasMember("IsChinaMainland") && !value["IsChinaMainland"].IsNull())
    {
        if (!value["IsChinaMainland"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AcceleratorRegionSet.IsChinaMainland` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isChinaMainland = value["IsChinaMainland"].GetUint64();
        m_isChinaMainlandHasBeenSet = true;
    }

    if (value.HasMember("SupportIspType") && !value["SupportIspType"].IsNull())
    {
        if (!value["SupportIspType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AcceleratorRegionSet.SupportIspType` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportIspType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportIspType.push_back((*itr).GetString());
        }
        m_supportIspTypeHasBeenSet = true;
    }

    if (value.HasMember("IsTencentRegion") && !value["IsTencentRegion"].IsNull())
    {
        if (!value["IsTencentRegion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AcceleratorRegionSet.IsTencentRegion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isTencentRegion = value["IsTencentRegion"].GetUint64();
        m_isTencentRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AcceleratorRegionSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_isAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAvailable, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_areaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaName.c_str(), allocator).Move(), allocator);
    }

    if (m_isChinaMainlandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsChinaMainland";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isChinaMainland, allocator);
    }

    if (m_supportIspTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportIspType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportIspType.begin(); itr != m_supportIspType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isTencentRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTencentRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTencentRegion, allocator);
    }

}


string AcceleratorRegionSet::GetName() const
{
    return m_name;
}

void AcceleratorRegionSet::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AcceleratorRegionSet::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t AcceleratorRegionSet::GetIsAvailable() const
{
    return m_isAvailable;
}

void AcceleratorRegionSet::SetIsAvailable(const int64_t& _isAvailable)
{
    m_isAvailable = _isAvailable;
    m_isAvailableHasBeenSet = true;
}

bool AcceleratorRegionSet::IsAvailableHasBeenSet() const
{
    return m_isAvailableHasBeenSet;
}

string AcceleratorRegionSet::GetRegion() const
{
    return m_region;
}

void AcceleratorRegionSet::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AcceleratorRegionSet::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AcceleratorRegionSet::GetAreaName() const
{
    return m_areaName;
}

void AcceleratorRegionSet::SetAreaName(const string& _areaName)
{
    m_areaName = _areaName;
    m_areaNameHasBeenSet = true;
}

bool AcceleratorRegionSet::AreaNameHasBeenSet() const
{
    return m_areaNameHasBeenSet;
}

uint64_t AcceleratorRegionSet::GetIsChinaMainland() const
{
    return m_isChinaMainland;
}

void AcceleratorRegionSet::SetIsChinaMainland(const uint64_t& _isChinaMainland)
{
    m_isChinaMainland = _isChinaMainland;
    m_isChinaMainlandHasBeenSet = true;
}

bool AcceleratorRegionSet::IsChinaMainlandHasBeenSet() const
{
    return m_isChinaMainlandHasBeenSet;
}

vector<string> AcceleratorRegionSet::GetSupportIspType() const
{
    return m_supportIspType;
}

void AcceleratorRegionSet::SetSupportIspType(const vector<string>& _supportIspType)
{
    m_supportIspType = _supportIspType;
    m_supportIspTypeHasBeenSet = true;
}

bool AcceleratorRegionSet::SupportIspTypeHasBeenSet() const
{
    return m_supportIspTypeHasBeenSet;
}

uint64_t AcceleratorRegionSet::GetIsTencentRegion() const
{
    return m_isTencentRegion;
}

void AcceleratorRegionSet::SetIsTencentRegion(const uint64_t& _isTencentRegion)
{
    m_isTencentRegion = _isTencentRegion;
    m_isTencentRegionHasBeenSet = true;
}

bool AcceleratorRegionSet::IsTencentRegionHasBeenSet() const
{
    return m_isTencentRegionHasBeenSet;
}

