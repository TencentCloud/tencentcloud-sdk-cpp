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

#include <tencentcloud/oceanus/v20190422/model/WorkSpaceSetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

WorkSpaceSetItem::WorkSpaceSetItem() :
    m_serialIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_workSpaceNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clusterGroupSetItemHasBeenSet(false),
    m_roleAuthHasBeenSet(false),
    m_roleAuthCountHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_jobsCountHasBeenSet(false)
{
}

CoreInternalOutcome WorkSpaceSetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SerialId") && !value["SerialId"].IsNull())
    {
        if (!value["SerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.SerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialId = string(value["SerialId"].GetString());
        m_serialIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("WorkSpaceName") && !value["WorkSpaceName"].IsNull())
    {
        if (!value["WorkSpaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.WorkSpaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceName = string(value["WorkSpaceName"].GetString());
        m_workSpaceNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ClusterGroupSetItem") && !value["ClusterGroupSetItem"].IsNull())
    {
        if (!value["ClusterGroupSetItem"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.ClusterGroupSetItem` is not array type"));

        const rapidjson::Value &tmpValue = value["ClusterGroupSetItem"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterGroupSetItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusterGroupSetItem.push_back(item);
        }
        m_clusterGroupSetItemHasBeenSet = true;
    }

    if (value.HasMember("RoleAuth") && !value["RoleAuth"].IsNull())
    {
        if (!value["RoleAuth"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.RoleAuth` is not array type"));

        const rapidjson::Value &tmpValue = value["RoleAuth"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoleAuth item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roleAuth.push_back(item);
        }
        m_roleAuthHasBeenSet = true;
    }

    if (value.HasMember("RoleAuthCount") && !value["RoleAuthCount"].IsNull())
    {
        if (!value["RoleAuthCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.RoleAuthCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roleAuthCount = value["RoleAuthCount"].GetInt64();
        m_roleAuthCountHasBeenSet = true;
    }

    if (value.HasMember("WorkSpaceId") && !value["WorkSpaceId"].IsNull())
    {
        if (!value["WorkSpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.WorkSpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceId = string(value["WorkSpaceId"].GetString());
        m_workSpaceIdHasBeenSet = true;
    }

    if (value.HasMember("JobsCount") && !value["JobsCount"].IsNull())
    {
        if (!value["JobsCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkSpaceSetItem.JobsCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobsCount = value["JobsCount"].GetInt64();
        m_jobsCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkSpaceSetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workSpaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterGroupSetItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterGroupSetItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterGroupSetItem.begin(); itr != m_clusterGroupSetItem.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_roleAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roleAuth.begin(); itr != m_roleAuth.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_roleAuthCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleAuthCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleAuthCount, allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobsCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobsCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobsCount, allocator);
    }

}


string WorkSpaceSetItem::GetSerialId() const
{
    return m_serialId;
}

void WorkSpaceSetItem::SetSerialId(const string& _serialId)
{
    m_serialId = _serialId;
    m_serialIdHasBeenSet = true;
}

bool WorkSpaceSetItem::SerialIdHasBeenSet() const
{
    return m_serialIdHasBeenSet;
}

int64_t WorkSpaceSetItem::GetAppId() const
{
    return m_appId;
}

void WorkSpaceSetItem::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool WorkSpaceSetItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string WorkSpaceSetItem::GetOwnerUin() const
{
    return m_ownerUin;
}

void WorkSpaceSetItem::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool WorkSpaceSetItem::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string WorkSpaceSetItem::GetCreatorUin() const
{
    return m_creatorUin;
}

void WorkSpaceSetItem::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool WorkSpaceSetItem::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string WorkSpaceSetItem::GetWorkSpaceName() const
{
    return m_workSpaceName;
}

void WorkSpaceSetItem::SetWorkSpaceName(const string& _workSpaceName)
{
    m_workSpaceName = _workSpaceName;
    m_workSpaceNameHasBeenSet = true;
}

bool WorkSpaceSetItem::WorkSpaceNameHasBeenSet() const
{
    return m_workSpaceNameHasBeenSet;
}

string WorkSpaceSetItem::GetRegion() const
{
    return m_region;
}

void WorkSpaceSetItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool WorkSpaceSetItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string WorkSpaceSetItem::GetCreateTime() const
{
    return m_createTime;
}

void WorkSpaceSetItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkSpaceSetItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WorkSpaceSetItem::GetUpdateTime() const
{
    return m_updateTime;
}

void WorkSpaceSetItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WorkSpaceSetItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t WorkSpaceSetItem::GetStatus() const
{
    return m_status;
}

void WorkSpaceSetItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WorkSpaceSetItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string WorkSpaceSetItem::GetDescription() const
{
    return m_description;
}

void WorkSpaceSetItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WorkSpaceSetItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<ClusterGroupSetItem> WorkSpaceSetItem::GetClusterGroupSetItem() const
{
    return m_clusterGroupSetItem;
}

void WorkSpaceSetItem::SetClusterGroupSetItem(const vector<ClusterGroupSetItem>& _clusterGroupSetItem)
{
    m_clusterGroupSetItem = _clusterGroupSetItem;
    m_clusterGroupSetItemHasBeenSet = true;
}

bool WorkSpaceSetItem::ClusterGroupSetItemHasBeenSet() const
{
    return m_clusterGroupSetItemHasBeenSet;
}

vector<RoleAuth> WorkSpaceSetItem::GetRoleAuth() const
{
    return m_roleAuth;
}

void WorkSpaceSetItem::SetRoleAuth(const vector<RoleAuth>& _roleAuth)
{
    m_roleAuth = _roleAuth;
    m_roleAuthHasBeenSet = true;
}

bool WorkSpaceSetItem::RoleAuthHasBeenSet() const
{
    return m_roleAuthHasBeenSet;
}

int64_t WorkSpaceSetItem::GetRoleAuthCount() const
{
    return m_roleAuthCount;
}

void WorkSpaceSetItem::SetRoleAuthCount(const int64_t& _roleAuthCount)
{
    m_roleAuthCount = _roleAuthCount;
    m_roleAuthCountHasBeenSet = true;
}

bool WorkSpaceSetItem::RoleAuthCountHasBeenSet() const
{
    return m_roleAuthCountHasBeenSet;
}

string WorkSpaceSetItem::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void WorkSpaceSetItem::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool WorkSpaceSetItem::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

int64_t WorkSpaceSetItem::GetJobsCount() const
{
    return m_jobsCount;
}

void WorkSpaceSetItem::SetJobsCount(const int64_t& _jobsCount)
{
    m_jobsCount = _jobsCount;
    m_jobsCountHasBeenSet = true;
}

bool WorkSpaceSetItem::JobsCountHasBeenSet() const
{
    return m_jobsCountHasBeenSet;
}

