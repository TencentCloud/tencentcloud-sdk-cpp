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

#include <tencentcloud/tsf/v20180326/model/GroupRelease.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GroupRelease::GroupRelease() :
    m_packageIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_publicConfigReleaseListHasBeenSet(false),
    m_configReleaseListHasBeenSet(false),
    m_fileConfigReleaseListHasBeenSet(false)
{
}

CoreInternalOutcome GroupRelease::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupRelease.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupRelease.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("PackageVersion") && !value["PackageVersion"].IsNull())
    {
        if (!value["PackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupRelease.PackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageVersion = string(value["PackageVersion"].GetString());
        m_packageVersionHasBeenSet = true;
    }

    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupRelease.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupRelease.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("PublicConfigReleaseList") && !value["PublicConfigReleaseList"].IsNull())
    {
        if (!value["PublicConfigReleaseList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupRelease.PublicConfigReleaseList` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicConfigReleaseList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConfigRelease item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_publicConfigReleaseList.push_back(item);
        }
        m_publicConfigReleaseListHasBeenSet = true;
    }

    if (value.HasMember("ConfigReleaseList") && !value["ConfigReleaseList"].IsNull())
    {
        if (!value["ConfigReleaseList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupRelease.ConfigReleaseList` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigReleaseList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConfigRelease item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configReleaseList.push_back(item);
        }
        m_configReleaseListHasBeenSet = true;
    }

    if (value.HasMember("FileConfigReleaseList") && !value["FileConfigReleaseList"].IsNull())
    {
        if (!value["FileConfigReleaseList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupRelease.FileConfigReleaseList` is not array type"));

        const rapidjson::Value &tmpValue = value["FileConfigReleaseList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileConfigRelease item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileConfigReleaseList.push_back(item);
        }
        m_fileConfigReleaseListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupRelease::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicConfigReleaseListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicConfigReleaseList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publicConfigReleaseList.begin(); itr != m_publicConfigReleaseList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_configReleaseListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigReleaseList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configReleaseList.begin(); itr != m_configReleaseList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fileConfigReleaseListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileConfigReleaseList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileConfigReleaseList.begin(); itr != m_fileConfigReleaseList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GroupRelease::GetPackageId() const
{
    return m_packageId;
}

void GroupRelease::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool GroupRelease::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string GroupRelease::GetPackageName() const
{
    return m_packageName;
}

void GroupRelease::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool GroupRelease::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string GroupRelease::GetPackageVersion() const
{
    return m_packageVersion;
}

void GroupRelease::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool GroupRelease::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

string GroupRelease::GetRepoName() const
{
    return m_repoName;
}

void GroupRelease::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool GroupRelease::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string GroupRelease::GetTagName() const
{
    return m_tagName;
}

void GroupRelease::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool GroupRelease::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

vector<ConfigRelease> GroupRelease::GetPublicConfigReleaseList() const
{
    return m_publicConfigReleaseList;
}

void GroupRelease::SetPublicConfigReleaseList(const vector<ConfigRelease>& _publicConfigReleaseList)
{
    m_publicConfigReleaseList = _publicConfigReleaseList;
    m_publicConfigReleaseListHasBeenSet = true;
}

bool GroupRelease::PublicConfigReleaseListHasBeenSet() const
{
    return m_publicConfigReleaseListHasBeenSet;
}

vector<ConfigRelease> GroupRelease::GetConfigReleaseList() const
{
    return m_configReleaseList;
}

void GroupRelease::SetConfigReleaseList(const vector<ConfigRelease>& _configReleaseList)
{
    m_configReleaseList = _configReleaseList;
    m_configReleaseListHasBeenSet = true;
}

bool GroupRelease::ConfigReleaseListHasBeenSet() const
{
    return m_configReleaseListHasBeenSet;
}

vector<FileConfigRelease> GroupRelease::GetFileConfigReleaseList() const
{
    return m_fileConfigReleaseList;
}

void GroupRelease::SetFileConfigReleaseList(const vector<FileConfigRelease>& _fileConfigReleaseList)
{
    m_fileConfigReleaseList = _fileConfigReleaseList;
    m_fileConfigReleaseListHasBeenSet = true;
}

bool GroupRelease::FileConfigReleaseListHasBeenSet() const
{
    return m_fileConfigReleaseListHasBeenSet;
}

