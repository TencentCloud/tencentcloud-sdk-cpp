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

#include <tencentcloud/tcbr/v20220217/model/DeployParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

DeployParam::DeployParam() :
    m_deployTypeHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_deployRemarkHasBeenSet(false),
    m_repoInfoHasBeenSet(false),
    m_buildPacksHasBeenSet(false),
    m_releaseTypeHasBeenSet(false)
{
}

CoreInternalOutcome DeployParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeployType") && !value["DeployType"].IsNull())
    {
        if (!value["DeployType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployParam.DeployType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployType = string(value["DeployType"].GetString());
        m_deployTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployParam.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployParam.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("PackageVersion") && !value["PackageVersion"].IsNull())
    {
        if (!value["PackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployParam.PackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageVersion = string(value["PackageVersion"].GetString());
        m_packageVersionHasBeenSet = true;
    }

    if (value.HasMember("DeployRemark") && !value["DeployRemark"].IsNull())
    {
        if (!value["DeployRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployParam.DeployRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployRemark = string(value["DeployRemark"].GetString());
        m_deployRemarkHasBeenSet = true;
    }

    if (value.HasMember("RepoInfo") && !value["RepoInfo"].IsNull())
    {
        if (!value["RepoInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeployParam.RepoInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_repoInfo.Deserialize(value["RepoInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_repoInfoHasBeenSet = true;
    }

    if (value.HasMember("BuildPacks") && !value["BuildPacks"].IsNull())
    {
        if (!value["BuildPacks"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeployParam.BuildPacks` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_buildPacks.Deserialize(value["BuildPacks"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_buildPacksHasBeenSet = true;
    }

    if (value.HasMember("ReleaseType") && !value["ReleaseType"].IsNull())
    {
        if (!value["ReleaseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployParam.ReleaseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseType = string(value["ReleaseType"].GetString());
        m_releaseTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeployParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deployTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
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

    if (m_deployRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_repoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_repoInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_buildPacksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildPacks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_buildPacks.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_releaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseType.c_str(), allocator).Move(), allocator);
    }

}


string DeployParam::GetDeployType() const
{
    return m_deployType;
}

void DeployParam::SetDeployType(const string& _deployType)
{
    m_deployType = _deployType;
    m_deployTypeHasBeenSet = true;
}

bool DeployParam::DeployTypeHasBeenSet() const
{
    return m_deployTypeHasBeenSet;
}

string DeployParam::GetImageUrl() const
{
    return m_imageUrl;
}

void DeployParam::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool DeployParam::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string DeployParam::GetPackageName() const
{
    return m_packageName;
}

void DeployParam::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool DeployParam::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string DeployParam::GetPackageVersion() const
{
    return m_packageVersion;
}

void DeployParam::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool DeployParam::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

string DeployParam::GetDeployRemark() const
{
    return m_deployRemark;
}

void DeployParam::SetDeployRemark(const string& _deployRemark)
{
    m_deployRemark = _deployRemark;
    m_deployRemarkHasBeenSet = true;
}

bool DeployParam::DeployRemarkHasBeenSet() const
{
    return m_deployRemarkHasBeenSet;
}

RepositoryInfo DeployParam::GetRepoInfo() const
{
    return m_repoInfo;
}

void DeployParam::SetRepoInfo(const RepositoryInfo& _repoInfo)
{
    m_repoInfo = _repoInfo;
    m_repoInfoHasBeenSet = true;
}

bool DeployParam::RepoInfoHasBeenSet() const
{
    return m_repoInfoHasBeenSet;
}

BuildPacksInfo DeployParam::GetBuildPacks() const
{
    return m_buildPacks;
}

void DeployParam::SetBuildPacks(const BuildPacksInfo& _buildPacks)
{
    m_buildPacks = _buildPacks;
    m_buildPacksHasBeenSet = true;
}

bool DeployParam::BuildPacksHasBeenSet() const
{
    return m_buildPacksHasBeenSet;
}

string DeployParam::GetReleaseType() const
{
    return m_releaseType;
}

void DeployParam::SetReleaseType(const string& _releaseType)
{
    m_releaseType = _releaseType;
    m_releaseTypeHasBeenSet = true;
}

bool DeployParam::ReleaseTypeHasBeenSet() const
{
    return m_releaseTypeHasBeenSet;
}

