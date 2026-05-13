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

#include <tencentcloud/csip/v20221121/model/RegionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RegionConfig::RegionConfig() :
    m_regionHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_foreignHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_isAutoDriveCloudHasBeenSet(false),
    m_isSupportNatHasBeenSet(false),
    m_regionAreaHasBeenSet(false),
    m_regionNameENHasBeenSet(false)
{
}

CoreInternalOutcome RegionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionConfig.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionConfig.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("Foreign") && !value["Foreign"].IsNull())
    {
        if (!value["Foreign"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionConfig.Foreign` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_foreign = value["Foreign"].GetInt64();
        m_foreignHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionConfig.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("IsAutoDriveCloud") && !value["IsAutoDriveCloud"].IsNull())
    {
        if (!value["IsAutoDriveCloud"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionConfig.IsAutoDriveCloud` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoDriveCloud = value["IsAutoDriveCloud"].GetInt64();
        m_isAutoDriveCloudHasBeenSet = true;
    }

    if (value.HasMember("IsSupportNat") && !value["IsSupportNat"].IsNull())
    {
        if (!value["IsSupportNat"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionConfig.IsSupportNat` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportNat = value["IsSupportNat"].GetInt64();
        m_isSupportNatHasBeenSet = true;
    }

    if (value.HasMember("RegionArea") && !value["RegionArea"].IsNull())
    {
        if (!value["RegionArea"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionConfig.RegionArea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionArea = string(value["RegionArea"].GetString());
        m_regionAreaHasBeenSet = true;
    }

    if (value.HasMember("RegionNameEN") && !value["RegionNameEN"].IsNull())
    {
        if (!value["RegionNameEN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionConfig.RegionNameEN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionNameEN = string(value["RegionNameEN"].GetString());
        m_regionNameENHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_foreignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Foreign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_foreign, allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_isAutoDriveCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoDriveCloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAutoDriveCloud, allocator);
    }

    if (m_isSupportNatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportNat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportNat, allocator);
    }

    if (m_regionAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionArea.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameENHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionNameEN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionNameEN.c_str(), allocator).Move(), allocator);
    }

}


string RegionConfig::GetRegion() const
{
    return m_region;
}

void RegionConfig::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RegionConfig::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string RegionConfig::GetRegionName() const
{
    return m_regionName;
}

void RegionConfig::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool RegionConfig::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

int64_t RegionConfig::GetForeign() const
{
    return m_foreign;
}

void RegionConfig::SetForeign(const int64_t& _foreign)
{
    m_foreign = _foreign;
    m_foreignHasBeenSet = true;
}

bool RegionConfig::ForeignHasBeenSet() const
{
    return m_foreignHasBeenSet;
}

int64_t RegionConfig::GetCode() const
{
    return m_code;
}

void RegionConfig::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool RegionConfig::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

int64_t RegionConfig::GetIsAutoDriveCloud() const
{
    return m_isAutoDriveCloud;
}

void RegionConfig::SetIsAutoDriveCloud(const int64_t& _isAutoDriveCloud)
{
    m_isAutoDriveCloud = _isAutoDriveCloud;
    m_isAutoDriveCloudHasBeenSet = true;
}

bool RegionConfig::IsAutoDriveCloudHasBeenSet() const
{
    return m_isAutoDriveCloudHasBeenSet;
}

int64_t RegionConfig::GetIsSupportNat() const
{
    return m_isSupportNat;
}

void RegionConfig::SetIsSupportNat(const int64_t& _isSupportNat)
{
    m_isSupportNat = _isSupportNat;
    m_isSupportNatHasBeenSet = true;
}

bool RegionConfig::IsSupportNatHasBeenSet() const
{
    return m_isSupportNatHasBeenSet;
}

string RegionConfig::GetRegionArea() const
{
    return m_regionArea;
}

void RegionConfig::SetRegionArea(const string& _regionArea)
{
    m_regionArea = _regionArea;
    m_regionAreaHasBeenSet = true;
}

bool RegionConfig::RegionAreaHasBeenSet() const
{
    return m_regionAreaHasBeenSet;
}

string RegionConfig::GetRegionNameEN() const
{
    return m_regionNameEN;
}

void RegionConfig::SetRegionNameEN(const string& _regionNameEN)
{
    m_regionNameEN = _regionNameEN;
    m_regionNameENHasBeenSet = true;
}

bool RegionConfig::RegionNameENHasBeenSet() const
{
    return m_regionNameENHasBeenSet;
}

