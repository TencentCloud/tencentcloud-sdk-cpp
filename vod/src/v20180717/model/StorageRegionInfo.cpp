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

#include <tencentcloud/vod/v20180717/model/StorageRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

StorageRegionInfo::StorageRegionInfo() :
    m_regionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_areaHasBeenSet(false)
{
}

CoreInternalOutcome StorageRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageRegionInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageRegionInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageRegionInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StorageRegionInfo.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageRegionInfo.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

}


string StorageRegionInfo::GetRegion() const
{
    return m_region;
}

void StorageRegionInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool StorageRegionInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string StorageRegionInfo::GetDescription() const
{
    return m_description;
}

void StorageRegionInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool StorageRegionInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string StorageRegionInfo::GetStatus() const
{
    return m_status;
}

void StorageRegionInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StorageRegionInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool StorageRegionInfo::GetIsDefault() const
{
    return m_isDefault;
}

void StorageRegionInfo::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool StorageRegionInfo::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string StorageRegionInfo::GetArea() const
{
    return m_area;
}

void StorageRegionInfo::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool StorageRegionInfo::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

