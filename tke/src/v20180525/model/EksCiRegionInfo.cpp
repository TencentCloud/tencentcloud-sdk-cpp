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

#include <tencentcloud/tke/v20180525/model/EksCiRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

EksCiRegionInfo::EksCiRegionInfo() :
    m_aliasHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionIdHasBeenSet(false)
{
}

CoreInternalOutcome EksCiRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCiRegionInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCiRegionInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EksCiRegionInfo.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EksCiRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

}


string EksCiRegionInfo::GetAlias() const
{
    return m_alias;
}

void EksCiRegionInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool EksCiRegionInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string EksCiRegionInfo::GetRegionName() const
{
    return m_regionName;
}

void EksCiRegionInfo::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool EksCiRegionInfo::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

uint64_t EksCiRegionInfo::GetRegionId() const
{
    return m_regionId;
}

void EksCiRegionInfo::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool EksCiRegionInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

