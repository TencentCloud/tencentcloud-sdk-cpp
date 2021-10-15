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

#include <tencentcloud/ckafka/v20190819/model/SaleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

SaleInfo::SaleInfo() :
    m_flagHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_soldOutHasBeenSet(false)
{
}

CoreInternalOutcome SaleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SaleInfo.Flag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_flag = value["Flag"].GetBool();
        m_flagHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleInfo.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("SoldOut") && !value["SoldOut"].IsNull())
    {
        if (!value["SoldOut"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SaleInfo.SoldOut` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_soldOut = value["SoldOut"].GetBool();
        m_soldOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SaleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flag, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_soldOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoldOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_soldOut, allocator);
    }

}


bool SaleInfo::GetFlag() const
{
    return m_flag;
}

void SaleInfo::SetFlag(const bool& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool SaleInfo::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string SaleInfo::GetVersion() const
{
    return m_version;
}

void SaleInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SaleInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string SaleInfo::GetPlatform() const
{
    return m_platform;
}

void SaleInfo::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool SaleInfo::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

bool SaleInfo::GetSoldOut() const
{
    return m_soldOut;
}

void SaleInfo::SetSoldOut(const bool& _soldOut)
{
    m_soldOut = _soldOut;
    m_soldOutHasBeenSet = true;
}

bool SaleInfo::SoldOutHasBeenSet() const
{
    return m_soldOutHasBeenSet;
}

