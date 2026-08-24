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

#include <tencentcloud/bdrc/v20260330/model/ResourcePlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ResourcePlan::ResourcePlan() :
    m_resourceIdHasBeenSet(false),
    m_backupPathsHasBeenSet(false),
    m_includeFileTypesHasBeenSet(false),
    m_excludePatternsHasBeenSet(false),
    m_excludeSystemDirectoriesHasBeenSet(false),
    m_executeImmediatelyHasBeenSet(false)
{
}

CoreInternalOutcome ResourcePlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePlan.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("BackupPaths") && !value["BackupPaths"].IsNull())
    {
        if (!value["BackupPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourcePlan.BackupPaths` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backupPaths.push_back((*itr).GetString());
        }
        m_backupPathsHasBeenSet = true;
    }

    if (value.HasMember("IncludeFileTypes") && !value["IncludeFileTypes"].IsNull())
    {
        if (!value["IncludeFileTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourcePlan.IncludeFileTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["IncludeFileTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_includeFileTypes.push_back((*itr).GetString());
        }
        m_includeFileTypesHasBeenSet = true;
    }

    if (value.HasMember("ExcludePatterns") && !value["ExcludePatterns"].IsNull())
    {
        if (!value["ExcludePatterns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourcePlan.ExcludePatterns` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludePatterns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludePatterns.push_back((*itr).GetString());
        }
        m_excludePatternsHasBeenSet = true;
    }

    if (value.HasMember("ExcludeSystemDirectories") && !value["ExcludeSystemDirectories"].IsNull())
    {
        if (!value["ExcludeSystemDirectories"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePlan.ExcludeSystemDirectories` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_excludeSystemDirectories = value["ExcludeSystemDirectories"].GetBool();
        m_excludeSystemDirectoriesHasBeenSet = true;
    }

    if (value.HasMember("ExecuteImmediately") && !value["ExecuteImmediately"].IsNull())
    {
        if (!value["ExecuteImmediately"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePlan.ExecuteImmediately` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_executeImmediately = value["ExecuteImmediately"].GetBool();
        m_executeImmediatelyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourcePlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupPaths.begin(); itr != m_backupPaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_includeFileTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeFileTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeFileTypes.begin(); itr != m_includeFileTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludePatternsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludePatterns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludePatterns.begin(); itr != m_excludePatterns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeSystemDirectoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeSystemDirectories";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_excludeSystemDirectories, allocator);
    }

    if (m_executeImmediatelyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteImmediately";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executeImmediately, allocator);
    }

}


string ResourcePlan::GetResourceId() const
{
    return m_resourceId;
}

void ResourcePlan::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourcePlan::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

vector<string> ResourcePlan::GetBackupPaths() const
{
    return m_backupPaths;
}

void ResourcePlan::SetBackupPaths(const vector<string>& _backupPaths)
{
    m_backupPaths = _backupPaths;
    m_backupPathsHasBeenSet = true;
}

bool ResourcePlan::BackupPathsHasBeenSet() const
{
    return m_backupPathsHasBeenSet;
}

vector<string> ResourcePlan::GetIncludeFileTypes() const
{
    return m_includeFileTypes;
}

void ResourcePlan::SetIncludeFileTypes(const vector<string>& _includeFileTypes)
{
    m_includeFileTypes = _includeFileTypes;
    m_includeFileTypesHasBeenSet = true;
}

bool ResourcePlan::IncludeFileTypesHasBeenSet() const
{
    return m_includeFileTypesHasBeenSet;
}

vector<string> ResourcePlan::GetExcludePatterns() const
{
    return m_excludePatterns;
}

void ResourcePlan::SetExcludePatterns(const vector<string>& _excludePatterns)
{
    m_excludePatterns = _excludePatterns;
    m_excludePatternsHasBeenSet = true;
}

bool ResourcePlan::ExcludePatternsHasBeenSet() const
{
    return m_excludePatternsHasBeenSet;
}

bool ResourcePlan::GetExcludeSystemDirectories() const
{
    return m_excludeSystemDirectories;
}

void ResourcePlan::SetExcludeSystemDirectories(const bool& _excludeSystemDirectories)
{
    m_excludeSystemDirectories = _excludeSystemDirectories;
    m_excludeSystemDirectoriesHasBeenSet = true;
}

bool ResourcePlan::ExcludeSystemDirectoriesHasBeenSet() const
{
    return m_excludeSystemDirectoriesHasBeenSet;
}

bool ResourcePlan::GetExecuteImmediately() const
{
    return m_executeImmediately;
}

void ResourcePlan::SetExecuteImmediately(const bool& _executeImmediately)
{
    m_executeImmediately = _executeImmediately;
    m_executeImmediatelyHasBeenSet = true;
}

bool ResourcePlan::ExecuteImmediatelyHasBeenSet() const
{
    return m_executeImmediatelyHasBeenSet;
}

