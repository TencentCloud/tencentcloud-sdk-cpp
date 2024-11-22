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

#include <tencentcloud/tse/v20201207/model/ConfigFileReleaseDeletion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ConfigFileReleaseDeletion::ConfigFileReleaseDeletion() :
    m_namespaceHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_releaseVersionHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome ConfigFileReleaseDeletion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseDeletion.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseDeletion.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseDeletion.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("ReleaseVersion") && !value["ReleaseVersion"].IsNull())
    {
        if (!value["ReleaseVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseDeletion.ReleaseVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseVersion = string(value["ReleaseVersion"].GetString());
        m_releaseVersionHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseDeletion.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigFileReleaseDeletion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


string ConfigFileReleaseDeletion::GetNamespace() const
{
    return m_namespace;
}

void ConfigFileReleaseDeletion::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ConfigFileReleaseDeletion::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ConfigFileReleaseDeletion::GetGroup() const
{
    return m_group;
}

void ConfigFileReleaseDeletion::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool ConfigFileReleaseDeletion::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string ConfigFileReleaseDeletion::GetFileName() const
{
    return m_fileName;
}

void ConfigFileReleaseDeletion::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ConfigFileReleaseDeletion::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ConfigFileReleaseDeletion::GetReleaseVersion() const
{
    return m_releaseVersion;
}

void ConfigFileReleaseDeletion::SetReleaseVersion(const string& _releaseVersion)
{
    m_releaseVersion = _releaseVersion;
    m_releaseVersionHasBeenSet = true;
}

bool ConfigFileReleaseDeletion::ReleaseVersionHasBeenSet() const
{
    return m_releaseVersionHasBeenSet;
}

uint64_t ConfigFileReleaseDeletion::GetId() const
{
    return m_id;
}

void ConfigFileReleaseDeletion::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ConfigFileReleaseDeletion::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

