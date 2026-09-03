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

#include <tencentcloud/dlc/v20210125/model/PrometheusInstanceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

PrometheusInstanceItem::PrometheusInstanceItem() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_sameVpcWithTkeHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusInstanceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceItem.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceItem.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceItem.InstanceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = value["InstanceStatus"].GetInt64();
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("SameVpcWithTke") && !value["SameVpcWithTke"].IsNull())
    {
        if (!value["SameVpcWithTke"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceItem.SameVpcWithTke` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sameVpcWithTke = value["SameVpcWithTke"].GetBool();
        m_sameVpcWithTkeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusInstanceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStatus, allocator);
    }

    if (m_sameVpcWithTkeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SameVpcWithTke";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sameVpcWithTke, allocator);
    }

}


string PrometheusInstanceItem::GetInstanceId() const
{
    return m_instanceId;
}

void PrometheusInstanceItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PrometheusInstanceItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PrometheusInstanceItem::GetInstanceName() const
{
    return m_instanceName;
}

void PrometheusInstanceItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool PrometheusInstanceItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string PrometheusInstanceItem::GetVpcId() const
{
    return m_vpcId;
}

void PrometheusInstanceItem::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool PrometheusInstanceItem::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string PrometheusInstanceItem::GetSubnetId() const
{
    return m_subnetId;
}

void PrometheusInstanceItem::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool PrometheusInstanceItem::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t PrometheusInstanceItem::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void PrometheusInstanceItem::SetInstanceStatus(const int64_t& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool PrometheusInstanceItem::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

bool PrometheusInstanceItem::GetSameVpcWithTke() const
{
    return m_sameVpcWithTke;
}

void PrometheusInstanceItem::SetSameVpcWithTke(const bool& _sameVpcWithTke)
{
    m_sameVpcWithTke = _sameVpcWithTke;
    m_sameVpcWithTkeHasBeenSet = true;
}

bool PrometheusInstanceItem::SameVpcWithTkeHasBeenSet() const
{
    return m_sameVpcWithTkeHasBeenSet;
}

