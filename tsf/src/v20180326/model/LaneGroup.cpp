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

#include <tencentcloud/tsf/v20180326/model/LaneGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

LaneGroup::LaneGroup() :
    m_groupIdHasBeenSet(false),
    m_entranceHasBeenSet(false),
    m_laneGroupIdHasBeenSet(false),
    m_laneIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_clusterTypeHasBeenSet(false)
{
}

CoreInternalOutcome LaneGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneGroup.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("Entrance") && !value["Entrance"].IsNull())
    {
        if (!value["Entrance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LaneGroup.Entrance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_entrance = value["Entrance"].GetBool();
        m_entranceHasBeenSet = true;
    }

    if (value.HasMember("LaneGroupId") && !value["LaneGroupId"].IsNull())
    {
        if (!value["LaneGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneGroup.LaneGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_laneGroupId = string(value["LaneGroupId"].GetString());
        m_laneGroupIdHasBeenSet = true;
    }

    if (value.HasMember("LaneId") && !value["LaneId"].IsNull())
    {
        if (!value["LaneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneGroup.LaneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_laneId = string(value["LaneId"].GetString());
        m_laneIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneGroup.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneGroup.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneGroup.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneGroup.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LaneGroup.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LaneGroup.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneGroup.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LaneGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_entranceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entrance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_entrance, allocator);
    }

    if (m_laneGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaneGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_laneGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_laneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_laneId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

}


string LaneGroup::GetGroupId() const
{
    return m_groupId;
}

void LaneGroup::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool LaneGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

bool LaneGroup::GetEntrance() const
{
    return m_entrance;
}

void LaneGroup::SetEntrance(const bool& _entrance)
{
    m_entrance = _entrance;
    m_entranceHasBeenSet = true;
}

bool LaneGroup::EntranceHasBeenSet() const
{
    return m_entranceHasBeenSet;
}

string LaneGroup::GetLaneGroupId() const
{
    return m_laneGroupId;
}

void LaneGroup::SetLaneGroupId(const string& _laneGroupId)
{
    m_laneGroupId = _laneGroupId;
    m_laneGroupIdHasBeenSet = true;
}

bool LaneGroup::LaneGroupIdHasBeenSet() const
{
    return m_laneGroupIdHasBeenSet;
}

string LaneGroup::GetLaneId() const
{
    return m_laneId;
}

void LaneGroup::SetLaneId(const string& _laneId)
{
    m_laneId = _laneId;
    m_laneIdHasBeenSet = true;
}

bool LaneGroup::LaneIdHasBeenSet() const
{
    return m_laneIdHasBeenSet;
}

string LaneGroup::GetGroupName() const
{
    return m_groupName;
}

void LaneGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool LaneGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string LaneGroup::GetApplicationId() const
{
    return m_applicationId;
}

void LaneGroup::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool LaneGroup::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string LaneGroup::GetApplicationName() const
{
    return m_applicationName;
}

void LaneGroup::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool LaneGroup::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string LaneGroup::GetNamespaceId() const
{
    return m_namespaceId;
}

void LaneGroup::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool LaneGroup::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string LaneGroup::GetNamespaceName() const
{
    return m_namespaceName;
}

void LaneGroup::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool LaneGroup::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

int64_t LaneGroup::GetCreateTime() const
{
    return m_createTime;
}

void LaneGroup::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LaneGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t LaneGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void LaneGroup::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LaneGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string LaneGroup::GetClusterType() const
{
    return m_clusterType;
}

void LaneGroup::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool LaneGroup::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

