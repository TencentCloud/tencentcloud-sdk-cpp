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

#include <tencentcloud/adp/v20260520/model/AppMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppMetadata::AppMetadata() :
    m_appIdHasBeenSet(false),
    m_appModeHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AppMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppMetadata.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AppMode") && !value["AppMode"].IsNull())
    {
        if (!value["AppMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppMetadata.AppMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appMode = value["AppMode"].GetInt64();
        m_appModeHasBeenSet = true;
    }

    if (value.HasMember("Avatar") && !value["Avatar"].IsNull())
    {
        if (!value["Avatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppMetadata.Avatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatar = string(value["Avatar"].GetString());
        m_avatarHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppMetadata.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppMetadata.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppMetadata.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppMetadata.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppMetadata.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appMode, allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string AppMetadata::GetAppId() const
{
    return m_appId;
}

void AppMetadata::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AppMetadata::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t AppMetadata::GetAppMode() const
{
    return m_appMode;
}

void AppMetadata::SetAppMode(const int64_t& _appMode)
{
    m_appMode = _appMode;
    m_appModeHasBeenSet = true;
}

bool AppMetadata::AppModeHasBeenSet() const
{
    return m_appModeHasBeenSet;
}

string AppMetadata::GetAvatar() const
{
    return m_avatar;
}

void AppMetadata::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool AppMetadata::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

string AppMetadata::GetCreateTime() const
{
    return m_createTime;
}

void AppMetadata::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AppMetadata::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AppMetadata::GetDescription() const
{
    return m_description;
}

void AppMetadata::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AppMetadata::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AppMetadata::GetName() const
{
    return m_name;
}

void AppMetadata::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AppMetadata::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AppMetadata::GetSpaceId() const
{
    return m_spaceId;
}

void AppMetadata::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool AppMetadata::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string AppMetadata::GetUpdateTime() const
{
    return m_updateTime;
}

void AppMetadata::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AppMetadata::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

