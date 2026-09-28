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

#include <tencentcloud/emr/v20190103/model/AirflowGitSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

AirflowGitSource::AirflowGitSource() :
    m_repositoryUrlHasBeenSet(false),
    m_refHasBeenSet(false),
    m_directoryHasBeenSet(false)
{
}

CoreInternalOutcome AirflowGitSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepositoryUrl") && !value["RepositoryUrl"].IsNull())
    {
        if (!value["RepositoryUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirflowGitSource.RepositoryUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryUrl = string(value["RepositoryUrl"].GetString());
        m_repositoryUrlHasBeenSet = true;
    }

    if (value.HasMember("Ref") && !value["Ref"].IsNull())
    {
        if (!value["Ref"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirflowGitSource.Ref` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ref = string(value["Ref"].GetString());
        m_refHasBeenSet = true;
    }

    if (value.HasMember("Directory") && !value["Directory"].IsNull())
    {
        if (!value["Directory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirflowGitSource.Directory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directory = string(value["Directory"].GetString());
        m_directoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AirflowGitSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repositoryUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_refHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ref";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ref.c_str(), allocator).Move(), allocator);
    }

    if (m_directoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Directory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directory.c_str(), allocator).Move(), allocator);
    }

}


string AirflowGitSource::GetRepositoryUrl() const
{
    return m_repositoryUrl;
}

void AirflowGitSource::SetRepositoryUrl(const string& _repositoryUrl)
{
    m_repositoryUrl = _repositoryUrl;
    m_repositoryUrlHasBeenSet = true;
}

bool AirflowGitSource::RepositoryUrlHasBeenSet() const
{
    return m_repositoryUrlHasBeenSet;
}

string AirflowGitSource::GetRef() const
{
    return m_ref;
}

void AirflowGitSource::SetRef(const string& _ref)
{
    m_ref = _ref;
    m_refHasBeenSet = true;
}

bool AirflowGitSource::RefHasBeenSet() const
{
    return m_refHasBeenSet;
}

string AirflowGitSource::GetDirectory() const
{
    return m_directory;
}

void AirflowGitSource::SetDirectory(const string& _directory)
{
    m_directory = _directory;
    m_directoryHasBeenSet = true;
}

bool AirflowGitSource::DirectoryHasBeenSet() const
{
    return m_directoryHasBeenSet;
}

