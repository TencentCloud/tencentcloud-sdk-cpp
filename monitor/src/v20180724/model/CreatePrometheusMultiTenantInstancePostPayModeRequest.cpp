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

#include <tencentcloud/monitor/v20180724/model/CreatePrometheusMultiTenantInstancePostPayModeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

CreatePrometheusMultiTenantInstancePostPayModeRequest::CreatePrometheusMultiTenantInstancePostPayModeRequest() :
    m_instanceNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dataRetentionTimeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_grafanaInstanceIdHasBeenSet(false)
{
}

string CreatePrometheusMultiTenantInstancePostPayModeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataRetentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataRetentionTime, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_grafanaInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_grafanaInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePrometheusMultiTenantInstancePostPayModeRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreatePrometheusMultiTenantInstancePostPayModeRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreatePrometheusMultiTenantInstancePostPayModeRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreatePrometheusMultiTenantInstancePostPayModeRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreatePrometheusMultiTenantInstancePostPayModeRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreatePrometheusMultiTenantInstancePostPayModeRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreatePrometheusMultiTenantInstancePostPayModeRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreatePrometheusMultiTenantInstancePostPayModeRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreatePrometheusMultiTenantInstancePostPayModeRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t CreatePrometheusMultiTenantInstancePostPayModeRequest::GetDataRetentionTime() const
{
    return m_dataRetentionTime;
}

void CreatePrometheusMultiTenantInstancePostPayModeRequest::SetDataRetentionTime(const int64_t& _dataRetentionTime)
{
    m_dataRetentionTime = _dataRetentionTime;
    m_dataRetentionTimeHasBeenSet = true;
}

bool CreatePrometheusMultiTenantInstancePostPayModeRequest::DataRetentionTimeHasBeenSet() const
{
    return m_dataRetentionTimeHasBeenSet;
}

string CreatePrometheusMultiTenantInstancePostPayModeRequest::GetZone() const
{
    return m_zone;
}

void CreatePrometheusMultiTenantInstancePostPayModeRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreatePrometheusMultiTenantInstancePostPayModeRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<PrometheusTag> CreatePrometheusMultiTenantInstancePostPayModeRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void CreatePrometheusMultiTenantInstancePostPayModeRequest::SetTagSpecification(const vector<PrometheusTag>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool CreatePrometheusMultiTenantInstancePostPayModeRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

string CreatePrometheusMultiTenantInstancePostPayModeRequest::GetGrafanaInstanceId() const
{
    return m_grafanaInstanceId;
}

void CreatePrometheusMultiTenantInstancePostPayModeRequest::SetGrafanaInstanceId(const string& _grafanaInstanceId)
{
    m_grafanaInstanceId = _grafanaInstanceId;
    m_grafanaInstanceIdHasBeenSet = true;
}

bool CreatePrometheusMultiTenantInstancePostPayModeRequest::GrafanaInstanceIdHasBeenSet() const
{
    return m_grafanaInstanceIdHasBeenSet;
}


