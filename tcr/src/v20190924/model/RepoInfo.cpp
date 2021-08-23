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

#include <tencentcloud/tcr/v20190924/model/RepoInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

RepoInfo::RepoInfo() :
    m_repoNameHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_tagCountHasBeenSet(false),
    m_publicHasBeenSet(false),
    m_isUserFavorHasBeenSet(false),
    m_isQcloudOfficialHasBeenSet(false),
    m_favorCountHasBeenSet(false),
    m_pullCountHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome RepoInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepoInfo.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("RepoType") && !value["RepoType"].IsNull())
    {
        if (!value["RepoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepoInfo.RepoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoType = string(value["RepoType"].GetString());
        m_repoTypeHasBeenSet = true;
    }

    if (value.HasMember("TagCount") && !value["TagCount"].IsNull())
    {
        if (!value["TagCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RepoInfo.TagCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tagCount = value["TagCount"].GetInt64();
        m_tagCountHasBeenSet = true;
    }

    if (value.HasMember("Public") && !value["Public"].IsNull())
    {
        if (!value["Public"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RepoInfo.Public` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_public = value["Public"].GetInt64();
        m_publicHasBeenSet = true;
    }

    if (value.HasMember("IsUserFavor") && !value["IsUserFavor"].IsNull())
    {
        if (!value["IsUserFavor"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RepoInfo.IsUserFavor` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUserFavor = value["IsUserFavor"].GetBool();
        m_isUserFavorHasBeenSet = true;
    }

    if (value.HasMember("IsQcloudOfficial") && !value["IsQcloudOfficial"].IsNull())
    {
        if (!value["IsQcloudOfficial"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RepoInfo.IsQcloudOfficial` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isQcloudOfficial = value["IsQcloudOfficial"].GetBool();
        m_isQcloudOfficialHasBeenSet = true;
    }

    if (value.HasMember("FavorCount") && !value["FavorCount"].IsNull())
    {
        if (!value["FavorCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RepoInfo.FavorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_favorCount = value["FavorCount"].GetInt64();
        m_favorCountHasBeenSet = true;
    }

    if (value.HasMember("PullCount") && !value["PullCount"].IsNull())
    {
        if (!value["PullCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RepoInfo.PullCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pullCount = value["PullCount"].GetInt64();
        m_pullCountHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepoInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepoInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepoInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RepoInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_tagCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagCount, allocator);
    }

    if (m_publicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Public";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_public, allocator);
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

    if (m_favorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FavorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_favorCount, allocator);
    }

    if (m_pullCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pullCount, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string RepoInfo::GetRepoName() const
{
    return m_repoName;
}

void RepoInfo::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool RepoInfo::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string RepoInfo::GetRepoType() const
{
    return m_repoType;
}

void RepoInfo::SetRepoType(const string& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool RepoInfo::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

int64_t RepoInfo::GetTagCount() const
{
    return m_tagCount;
}

void RepoInfo::SetTagCount(const int64_t& _tagCount)
{
    m_tagCount = _tagCount;
    m_tagCountHasBeenSet = true;
}

bool RepoInfo::TagCountHasBeenSet() const
{
    return m_tagCountHasBeenSet;
}

int64_t RepoInfo::GetPublic() const
{
    return m_public;
}

void RepoInfo::SetPublic(const int64_t& _public)
{
    m_public = _public;
    m_publicHasBeenSet = true;
}

bool RepoInfo::PublicHasBeenSet() const
{
    return m_publicHasBeenSet;
}

bool RepoInfo::GetIsUserFavor() const
{
    return m_isUserFavor;
}

void RepoInfo::SetIsUserFavor(const bool& _isUserFavor)
{
    m_isUserFavor = _isUserFavor;
    m_isUserFavorHasBeenSet = true;
}

bool RepoInfo::IsUserFavorHasBeenSet() const
{
    return m_isUserFavorHasBeenSet;
}

bool RepoInfo::GetIsQcloudOfficial() const
{
    return m_isQcloudOfficial;
}

void RepoInfo::SetIsQcloudOfficial(const bool& _isQcloudOfficial)
{
    m_isQcloudOfficial = _isQcloudOfficial;
    m_isQcloudOfficialHasBeenSet = true;
}

bool RepoInfo::IsQcloudOfficialHasBeenSet() const
{
    return m_isQcloudOfficialHasBeenSet;
}

int64_t RepoInfo::GetFavorCount() const
{
    return m_favorCount;
}

void RepoInfo::SetFavorCount(const int64_t& _favorCount)
{
    m_favorCount = _favorCount;
    m_favorCountHasBeenSet = true;
}

bool RepoInfo::FavorCountHasBeenSet() const
{
    return m_favorCountHasBeenSet;
}

int64_t RepoInfo::GetPullCount() const
{
    return m_pullCount;
}

void RepoInfo::SetPullCount(const int64_t& _pullCount)
{
    m_pullCount = _pullCount;
    m_pullCountHasBeenSet = true;
}

bool RepoInfo::PullCountHasBeenSet() const
{
    return m_pullCountHasBeenSet;
}

string RepoInfo::GetDescription() const
{
    return m_description;
}

void RepoInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RepoInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RepoInfo::GetCreationTime() const
{
    return m_creationTime;
}

void RepoInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool RepoInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string RepoInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void RepoInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RepoInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

