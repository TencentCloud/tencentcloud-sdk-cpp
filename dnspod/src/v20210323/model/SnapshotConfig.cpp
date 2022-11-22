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

#include <tencentcloud/dnspod/v20210323/model/SnapshotConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

SnapshotConfig::SnapshotConfig() :
    m_configHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_snapshotCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_updatedOnHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotConfig.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotConfig.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotConfig.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotConfig.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SnapshotCount") && !value["SnapshotCount"].IsNull())
    {
        if (!value["SnapshotCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotConfig.SnapshotCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotCount = value["SnapshotCount"].GetUint64();
        m_snapshotCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotConfig.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotConfig.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotCount, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

}


string SnapshotConfig::GetConfig() const
{
    return m_config;
}

void SnapshotConfig::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool SnapshotConfig::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string SnapshotConfig::GetCreatedOn() const
{
    return m_createdOn;
}

void SnapshotConfig::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool SnapshotConfig::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string SnapshotConfig::GetDomainId() const
{
    return m_domainId;
}

void SnapshotConfig::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool SnapshotConfig::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string SnapshotConfig::GetId() const
{
    return m_id;
}

void SnapshotConfig::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SnapshotConfig::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t SnapshotConfig::GetSnapshotCount() const
{
    return m_snapshotCount;
}

void SnapshotConfig::SetSnapshotCount(const uint64_t& _snapshotCount)
{
    m_snapshotCount = _snapshotCount;
    m_snapshotCountHasBeenSet = true;
}

bool SnapshotConfig::SnapshotCountHasBeenSet() const
{
    return m_snapshotCountHasBeenSet;
}

string SnapshotConfig::GetStatus() const
{
    return m_status;
}

void SnapshotConfig::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SnapshotConfig::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SnapshotConfig::GetUpdatedOn() const
{
    return m_updatedOn;
}

void SnapshotConfig::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool SnapshotConfig::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

