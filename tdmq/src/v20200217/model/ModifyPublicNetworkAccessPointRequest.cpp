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

#include <tencentcloud/tdmq/v20200217/model/ModifyPublicNetworkAccessPointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ModifyPublicNetworkAccessPointRequest::ModifyPublicNetworkAccessPointRequest() :
    m_clusterIdHasBeenSet(false),
    m_publicNetworkAccessPointStatusHasBeenSet(false),
    m_switchOwnerHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_selectIpHasBeenSet(false)
{
}

string ModifyPublicNetworkAccessPointRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_publicNetworkAccessPointStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetworkAccessPointStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_publicNetworkAccessPointStatus, allocator);
    }

    if (m_switchOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchOwner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchOwner.c_str(), allocator).Move(), allocator);
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

    if (m_selectIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_selectIp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPublicNetworkAccessPointRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyPublicNetworkAccessPointRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyPublicNetworkAccessPointRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

bool ModifyPublicNetworkAccessPointRequest::GetPublicNetworkAccessPointStatus() const
{
    return m_publicNetworkAccessPointStatus;
}

void ModifyPublicNetworkAccessPointRequest::SetPublicNetworkAccessPointStatus(const bool& _publicNetworkAccessPointStatus)
{
    m_publicNetworkAccessPointStatus = _publicNetworkAccessPointStatus;
    m_publicNetworkAccessPointStatusHasBeenSet = true;
}

bool ModifyPublicNetworkAccessPointRequest::PublicNetworkAccessPointStatusHasBeenSet() const
{
    return m_publicNetworkAccessPointStatusHasBeenSet;
}

string ModifyPublicNetworkAccessPointRequest::GetSwitchOwner() const
{
    return m_switchOwner;
}

void ModifyPublicNetworkAccessPointRequest::SetSwitchOwner(const string& _switchOwner)
{
    m_switchOwner = _switchOwner;
    m_switchOwnerHasBeenSet = true;
}

bool ModifyPublicNetworkAccessPointRequest::SwitchOwnerHasBeenSet() const
{
    return m_switchOwnerHasBeenSet;
}

string ModifyPublicNetworkAccessPointRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyPublicNetworkAccessPointRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyPublicNetworkAccessPointRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifyPublicNetworkAccessPointRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ModifyPublicNetworkAccessPointRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ModifyPublicNetworkAccessPointRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ModifyPublicNetworkAccessPointRequest::GetSelectIp() const
{
    return m_selectIp;
}

void ModifyPublicNetworkAccessPointRequest::SetSelectIp(const string& _selectIp)
{
    m_selectIp = _selectIp;
    m_selectIpHasBeenSet = true;
}

bool ModifyPublicNetworkAccessPointRequest::SelectIpHasBeenSet() const
{
    return m_selectIpHasBeenSet;
}


