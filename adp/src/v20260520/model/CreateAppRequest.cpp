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

#include <tencentcloud/adp/v20260520/model/CreateAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CreateAppRequest::CreateAppRequest() :
    m_spaceIdHasBeenSet(false),
    m_appModeHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string CreateAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAppRequest::GetSpaceId() const
{
    return m_spaceId;
}

void CreateAppRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool CreateAppRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

int64_t CreateAppRequest::GetAppMode() const
{
    return m_appMode;
}

void CreateAppRequest::SetAppMode(const int64_t& _appMode)
{
    m_appMode = _appMode;
    m_appModeHasBeenSet = true;
}

bool CreateAppRequest::AppModeHasBeenSet() const
{
    return m_appModeHasBeenSet;
}

string CreateAppRequest::GetAvatar() const
{
    return m_avatar;
}

void CreateAppRequest::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool CreateAppRequest::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

string CreateAppRequest::GetDescription() const
{
    return m_description;
}

void CreateAppRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAppRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateAppRequest::GetName() const
{
    return m_name;
}

void CreateAppRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAppRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


