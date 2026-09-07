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

#include <tencentcloud/live/v20180801/model/CreateLiveAvatarCloneFigureRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateLiveAvatarCloneFigureRequest::CreateLiveAvatarCloneFigureRequest() :
    m_sceneTypeHasBeenSet(false),
    m_figureNameHasBeenSet(false),
    m_materialUrlHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_identityWrittenUrlHasBeenSet(false),
    m_identityVideoUrlHasBeenSet(false),
    m_photoVersionHasBeenSet(false)
{
}

string CreateLiveAvatarCloneFigureRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneType.c_str(), allocator).Move(), allocator);
    }

    if (m_figureNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FigureName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_figureName.c_str(), allocator).Move(), allocator);
    }

    if (m_materialUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_materialUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
    }

    if (m_identityWrittenUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityWrittenUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_identityWrittenUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_identityVideoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityVideoUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_identityVideoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_photoVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhotoVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_photoVersion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLiveAvatarCloneFigureRequest::GetSceneType() const
{
    return m_sceneType;
}

void CreateLiveAvatarCloneFigureRequest::SetSceneType(const string& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool CreateLiveAvatarCloneFigureRequest::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string CreateLiveAvatarCloneFigureRequest::GetFigureName() const
{
    return m_figureName;
}

void CreateLiveAvatarCloneFigureRequest::SetFigureName(const string& _figureName)
{
    m_figureName = _figureName;
    m_figureNameHasBeenSet = true;
}

bool CreateLiveAvatarCloneFigureRequest::FigureNameHasBeenSet() const
{
    return m_figureNameHasBeenSet;
}

string CreateLiveAvatarCloneFigureRequest::GetMaterialUrl() const
{
    return m_materialUrl;
}

void CreateLiveAvatarCloneFigureRequest::SetMaterialUrl(const string& _materialUrl)
{
    m_materialUrl = _materialUrl;
    m_materialUrlHasBeenSet = true;
}

bool CreateLiveAvatarCloneFigureRequest::MaterialUrlHasBeenSet() const
{
    return m_materialUrlHasBeenSet;
}

string CreateLiveAvatarCloneFigureRequest::GetGender() const
{
    return m_gender;
}

void CreateLiveAvatarCloneFigureRequest::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool CreateLiveAvatarCloneFigureRequest::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string CreateLiveAvatarCloneFigureRequest::GetIdentityWrittenUrl() const
{
    return m_identityWrittenUrl;
}

void CreateLiveAvatarCloneFigureRequest::SetIdentityWrittenUrl(const string& _identityWrittenUrl)
{
    m_identityWrittenUrl = _identityWrittenUrl;
    m_identityWrittenUrlHasBeenSet = true;
}

bool CreateLiveAvatarCloneFigureRequest::IdentityWrittenUrlHasBeenSet() const
{
    return m_identityWrittenUrlHasBeenSet;
}

string CreateLiveAvatarCloneFigureRequest::GetIdentityVideoUrl() const
{
    return m_identityVideoUrl;
}

void CreateLiveAvatarCloneFigureRequest::SetIdentityVideoUrl(const string& _identityVideoUrl)
{
    m_identityVideoUrl = _identityVideoUrl;
    m_identityVideoUrlHasBeenSet = true;
}

bool CreateLiveAvatarCloneFigureRequest::IdentityVideoUrlHasBeenSet() const
{
    return m_identityVideoUrlHasBeenSet;
}

uint64_t CreateLiveAvatarCloneFigureRequest::GetPhotoVersion() const
{
    return m_photoVersion;
}

void CreateLiveAvatarCloneFigureRequest::SetPhotoVersion(const uint64_t& _photoVersion)
{
    m_photoVersion = _photoVersion;
    m_photoVersionHasBeenSet = true;
}

bool CreateLiveAvatarCloneFigureRequest::PhotoVersionHasBeenSet() const
{
    return m_photoVersionHasBeenSet;
}


