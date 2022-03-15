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

#include <tencentcloud/iecp/v20210914/model/CreateEdgeUnitCloudRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

CreateEdgeUnitCloudRequest::CreateEdgeUnitCloudRequest() :
    m_nameHasBeenSet(false),
    m_k8sVersionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_podCIDRHasBeenSet(false),
    m_serviceCIDRHasBeenSet(false),
    m_openCloudMonitorHasBeenSet(false)
{
}

string CreateEdgeUnitCloudRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_k8sVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8sVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_k8sVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_podCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodCIDR";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_podCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCIDR";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_openCloudMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenCloudMonitor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_openCloudMonitor, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEdgeUnitCloudRequest::GetName() const
{
    return m_name;
}

void CreateEdgeUnitCloudRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateEdgeUnitCloudRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateEdgeUnitCloudRequest::GetK8sVersion() const
{
    return m_k8sVersion;
}

void CreateEdgeUnitCloudRequest::SetK8sVersion(const string& _k8sVersion)
{
    m_k8sVersion = _k8sVersion;
    m_k8sVersionHasBeenSet = true;
}

bool CreateEdgeUnitCloudRequest::K8sVersionHasBeenSet() const
{
    return m_k8sVersionHasBeenSet;
}

string CreateEdgeUnitCloudRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateEdgeUnitCloudRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateEdgeUnitCloudRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateEdgeUnitCloudRequest::GetDescription() const
{
    return m_description;
}

void CreateEdgeUnitCloudRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateEdgeUnitCloudRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateEdgeUnitCloudRequest::GetPodCIDR() const
{
    return m_podCIDR;
}

void CreateEdgeUnitCloudRequest::SetPodCIDR(const string& _podCIDR)
{
    m_podCIDR = _podCIDR;
    m_podCIDRHasBeenSet = true;
}

bool CreateEdgeUnitCloudRequest::PodCIDRHasBeenSet() const
{
    return m_podCIDRHasBeenSet;
}

string CreateEdgeUnitCloudRequest::GetServiceCIDR() const
{
    return m_serviceCIDR;
}

void CreateEdgeUnitCloudRequest::SetServiceCIDR(const string& _serviceCIDR)
{
    m_serviceCIDR = _serviceCIDR;
    m_serviceCIDRHasBeenSet = true;
}

bool CreateEdgeUnitCloudRequest::ServiceCIDRHasBeenSet() const
{
    return m_serviceCIDRHasBeenSet;
}

bool CreateEdgeUnitCloudRequest::GetOpenCloudMonitor() const
{
    return m_openCloudMonitor;
}

void CreateEdgeUnitCloudRequest::SetOpenCloudMonitor(const bool& _openCloudMonitor)
{
    m_openCloudMonitor = _openCloudMonitor;
    m_openCloudMonitorHasBeenSet = true;
}

bool CreateEdgeUnitCloudRequest::OpenCloudMonitorHasBeenSet() const
{
    return m_openCloudMonitorHasBeenSet;
}


