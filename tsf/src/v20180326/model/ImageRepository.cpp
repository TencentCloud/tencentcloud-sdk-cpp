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

#include <tencentcloud/tsf/v20180326/model/ImageRepository.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ImageRepository::ImageRepository() :
    m_reponameHasBeenSet(false),
    m_repotypeHasBeenSet(false),
    m_tagCountHasBeenSet(false),
    m_isPublicHasBeenSet(false),
    m_isUserFavorHasBeenSet(false),
    m_isQcloudOfficialHasBeenSet(false),
    m_favorCountHasBeenSet(false),
    m_pullCountHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_tcrRepoInfoHasBeenSet(false),
    m_tcrBindingIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationNameRealHasBeenSet(false),
    m_publicHasBeenSet(false),
    m_createModeHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_repoTypeHasBeenSet(false)
{
}

CoreInternalOutcome ImageRepository::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Reponame") && !value["Reponame"].IsNull())
    {
        if (!value["Reponame"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.Reponame` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reponame = string(value["Reponame"].GetString());
        m_reponameHasBeenSet = true;
    }

    if (value.HasMember("Repotype") && !value["Repotype"].IsNull())
    {
        if (!value["Repotype"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.Repotype` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repotype = string(value["Repotype"].GetString());
        m_repotypeHasBeenSet = true;
    }

    if (value.HasMember("TagCount") && !value["TagCount"].IsNull())
    {
        if (!value["TagCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.TagCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tagCount = value["TagCount"].GetInt64();
        m_tagCountHasBeenSet = true;
    }

    if (value.HasMember("IsPublic") && !value["IsPublic"].IsNull())
    {
        if (!value["IsPublic"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.IsPublic` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPublic = value["IsPublic"].GetInt64();
        m_isPublicHasBeenSet = true;
    }

    if (value.HasMember("IsUserFavor") && !value["IsUserFavor"].IsNull())
    {
        if (!value["IsUserFavor"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.IsUserFavor` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUserFavor = value["IsUserFavor"].GetBool();
        m_isUserFavorHasBeenSet = true;
    }

    if (value.HasMember("IsQcloudOfficial") && !value["IsQcloudOfficial"].IsNull())
    {
        if (!value["IsQcloudOfficial"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.IsQcloudOfficial` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isQcloudOfficial = value["IsQcloudOfficial"].GetBool();
        m_isQcloudOfficialHasBeenSet = true;
    }

    if (value.HasMember("FavorCount") && !value["FavorCount"].IsNull())
    {
        if (!value["FavorCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.FavorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_favorCount = value["FavorCount"].GetInt64();
        m_favorCountHasBeenSet = true;
    }

    if (value.HasMember("PullCount") && !value["PullCount"].IsNull())
    {
        if (!value["PullCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.PullCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pullCount = value["PullCount"].GetInt64();
        m_pullCountHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TcrRepoInfo") && !value["TcrRepoInfo"].IsNull())
    {
        if (!value["TcrRepoInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.TcrRepoInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tcrRepoInfo.Deserialize(value["TcrRepoInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tcrRepoInfoHasBeenSet = true;
    }

    if (value.HasMember("TcrBindingId") && !value["TcrBindingId"].IsNull())
    {
        if (!value["TcrBindingId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.TcrBindingId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tcrBindingId = value["TcrBindingId"].GetInt64();
        m_tcrBindingIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.ApplicationName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_applicationName.Deserialize(value["ApplicationName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationNameReal") && !value["ApplicationNameReal"].IsNull())
    {
        if (!value["ApplicationNameReal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.ApplicationNameReal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationNameReal = string(value["ApplicationNameReal"].GetString());
        m_applicationNameRealHasBeenSet = true;
    }

    if (value.HasMember("Public") && !value["Public"].IsNull())
    {
        if (!value["Public"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.Public` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_public = value["Public"].GetInt64();
        m_publicHasBeenSet = true;
    }

    if (value.HasMember("CreateMode") && !value["CreateMode"].IsNull())
    {
        if (!value["CreateMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.CreateMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createMode = string(value["CreateMode"].GetString());
        m_createModeHasBeenSet = true;
    }

    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("RepoType") && !value["RepoType"].IsNull())
    {
        if (!value["RepoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRepository.RepoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoType = string(value["RepoType"].GetString());
        m_repoTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageRepository::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reponameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reponame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reponame.c_str(), allocator).Move(), allocator);
    }

    if (m_repotypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repotype";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repotype.c_str(), allocator).Move(), allocator);
    }

    if (m_tagCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagCount, allocator);
    }

    if (m_isPublicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPublic, allocator);
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

    if (m_tcrRepoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcrRepoInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tcrRepoInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tcrBindingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcrBindingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tcrBindingId, allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_applicationName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_applicationNameRealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationNameReal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationNameReal.c_str(), allocator).Move(), allocator);
    }

    if (m_publicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Public";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_public, allocator);
    }

    if (m_createModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createMode.c_str(), allocator).Move(), allocator);
    }

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

}


string ImageRepository::GetReponame() const
{
    return m_reponame;
}

void ImageRepository::SetReponame(const string& _reponame)
{
    m_reponame = _reponame;
    m_reponameHasBeenSet = true;
}

bool ImageRepository::ReponameHasBeenSet() const
{
    return m_reponameHasBeenSet;
}

string ImageRepository::GetRepotype() const
{
    return m_repotype;
}

void ImageRepository::SetRepotype(const string& _repotype)
{
    m_repotype = _repotype;
    m_repotypeHasBeenSet = true;
}

bool ImageRepository::RepotypeHasBeenSet() const
{
    return m_repotypeHasBeenSet;
}

int64_t ImageRepository::GetTagCount() const
{
    return m_tagCount;
}

void ImageRepository::SetTagCount(const int64_t& _tagCount)
{
    m_tagCount = _tagCount;
    m_tagCountHasBeenSet = true;
}

bool ImageRepository::TagCountHasBeenSet() const
{
    return m_tagCountHasBeenSet;
}

int64_t ImageRepository::GetIsPublic() const
{
    return m_isPublic;
}

void ImageRepository::SetIsPublic(const int64_t& _isPublic)
{
    m_isPublic = _isPublic;
    m_isPublicHasBeenSet = true;
}

bool ImageRepository::IsPublicHasBeenSet() const
{
    return m_isPublicHasBeenSet;
}

bool ImageRepository::GetIsUserFavor() const
{
    return m_isUserFavor;
}

void ImageRepository::SetIsUserFavor(const bool& _isUserFavor)
{
    m_isUserFavor = _isUserFavor;
    m_isUserFavorHasBeenSet = true;
}

bool ImageRepository::IsUserFavorHasBeenSet() const
{
    return m_isUserFavorHasBeenSet;
}

bool ImageRepository::GetIsQcloudOfficial() const
{
    return m_isQcloudOfficial;
}

void ImageRepository::SetIsQcloudOfficial(const bool& _isQcloudOfficial)
{
    m_isQcloudOfficial = _isQcloudOfficial;
    m_isQcloudOfficialHasBeenSet = true;
}

bool ImageRepository::IsQcloudOfficialHasBeenSet() const
{
    return m_isQcloudOfficialHasBeenSet;
}

int64_t ImageRepository::GetFavorCount() const
{
    return m_favorCount;
}

void ImageRepository::SetFavorCount(const int64_t& _favorCount)
{
    m_favorCount = _favorCount;
    m_favorCountHasBeenSet = true;
}

bool ImageRepository::FavorCountHasBeenSet() const
{
    return m_favorCountHasBeenSet;
}

int64_t ImageRepository::GetPullCount() const
{
    return m_pullCount;
}

void ImageRepository::SetPullCount(const int64_t& _pullCount)
{
    m_pullCount = _pullCount;
    m_pullCountHasBeenSet = true;
}

bool ImageRepository::PullCountHasBeenSet() const
{
    return m_pullCountHasBeenSet;
}

string ImageRepository::GetDescription() const
{
    return m_description;
}

void ImageRepository::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ImageRepository::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ImageRepository::GetCreationTime() const
{
    return m_creationTime;
}

void ImageRepository::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool ImageRepository::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string ImageRepository::GetUpdateTime() const
{
    return m_updateTime;
}

void ImageRepository::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ImageRepository::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

TcrRepoInfo ImageRepository::GetTcrRepoInfo() const
{
    return m_tcrRepoInfo;
}

void ImageRepository::SetTcrRepoInfo(const TcrRepoInfo& _tcrRepoInfo)
{
    m_tcrRepoInfo = _tcrRepoInfo;
    m_tcrRepoInfoHasBeenSet = true;
}

bool ImageRepository::TcrRepoInfoHasBeenSet() const
{
    return m_tcrRepoInfoHasBeenSet;
}

int64_t ImageRepository::GetTcrBindingId() const
{
    return m_tcrBindingId;
}

void ImageRepository::SetTcrBindingId(const int64_t& _tcrBindingId)
{
    m_tcrBindingId = _tcrBindingId;
    m_tcrBindingIdHasBeenSet = true;
}

bool ImageRepository::TcrBindingIdHasBeenSet() const
{
    return m_tcrBindingIdHasBeenSet;
}

string ImageRepository::GetApplicationId() const
{
    return m_applicationId;
}

void ImageRepository::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ImageRepository::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

ScalableRule ImageRepository::GetApplicationName() const
{
    return m_applicationName;
}

void ImageRepository::SetApplicationName(const ScalableRule& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ImageRepository::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string ImageRepository::GetApplicationNameReal() const
{
    return m_applicationNameReal;
}

void ImageRepository::SetApplicationNameReal(const string& _applicationNameReal)
{
    m_applicationNameReal = _applicationNameReal;
    m_applicationNameRealHasBeenSet = true;
}

bool ImageRepository::ApplicationNameRealHasBeenSet() const
{
    return m_applicationNameRealHasBeenSet;
}

int64_t ImageRepository::GetPublic() const
{
    return m_public;
}

void ImageRepository::SetPublic(const int64_t& _public)
{
    m_public = _public;
    m_publicHasBeenSet = true;
}

bool ImageRepository::PublicHasBeenSet() const
{
    return m_publicHasBeenSet;
}

string ImageRepository::GetCreateMode() const
{
    return m_createMode;
}

void ImageRepository::SetCreateMode(const string& _createMode)
{
    m_createMode = _createMode;
    m_createModeHasBeenSet = true;
}

bool ImageRepository::CreateModeHasBeenSet() const
{
    return m_createModeHasBeenSet;
}

string ImageRepository::GetRepoName() const
{
    return m_repoName;
}

void ImageRepository::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool ImageRepository::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string ImageRepository::GetRepoType() const
{
    return m_repoType;
}

void ImageRepository::SetRepoType(const string& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool ImageRepository::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

