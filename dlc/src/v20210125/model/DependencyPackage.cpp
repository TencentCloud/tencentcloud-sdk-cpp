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

#include <tencentcloud/dlc/v20210125/model/DependencyPackage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DependencyPackage::DependencyPackage() :
    m_packageSourceHasBeenSet(false),
    m_mavenPackageHasBeenSet(false),
    m_mavenRepositoryHasBeenSet(false),
    m_mavenExclusionHasBeenSet(false),
    m_pypiPackageHasBeenSet(false),
    m_pypiIndexUrlHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_packagePathHasBeenSet(false)
{
}

CoreInternalOutcome DependencyPackage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageSource") && !value["PackageSource"].IsNull())
    {
        if (!value["PackageSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyPackage.PackageSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageSource = string(value["PackageSource"].GetString());
        m_packageSourceHasBeenSet = true;
    }

    if (value.HasMember("MavenPackage") && !value["MavenPackage"].IsNull())
    {
        if (!value["MavenPackage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyPackage.MavenPackage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mavenPackage = string(value["MavenPackage"].GetString());
        m_mavenPackageHasBeenSet = true;
    }

    if (value.HasMember("MavenRepository") && !value["MavenRepository"].IsNull())
    {
        if (!value["MavenRepository"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyPackage.MavenRepository` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mavenRepository = string(value["MavenRepository"].GetString());
        m_mavenRepositoryHasBeenSet = true;
    }

    if (value.HasMember("MavenExclusion") && !value["MavenExclusion"].IsNull())
    {
        if (!value["MavenExclusion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyPackage.MavenExclusion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mavenExclusion = string(value["MavenExclusion"].GetString());
        m_mavenExclusionHasBeenSet = true;
    }

    if (value.HasMember("PypiPackage") && !value["PypiPackage"].IsNull())
    {
        if (!value["PypiPackage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyPackage.PypiPackage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pypiPackage = string(value["PypiPackage"].GetString());
        m_pypiPackageHasBeenSet = true;
    }

    if (value.HasMember("PypiIndexUrl") && !value["PypiIndexUrl"].IsNull())
    {
        if (!value["PypiIndexUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyPackage.PypiIndexUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pypiIndexUrl = string(value["PypiIndexUrl"].GetString());
        m_pypiIndexUrlHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyPackage.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("PackagePath") && !value["PackagePath"].IsNull())
    {
        if (!value["PackagePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyPackage.PackagePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packagePath = string(value["PackagePath"].GetString());
        m_packagePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DependencyPackage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageSource.c_str(), allocator).Move(), allocator);
    }

    if (m_mavenPackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MavenPackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mavenPackage.c_str(), allocator).Move(), allocator);
    }

    if (m_mavenRepositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MavenRepository";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mavenRepository.c_str(), allocator).Move(), allocator);
    }

    if (m_mavenExclusionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MavenExclusion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mavenExclusion.c_str(), allocator).Move(), allocator);
    }

    if (m_pypiPackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PypiPackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pypiPackage.c_str(), allocator).Move(), allocator);
    }

    if (m_pypiIndexUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PypiIndexUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pypiIndexUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_packagePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackagePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packagePath.c_str(), allocator).Move(), allocator);
    }

}


string DependencyPackage::GetPackageSource() const
{
    return m_packageSource;
}

void DependencyPackage::SetPackageSource(const string& _packageSource)
{
    m_packageSource = _packageSource;
    m_packageSourceHasBeenSet = true;
}

bool DependencyPackage::PackageSourceHasBeenSet() const
{
    return m_packageSourceHasBeenSet;
}

string DependencyPackage::GetMavenPackage() const
{
    return m_mavenPackage;
}

void DependencyPackage::SetMavenPackage(const string& _mavenPackage)
{
    m_mavenPackage = _mavenPackage;
    m_mavenPackageHasBeenSet = true;
}

bool DependencyPackage::MavenPackageHasBeenSet() const
{
    return m_mavenPackageHasBeenSet;
}

string DependencyPackage::GetMavenRepository() const
{
    return m_mavenRepository;
}

void DependencyPackage::SetMavenRepository(const string& _mavenRepository)
{
    m_mavenRepository = _mavenRepository;
    m_mavenRepositoryHasBeenSet = true;
}

bool DependencyPackage::MavenRepositoryHasBeenSet() const
{
    return m_mavenRepositoryHasBeenSet;
}

string DependencyPackage::GetMavenExclusion() const
{
    return m_mavenExclusion;
}

void DependencyPackage::SetMavenExclusion(const string& _mavenExclusion)
{
    m_mavenExclusion = _mavenExclusion;
    m_mavenExclusionHasBeenSet = true;
}

bool DependencyPackage::MavenExclusionHasBeenSet() const
{
    return m_mavenExclusionHasBeenSet;
}

string DependencyPackage::GetPypiPackage() const
{
    return m_pypiPackage;
}

void DependencyPackage::SetPypiPackage(const string& _pypiPackage)
{
    m_pypiPackage = _pypiPackage;
    m_pypiPackageHasBeenSet = true;
}

bool DependencyPackage::PypiPackageHasBeenSet() const
{
    return m_pypiPackageHasBeenSet;
}

string DependencyPackage::GetPypiIndexUrl() const
{
    return m_pypiIndexUrl;
}

void DependencyPackage::SetPypiIndexUrl(const string& _pypiIndexUrl)
{
    m_pypiIndexUrl = _pypiIndexUrl;
    m_pypiIndexUrlHasBeenSet = true;
}

bool DependencyPackage::PypiIndexUrlHasBeenSet() const
{
    return m_pypiIndexUrlHasBeenSet;
}

string DependencyPackage::GetPackageType() const
{
    return m_packageType;
}

void DependencyPackage::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool DependencyPackage::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string DependencyPackage::GetPackagePath() const
{
    return m_packagePath;
}

void DependencyPackage::SetPackagePath(const string& _packagePath)
{
    m_packagePath = _packagePath;
    m_packagePathHasBeenSet = true;
}

bool DependencyPackage::PackagePathHasBeenSet() const
{
    return m_packagePathHasBeenSet;
}

