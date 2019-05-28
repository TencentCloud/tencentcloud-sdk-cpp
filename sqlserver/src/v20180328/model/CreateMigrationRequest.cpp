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

#include <tencentcloud/sqlserver/v20180328/model/CreateMigrationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

CreateMigrationRequest::CreateMigrationRequest() :
    m_migrateNameHasBeenSet(false),
    m_migrateTypeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_migrateDBSetHasBeenSet(false)
{
}

string CreateMigrationRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_migrateNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MigrateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_migrateName.c_str(), allocator).Move(), allocator);
    }

    if (m_migrateTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MigrateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_migrateType, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_source.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_targetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_target.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_migrateDBSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MigrateDBSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_migrateDBSet.begin(); itr != m_migrateDBSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMigrationRequest::GetMigrateName() const
{
    return m_migrateName;
}

void CreateMigrationRequest::SetMigrateName(const string& _migrateName)
{
    m_migrateName = _migrateName;
    m_migrateNameHasBeenSet = true;
}

bool CreateMigrationRequest::MigrateNameHasBeenSet() const
{
    return m_migrateNameHasBeenSet;
}

uint64_t CreateMigrationRequest::GetMigrateType() const
{
    return m_migrateType;
}

void CreateMigrationRequest::SetMigrateType(const uint64_t& _migrateType)
{
    m_migrateType = _migrateType;
    m_migrateTypeHasBeenSet = true;
}

bool CreateMigrationRequest::MigrateTypeHasBeenSet() const
{
    return m_migrateTypeHasBeenSet;
}

uint64_t CreateMigrationRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateMigrationRequest::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateMigrationRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

MigrateSource CreateMigrationRequest::GetSource() const
{
    return m_source;
}

void CreateMigrationRequest::SetSource(const MigrateSource& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateMigrationRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

MigrateTarget CreateMigrationRequest::GetTarget() const
{
    return m_target;
}

void CreateMigrationRequest::SetTarget(const MigrateTarget& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool CreateMigrationRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

vector<MigrateDB> CreateMigrationRequest::GetMigrateDBSet() const
{
    return m_migrateDBSet;
}

void CreateMigrationRequest::SetMigrateDBSet(const vector<MigrateDB>& _migrateDBSet)
{
    m_migrateDBSet = _migrateDBSet;
    m_migrateDBSetHasBeenSet = true;
}

bool CreateMigrationRequest::MigrateDBSetHasBeenSet() const
{
    return m_migrateDBSetHasBeenSet;
}


