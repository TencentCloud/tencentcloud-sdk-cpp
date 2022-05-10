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

#include <tencentcloud/tcm/v20210413/model/PrometheusStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

PrometheusStatus::PrometheusStatus() :
    m_prometheusIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_grafanaHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrometheusId") && !value["PrometheusId"].IsNull())
    {
        if (!value["PrometheusId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusStatus.PrometheusId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prometheusId = string(value["PrometheusId"].GetString());
        m_prometheusIdHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusStatus.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusStatus.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusStatus.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusStatus.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusStatus.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Grafana") && !value["Grafana"].IsNull())
    {
        if (!value["Grafana"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusStatus.Grafana` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_grafana.Deserialize(value["Grafana"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_grafanaHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusStatus.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_prometheusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrometheusId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prometheusId.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

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

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_grafanaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grafana";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_grafana.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string PrometheusStatus::GetPrometheusId() const
{
    return m_prometheusId;
}

void PrometheusStatus::SetPrometheusId(const string& _prometheusId)
{
    m_prometheusId = _prometheusId;
    m_prometheusIdHasBeenSet = true;
}

bool PrometheusStatus::PrometheusIdHasBeenSet() const
{
    return m_prometheusIdHasBeenSet;
}

string PrometheusStatus::GetDisplayName() const
{
    return m_displayName;
}

void PrometheusStatus::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool PrometheusStatus::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string PrometheusStatus::GetInstanceId() const
{
    return m_instanceId;
}

void PrometheusStatus::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PrometheusStatus::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PrometheusStatus::GetVpcId() const
{
    return m_vpcId;
}

void PrometheusStatus::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool PrometheusStatus::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string PrometheusStatus::GetState() const
{
    return m_state;
}

void PrometheusStatus::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool PrometheusStatus::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string PrometheusStatus::GetRegion() const
{
    return m_region;
}

void PrometheusStatus::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool PrometheusStatus::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

GrafanaInfo PrometheusStatus::GetGrafana() const
{
    return m_grafana;
}

void PrometheusStatus::SetGrafana(const GrafanaInfo& _grafana)
{
    m_grafana = _grafana;
    m_grafanaHasBeenSet = true;
}

bool PrometheusStatus::GrafanaHasBeenSet() const
{
    return m_grafanaHasBeenSet;
}

string PrometheusStatus::GetType() const
{
    return m_type;
}

void PrometheusStatus::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PrometheusStatus::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

