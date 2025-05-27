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

#include <tencentcloud/bh/v20230418/model/CreateResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

CreateResourceRequest::CreateResourceRequest() :
    m_deployRegionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_resourceEditionHasBeenSet(false),
    m_resourceNodeHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_deployZoneHasBeenSet(false),
    m_trialHasBeenSet(false),
    m_shareClbHasBeenSet(false)
{
}

string CreateResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deployRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployRegion.c_str(), allocator).Move(), allocator);
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

    if (m_resourceEditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceEdition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceEdition.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceNode, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_deployZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployZone.c_str(), allocator).Move(), allocator);
    }

    if (m_trialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trial";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trial, allocator);
    }

    if (m_shareClbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareClb";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shareClb, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateResourceRequest::GetDeployRegion() const
{
    return m_deployRegion;
}

void CreateResourceRequest::SetDeployRegion(const string& _deployRegion)
{
    m_deployRegion = _deployRegion;
    m_deployRegionHasBeenSet = true;
}

bool CreateResourceRequest::DeployRegionHasBeenSet() const
{
    return m_deployRegionHasBeenSet;
}

string CreateResourceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateResourceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateResourceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateResourceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateResourceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateResourceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateResourceRequest::GetResourceEdition() const
{
    return m_resourceEdition;
}

void CreateResourceRequest::SetResourceEdition(const string& _resourceEdition)
{
    m_resourceEdition = _resourceEdition;
    m_resourceEditionHasBeenSet = true;
}

bool CreateResourceRequest::ResourceEditionHasBeenSet() const
{
    return m_resourceEditionHasBeenSet;
}

int64_t CreateResourceRequest::GetResourceNode() const
{
    return m_resourceNode;
}

void CreateResourceRequest::SetResourceNode(const int64_t& _resourceNode)
{
    m_resourceNode = _resourceNode;
    m_resourceNodeHasBeenSet = true;
}

bool CreateResourceRequest::ResourceNodeHasBeenSet() const
{
    return m_resourceNodeHasBeenSet;
}

string CreateResourceRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateResourceRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateResourceRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

int64_t CreateResourceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateResourceRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateResourceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

int64_t CreateResourceRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateResourceRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateResourceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t CreateResourceRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateResourceRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateResourceRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string CreateResourceRequest::GetDeployZone() const
{
    return m_deployZone;
}

void CreateResourceRequest::SetDeployZone(const string& _deployZone)
{
    m_deployZone = _deployZone;
    m_deployZoneHasBeenSet = true;
}

bool CreateResourceRequest::DeployZoneHasBeenSet() const
{
    return m_deployZoneHasBeenSet;
}

uint64_t CreateResourceRequest::GetTrial() const
{
    return m_trial;
}

void CreateResourceRequest::SetTrial(const uint64_t& _trial)
{
    m_trial = _trial;
    m_trialHasBeenSet = true;
}

bool CreateResourceRequest::TrialHasBeenSet() const
{
    return m_trialHasBeenSet;
}

uint64_t CreateResourceRequest::GetShareClb() const
{
    return m_shareClb;
}

void CreateResourceRequest::SetShareClb(const uint64_t& _shareClb)
{
    m_shareClb = _shareClb;
    m_shareClbHasBeenSet = true;
}

bool CreateResourceRequest::ShareClbHasBeenSet() const
{
    return m_shareClbHasBeenSet;
}


