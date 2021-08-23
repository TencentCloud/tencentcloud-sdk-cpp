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

#include <tencentcloud/tcr/v20190924/model/RepositoryInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

RepositoryInfoResp::RepositoryInfoResp() :
    m_repoNameHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_publicHasBeenSet(false),
    m_pullCountHasBeenSet(false),
    m_favorCountHasBeenSet(false),
    m_isUserFavorHasBeenSet(false),
    m_isQcloudOfficialHasBeenSet(false)
{
}

CoreInternalOutcome RepositoryInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfoResp.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("RepoType") && !value["RepoType"].IsNull())
    {
        if (!value["RepoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfoResp.RepoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoType = string(value["RepoType"].GetString());
        m_repoTypeHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfoResp.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfoResp.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfoResp.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Public") && !value["Public"].IsNull())
    {
        if (!value["Public"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfoResp.Public` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_public = value["Public"].GetInt64();
        m_publicHasBeenSet = true;
    }

    if (value.HasMember("PullCount") && !value["PullCount"].IsNull())
    {
        if (!value["PullCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfoResp.PullCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pullCount = value["PullCount"].GetInt64();
        m_pullCountHasBeenSet = true;
    }

    if (value.HasMember("FavorCount") && !value["FavorCount"].IsNull())
    {
        if (!value["FavorCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfoResp.FavorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_favorCount = value["FavorCount"].GetInt64();
        m_favorCountHasBeenSet = true;
    }

    if (value.HasMember("IsUserFavor") && !value["IsUserFavor"].IsNull())
    {
        if (!value["IsUserFavor"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfoResp.IsUserFavor` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUserFavor = value["IsUserFavor"].GetBool();
        m_isUserFavorHasBeenSet = true;
    }

    if (value.HasMember("IsQcloudOfficial") && !value["IsQcloudOfficial"].IsNull())
    {
        if (!value["IsQcloudOfficial"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfoResp.IsQcloudOfficial` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isQcloudOfficial = value["IsQcloudOfficial"].GetBool();
        m_isQcloudOfficialHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RepositoryInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_repoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoType.c_str(), allocator).Move(), allocator);
    }

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_publicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Public";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_public, allocator);
    }

    if (m_pullCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pullCount, allocator);
    }

    if (m_favorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FavorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_favorCount, allocator);
    }

    if (m_isUserFavorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUserFavor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUserFavor, allocator);
    }

    if (m_isQcloudOfficialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQcloudOfficial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isQcloudOfficial, allocator);
    }

}


string RepositoryInfoResp::GetRepoName() const
{
    return m_repoName;
}

void RepositoryInfoResp::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool RepositoryInfoResp::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string RepositoryInfoResp::GetRepoType() const
{
    return m_repoType;
}

void RepositoryInfoResp::SetRepoType(const string& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool RepositoryInfoResp::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

string RepositoryInfoResp::GetServer() const
{
    return m_server;
}

void RepositoryInfoResp::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool RepositoryInfoResp::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string RepositoryInfoResp::GetCreationTime() const
{
    return m_creationTime;
}

void RepositoryInfoResp::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool RepositoryInfoResp::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string RepositoryInfoResp::GetDescription() const
{
    return m_description;
}

void RepositoryInfoResp::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RepositoryInfoResp::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t RepositoryInfoResp::GetPublic() const
{
    return m_public;
}

void RepositoryInfoResp::SetPublic(const int64_t& _public)
{
    m_public = _public;
    m_publicHasBeenSet = true;
}

bool RepositoryInfoResp::PublicHasBeenSet() const
{
    return m_publicHasBeenSet;
}

int64_t RepositoryInfoResp::GetPullCount() const
{
    return m_pullCount;
}

void RepositoryInfoResp::SetPullCount(const int64_t& _pullCount)
{
    m_pullCount = _pullCount;
    m_pullCountHasBeenSet = true;
}

bool RepositoryInfoResp::PullCountHasBeenSet() const
{
    return m_pullCountHasBeenSet;
}

int64_t RepositoryInfoResp::GetFavorCount() const
{
    return m_favorCount;
}

void RepositoryInfoResp::SetFavorCount(const int64_t& _favorCount)
{
    m_favorCount = _favorCount;
    m_favorCountHasBeenSet = true;
}

bool RepositoryInfoResp::FavorCountHasBeenSet() const
{
    return m_favorCountHasBeenSet;
}

bool RepositoryInfoResp::GetIsUserFavor() const
{
    return m_isUserFavor;
}

void RepositoryInfoResp::SetIsUserFavor(const bool& _isUserFavor)
{
    m_isUserFavor = _isUserFavor;
    m_isUserFavorHasBeenSet = true;
}

bool RepositoryInfoResp::IsUserFavorHasBeenSet() const
{
    return m_isUserFavorHasBeenSet;
}

bool RepositoryInfoResp::GetIsQcloudOfficial() const
{
    return m_isQcloudOfficial;
}

void RepositoryInfoResp::SetIsQcloudOfficial(const bool& _isQcloudOfficial)
{
    m_isQcloudOfficial = _isQcloudOfficial;
    m_isQcloudOfficialHasBeenSet = true;
}

bool RepositoryInfoResp::IsQcloudOfficialHasBeenSet() const
{
    return m_isQcloudOfficialHasBeenSet;
}

