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

#include <tencentcloud/tcr/v20190924/model/VpcAndDomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

VpcAndDomainInfo::VpcAndDomainInfo() :
    m_instanceIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_eniLBIpHasBeenSet(false),
    m_usePublicDomainHasBeenSet(false),
    m_regionNameHasBeenSet(false)
{
}

CoreInternalOutcome VpcAndDomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAndDomainInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAndDomainInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("EniLBIp") && !value["EniLBIp"].IsNull())
    {
        if (!value["EniLBIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAndDomainInfo.EniLBIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eniLBIp = string(value["EniLBIp"].GetString());
        m_eniLBIpHasBeenSet = true;
    }

    if (value.HasMember("UsePublicDomain") && !value["UsePublicDomain"].IsNull())
    {
        if (!value["UsePublicDomain"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAndDomainInfo.UsePublicDomain` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_usePublicDomain = value["UsePublicDomain"].GetBool();
        m_usePublicDomainHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAndDomainInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcAndDomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_eniLBIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniLBIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eniLBIp.c_str(), allocator).Move(), allocator);
    }

    if (m_usePublicDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsePublicDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usePublicDomain, allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

}


string VpcAndDomainInfo::GetInstanceId() const
{
    return m_instanceId;
}

void VpcAndDomainInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool VpcAndDomainInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string VpcAndDomainInfo::GetVpcId() const
{
    return m_vpcId;
}

void VpcAndDomainInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpcAndDomainInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpcAndDomainInfo::GetEniLBIp() const
{
    return m_eniLBIp;
}

void VpcAndDomainInfo::SetEniLBIp(const string& _eniLBIp)
{
    m_eniLBIp = _eniLBIp;
    m_eniLBIpHasBeenSet = true;
}

bool VpcAndDomainInfo::EniLBIpHasBeenSet() const
{
    return m_eniLBIpHasBeenSet;
}

bool VpcAndDomainInfo::GetUsePublicDomain() const
{
    return m_usePublicDomain;
}

void VpcAndDomainInfo::SetUsePublicDomain(const bool& _usePublicDomain)
{
    m_usePublicDomain = _usePublicDomain;
    m_usePublicDomainHasBeenSet = true;
}

bool VpcAndDomainInfo::UsePublicDomainHasBeenSet() const
{
    return m_usePublicDomainHasBeenSet;
}

string VpcAndDomainInfo::GetRegionName() const
{
    return m_regionName;
}

void VpcAndDomainInfo::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool VpcAndDomainInfo::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

