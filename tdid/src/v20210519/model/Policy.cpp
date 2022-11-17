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

#include <tencentcloud/tdid/v20210519/model/Policy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

Policy::Policy() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_contractAppIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_cptIdHasBeenSet(false),
    m_policyJsonHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_creatorDidHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_cptIndexHasBeenSet(false)
{
}

CoreInternalOutcome Policy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.ServiceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = value["ServiceId"].GetUint64();
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ContractAppId") && !value["ContractAppId"].IsNull())
    {
        if (!value["ContractAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.ContractAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_contractAppId = value["ContractAppId"].GetUint64();
        m_contractAppIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.PolicyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetUint64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("CptId") && !value["CptId"].IsNull())
    {
        if (!value["CptId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.CptId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cptId = value["CptId"].GetUint64();
        m_cptIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyJson") && !value["PolicyJson"].IsNull())
    {
        if (!value["PolicyJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.PolicyJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyJson = string(value["PolicyJson"].GetString());
        m_policyJsonHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatorDid") && !value["CreatorDid"].IsNull())
    {
        if (!value["CreatorDid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.CreatorDid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorDid = string(value["CreatorDid"].GetString());
        m_creatorDidHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("CptIndex") && !value["CptIndex"].IsNull())
    {
        if (!value["CptIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.CptIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cptIndex = value["CptIndex"].GetUint64();
        m_cptIndexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Policy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceId, allocator);
    }

    if (m_contractAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contractAppId, allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_cptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cptId, allocator);
    }

    if (m_policyJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyJson.c_str(), allocator).Move(), allocator);
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

    if (m_creatorDidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorDid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorDid.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_cptIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cptIndex, allocator);
    }

}


uint64_t Policy::GetId() const
{
    return m_id;
}

void Policy::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Policy::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Policy::GetName() const
{
    return m_name;
}

void Policy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Policy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Policy::GetClusterId() const
{
    return m_clusterId;
}

void Policy::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Policy::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t Policy::GetGroupId() const
{
    return m_groupId;
}

void Policy::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool Policy::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t Policy::GetServiceId() const
{
    return m_serviceId;
}

void Policy::SetServiceId(const uint64_t& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool Policy::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

uint64_t Policy::GetContractAppId() const
{
    return m_contractAppId;
}

void Policy::SetContractAppId(const uint64_t& _contractAppId)
{
    m_contractAppId = _contractAppId;
    m_contractAppIdHasBeenSet = true;
}

bool Policy::ContractAppIdHasBeenSet() const
{
    return m_contractAppIdHasBeenSet;
}

uint64_t Policy::GetPolicyId() const
{
    return m_policyId;
}

void Policy::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool Policy::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

uint64_t Policy::GetCptId() const
{
    return m_cptId;
}

void Policy::SetCptId(const uint64_t& _cptId)
{
    m_cptId = _cptId;
    m_cptIdHasBeenSet = true;
}

bool Policy::CptIdHasBeenSet() const
{
    return m_cptIdHasBeenSet;
}

string Policy::GetPolicyJson() const
{
    return m_policyJson;
}

void Policy::SetPolicyJson(const string& _policyJson)
{
    m_policyJson = _policyJson;
    m_policyJsonHasBeenSet = true;
}

bool Policy::PolicyJsonHasBeenSet() const
{
    return m_policyJsonHasBeenSet;
}

string Policy::GetCreateTime() const
{
    return m_createTime;
}

void Policy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Policy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Policy::GetUpdateTime() const
{
    return m_updateTime;
}

void Policy::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Policy::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Policy::GetCreatorDid() const
{
    return m_creatorDid;
}

void Policy::SetCreatorDid(const string& _creatorDid)
{
    m_creatorDid = _creatorDid;
    m_creatorDidHasBeenSet = true;
}

bool Policy::CreatorDidHasBeenSet() const
{
    return m_creatorDidHasBeenSet;
}

string Policy::GetAppName() const
{
    return m_appName;
}

void Policy::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool Policy::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

uint64_t Policy::GetCptIndex() const
{
    return m_cptIndex;
}

void Policy::SetCptIndex(const uint64_t& _cptIndex)
{
    m_cptIndex = _cptIndex;
    m_cptIndexHasBeenSet = true;
}

bool Policy::CptIndexHasBeenSet() const
{
    return m_cptIndexHasBeenSet;
}

