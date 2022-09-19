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

#include <tencentcloud/cloudstudio/v20210524/model/UserInfoRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

UserInfoRsp::UserInfoRsp() :
    m_idHasBeenSet(false),
    m_authenticationUserInfoHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_previewStatusHasBeenSet(false)
{
}

CoreInternalOutcome UserInfoRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfoRsp.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AuthenticationUserInfo") && !value["AuthenticationUserInfo"].IsNull())
    {
        if (!value["AuthenticationUserInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfoRsp.AuthenticationUserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authenticationUserInfo.Deserialize(value["AuthenticationUserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authenticationUserInfoHasBeenSet = true;
    }

    if (value.HasMember("Avatar") && !value["Avatar"].IsNull())
    {
        if (!value["Avatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfoRsp.Avatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatar = string(value["Avatar"].GetString());
        m_avatarHasBeenSet = true;
    }

    if (value.HasMember("Features") && !value["Features"].IsNull())
    {
        if (!value["Features"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfoRsp.Features` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_features = string(value["Features"].GetString());
        m_featuresHasBeenSet = true;
    }

    if (value.HasMember("PreviewStatus") && !value["PreviewStatus"].IsNull())
    {
        if (!value["PreviewStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfoRsp.PreviewStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_previewStatus = value["PreviewStatus"].GetInt64();
        m_previewStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserInfoRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_authenticationUserInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthenticationUserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authenticationUserInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

    if (m_featuresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Features";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_features.c_str(), allocator).Move(), allocator);
    }

    if (m_previewStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_previewStatus, allocator);
    }

}


int64_t UserInfoRsp::GetId() const
{
    return m_id;
}

void UserInfoRsp::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UserInfoRsp::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

UserSubInfo UserInfoRsp::GetAuthenticationUserInfo() const
{
    return m_authenticationUserInfo;
}

void UserInfoRsp::SetAuthenticationUserInfo(const UserSubInfo& _authenticationUserInfo)
{
    m_authenticationUserInfo = _authenticationUserInfo;
    m_authenticationUserInfoHasBeenSet = true;
}

bool UserInfoRsp::AuthenticationUserInfoHasBeenSet() const
{
    return m_authenticationUserInfoHasBeenSet;
}

string UserInfoRsp::GetAvatar() const
{
    return m_avatar;
}

void UserInfoRsp::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool UserInfoRsp::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

string UserInfoRsp::GetFeatures() const
{
    return m_features;
}

void UserInfoRsp::SetFeatures(const string& _features)
{
    m_features = _features;
    m_featuresHasBeenSet = true;
}

bool UserInfoRsp::FeaturesHasBeenSet() const
{
    return m_featuresHasBeenSet;
}

int64_t UserInfoRsp::GetPreviewStatus() const
{
    return m_previewStatus;
}

void UserInfoRsp::SetPreviewStatus(const int64_t& _previewStatus)
{
    m_previewStatus = _previewStatus;
    m_previewStatusHasBeenSet = true;
}

bool UserInfoRsp::PreviewStatusHasBeenSet() const
{
    return m_previewStatusHasBeenSet;
}

