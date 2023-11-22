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

#include <tencentcloud/cdb/v20170320/model/AuditInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

AuditInstanceInfo::AuditInstanceInfo() :
    m_projectIdHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_dbVersionHasBeenSet(false)
{
}

CoreInternalOutcome AuditInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfoUnit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagList.push_back(item);
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("DbVersion") && !value["DbVersion"].IsNull())
    {
        if (!value["DbVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.DbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersion = string(value["DbVersion"].GetString());
        m_dbVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

}


int64_t AuditInstanceInfo::GetProjectId() const
{
    return m_projectId;
}

void AuditInstanceInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AuditInstanceInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<TagInfoUnit> AuditInstanceInfo::GetTagList() const
{
    return m_tagList;
}

void AuditInstanceInfo::SetTagList(const vector<TagInfoUnit>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool AuditInstanceInfo::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

string AuditInstanceInfo::GetDbType() const
{
    return m_dbType;
}

void AuditInstanceInfo::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool AuditInstanceInfo::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string AuditInstanceInfo::GetDbVersion() const
{
    return m_dbVersion;
}

void AuditInstanceInfo::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool AuditInstanceInfo::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

