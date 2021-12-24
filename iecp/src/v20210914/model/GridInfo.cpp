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

#include <tencentcloud/iecp/v20210914/model/GridInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

GridInfo::GridInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_gridUniqKeyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_workloadKindHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_publisherHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome GridInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GridInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("GridUniqKey") && !value["GridUniqKey"].IsNull())
    {
        if (!value["GridUniqKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridInfo.GridUniqKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gridUniqKey = string(value["GridUniqKey"].GetString());
        m_gridUniqKeyHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("WorkloadKind") && !value["WorkloadKind"].IsNull())
    {
        if (!value["WorkloadKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridInfo.WorkloadKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadKind = string(value["WorkloadKind"].GetString());
        m_workloadKindHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GridInfo.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("Publisher") && !value["Publisher"].IsNull())
    {
        if (!value["Publisher"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridInfo.Publisher` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publisher = string(value["Publisher"].GetString());
        m_publisherHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GridInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_gridUniqKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GridUniqKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gridUniqKey.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadKind.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

    if (m_publisherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Publisher";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publisher.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


int64_t GridInfo::GetId() const
{
    return m_id;
}

void GridInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool GridInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string GridInfo::GetName() const
{
    return m_name;
}

void GridInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GridInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GridInfo::GetGridUniqKey() const
{
    return m_gridUniqKey;
}

void GridInfo::SetGridUniqKey(const string& _gridUniqKey)
{
    m_gridUniqKey = _gridUniqKey;
    m_gridUniqKeyHasBeenSet = true;
}

bool GridInfo::GridUniqKeyHasBeenSet() const
{
    return m_gridUniqKeyHasBeenSet;
}

string GridInfo::GetDescription() const
{
    return m_description;
}

void GridInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GridInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GridInfo::GetWorkloadKind() const
{
    return m_workloadKind;
}

void GridInfo::SetWorkloadKind(const string& _workloadKind)
{
    m_workloadKind = _workloadKind;
    m_workloadKindHasBeenSet = true;
}

bool GridInfo::WorkloadKindHasBeenSet() const
{
    return m_workloadKindHasBeenSet;
}

string GridInfo::GetStartTime() const
{
    return m_startTime;
}

void GridInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool GridInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t GridInfo::GetReplicas() const
{
    return m_replicas;
}

void GridInfo::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool GridInfo::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

string GridInfo::GetPublisher() const
{
    return m_publisher;
}

void GridInfo::SetPublisher(const string& _publisher)
{
    m_publisher = _publisher;
    m_publisherHasBeenSet = true;
}

bool GridInfo::PublisherHasBeenSet() const
{
    return m_publisherHasBeenSet;
}

string GridInfo::GetVersion() const
{
    return m_version;
}

void GridInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool GridInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

