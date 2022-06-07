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

#include <tencentcloud/tcm/v20210413/model/PrometheusConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

PrometheusConfig::PrometheusConfig() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_customPromHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusConfig.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusConfig.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusConfig.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusConfig.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CustomProm") && !value["CustomProm"].IsNull())
    {
        if (!value["CustomProm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusConfig.CustomProm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customProm.Deserialize(value["CustomProm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customPromHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_customPromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomProm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customProm.ToJsonObject(value[key.c_str()], allocator);
    }

}


string PrometheusConfig::GetVpcId() const
{
    return m_vpcId;
}

void PrometheusConfig::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool PrometheusConfig::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string PrometheusConfig::GetSubnetId() const
{
    return m_subnetId;
}

void PrometheusConfig::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool PrometheusConfig::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string PrometheusConfig::GetRegion() const
{
    return m_region;
}

void PrometheusConfig::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool PrometheusConfig::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string PrometheusConfig::GetInstanceId() const
{
    return m_instanceId;
}

void PrometheusConfig::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PrometheusConfig::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

CustomPromConfig PrometheusConfig::GetCustomProm() const
{
    return m_customProm;
}

void PrometheusConfig::SetCustomProm(const CustomPromConfig& _customProm)
{
    m_customProm = _customProm;
    m_customPromHasBeenSet = true;
}

bool PrometheusConfig::CustomPromHasBeenSet() const
{
    return m_customPromHasBeenSet;
}

