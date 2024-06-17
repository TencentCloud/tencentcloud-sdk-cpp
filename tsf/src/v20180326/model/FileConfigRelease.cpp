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

#include <tencentcloud/tsf/v20180326/model/FileConfigRelease.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

FileConfigRelease::FileConfigRelease() :
    m_configReleaseIdHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_configVersionHasBeenSet(false),
    m_releaseDescHasBeenSet(false),
    m_releaseTimeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_configCentersHasBeenSet(false)
{
}

CoreInternalOutcome FileConfigRelease::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigReleaseId") && !value["ConfigReleaseId"].IsNull())
    {
        if (!value["ConfigReleaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfigRelease.ConfigReleaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configReleaseId = string(value["ConfigReleaseId"].GetString());
        m_configReleaseIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfigRelease.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfigRelease.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigVersion") && !value["ConfigVersion"].IsNull())
    {
        if (!value["ConfigVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfigRelease.ConfigVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configVersion = string(value["ConfigVersion"].GetString());
        m_configVersionHasBeenSet = true;
    }

    if (value.HasMember("ReleaseDesc") && !value["ReleaseDesc"].IsNull())
    {
        if (!value["ReleaseDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfigRelease.ReleaseDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseDesc = string(value["ReleaseDesc"].GetString());
        m_releaseDescHasBeenSet = true;
    }

    if (value.HasMember("ReleaseTime") && !value["ReleaseTime"].IsNull())
    {
        if (!value["ReleaseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfigRelease.ReleaseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseTime = string(value["ReleaseTime"].GetString());
        m_releaseTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfigRelease.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfigRelease.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfigRelease.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfigRelease.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfigRelease.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfigRelease.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigCenters") && !value["ConfigCenters"].IsNull())
    {
        if (!value["ConfigCenters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileConfigRelease.ConfigCenters` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigCenters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TsfConfigCenter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configCenters.push_back(item);
        }
        m_configCentersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileConfigRelease::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configReleaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigReleaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configReleaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_configVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_configCentersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigCenters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configCenters.begin(); itr != m_configCenters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FileConfigRelease::GetConfigReleaseId() const
{
    return m_configReleaseId;
}

void FileConfigRelease::SetConfigReleaseId(const string& _configReleaseId)
{
    m_configReleaseId = _configReleaseId;
    m_configReleaseIdHasBeenSet = true;
}

bool FileConfigRelease::ConfigReleaseIdHasBeenSet() const
{
    return m_configReleaseIdHasBeenSet;
}

string FileConfigRelease::GetConfigId() const
{
    return m_configId;
}

void FileConfigRelease::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool FileConfigRelease::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string FileConfigRelease::GetConfigName() const
{
    return m_configName;
}

void FileConfigRelease::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool FileConfigRelease::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string FileConfigRelease::GetConfigVersion() const
{
    return m_configVersion;
}

void FileConfigRelease::SetConfigVersion(const string& _configVersion)
{
    m_configVersion = _configVersion;
    m_configVersionHasBeenSet = true;
}

bool FileConfigRelease::ConfigVersionHasBeenSet() const
{
    return m_configVersionHasBeenSet;
}

string FileConfigRelease::GetReleaseDesc() const
{
    return m_releaseDesc;
}

void FileConfigRelease::SetReleaseDesc(const string& _releaseDesc)
{
    m_releaseDesc = _releaseDesc;
    m_releaseDescHasBeenSet = true;
}

bool FileConfigRelease::ReleaseDescHasBeenSet() const
{
    return m_releaseDescHasBeenSet;
}

string FileConfigRelease::GetReleaseTime() const
{
    return m_releaseTime;
}

void FileConfigRelease::SetReleaseTime(const string& _releaseTime)
{
    m_releaseTime = _releaseTime;
    m_releaseTimeHasBeenSet = true;
}

bool FileConfigRelease::ReleaseTimeHasBeenSet() const
{
    return m_releaseTimeHasBeenSet;
}

string FileConfigRelease::GetGroupId() const
{
    return m_groupId;
}

void FileConfigRelease::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool FileConfigRelease::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string FileConfigRelease::GetGroupName() const
{
    return m_groupName;
}

void FileConfigRelease::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool FileConfigRelease::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string FileConfigRelease::GetNamespaceId() const
{
    return m_namespaceId;
}

void FileConfigRelease::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool FileConfigRelease::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string FileConfigRelease::GetNamespaceName() const
{
    return m_namespaceName;
}

void FileConfigRelease::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool FileConfigRelease::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string FileConfigRelease::GetClusterId() const
{
    return m_clusterId;
}

void FileConfigRelease::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool FileConfigRelease::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string FileConfigRelease::GetClusterName() const
{
    return m_clusterName;
}

void FileConfigRelease::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool FileConfigRelease::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

vector<TsfConfigCenter> FileConfigRelease::GetConfigCenters() const
{
    return m_configCenters;
}

void FileConfigRelease::SetConfigCenters(const vector<TsfConfigCenter>& _configCenters)
{
    m_configCenters = _configCenters;
    m_configCentersHasBeenSet = true;
}

bool FileConfigRelease::ConfigCentersHasBeenSet() const
{
    return m_configCentersHasBeenSet;
}

