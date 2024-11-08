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

#include <tencentcloud/privatedns/v20201028/model/RegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

RegionInfo::RegionInfo() :
    m_regionCodeHasBeenSet(false),
    m_cnNameHasBeenSet(false),
    m_enNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_availableZoneNumHasBeenSet(false)
{
}

CoreInternalOutcome RegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionCode") && !value["RegionCode"].IsNull())
    {
        if (!value["RegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCode = string(value["RegionCode"].GetString());
        m_regionCodeHasBeenSet = true;
    }

    if (value.HasMember("CnName") && !value["CnName"].IsNull())
    {
        if (!value["CnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.CnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnName = string(value["CnName"].GetString());
        m_cnNameHasBeenSet = true;
    }

    if (value.HasMember("EnName") && !value["EnName"].IsNull())
    {
        if (!value["EnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.EnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enName = string(value["EnName"].GetString());
        m_enNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("AvailableZoneNum") && !value["AvailableZoneNum"].IsNull())
    {
        if (!value["AvailableZoneNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.AvailableZoneNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableZoneNum = value["AvailableZoneNum"].GetUint64();
        m_availableZoneNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_cnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnName.c_str(), allocator).Move(), allocator);
    }

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_availableZoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableZoneNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableZoneNum, allocator);
    }

}


string RegionInfo::GetRegionCode() const
{
    return m_regionCode;
}

void RegionInfo::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool RegionInfo::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string RegionInfo::GetCnName() const
{
    return m_cnName;
}

void RegionInfo::SetCnName(const string& _cnName)
{
    m_cnName = _cnName;
    m_cnNameHasBeenSet = true;
}

bool RegionInfo::CnNameHasBeenSet() const
{
    return m_cnNameHasBeenSet;
}

string RegionInfo::GetEnName() const
{
    return m_enName;
}

void RegionInfo::SetEnName(const string& _enName)
{
    m_enName = _enName;
    m_enNameHasBeenSet = true;
}

bool RegionInfo::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

uint64_t RegionInfo::GetRegionId() const
{
    return m_regionId;
}

void RegionInfo::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool RegionInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

uint64_t RegionInfo::GetAvailableZoneNum() const
{
    return m_availableZoneNum;
}

void RegionInfo::SetAvailableZoneNum(const uint64_t& _availableZoneNum)
{
    m_availableZoneNum = _availableZoneNum;
    m_availableZoneNumHasBeenSet = true;
}

bool RegionInfo::AvailableZoneNumHasBeenSet() const
{
    return m_availableZoneNumHasBeenSet;
}

