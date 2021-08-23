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

#include <tencentcloud/tcr/v20190924/model/Favors.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

Favors::Favors() :
    m_repoNameHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_pullCountHasBeenSet(false),
    m_favorCountHasBeenSet(false),
    m_publicHasBeenSet(false),
    m_isQcloudOfficialHasBeenSet(false),
    m_tagCountHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_regionIdHasBeenSet(false)
{
}

CoreInternalOutcome Favors::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Favors.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("RepoType") && !value["RepoType"].IsNull())
    {
        if (!value["RepoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Favors.RepoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoType = string(value["RepoType"].GetString());
        m_repoTypeHasBeenSet = true;
    }

    if (value.HasMember("PullCount") && !value["PullCount"].IsNull())
    {
        if (!value["PullCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Favors.PullCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pullCount = value["PullCount"].GetInt64();
        m_pullCountHasBeenSet = true;
    }

    if (value.HasMember("FavorCount") && !value["FavorCount"].IsNull())
    {
        if (!value["FavorCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Favors.FavorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_favorCount = value["FavorCount"].GetInt64();
        m_favorCountHasBeenSet = true;
    }

    if (value.HasMember("Public") && !value["Public"].IsNull())
    {
        if (!value["Public"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Favors.Public` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_public = value["Public"].GetInt64();
        m_publicHasBeenSet = true;
    }

    if (value.HasMember("IsQcloudOfficial") && !value["IsQcloudOfficial"].IsNull())
    {
        if (!value["IsQcloudOfficial"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Favors.IsQcloudOfficial` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isQcloudOfficial = value["IsQcloudOfficial"].GetBool();
        m_isQcloudOfficialHasBeenSet = true;
    }

    if (value.HasMember("TagCount") && !value["TagCount"].IsNull())
    {
        if (!value["TagCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Favors.TagCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tagCount = value["TagCount"].GetInt64();
        m_tagCountHasBeenSet = true;
    }

    if (value.HasMember("Logo") && !value["Logo"].IsNull())
    {
        if (!value["Logo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Favors.Logo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logo = string(value["Logo"].GetString());
        m_logoHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Favors.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Favors.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Favors::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_publicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Public";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_public, allocator);
    }

    if (m_isQcloudOfficialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQcloudOfficial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isQcloudOfficial, allocator);
    }

    if (m_tagCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagCount, allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logo.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

}


string Favors::GetRepoName() const
{
    return m_repoName;
}

void Favors::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool Favors::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string Favors::GetRepoType() const
{
    return m_repoType;
}

void Favors::SetRepoType(const string& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool Favors::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

int64_t Favors::GetPullCount() const
{
    return m_pullCount;
}

void Favors::SetPullCount(const int64_t& _pullCount)
{
    m_pullCount = _pullCount;
    m_pullCountHasBeenSet = true;
}

bool Favors::PullCountHasBeenSet() const
{
    return m_pullCountHasBeenSet;
}

int64_t Favors::GetFavorCount() const
{
    return m_favorCount;
}

void Favors::SetFavorCount(const int64_t& _favorCount)
{
    m_favorCount = _favorCount;
    m_favorCountHasBeenSet = true;
}

bool Favors::FavorCountHasBeenSet() const
{
    return m_favorCountHasBeenSet;
}

int64_t Favors::GetPublic() const
{
    return m_public;
}

void Favors::SetPublic(const int64_t& _public)
{
    m_public = _public;
    m_publicHasBeenSet = true;
}

bool Favors::PublicHasBeenSet() const
{
    return m_publicHasBeenSet;
}

bool Favors::GetIsQcloudOfficial() const
{
    return m_isQcloudOfficial;
}

void Favors::SetIsQcloudOfficial(const bool& _isQcloudOfficial)
{
    m_isQcloudOfficial = _isQcloudOfficial;
    m_isQcloudOfficialHasBeenSet = true;
}

bool Favors::IsQcloudOfficialHasBeenSet() const
{
    return m_isQcloudOfficialHasBeenSet;
}

int64_t Favors::GetTagCount() const
{
    return m_tagCount;
}

void Favors::SetTagCount(const int64_t& _tagCount)
{
    m_tagCount = _tagCount;
    m_tagCountHasBeenSet = true;
}

bool Favors::TagCountHasBeenSet() const
{
    return m_tagCountHasBeenSet;
}

string Favors::GetLogo() const
{
    return m_logo;
}

void Favors::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool Favors::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string Favors::GetRegion() const
{
    return m_region;
}

void Favors::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Favors::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t Favors::GetRegionId() const
{
    return m_regionId;
}

void Favors::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool Favors::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

