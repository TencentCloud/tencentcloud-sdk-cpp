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

#include <tencentcloud/lke/v20231130/model/DigitalHumanConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DigitalHumanConfig::DigitalHumanConfig() :
    m_assetKeyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_previewUrlHasBeenSet(false)
{
}

CoreInternalOutcome DigitalHumanConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetKey") && !value["AssetKey"].IsNull())
    {
        if (!value["AssetKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DigitalHumanConfig.AssetKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetKey = string(value["AssetKey"].GetString());
        m_assetKeyHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DigitalHumanConfig.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Avatar") && !value["Avatar"].IsNull())
    {
        if (!value["Avatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DigitalHumanConfig.Avatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatar = string(value["Avatar"].GetString());
        m_avatarHasBeenSet = true;
    }

    if (value.HasMember("PreviewUrl") && !value["PreviewUrl"].IsNull())
    {
        if (!value["PreviewUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DigitalHumanConfig.PreviewUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewUrl = string(value["PreviewUrl"].GetString());
        m_previewUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DigitalHumanConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetKey.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

    if (m_previewUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewUrl.c_str(), allocator).Move(), allocator);
    }

}


string DigitalHumanConfig::GetAssetKey() const
{
    return m_assetKey;
}

void DigitalHumanConfig::SetAssetKey(const string& _assetKey)
{
    m_assetKey = _assetKey;
    m_assetKeyHasBeenSet = true;
}

bool DigitalHumanConfig::AssetKeyHasBeenSet() const
{
    return m_assetKeyHasBeenSet;
}

string DigitalHumanConfig::GetName() const
{
    return m_name;
}

void DigitalHumanConfig::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DigitalHumanConfig::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DigitalHumanConfig::GetAvatar() const
{
    return m_avatar;
}

void DigitalHumanConfig::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool DigitalHumanConfig::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

string DigitalHumanConfig::GetPreviewUrl() const
{
    return m_previewUrl;
}

void DigitalHumanConfig::SetPreviewUrl(const string& _previewUrl)
{
    m_previewUrl = _previewUrl;
    m_previewUrlHasBeenSet = true;
}

bool DigitalHumanConfig::PreviewUrlHasBeenSet() const
{
    return m_previewUrlHasBeenSet;
}

