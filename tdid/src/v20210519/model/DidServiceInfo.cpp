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

#include <tencentcloud/tdid/v20210519/model/DidServiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

DidServiceInfo::DidServiceInfo() :
    m_idHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_consortiumIdHasBeenSet(false),
    m_consortiumNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_chainIdHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_agencyDidHasBeenSet(false),
    m_createOrgHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

CoreInternalOutcome DidServiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ConsortiumId") && !value["ConsortiumId"].IsNull())
    {
        if (!value["ConsortiumId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.ConsortiumId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consortiumId = value["ConsortiumId"].GetInt64();
        m_consortiumIdHasBeenSet = true;
    }

    if (value.HasMember("ConsortiumName") && !value["ConsortiumName"].IsNull())
    {
        if (!value["ConsortiumName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.ConsortiumName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consortiumName = string(value["ConsortiumName"].GetString());
        m_consortiumNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("ChainId") && !value["ChainId"].IsNull())
    {
        if (!value["ChainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.ChainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chainId = string(value["ChainId"].GetString());
        m_chainIdHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.RoleType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = value["RoleType"].GetUint64();
        m_roleTypeHasBeenSet = true;
    }

    if (value.HasMember("AgencyDid") && !value["AgencyDid"].IsNull())
    {
        if (!value["AgencyDid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.AgencyDid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agencyDid = string(value["AgencyDid"].GetString());
        m_agencyDidHasBeenSet = true;
    }

    if (value.HasMember("CreateOrg") && !value["CreateOrg"].IsNull())
    {
        if (!value["CreateOrg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.CreateOrg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createOrg = string(value["CreateOrg"].GetString());
        m_createOrgHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidServiceInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DidServiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_consortiumIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsortiumId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consortiumId, allocator);
    }

    if (m_consortiumNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsortiumName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consortiumName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_chainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chainId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleType, allocator);
    }

    if (m_agencyDidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgencyDid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agencyDid.c_str(), allocator).Move(), allocator);
    }

    if (m_createOrgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateOrg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createOrg.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DidServiceInfo::GetId() const
{
    return m_id;
}

void DidServiceInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DidServiceInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t DidServiceInfo::GetAppid() const
{
    return m_appid;
}

void DidServiceInfo::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool DidServiceInfo::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

string DidServiceInfo::GetUin() const
{
    return m_uin;
}

void DidServiceInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DidServiceInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t DidServiceInfo::GetConsortiumId() const
{
    return m_consortiumId;
}

void DidServiceInfo::SetConsortiumId(const int64_t& _consortiumId)
{
    m_consortiumId = _consortiumId;
    m_consortiumIdHasBeenSet = true;
}

bool DidServiceInfo::ConsortiumIdHasBeenSet() const
{
    return m_consortiumIdHasBeenSet;
}

string DidServiceInfo::GetConsortiumName() const
{
    return m_consortiumName;
}

void DidServiceInfo::SetConsortiumName(const string& _consortiumName)
{
    m_consortiumName = _consortiumName;
    m_consortiumNameHasBeenSet = true;
}

bool DidServiceInfo::ConsortiumNameHasBeenSet() const
{
    return m_consortiumNameHasBeenSet;
}

string DidServiceInfo::GetClusterId() const
{
    return m_clusterId;
}

void DidServiceInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DidServiceInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t DidServiceInfo::GetGroupId() const
{
    return m_groupId;
}

void DidServiceInfo::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DidServiceInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DidServiceInfo::GetChainId() const
{
    return m_chainId;
}

void DidServiceInfo::SetChainId(const string& _chainId)
{
    m_chainId = _chainId;
    m_chainIdHasBeenSet = true;
}

bool DidServiceInfo::ChainIdHasBeenSet() const
{
    return m_chainIdHasBeenSet;
}

uint64_t DidServiceInfo::GetRoleType() const
{
    return m_roleType;
}

void DidServiceInfo::SetRoleType(const uint64_t& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool DidServiceInfo::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

string DidServiceInfo::GetAgencyDid() const
{
    return m_agencyDid;
}

void DidServiceInfo::SetAgencyDid(const string& _agencyDid)
{
    m_agencyDid = _agencyDid;
    m_agencyDidHasBeenSet = true;
}

bool DidServiceInfo::AgencyDidHasBeenSet() const
{
    return m_agencyDidHasBeenSet;
}

string DidServiceInfo::GetCreateOrg() const
{
    return m_createOrg;
}

void DidServiceInfo::SetCreateOrg(const string& _createOrg)
{
    m_createOrg = _createOrg;
    m_createOrgHasBeenSet = true;
}

bool DidServiceInfo::CreateOrgHasBeenSet() const
{
    return m_createOrgHasBeenSet;
}

string DidServiceInfo::GetEndpoint() const
{
    return m_endpoint;
}

void DidServiceInfo::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool DidServiceInfo::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string DidServiceInfo::GetCreateTime() const
{
    return m_createTime;
}

void DidServiceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DidServiceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DidServiceInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DidServiceInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DidServiceInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DidServiceInfo::GetGroupName() const
{
    return m_groupName;
}

void DidServiceInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DidServiceInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

