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

#include <tencentcloud/lowcode/v20210108/model/Weapp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

Weapp::Weapp() :
    m_idHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_envHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_envRegionHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_cmsProjectHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_isFreeHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_attachAppIdHasBeenSet(false),
    m_eTypeHasBeenSet(false),
    m_eDataHasBeenSet(false),
    m_lastMpCiIdHasBeenSet(false),
    m_lastMpCiStatusHasBeenSet(false),
    m_lastWebCiIdHasBeenSet(false),
    m_lastWebCiStatusHasBeenSet(false),
    m_lastDeployTimeHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_jobInfoHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_lastWebCiModeHasBeenSet(false),
    m_lastMpCiModeHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_faviconUrlHasBeenSet(false),
    m_backgroundColorHasBeenSet(false),
    m_favoriteHasBeenSet(false),
    m_publishPlatformHasBeenSet(false)
{
}

CoreInternalOutcome Weapp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Env") && !value["Env"].IsNull())
    {
        if (!value["Env"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.Env` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_env = string(value["Env"].GetString());
        m_envHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("EnvRegion") && !value["EnvRegion"].IsNull())
    {
        if (!value["EnvRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.EnvRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envRegion = string(value["EnvRegion"].GetString());
        m_envRegionHasBeenSet = true;
    }

    if (value.HasMember("PkgId") && !value["PkgId"].IsNull())
    {
        if (!value["PkgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.PkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgId = string(value["PkgId"].GetString());
        m_pkgIdHasBeenSet = true;
    }

    if (value.HasMember("CmsProject") && !value["CmsProject"].IsNull())
    {
        if (!value["CmsProject"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.CmsProject` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cmsProject = value["CmsProject"].GetInt64();
        m_cmsProjectHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("IsFree") && !value["IsFree"].IsNull())
    {
        if (!value["IsFree"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.IsFree` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFree = value["IsFree"].GetBool();
        m_isFreeHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("AppType") && !value["AppType"].IsNull())
    {
        if (!value["AppType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.AppType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appType = value["AppType"].GetInt64();
        m_appTypeHasBeenSet = true;
    }

    if (value.HasMember("AttachAppId") && !value["AttachAppId"].IsNull())
    {
        if (!value["AttachAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.AttachAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachAppId = string(value["AttachAppId"].GetString());
        m_attachAppIdHasBeenSet = true;
    }

    if (value.HasMember("EType") && !value["EType"].IsNull())
    {
        if (!value["EType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.EType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eType = value["EType"].GetInt64();
        m_eTypeHasBeenSet = true;
    }

    if (value.HasMember("EData") && !value["EData"].IsNull())
    {
        if (!value["EData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.EData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eData = string(value["EData"].GetString());
        m_eDataHasBeenSet = true;
    }

    if (value.HasMember("LastMpCiId") && !value["LastMpCiId"].IsNull())
    {
        if (!value["LastMpCiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.LastMpCiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastMpCiId = string(value["LastMpCiId"].GetString());
        m_lastMpCiIdHasBeenSet = true;
    }

    if (value.HasMember("LastMpCiStatus") && !value["LastMpCiStatus"].IsNull())
    {
        if (!value["LastMpCiStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.LastMpCiStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastMpCiStatus = string(value["LastMpCiStatus"].GetString());
        m_lastMpCiStatusHasBeenSet = true;
    }

    if (value.HasMember("LastWebCiId") && !value["LastWebCiId"].IsNull())
    {
        if (!value["LastWebCiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.LastWebCiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastWebCiId = string(value["LastWebCiId"].GetString());
        m_lastWebCiIdHasBeenSet = true;
    }

    if (value.HasMember("LastWebCiStatus") && !value["LastWebCiStatus"].IsNull())
    {
        if (!value["LastWebCiStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.LastWebCiStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastWebCiStatus = string(value["LastWebCiStatus"].GetString());
        m_lastWebCiStatusHasBeenSet = true;
    }

    if (value.HasMember("LastDeployTime") && !value["LastDeployTime"].IsNull())
    {
        if (!value["LastDeployTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.LastDeployTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastDeployTime = string(value["LastDeployTime"].GetString());
        m_lastDeployTimeHasBeenSet = true;
    }

    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = value["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("JobInfo") && !value["JobInfo"].IsNull())
    {
        if (!value["JobInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.JobInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jobInfo.Deserialize(value["JobInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jobInfoHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("LastWebCiMode") && !value["LastWebCiMode"].IsNull())
    {
        if (!value["LastWebCiMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.LastWebCiMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastWebCiMode = value["LastWebCiMode"].GetInt64();
        m_lastWebCiModeHasBeenSet = true;
    }

    if (value.HasMember("LastMpCiMode") && !value["LastMpCiMode"].IsNull())
    {
        if (!value["LastMpCiMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.LastMpCiMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastMpCiMode = value["LastMpCiMode"].GetInt64();
        m_lastMpCiModeHasBeenSet = true;
    }

    if (value.HasMember("SceneType") && !value["SceneType"].IsNull())
    {
        if (!value["SceneType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.SceneType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneType = string(value["SceneType"].GetString());
        m_sceneTypeHasBeenSet = true;
    }

    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("FaviconUrl") && !value["FaviconUrl"].IsNull())
    {
        if (!value["FaviconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.FaviconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faviconUrl = string(value["FaviconUrl"].GetString());
        m_faviconUrlHasBeenSet = true;
    }

    if (value.HasMember("BackgroundColor") && !value["BackgroundColor"].IsNull())
    {
        if (!value["BackgroundColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.BackgroundColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundColor = string(value["BackgroundColor"].GetString());
        m_backgroundColorHasBeenSet = true;
    }

    if (value.HasMember("Favorite") && !value["Favorite"].IsNull())
    {
        if (!value["Favorite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.Favorite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_favorite = value["Favorite"].GetBool();
        m_favoriteHasBeenSet = true;
    }

    if (value.HasMember("PublishPlatform") && !value["PublishPlatform"].IsNull())
    {
        if (!value["PublishPlatform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Weapp.PublishPlatform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishPlatform = string(value["PublishPlatform"].GetString());
        m_publishPlatformHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Weapp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_envRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_cmsProjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmsProject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cmsProject, allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_isFreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFree, allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appType, allocator);
    }

    if (m_attachAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_eTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eType, allocator);
    }

    if (m_eDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eData.c_str(), allocator).Move(), allocator);
    }

    if (m_lastMpCiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastMpCiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastMpCiId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastMpCiStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastMpCiStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastMpCiStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_lastWebCiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastWebCiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastWebCiId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastWebCiStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastWebCiStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastWebCiStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_lastDeployTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastDeployTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastDeployTime.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

    if (m_jobInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jobInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_lastWebCiModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastWebCiMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastWebCiMode, allocator);
    }

    if (m_lastMpCiModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastMpCiMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastMpCiMode, allocator);
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneType.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_faviconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaviconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faviconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundColor.c_str(), allocator).Move(), allocator);
    }

    if (m_favoriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Favorite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_favorite, allocator);
    }

    if (m_publishPlatformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishPlatform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishPlatform.c_str(), allocator).Move(), allocator);
    }

}


string Weapp::GetId() const
{
    return m_id;
}

void Weapp::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Weapp::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Weapp::GetOwner() const
{
    return m_owner;
}

void Weapp::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool Weapp::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string Weapp::GetName() const
{
    return m_name;
}

void Weapp::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Weapp::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Weapp::GetDescription() const
{
    return m_description;
}

void Weapp::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Weapp::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Weapp::GetTitle() const
{
    return m_title;
}

void Weapp::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool Weapp::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string Weapp::GetEnv() const
{
    return m_env;
}

void Weapp::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool Weapp::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

int64_t Weapp::GetStatus() const
{
    return m_status;
}

void Weapp::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Weapp::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Weapp::GetEnvId() const
{
    return m_envId;
}

void Weapp::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool Weapp::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string Weapp::GetEnvRegion() const
{
    return m_envRegion;
}

void Weapp::SetEnvRegion(const string& _envRegion)
{
    m_envRegion = _envRegion;
    m_envRegionHasBeenSet = true;
}

bool Weapp::EnvRegionHasBeenSet() const
{
    return m_envRegionHasBeenSet;
}

string Weapp::GetPkgId() const
{
    return m_pkgId;
}

void Weapp::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool Weapp::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

int64_t Weapp::GetCmsProject() const
{
    return m_cmsProject;
}

void Weapp::SetCmsProject(const int64_t& _cmsProject)
{
    m_cmsProject = _cmsProject;
    m_cmsProjectHasBeenSet = true;
}

bool Weapp::CmsProjectHasBeenSet() const
{
    return m_cmsProjectHasBeenSet;
}

string Weapp::GetChannel() const
{
    return m_channel;
}

void Weapp::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool Weapp::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string Weapp::GetTemplateId() const
{
    return m_templateId;
}

void Weapp::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool Weapp::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string Weapp::GetExpireTime() const
{
    return m_expireTime;
}

void Weapp::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Weapp::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string Weapp::GetCreateTime() const
{
    return m_createTime;
}

void Weapp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Weapp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Weapp::GetUpdateTime() const
{
    return m_updateTime;
}

void Weapp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Weapp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Weapp::GetSource() const
{
    return m_source;
}

void Weapp::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool Weapp::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

bool Weapp::GetIsFree() const
{
    return m_isFree;
}

void Weapp::SetIsFree(const bool& _isFree)
{
    m_isFree = _isFree;
    m_isFreeHasBeenSet = true;
}

bool Weapp::IsFreeHasBeenSet() const
{
    return m_isFreeHasBeenSet;
}

string Weapp::GetContentType() const
{
    return m_contentType;
}

void Weapp::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool Weapp::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

int64_t Weapp::GetAppType() const
{
    return m_appType;
}

void Weapp::SetAppType(const int64_t& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool Weapp::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

string Weapp::GetAttachAppId() const
{
    return m_attachAppId;
}

void Weapp::SetAttachAppId(const string& _attachAppId)
{
    m_attachAppId = _attachAppId;
    m_attachAppIdHasBeenSet = true;
}

bool Weapp::AttachAppIdHasBeenSet() const
{
    return m_attachAppIdHasBeenSet;
}

int64_t Weapp::GetEType() const
{
    return m_eType;
}

void Weapp::SetEType(const int64_t& _eType)
{
    m_eType = _eType;
    m_eTypeHasBeenSet = true;
}

bool Weapp::ETypeHasBeenSet() const
{
    return m_eTypeHasBeenSet;
}

string Weapp::GetEData() const
{
    return m_eData;
}

void Weapp::SetEData(const string& _eData)
{
    m_eData = _eData;
    m_eDataHasBeenSet = true;
}

bool Weapp::EDataHasBeenSet() const
{
    return m_eDataHasBeenSet;
}

string Weapp::GetLastMpCiId() const
{
    return m_lastMpCiId;
}

void Weapp::SetLastMpCiId(const string& _lastMpCiId)
{
    m_lastMpCiId = _lastMpCiId;
    m_lastMpCiIdHasBeenSet = true;
}

bool Weapp::LastMpCiIdHasBeenSet() const
{
    return m_lastMpCiIdHasBeenSet;
}

string Weapp::GetLastMpCiStatus() const
{
    return m_lastMpCiStatus;
}

void Weapp::SetLastMpCiStatus(const string& _lastMpCiStatus)
{
    m_lastMpCiStatus = _lastMpCiStatus;
    m_lastMpCiStatusHasBeenSet = true;
}

bool Weapp::LastMpCiStatusHasBeenSet() const
{
    return m_lastMpCiStatusHasBeenSet;
}

string Weapp::GetLastWebCiId() const
{
    return m_lastWebCiId;
}

void Weapp::SetLastWebCiId(const string& _lastWebCiId)
{
    m_lastWebCiId = _lastWebCiId;
    m_lastWebCiIdHasBeenSet = true;
}

bool Weapp::LastWebCiIdHasBeenSet() const
{
    return m_lastWebCiIdHasBeenSet;
}

string Weapp::GetLastWebCiStatus() const
{
    return m_lastWebCiStatus;
}

void Weapp::SetLastWebCiStatus(const string& _lastWebCiStatus)
{
    m_lastWebCiStatus = _lastWebCiStatus;
    m_lastWebCiStatusHasBeenSet = true;
}

bool Weapp::LastWebCiStatusHasBeenSet() const
{
    return m_lastWebCiStatusHasBeenSet;
}

string Weapp::GetLastDeployTime() const
{
    return m_lastDeployTime;
}

void Weapp::SetLastDeployTime(const string& _lastDeployTime)
{
    m_lastDeployTime = _lastDeployTime;
    m_lastDeployTimeHasBeenSet = true;
}

bool Weapp::LastDeployTimeHasBeenSet() const
{
    return m_lastDeployTimeHasBeenSet;
}

int64_t Weapp::GetFlowId() const
{
    return m_flowId;
}

void Weapp::SetFlowId(const int64_t& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool Weapp::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

AppJobInfo Weapp::GetJobInfo() const
{
    return m_jobInfo;
}

void Weapp::SetJobInfo(const AppJobInfo& _jobInfo)
{
    m_jobInfo = _jobInfo;
    m_jobInfoHasBeenSet = true;
}

bool Weapp::JobInfoHasBeenSet() const
{
    return m_jobInfoHasBeenSet;
}

string Weapp::GetPlatform() const
{
    return m_platform;
}

void Weapp::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool Weapp::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

int64_t Weapp::GetLastWebCiMode() const
{
    return m_lastWebCiMode;
}

void Weapp::SetLastWebCiMode(const int64_t& _lastWebCiMode)
{
    m_lastWebCiMode = _lastWebCiMode;
    m_lastWebCiModeHasBeenSet = true;
}

bool Weapp::LastWebCiModeHasBeenSet() const
{
    return m_lastWebCiModeHasBeenSet;
}

int64_t Weapp::GetLastMpCiMode() const
{
    return m_lastMpCiMode;
}

void Weapp::SetLastMpCiMode(const int64_t& _lastMpCiMode)
{
    m_lastMpCiMode = _lastMpCiMode;
    m_lastMpCiModeHasBeenSet = true;
}

bool Weapp::LastMpCiModeHasBeenSet() const
{
    return m_lastMpCiModeHasBeenSet;
}

string Weapp::GetSceneType() const
{
    return m_sceneType;
}

void Weapp::SetSceneType(const string& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool Weapp::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string Weapp::GetClientId() const
{
    return m_clientId;
}

void Weapp::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool Weapp::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string Weapp::GetIconUrl() const
{
    return m_iconUrl;
}

void Weapp::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool Weapp::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string Weapp::GetFaviconUrl() const
{
    return m_faviconUrl;
}

void Weapp::SetFaviconUrl(const string& _faviconUrl)
{
    m_faviconUrl = _faviconUrl;
    m_faviconUrlHasBeenSet = true;
}

bool Weapp::FaviconUrlHasBeenSet() const
{
    return m_faviconUrlHasBeenSet;
}

string Weapp::GetBackgroundColor() const
{
    return m_backgroundColor;
}

void Weapp::SetBackgroundColor(const string& _backgroundColor)
{
    m_backgroundColor = _backgroundColor;
    m_backgroundColorHasBeenSet = true;
}

bool Weapp::BackgroundColorHasBeenSet() const
{
    return m_backgroundColorHasBeenSet;
}

bool Weapp::GetFavorite() const
{
    return m_favorite;
}

void Weapp::SetFavorite(const bool& _favorite)
{
    m_favorite = _favorite;
    m_favoriteHasBeenSet = true;
}

bool Weapp::FavoriteHasBeenSet() const
{
    return m_favoriteHasBeenSet;
}

string Weapp::GetPublishPlatform() const
{
    return m_publishPlatform;
}

void Weapp::SetPublishPlatform(const string& _publishPlatform)
{
    m_publishPlatform = _publishPlatform;
    m_publishPlatformHasBeenSet = true;
}

bool Weapp::PublishPlatformHasBeenSet() const
{
    return m_publishPlatformHasBeenSet;
}

