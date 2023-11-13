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

#include <tencentcloud/omics/v20221128/model/VPCOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

VPCOption::VPCOption() :
    m_vPCIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetZoneHasBeenSet(false),
    m_vPCCIDRBlockHasBeenSet(false),
    m_subnetCIDRBlockHasBeenSet(false)
{
}

CoreInternalOutcome VPCOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VPCId") && !value["VPCId"].IsNull())
    {
        if (!value["VPCId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VPCOption.VPCId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vPCId = string(value["VPCId"].GetString());
        m_vPCIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VPCOption.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetZone") && !value["SubnetZone"].IsNull())
    {
        if (!value["SubnetZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VPCOption.SubnetZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetZone = string(value["SubnetZone"].GetString());
        m_subnetZoneHasBeenSet = true;
    }

    if (value.HasMember("VPCCIDRBlock") && !value["VPCCIDRBlock"].IsNull())
    {
        if (!value["VPCCIDRBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VPCOption.VPCCIDRBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vPCCIDRBlock = string(value["VPCCIDRBlock"].GetString());
        m_vPCCIDRBlockHasBeenSet = true;
    }

    if (value.HasMember("SubnetCIDRBlock") && !value["SubnetCIDRBlock"].IsNull())
    {
        if (!value["SubnetCIDRBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VPCOption.SubnetCIDRBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCIDRBlock = string(value["SubnetCIDRBlock"].GetString());
        m_subnetCIDRBlockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VPCOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vPCIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vPCId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetZone.c_str(), allocator).Move(), allocator);
    }

    if (m_vPCCIDRBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCCIDRBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vPCCIDRBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetCIDRBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetCIDRBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetCIDRBlock.c_str(), allocator).Move(), allocator);
    }

}


string VPCOption::GetVPCId() const
{
    return m_vPCId;
}

void VPCOption::SetVPCId(const string& _vPCId)
{
    m_vPCId = _vPCId;
    m_vPCIdHasBeenSet = true;
}

bool VPCOption::VPCIdHasBeenSet() const
{
    return m_vPCIdHasBeenSet;
}

string VPCOption::GetSubnetId() const
{
    return m_subnetId;
}

void VPCOption::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool VPCOption::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string VPCOption::GetSubnetZone() const
{
    return m_subnetZone;
}

void VPCOption::SetSubnetZone(const string& _subnetZone)
{
    m_subnetZone = _subnetZone;
    m_subnetZoneHasBeenSet = true;
}

bool VPCOption::SubnetZoneHasBeenSet() const
{
    return m_subnetZoneHasBeenSet;
}

string VPCOption::GetVPCCIDRBlock() const
{
    return m_vPCCIDRBlock;
}

void VPCOption::SetVPCCIDRBlock(const string& _vPCCIDRBlock)
{
    m_vPCCIDRBlock = _vPCCIDRBlock;
    m_vPCCIDRBlockHasBeenSet = true;
}

bool VPCOption::VPCCIDRBlockHasBeenSet() const
{
    return m_vPCCIDRBlockHasBeenSet;
}

string VPCOption::GetSubnetCIDRBlock() const
{
    return m_subnetCIDRBlock;
}

void VPCOption::SetSubnetCIDRBlock(const string& _subnetCIDRBlock)
{
    m_subnetCIDRBlock = _subnetCIDRBlock;
    m_subnetCIDRBlockHasBeenSet = true;
}

bool VPCOption::SubnetCIDRBlockHasBeenSet() const
{
    return m_subnetCIDRBlockHasBeenSet;
}

