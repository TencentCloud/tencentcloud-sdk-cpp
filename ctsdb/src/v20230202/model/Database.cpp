/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ctsdb/v20230202/model/Database.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctsdb::V20230202::Model;
using namespace std;

Database::Database() :
    m_clusterIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_coolDownInDaysHasBeenSet(false),
    m_retentionInDaysHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome Database::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CoolDownInDays") && !value["CoolDownInDays"].IsNull())
    {
        if (!value["CoolDownInDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Database.CoolDownInDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coolDownInDays = value["CoolDownInDays"].GetInt64();
        m_coolDownInDaysHasBeenSet = true;
    }

    if (value.HasMember("RetentionInDays") && !value["RetentionInDays"].IsNull())
    {
        if (!value["RetentionInDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Database.RetentionInDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionInDays = value["RetentionInDays"].GetInt64();
        m_retentionInDaysHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Database.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Database::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_coolDownInDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoolDownInDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coolDownInDays, allocator);
    }

    if (m_retentionInDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionInDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionInDays, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


string Database::GetClusterID() const
{
    return m_clusterID;
}

void Database::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool Database::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string Database::GetName() const
{
    return m_name;
}

void Database::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Database::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t Database::GetCoolDownInDays() const
{
    return m_coolDownInDays;
}

void Database::SetCoolDownInDays(const int64_t& _coolDownInDays)
{
    m_coolDownInDays = _coolDownInDays;
    m_coolDownInDaysHasBeenSet = true;
}

bool Database::CoolDownInDaysHasBeenSet() const
{
    return m_coolDownInDaysHasBeenSet;
}

int64_t Database::GetRetentionInDays() const
{
    return m_retentionInDays;
}

void Database::SetRetentionInDays(const int64_t& _retentionInDays)
{
    m_retentionInDays = _retentionInDays;
    m_retentionInDaysHasBeenSet = true;
}

bool Database::RetentionInDaysHasBeenSet() const
{
    return m_retentionInDaysHasBeenSet;
}

string Database::GetRemark() const
{
    return m_remark;
}

void Database::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Database::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t Database::GetStatus() const
{
    return m_status;
}

void Database::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Database::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Database::GetCreatedAt() const
{
    return m_createdAt;
}

void Database::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Database::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string Database::GetUpdatedAt() const
{
    return m_updatedAt;
}

void Database::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool Database::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

