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

#include <tencentcloud/cwp/v20180228/model/ScreenRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ScreenRegionInfo::ScreenRegionInfo() :
    m_regionHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_regionNameEnHasBeenSet(false)
{
}

CoreInternalOutcome ScreenRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenRegionInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenRegionInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenRegionInfo.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionCode") && !value["RegionCode"].IsNull())
    {
        if (!value["RegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenRegionInfo.RegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCode = string(value["RegionCode"].GetString());
        m_regionCodeHasBeenSet = true;
    }

    if (value.HasMember("RegionNameEn") && !value["RegionNameEn"].IsNull())
    {
        if (!value["RegionNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenRegionInfo.RegionNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionNameEn = string(value["RegionNameEn"].GetString());
        m_regionNameEnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScreenRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionNameEn.c_str(), allocator).Move(), allocator);
    }

}


string ScreenRegionInfo::GetRegion() const
{
    return m_region;
}

void ScreenRegionInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ScreenRegionInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ScreenRegionInfo::GetRegionName() const
{
    return m_regionName;
}

void ScreenRegionInfo::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool ScreenRegionInfo::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

uint64_t ScreenRegionInfo::GetRegionId() const
{
    return m_regionId;
}

void ScreenRegionInfo::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ScreenRegionInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string ScreenRegionInfo::GetRegionCode() const
{
    return m_regionCode;
}

void ScreenRegionInfo::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool ScreenRegionInfo::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string ScreenRegionInfo::GetRegionNameEn() const
{
    return m_regionNameEn;
}

void ScreenRegionInfo::SetRegionNameEn(const string& _regionNameEn)
{
    m_regionNameEn = _regionNameEn;
    m_regionNameEnHasBeenSet = true;
}

bool ScreenRegionInfo::RegionNameEnHasBeenSet() const
{
    return m_regionNameEnHasBeenSet;
}

