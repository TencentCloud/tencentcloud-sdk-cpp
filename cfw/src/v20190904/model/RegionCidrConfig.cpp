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

#include <tencentcloud/cfw/v20190904/model/RegionCidrConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

RegionCidrConfig::RegionCidrConfig() :
    m_regionHasBeenSet(false),
    m_cidrModeHasBeenSet(false),
    m_customCidrHasBeenSet(false)
{
}

CoreInternalOutcome RegionCidrConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionCidrConfig.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CidrMode") && !value["CidrMode"].IsNull())
    {
        if (!value["CidrMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionCidrConfig.CidrMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cidrMode = value["CidrMode"].GetInt64();
        m_cidrModeHasBeenSet = true;
    }

    if (value.HasMember("CustomCidr") && !value["CustomCidr"].IsNull())
    {
        if (!value["CustomCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionCidrConfig.CustomCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customCidr = string(value["CustomCidr"].GetString());
        m_customCidrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionCidrConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cidrMode, allocator);
    }

    if (m_customCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customCidr.c_str(), allocator).Move(), allocator);
    }

}


string RegionCidrConfig::GetRegion() const
{
    return m_region;
}

void RegionCidrConfig::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RegionCidrConfig::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t RegionCidrConfig::GetCidrMode() const
{
    return m_cidrMode;
}

void RegionCidrConfig::SetCidrMode(const int64_t& _cidrMode)
{
    m_cidrMode = _cidrMode;
    m_cidrModeHasBeenSet = true;
}

bool RegionCidrConfig::CidrModeHasBeenSet() const
{
    return m_cidrModeHasBeenSet;
}

string RegionCidrConfig::GetCustomCidr() const
{
    return m_customCidr;
}

void RegionCidrConfig::SetCustomCidr(const string& _customCidr)
{
    m_customCidr = _customCidr;
    m_customCidrHasBeenSet = true;
}

bool RegionCidrConfig::CustomCidrHasBeenSet() const
{
    return m_customCidrHasBeenSet;
}

