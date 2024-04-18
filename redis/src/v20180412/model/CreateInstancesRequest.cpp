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

#include <tencentcloud/redis/v20180412/model/CreateInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

CreateInstancesRequest::CreateInstancesRequest() :
    m_typeIdHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_billingModeHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_securityGroupIdListHasBeenSet(false),
    m_vPortHasBeenSet(false),
    m_redisShardNumHasBeenSet(false),
    m_redisReplicasNumHasBeenSet(false),
    m_replicasReadonlyHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_noAuthHasBeenSet(false),
    m_nodeSetHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_productVersionHasBeenSet(false),
    m_redisClusterIdHasBeenSet(false),
    m_alarmPolicyListHasBeenSet(false)
{
}

string CreateInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_typeId, allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memSize, allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_billingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_billingMode, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
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

    if (m_vPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vPort, allocator);
    }

    if (m_redisShardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisShardNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_redisShardNum, allocator);
    }

    if (m_redisReplicasNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisReplicasNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_redisReplicasNum, allocator);
    }

    if (m_replicasReadonlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicasReadonly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicasReadonly, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_noAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_noAuth, allocator);
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

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_productVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_redisClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_redisClusterId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateInstancesRequest::GetTypeId() const
{
    return m_typeId;
}

void CreateInstancesRequest::SetTypeId(const uint64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool CreateInstancesRequest::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

uint64_t CreateInstancesRequest::GetMemSize() const
{
    return m_memSize;
}

void CreateInstancesRequest::SetMemSize(const uint64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool CreateInstancesRequest::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

uint64_t CreateInstancesRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateInstancesRequest::SetGoodsNum(const uint64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateInstancesRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

uint64_t CreateInstancesRequest::GetPeriod() const
{
    return m_period;
}

void CreateInstancesRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateInstancesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t CreateInstancesRequest::GetBillingMode() const
{
    return m_billingMode;
}

void CreateInstancesRequest::SetBillingMode(const int64_t& _billingMode)
{
    m_billingMode = _billingMode;
    m_billingModeHasBeenSet = true;
}

bool CreateInstancesRequest::BillingModeHasBeenSet() const
{
    return m_billingModeHasBeenSet;
}

uint64_t CreateInstancesRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateInstancesRequest::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateInstancesRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateInstancesRequest::GetPassword() const
{
    return m_password;
}

void CreateInstancesRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateInstancesRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateInstancesRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateInstancesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateInstancesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateInstancesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateInstancesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateInstancesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t CreateInstancesRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateInstancesRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateInstancesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t CreateInstancesRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void CreateInstancesRequest::SetAutoRenew(const uint64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CreateInstancesRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

vector<string> CreateInstancesRequest::GetSecurityGroupIdList() const
{
    return m_securityGroupIdList;
}

void CreateInstancesRequest::SetSecurityGroupIdList(const vector<string>& _securityGroupIdList)
{
    m_securityGroupIdList = _securityGroupIdList;
    m_securityGroupIdListHasBeenSet = true;
}

bool CreateInstancesRequest::SecurityGroupIdListHasBeenSet() const
{
    return m_securityGroupIdListHasBeenSet;
}

uint64_t CreateInstancesRequest::GetVPort() const
{
    return m_vPort;
}

void CreateInstancesRequest::SetVPort(const uint64_t& _vPort)
{
    m_vPort = _vPort;
    m_vPortHasBeenSet = true;
}

bool CreateInstancesRequest::VPortHasBeenSet() const
{
    return m_vPortHasBeenSet;
}

int64_t CreateInstancesRequest::GetRedisShardNum() const
{
    return m_redisShardNum;
}

void CreateInstancesRequest::SetRedisShardNum(const int64_t& _redisShardNum)
{
    m_redisShardNum = _redisShardNum;
    m_redisShardNumHasBeenSet = true;
}

bool CreateInstancesRequest::RedisShardNumHasBeenSet() const
{
    return m_redisShardNumHasBeenSet;
}

int64_t CreateInstancesRequest::GetRedisReplicasNum() const
{
    return m_redisReplicasNum;
}

void CreateInstancesRequest::SetRedisReplicasNum(const int64_t& _redisReplicasNum)
{
    m_redisReplicasNum = _redisReplicasNum;
    m_redisReplicasNumHasBeenSet = true;
}

bool CreateInstancesRequest::RedisReplicasNumHasBeenSet() const
{
    return m_redisReplicasNumHasBeenSet;
}

bool CreateInstancesRequest::GetReplicasReadonly() const
{
    return m_replicasReadonly;
}

void CreateInstancesRequest::SetReplicasReadonly(const bool& _replicasReadonly)
{
    m_replicasReadonly = _replicasReadonly;
    m_replicasReadonlyHasBeenSet = true;
}

bool CreateInstancesRequest::ReplicasReadonlyHasBeenSet() const
{
    return m_replicasReadonlyHasBeenSet;
}

string CreateInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

bool CreateInstancesRequest::GetNoAuth() const
{
    return m_noAuth;
}

void CreateInstancesRequest::SetNoAuth(const bool& _noAuth)
{
    m_noAuth = _noAuth;
    m_noAuthHasBeenSet = true;
}

bool CreateInstancesRequest::NoAuthHasBeenSet() const
{
    return m_noAuthHasBeenSet;
}

vector<RedisNodeInfo> CreateInstancesRequest::GetNodeSet() const
{
    return m_nodeSet;
}

void CreateInstancesRequest::SetNodeSet(const vector<RedisNodeInfo>& _nodeSet)
{
    m_nodeSet = _nodeSet;
    m_nodeSetHasBeenSet = true;
}

bool CreateInstancesRequest::NodeSetHasBeenSet() const
{
    return m_nodeSetHasBeenSet;
}

vector<ResourceTag> CreateInstancesRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateInstancesRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateInstancesRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CreateInstancesRequest::GetZoneName() const
{
    return m_zoneName;
}

void CreateInstancesRequest::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool CreateInstancesRequest::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string CreateInstancesRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateInstancesRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateInstancesRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

bool CreateInstancesRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateInstancesRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateInstancesRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string CreateInstancesRequest::GetProductVersion() const
{
    return m_productVersion;
}

void CreateInstancesRequest::SetProductVersion(const string& _productVersion)
{
    m_productVersion = _productVersion;
    m_productVersionHasBeenSet = true;
}

bool CreateInstancesRequest::ProductVersionHasBeenSet() const
{
    return m_productVersionHasBeenSet;
}

string CreateInstancesRequest::GetRedisClusterId() const
{
    return m_redisClusterId;
}

void CreateInstancesRequest::SetRedisClusterId(const string& _redisClusterId)
{
    m_redisClusterId = _redisClusterId;
    m_redisClusterIdHasBeenSet = true;
}

bool CreateInstancesRequest::RedisClusterIdHasBeenSet() const
{
    return m_redisClusterIdHasBeenSet;
}

vector<string> CreateInstancesRequest::GetAlarmPolicyList() const
{
    return m_alarmPolicyList;
}

void CreateInstancesRequest::SetAlarmPolicyList(const vector<string>& _alarmPolicyList)
{
    m_alarmPolicyList = _alarmPolicyList;
    m_alarmPolicyListHasBeenSet = true;
}

bool CreateInstancesRequest::AlarmPolicyListHasBeenSet() const
{
    return m_alarmPolicyListHasBeenSet;
}


