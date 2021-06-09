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

#include <tencentcloud/sqlserver/v20180328/model/ModifyMigrationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyMigrationRequest::ModifyMigrationRequest() :
    m_migrateIdHasBeenSet(false),
    m_migrateNameHasBeenSet(false),
    m_migrateTypeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_migrateDBSetHasBeenSet(false)
{
}

string ModifyMigrationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_migrateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_migrateId, allocator);
    }

    if (m_migrateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_migrateName.c_str(), allocator).Move(), allocator);
    }

    if (m_migrateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_migrateType, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_source.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_target.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_migrateDBSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateDBSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_migrateDBSet.begin(); itr != m_migrateDBSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyMigrationRequest::GetMigrateId() const
{
    return m_migrateId;
}

void ModifyMigrationRequest::SetMigrateId(const uint64_t& _migrateId)
{
    m_migrateId = _migrateId;
    m_migrateIdHasBeenSet = true;
}

bool ModifyMigrationRequest::MigrateIdHasBeenSet() const
{
    return m_migrateIdHasBeenSet;
}

string ModifyMigrationRequest::GetMigrateName() const
{
    return m_migrateName;
}

void ModifyMigrationRequest::SetMigrateName(const string& _migrateName)
{
    m_migrateName = _migrateName;
    m_migrateNameHasBeenSet = true;
}

bool ModifyMigrationRequest::MigrateNameHasBeenSet() const
{
    return m_migrateNameHasBeenSet;
}

uint64_t ModifyMigrationRequest::GetMigrateType() const
{
    return m_migrateType;
}

void ModifyMigrationRequest::SetMigrateType(const uint64_t& _migrateType)
{
    m_migrateType = _migrateType;
    m_migrateTypeHasBeenSet = true;
}

bool ModifyMigrationRequest::MigrateTypeHasBeenSet() const
{
    return m_migrateTypeHasBeenSet;
}

uint64_t ModifyMigrationRequest::GetSourceType() const
{
    return m_sourceType;
}

void ModifyMigrationRequest::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool ModifyMigrationRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

MigrateSource ModifyMigrationRequest::GetSource() const
{
    return m_source;
}

void ModifyMigrationRequest::SetSource(const MigrateSource& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ModifyMigrationRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

MigrateTarget ModifyMigrationRequest::GetTarget() const
{
    return m_target;
}

void ModifyMigrationRequest::SetTarget(const MigrateTarget& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool ModifyMigrationRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

vector<MigrateDB> ModifyMigrationRequest::GetMigrateDBSet() const
{
    return m_migrateDBSet;
}

void ModifyMigrationRequest::SetMigrateDBSet(const vector<MigrateDB>& _migrateDBSet)
{
    m_migrateDBSet = _migrateDBSet;
    m_migrateDBSetHasBeenSet = true;
}

bool ModifyMigrationRequest::MigrateDBSetHasBeenSet() const
{
    return m_migrateDBSetHasBeenSet;
}


