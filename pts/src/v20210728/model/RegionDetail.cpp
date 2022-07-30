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

#include <tencentcloud/pts/v20210728/model/RegionDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

RegionDetail::RegionDetail() :
    m_regionHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionStateHasBeenSet(false),
    m_regionShortNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome RegionDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionState") && !value["RegionState"].IsNull())
    {
        if (!value["RegionState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.RegionState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionState = value["RegionState"].GetInt64();
        m_regionStateHasBeenSet = true;
    }

    if (value.HasMember("RegionShortName") && !value["RegionShortName"].IsNull())
    {
        if (!value["RegionShortName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.RegionShortName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionShortName = string(value["RegionShortName"].GetString());
        m_regionShortNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetail.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, m_regionState, allocator);
    }

    if (m_regionShortNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionShortName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionShortName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


string RegionDetail::GetRegion() const
{
    return m_region;
}

void RegionDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RegionDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t RegionDetail::GetRegionId() const
{
    return m_regionId;
}

void RegionDetail::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool RegionDetail::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string RegionDetail::GetArea() const
{
    return m_area;
}

void RegionDetail::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool RegionDetail::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string RegionDetail::GetRegionName() const
{
    return m_regionName;
}

void RegionDetail::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool RegionDetail::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

int64_t RegionDetail::GetRegionState() const
{
    return m_regionState;
}

void RegionDetail::SetRegionState(const int64_t& _regionState)
{
    m_regionState = _regionState;
    m_regionStateHasBeenSet = true;
}

bool RegionDetail::RegionStateHasBeenSet() const
{
    return m_regionStateHasBeenSet;
}

string RegionDetail::GetRegionShortName() const
{
    return m_regionShortName;
}

void RegionDetail::SetRegionShortName(const string& _regionShortName)
{
    m_regionShortName = _regionShortName;
    m_regionShortNameHasBeenSet = true;
}

bool RegionDetail::RegionShortNameHasBeenSet() const
{
    return m_regionShortNameHasBeenSet;
}

string RegionDetail::GetCreatedAt() const
{
    return m_createdAt;
}

void RegionDetail::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool RegionDetail::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string RegionDetail::GetUpdatedAt() const
{
    return m_updatedAt;
}

void RegionDetail::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool RegionDetail::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

