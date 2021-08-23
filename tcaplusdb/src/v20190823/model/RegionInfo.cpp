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

#include <tencentcloud/tcaplusdb/v20190823/model/RegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

RegionInfo::RegionInfo() :
    m_regionNameHasBeenSet(false),
    m_regionAbbrHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_ipv6EnableHasBeenSet(false)
{
}

CoreInternalOutcome RegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionAbbr") && !value["RegionAbbr"].IsNull())
    {
        if (!value["RegionAbbr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.RegionAbbr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionAbbr = string(value["RegionAbbr"].GetString());
        m_regionAbbrHasBeenSet = true;
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

    if (value.HasMember("Ipv6Enable") && !value["Ipv6Enable"].IsNull())
    {
        if (!value["Ipv6Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInfo.Ipv6Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6Enable = value["Ipv6Enable"].GetUint64();
        m_ipv6EnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionAbbrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionAbbr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionAbbr.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_ipv6EnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv6Enable, allocator);
    }

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

string RegionInfo::GetRegionAbbr() const
{
    return m_regionAbbr;
}

void RegionInfo::SetRegionAbbr(const string& _regionAbbr)
{
    m_regionAbbr = _regionAbbr;
    m_regionAbbrHasBeenSet = true;
}

bool RegionInfo::RegionAbbrHasBeenSet() const
{
    return m_regionAbbrHasBeenSet;
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

uint64_t RegionInfo::GetIpv6Enable() const
{
    return m_ipv6Enable;
}

void RegionInfo::SetIpv6Enable(const uint64_t& _ipv6Enable)
{
    m_ipv6Enable = _ipv6Enable;
    m_ipv6EnableHasBeenSet = true;
}

bool RegionInfo::Ipv6EnableHasBeenSet() const
{
    return m_ipv6EnableHasBeenSet;
}

