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

#include <tencentcloud/adp/v20260520/model/ModifyAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyAppRequest::ModifyAppRequest() :
    m_appIdHasBeenSet(false),
    m_appModeHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_configHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sharedKbIdListHasBeenSet(false),
    m_updateMaskHasBeenSet(false)
{
}

string ModifyAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_appMode, allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedKbIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedKbIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sharedKbIdList.begin(); itr != m_sharedKbIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_updateMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateMask.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAppRequest::GetAppId() const
{
    return m_appId;
}

void ModifyAppRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ModifyAppRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t ModifyAppRequest::GetAppMode() const
{
    return m_appMode;
}

void ModifyAppRequest::SetAppMode(const int64_t& _appMode)
{
    m_appMode = _appMode;
    m_appModeHasBeenSet = true;
}

bool ModifyAppRequest::AppModeHasBeenSet() const
{
    return m_appModeHasBeenSet;
}

string ModifyAppRequest::GetAvatar() const
{
    return m_avatar;
}

void ModifyAppRequest::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool ModifyAppRequest::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

AppConfig ModifyAppRequest::GetConfig() const
{
    return m_config;
}

void ModifyAppRequest::SetConfig(const AppConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ModifyAppRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string ModifyAppRequest::GetDescription() const
{
    return m_description;
}

void ModifyAppRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyAppRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyAppRequest::GetName() const
{
    return m_name;
}

void ModifyAppRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAppRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> ModifyAppRequest::GetSharedKbIdList() const
{
    return m_sharedKbIdList;
}

void ModifyAppRequest::SetSharedKbIdList(const vector<string>& _sharedKbIdList)
{
    m_sharedKbIdList = _sharedKbIdList;
    m_sharedKbIdListHasBeenSet = true;
}

bool ModifyAppRequest::SharedKbIdListHasBeenSet() const
{
    return m_sharedKbIdListHasBeenSet;
}

FieldMask ModifyAppRequest::GetUpdateMask() const
{
    return m_updateMask;
}

void ModifyAppRequest::SetUpdateMask(const FieldMask& _updateMask)
{
    m_updateMask = _updateMask;
    m_updateMaskHasBeenSet = true;
}

bool ModifyAppRequest::UpdateMaskHasBeenSet() const
{
    return m_updateMaskHasBeenSet;
}


