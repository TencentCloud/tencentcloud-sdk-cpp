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

#include <tencentcloud/tcr/v20190924/model/NamespaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

NamespaceInfo::NamespaceInfo() :
    m_namespaceHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_repoCountHasBeenSet(false)
{
}

CoreInternalOutcome NamespaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("RepoCount") && !value["RepoCount"].IsNull())
    {
        if (!value["RepoCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.RepoCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_repoCount = value["RepoCount"].GetInt64();
        m_repoCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamespaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_repoCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repoCount, allocator);
    }

}


string NamespaceInfo::GetNamespace() const
{
    return m_namespace;
}

void NamespaceInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool NamespaceInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string NamespaceInfo::GetCreationTime() const
{
    return m_creationTime;
}

void NamespaceInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool NamespaceInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

int64_t NamespaceInfo::GetRepoCount() const
{
    return m_repoCount;
}

void NamespaceInfo::SetRepoCount(const int64_t& _repoCount)
{
    m_repoCount = _repoCount;
    m_repoCountHasBeenSet = true;
}

bool NamespaceInfo::RepoCountHasBeenSet() const
{
    return m_repoCountHasBeenSet;
}

