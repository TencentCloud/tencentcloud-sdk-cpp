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

#include <tencentcloud/clb/v20180317/model/CrossTargets.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CrossTargets::CrossTargets() :
    m_localVpcIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_eniIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome CrossTargets::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocalVpcId") && !value["LocalVpcId"].IsNull())
    {
        if (!value["LocalVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossTargets.LocalVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localVpcId = string(value["LocalVpcId"].GetString());
        m_localVpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossTargets.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossTargets.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossTargets.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("EniId") && !value["EniId"].IsNull())
    {
        if (!value["EniId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossTargets.EniId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eniId = string(value["EniId"].GetString());
        m_eniIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossTargets.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossTargets.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossTargets.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CrossTargets::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_localVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_eniIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eniId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


string CrossTargets::GetLocalVpcId() const
{
    return m_localVpcId;
}

void CrossTargets::SetLocalVpcId(const string& _localVpcId)
{
    m_localVpcId = _localVpcId;
    m_localVpcIdHasBeenSet = true;
}

bool CrossTargets::LocalVpcIdHasBeenSet() const
{
    return m_localVpcIdHasBeenSet;
}

string CrossTargets::GetVpcId() const
{
    return m_vpcId;
}

void CrossTargets::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CrossTargets::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CrossTargets::GetIP() const
{
    return m_iP;
}

void CrossTargets::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool CrossTargets::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string CrossTargets::GetVpcName() const
{
    return m_vpcName;
}

void CrossTargets::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool CrossTargets::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string CrossTargets::GetEniId() const
{
    return m_eniId;
}

void CrossTargets::SetEniId(const string& _eniId)
{
    m_eniId = _eniId;
    m_eniIdHasBeenSet = true;
}

bool CrossTargets::EniIdHasBeenSet() const
{
    return m_eniIdHasBeenSet;
}

string CrossTargets::GetInstanceId() const
{
    return m_instanceId;
}

void CrossTargets::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CrossTargets::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CrossTargets::GetInstanceName() const
{
    return m_instanceName;
}

void CrossTargets::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CrossTargets::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CrossTargets::GetRegion() const
{
    return m_region;
}

void CrossTargets::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CrossTargets::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

