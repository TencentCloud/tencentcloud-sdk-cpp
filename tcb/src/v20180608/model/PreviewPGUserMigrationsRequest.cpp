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

#include <tencentcloud/tcb/v20180608/model/PreviewPGUserMigrationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PreviewPGUserMigrationsRequest::PreviewPGUserMigrationsRequest() :
    m_envIdHasBeenSet(false),
    m_migrationsHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

string PreviewPGUserMigrationsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_migrationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Migrations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_migrations.begin(); itr != m_migrations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PreviewPGUserMigrationsRequest::GetEnvId() const
{
    return m_envId;
}

void PreviewPGUserMigrationsRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool PreviewPGUserMigrationsRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

vector<MigrationInput> PreviewPGUserMigrationsRequest::GetMigrations() const
{
    return m_migrations;
}

void PreviewPGUserMigrationsRequest::SetMigrations(const vector<MigrationInput>& _migrations)
{
    m_migrations = _migrations;
    m_migrationsHasBeenSet = true;
}

bool PreviewPGUserMigrationsRequest::MigrationsHasBeenSet() const
{
    return m_migrationsHasBeenSet;
}

string PreviewPGUserMigrationsRequest::GetSource() const
{
    return m_source;
}

void PreviewPGUserMigrationsRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool PreviewPGUserMigrationsRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}


