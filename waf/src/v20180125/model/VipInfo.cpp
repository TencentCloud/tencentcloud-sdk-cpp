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

#include <tencentcloud/waf/v20180125/model/VipInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

VipInfo::VipInfo() :
    m_vipHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_iSPHasBeenSet(false),
    m_vipTypeHasBeenSet(false),
    m_addressNameHasBeenSet(false)
{
}

CoreInternalOutcome VipInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VipInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VipInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceCreateTime") && !value["InstanceCreateTime"].IsNull())
    {
        if (!value["InstanceCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VipInfo.InstanceCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCreateTime = string(value["InstanceCreateTime"].GetString());
        m_instanceCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VipInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VipInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ISP") && !value["ISP"].IsNull())
    {
        if (!value["ISP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VipInfo.ISP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSP = string(value["ISP"].GetString());
        m_iSPHasBeenSet = true;
    }

    if (value.HasMember("VipType") && !value["VipType"].IsNull())
    {
        if (!value["VipType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VipInfo.VipType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipType = string(value["VipType"].GetString());
        m_vipTypeHasBeenSet = true;
    }

    if (value.HasMember("AddressName") && !value["AddressName"].IsNull())
    {
        if (!value["AddressName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VipInfo.AddressName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressName = string(value["AddressName"].GetString());
        m_addressNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VipInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_iSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSP.c_str(), allocator).Move(), allocator);
    }

    if (m_vipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vipType.c_str(), allocator).Move(), allocator);
    }

    if (m_addressNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressName.c_str(), allocator).Move(), allocator);
    }

}


string VipInfo::GetVip() const
{
    return m_vip;
}

void VipInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool VipInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string VipInfo::GetInstanceId() const
{
    return m_instanceId;
}

void VipInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool VipInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string VipInfo::GetInstanceCreateTime() const
{
    return m_instanceCreateTime;
}

void VipInfo::SetInstanceCreateTime(const string& _instanceCreateTime)
{
    m_instanceCreateTime = _instanceCreateTime;
    m_instanceCreateTimeHasBeenSet = true;
}

bool VipInfo::InstanceCreateTimeHasBeenSet() const
{
    return m_instanceCreateTimeHasBeenSet;
}

string VipInfo::GetRegion() const
{
    return m_region;
}

void VipInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool VipInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t VipInfo::GetRegionId() const
{
    return m_regionId;
}

void VipInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool VipInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string VipInfo::GetISP() const
{
    return m_iSP;
}

void VipInfo::SetISP(const string& _iSP)
{
    m_iSP = _iSP;
    m_iSPHasBeenSet = true;
}

bool VipInfo::ISPHasBeenSet() const
{
    return m_iSPHasBeenSet;
}

string VipInfo::GetVipType() const
{
    return m_vipType;
}

void VipInfo::SetVipType(const string& _vipType)
{
    m_vipType = _vipType;
    m_vipTypeHasBeenSet = true;
}

bool VipInfo::VipTypeHasBeenSet() const
{
    return m_vipTypeHasBeenSet;
}

string VipInfo::GetAddressName() const
{
    return m_addressName;
}

void VipInfo::SetAddressName(const string& _addressName)
{
    m_addressName = _addressName;
    m_addressNameHasBeenSet = true;
}

bool VipInfo::AddressNameHasBeenSet() const
{
    return m_addressNameHasBeenSet;
}

