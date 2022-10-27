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

#include <tencentcloud/oceanus/v20190422/model/WorkSpaceClusterItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

WorkSpaceClusterItem::WorkSpaceClusterItem() :
    m_clusterGroupIdHasBeenSet(false),
    m_clusterGroupSerialIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_workSpaceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectIdStrHasBeenSet(false)
{
}

CoreInternalOutcome WorkSpaceClusterItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterGroupId") && !value["ClusterGroupId"].IsNull())
    {
        if (!value["ClusterGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceClusterItem.ClusterGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterGroupId = value["ClusterGroupId"].GetInt64();
        m_clusterGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterGroupSerialId") && !value["ClusterGroupSerialId"].IsNull())
    {
        if (!value["ClusterGroupSerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceClusterItem.ClusterGroupSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterGroupSerialId = string(value["ClusterGroupSerialId"].GetString());
        m_clusterGroupSerialIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceClusterItem.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("WorkSpaceId") && !value["WorkSpaceId"].IsNull())
    {
        if (!value["WorkSpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceClusterItem.WorkSpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceId = string(value["WorkSpaceId"].GetString());
        m_workSpaceIdHasBeenSet = true;
    }

    if (value.HasMember("WorkSpaceName") && !value["WorkSpaceName"].IsNull())
    {
        if (!value["WorkSpaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceClusterItem.WorkSpaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceName = string(value["WorkSpaceName"].GetString());
        m_workSpaceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceClusterItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceClusterItem.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdStr") && !value["ProjectIdStr"].IsNull())
    {
        if (!value["ProjectIdStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceClusterItem.ProjectIdStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdStr = string(value["ProjectIdStr"].GetString());
        m_projectIdStrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkSpaceClusterItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterGroupId, allocator);
    }

    if (m_clusterGroupSerialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterGroupSerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterGroupSerialId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workSpaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectIdStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIdStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectIdStr.c_str(), allocator).Move(), allocator);
    }

}


int64_t WorkSpaceClusterItem::GetClusterGroupId() const
{
    return m_clusterGroupId;
}

void WorkSpaceClusterItem::SetClusterGroupId(const int64_t& _clusterGroupId)
{
    m_clusterGroupId = _clusterGroupId;
    m_clusterGroupIdHasBeenSet = true;
}

bool WorkSpaceClusterItem::ClusterGroupIdHasBeenSet() const
{
    return m_clusterGroupIdHasBeenSet;
}

string WorkSpaceClusterItem::GetClusterGroupSerialId() const
{
    return m_clusterGroupSerialId;
}

void WorkSpaceClusterItem::SetClusterGroupSerialId(const string& _clusterGroupSerialId)
{
    m_clusterGroupSerialId = _clusterGroupSerialId;
    m_clusterGroupSerialIdHasBeenSet = true;
}

bool WorkSpaceClusterItem::ClusterGroupSerialIdHasBeenSet() const
{
    return m_clusterGroupSerialIdHasBeenSet;
}

string WorkSpaceClusterItem::GetClusterName() const
{
    return m_clusterName;
}

void WorkSpaceClusterItem::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool WorkSpaceClusterItem::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string WorkSpaceClusterItem::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void WorkSpaceClusterItem::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool WorkSpaceClusterItem::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

string WorkSpaceClusterItem::GetWorkSpaceName() const
{
    return m_workSpaceName;
}

void WorkSpaceClusterItem::SetWorkSpaceName(const string& _workSpaceName)
{
    m_workSpaceName = _workSpaceName;
    m_workSpaceNameHasBeenSet = true;
}

bool WorkSpaceClusterItem::WorkSpaceNameHasBeenSet() const
{
    return m_workSpaceNameHasBeenSet;
}

int64_t WorkSpaceClusterItem::GetStatus() const
{
    return m_status;
}

void WorkSpaceClusterItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WorkSpaceClusterItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t WorkSpaceClusterItem::GetProjectId() const
{
    return m_projectId;
}

void WorkSpaceClusterItem::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool WorkSpaceClusterItem::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string WorkSpaceClusterItem::GetProjectIdStr() const
{
    return m_projectIdStr;
}

void WorkSpaceClusterItem::SetProjectIdStr(const string& _projectIdStr)
{
    m_projectIdStr = _projectIdStr;
    m_projectIdStrHasBeenSet = true;
}

bool WorkSpaceClusterItem::ProjectIdStrHasBeenSet() const
{
    return m_projectIdStrHasBeenSet;
}

