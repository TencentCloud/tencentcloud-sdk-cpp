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

#include <tencentcloud/cdb/v20170320/model/RoVipInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

RoVipInfo::RoVipInfo() :
    m_roVipStatusHasBeenSet(false),
    m_roSubnetIdHasBeenSet(false),
    m_roVpcIdHasBeenSet(false),
    m_roVportHasBeenSet(false),
    m_roVipHasBeenSet(false)
{
}

CoreInternalOutcome RoVipInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoVipStatus") && !value["RoVipStatus"].IsNull())
    {
        if (!value["RoVipStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoVipInfo.RoVipStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roVipStatus = value["RoVipStatus"].GetInt64();
        m_roVipStatusHasBeenSet = true;
    }

    if (value.HasMember("RoSubnetId") && !value["RoSubnetId"].IsNull())
    {
        if (!value["RoSubnetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoVipInfo.RoSubnetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roSubnetId = value["RoSubnetId"].GetInt64();
        m_roSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("RoVpcId") && !value["RoVpcId"].IsNull())
    {
        if (!value["RoVpcId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoVipInfo.RoVpcId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roVpcId = value["RoVpcId"].GetInt64();
        m_roVpcIdHasBeenSet = true;
    }

    if (value.HasMember("RoVport") && !value["RoVport"].IsNull())
    {
        if (!value["RoVport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoVipInfo.RoVport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roVport = value["RoVport"].GetInt64();
        m_roVportHasBeenSet = true;
    }

    if (value.HasMember("RoVip") && !value["RoVip"].IsNull())
    {
        if (!value["RoVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoVipInfo.RoVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roVip = string(value["RoVip"].GetString());
        m_roVipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoVipInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roVipStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoVipStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roVipStatus, allocator);
    }

    if (m_roSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roSubnetId, allocator);
    }

    if (m_roVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roVpcId, allocator);
    }

    if (m_roVportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoVport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roVport, allocator);
    }

    if (m_roVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roVip.c_str(), allocator).Move(), allocator);
    }

}


int64_t RoVipInfo::GetRoVipStatus() const
{
    return m_roVipStatus;
}

void RoVipInfo::SetRoVipStatus(const int64_t& _roVipStatus)
{
    m_roVipStatus = _roVipStatus;
    m_roVipStatusHasBeenSet = true;
}

bool RoVipInfo::RoVipStatusHasBeenSet() const
{
    return m_roVipStatusHasBeenSet;
}

int64_t RoVipInfo::GetRoSubnetId() const
{
    return m_roSubnetId;
}

void RoVipInfo::SetRoSubnetId(const int64_t& _roSubnetId)
{
    m_roSubnetId = _roSubnetId;
    m_roSubnetIdHasBeenSet = true;
}

bool RoVipInfo::RoSubnetIdHasBeenSet() const
{
    return m_roSubnetIdHasBeenSet;
}

int64_t RoVipInfo::GetRoVpcId() const
{
    return m_roVpcId;
}

void RoVipInfo::SetRoVpcId(const int64_t& _roVpcId)
{
    m_roVpcId = _roVpcId;
    m_roVpcIdHasBeenSet = true;
}

bool RoVipInfo::RoVpcIdHasBeenSet() const
{
    return m_roVpcIdHasBeenSet;
}

int64_t RoVipInfo::GetRoVport() const
{
    return m_roVport;
}

void RoVipInfo::SetRoVport(const int64_t& _roVport)
{
    m_roVport = _roVport;
    m_roVportHasBeenSet = true;
}

bool RoVipInfo::RoVportHasBeenSet() const
{
    return m_roVportHasBeenSet;
}

string RoVipInfo::GetRoVip() const
{
    return m_roVip;
}

void RoVipInfo::SetRoVip(const string& _roVip)
{
    m_roVip = _roVip;
    m_roVipHasBeenSet = true;
}

bool RoVipInfo::RoVipHasBeenSet() const
{
    return m_roVipHasBeenSet;
}

