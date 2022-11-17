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

#include <tencentcloud/tdid/v20210519/model/CptListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

CptListData::CptListData() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_contractAppIdHasBeenSet(false),
    m_cptIdHasBeenSet(false),
    m_cptTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_cptJsonHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_creatorDidHasBeenSet(false),
    m_appNameHasBeenSet(false)
{
}

CoreInternalOutcome CptListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.ServiceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = value["ServiceId"].GetUint64();
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ContractAppId") && !value["ContractAppId"].IsNull())
    {
        if (!value["ContractAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.ContractAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_contractAppId = value["ContractAppId"].GetUint64();
        m_contractAppIdHasBeenSet = true;
    }

    if (value.HasMember("CptId") && !value["CptId"].IsNull())
    {
        if (!value["CptId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.CptId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cptId = value["CptId"].GetUint64();
        m_cptIdHasBeenSet = true;
    }

    if (value.HasMember("CptType") && !value["CptType"].IsNull())
    {
        if (!value["CptType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.CptType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cptType = value["CptType"].GetUint64();
        m_cptTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CptJson") && !value["CptJson"].IsNull())
    {
        if (!value["CptJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.CptJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cptJson = string(value["CptJson"].GetString());
        m_cptJsonHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatorDid") && !value["CreatorDid"].IsNull())
    {
        if (!value["CreatorDid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.CreatorDid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorDid = string(value["CreatorDid"].GetString());
        m_creatorDidHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CptListData.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CptListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_cptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cptId, allocator);
    }

    if (m_cptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cptType, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_cptJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cptJson.c_str(), allocator).Move(), allocator);
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

}


uint64_t CptListData::GetId() const
{
    return m_id;
}

void CptListData::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CptListData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CptListData::GetName() const
{
    return m_name;
}

void CptListData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CptListData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CptListData::GetClusterId() const
{
    return m_clusterId;
}

void CptListData::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CptListData::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t CptListData::GetGroupId() const
{
    return m_groupId;
}

void CptListData::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CptListData::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t CptListData::GetServiceId() const
{
    return m_serviceId;
}

void CptListData::SetServiceId(const uint64_t& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CptListData::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

uint64_t CptListData::GetContractAppId() const
{
    return m_contractAppId;
}

void CptListData::SetContractAppId(const uint64_t& _contractAppId)
{
    m_contractAppId = _contractAppId;
    m_contractAppIdHasBeenSet = true;
}

bool CptListData::ContractAppIdHasBeenSet() const
{
    return m_contractAppIdHasBeenSet;
}

uint64_t CptListData::GetCptId() const
{
    return m_cptId;
}

void CptListData::SetCptId(const uint64_t& _cptId)
{
    m_cptId = _cptId;
    m_cptIdHasBeenSet = true;
}

bool CptListData::CptIdHasBeenSet() const
{
    return m_cptIdHasBeenSet;
}

uint64_t CptListData::GetCptType() const
{
    return m_cptType;
}

void CptListData::SetCptType(const uint64_t& _cptType)
{
    m_cptType = _cptType;
    m_cptTypeHasBeenSet = true;
}

bool CptListData::CptTypeHasBeenSet() const
{
    return m_cptTypeHasBeenSet;
}

string CptListData::GetDescription() const
{
    return m_description;
}

void CptListData::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CptListData::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CptListData::GetCptJson() const
{
    return m_cptJson;
}

void CptListData::SetCptJson(const string& _cptJson)
{
    m_cptJson = _cptJson;
    m_cptJsonHasBeenSet = true;
}

bool CptListData::CptJsonHasBeenSet() const
{
    return m_cptJsonHasBeenSet;
}

string CptListData::GetCreateTime() const
{
    return m_createTime;
}

void CptListData::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CptListData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CptListData::GetUpdateTime() const
{
    return m_updateTime;
}

void CptListData::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CptListData::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CptListData::GetCreatorDid() const
{
    return m_creatorDid;
}

void CptListData::SetCreatorDid(const string& _creatorDid)
{
    m_creatorDid = _creatorDid;
    m_creatorDidHasBeenSet = true;
}

bool CptListData::CreatorDidHasBeenSet() const
{
    return m_creatorDidHasBeenSet;
}

string CptListData::GetAppName() const
{
    return m_appName;
}

void CptListData::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CptListData::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

