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

#include <tencentcloud/redis/v20180412/model/CloneInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

CloneInstancesRequest::CloneInstancesRequest() :
    m_instanceIdHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_billingModeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_securityGroupIdListHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_noAuthHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_vPortHasBeenSet(false),
    m_nodeSetHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_alarmPolicyListHasBeenSet(false),
    m_cloneTimeHasBeenSet(false)
{
}

string CloneInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_billingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_billingMode, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_securityGroupIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIdList.begin(); itr != m_securityGroupIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupId.c_str(), allocator).Move(), allocator);
    }

    if (m_noAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_noAuth, allocator);
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

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_vPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vPort, allocator);
    }

    if (m_nodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeSet.begin(); itr != m_nodeSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmPolicyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPolicyList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmPolicyList.begin(); itr != m_alarmPolicyList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cloneTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloneTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloneInstancesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CloneInstancesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CloneInstancesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t CloneInstancesRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CloneInstancesRequest::SetGoodsNum(const uint64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CloneInstancesRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

uint64_t CloneInstancesRequest::GetZoneId() const
{
    return m_zoneId;
}

void CloneInstancesRequest::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CloneInstancesRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t CloneInstancesRequest::GetBillingMode() const
{
    return m_billingMode;
}

void CloneInstancesRequest::SetBillingMode(const int64_t& _billingMode)
{
    m_billingMode = _billingMode;
    m_billingModeHasBeenSet = true;
}

bool CloneInstancesRequest::BillingModeHasBeenSet() const
{
    return m_billingModeHasBeenSet;
}

uint64_t CloneInstancesRequest::GetPeriod() const
{
    return m_period;
}

void CloneInstancesRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CloneInstancesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<string> CloneInstancesRequest::GetSecurityGroupIdList() const
{
    return m_securityGroupIdList;
}

void CloneInstancesRequest::SetSecurityGroupIdList(const vector<string>& _securityGroupIdList)
{
    m_securityGroupIdList = _securityGroupIdList;
    m_securityGroupIdListHasBeenSet = true;
}

bool CloneInstancesRequest::SecurityGroupIdListHasBeenSet() const
{
    return m_securityGroupIdListHasBeenSet;
}

string CloneInstancesRequest::GetBackupId() const
{
    return m_backupId;
}

void CloneInstancesRequest::SetBackupId(const string& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool CloneInstancesRequest::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

bool CloneInstancesRequest::GetNoAuth() const
{
    return m_noAuth;
}

void CloneInstancesRequest::SetNoAuth(const bool& _noAuth)
{
    m_noAuth = _noAuth;
    m_noAuthHasBeenSet = true;
}

bool CloneInstancesRequest::NoAuthHasBeenSet() const
{
    return m_noAuthHasBeenSet;
}

string CloneInstancesRequest::GetVpcId() const
{
    return m_vpcId;
}

void CloneInstancesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CloneInstancesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CloneInstancesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CloneInstancesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CloneInstancesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CloneInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CloneInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CloneInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CloneInstancesRequest::GetPassword() const
{
    return m_password;
}

void CloneInstancesRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CloneInstancesRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

uint64_t CloneInstancesRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void CloneInstancesRequest::SetAutoRenew(const uint64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CloneInstancesRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

uint64_t CloneInstancesRequest::GetVPort() const
{
    return m_vPort;
}

void CloneInstancesRequest::SetVPort(const uint64_t& _vPort)
{
    m_vPort = _vPort;
    m_vPortHasBeenSet = true;
}

bool CloneInstancesRequest::VPortHasBeenSet() const
{
    return m_vPortHasBeenSet;
}

vector<RedisNodeInfo> CloneInstancesRequest::GetNodeSet() const
{
    return m_nodeSet;
}

void CloneInstancesRequest::SetNodeSet(const vector<RedisNodeInfo>& _nodeSet)
{
    m_nodeSet = _nodeSet;
    m_nodeSetHasBeenSet = true;
}

bool CloneInstancesRequest::NodeSetHasBeenSet() const
{
    return m_nodeSetHasBeenSet;
}

int64_t CloneInstancesRequest::GetProjectId() const
{
    return m_projectId;
}

void CloneInstancesRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CloneInstancesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<ResourceTag> CloneInstancesRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CloneInstancesRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CloneInstancesRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CloneInstancesRequest::GetTemplateId() const
{
    return m_templateId;
}

void CloneInstancesRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CloneInstancesRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<string> CloneInstancesRequest::GetAlarmPolicyList() const
{
    return m_alarmPolicyList;
}

void CloneInstancesRequest::SetAlarmPolicyList(const vector<string>& _alarmPolicyList)
{
    m_alarmPolicyList = _alarmPolicyList;
    m_alarmPolicyListHasBeenSet = true;
}

bool CloneInstancesRequest::AlarmPolicyListHasBeenSet() const
{
    return m_alarmPolicyListHasBeenSet;
}

string CloneInstancesRequest::GetCloneTime() const
{
    return m_cloneTime;
}

void CloneInstancesRequest::SetCloneTime(const string& _cloneTime)
{
    m_cloneTime = _cloneTime;
    m_cloneTimeHasBeenSet = true;
}

bool CloneInstancesRequest::CloneTimeHasBeenSet() const
{
    return m_cloneTimeHasBeenSet;
}


