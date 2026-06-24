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

#include <tencentcloud/emr/v20190103/model/ImageInfoV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ImageInfoV2::ImageInfoV2() :
    m_imageModeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_legacyCCRHasBeenSet(false),
    m_fullImageUrlHasBeenSet(false),
    m_mainVersionHasBeenSet(false),
    m_registryUrlHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_imagePullSecretHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false)
{
}

CoreInternalOutcome ImageInfoV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageMode") && !value["ImageMode"].IsNull())
    {
        if (!value["ImageMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2.ImageMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageMode = string(value["ImageMode"].GetString());
        m_imageModeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("LegacyCCR") && !value["LegacyCCR"].IsNull())
    {
        if (!value["LegacyCCR"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2.LegacyCCR` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_legacyCCR = value["LegacyCCR"].GetBool();
        m_legacyCCRHasBeenSet = true;
    }

    if (value.HasMember("FullImageUrl") && !value["FullImageUrl"].IsNull())
    {
        if (!value["FullImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2.FullImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullImageUrl = string(value["FullImageUrl"].GetString());
        m_fullImageUrlHasBeenSet = true;
    }

    if (value.HasMember("MainVersion") && !value["MainVersion"].IsNull())
    {
        if (!value["MainVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2.MainVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainVersion = string(value["MainVersion"].GetString());
        m_mainVersionHasBeenSet = true;
    }

    if (value.HasMember("RegistryUrl") && !value["RegistryUrl"].IsNull())
    {
        if (!value["RegistryUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2.RegistryUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryUrl = string(value["RegistryUrl"].GetString());
        m_registryUrlHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("ImagePullSecret") && !value["ImagePullSecret"].IsNull())
    {
        if (!value["ImagePullSecret"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2.ImagePullSecret` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imagePullSecret.Deserialize(value["ImagePullSecret"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imagePullSecretHasBeenSet = true;
    }

    if (value.HasMember("ImagePullPolicy") && !value["ImagePullPolicy"].IsNull())
    {
        if (!value["ImagePullPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2.ImagePullPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullPolicy = string(value["ImagePullPolicy"].GetString());
        m_imagePullPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageInfoV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageMode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_legacyCCRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegacyCCR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_legacyCCR, allocator);
    }

    if (m_fullImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_mainVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_registryUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imagePullSecret.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imagePullPolicy.c_str(), allocator).Move(), allocator);
    }

}


string ImageInfoV2::GetImageMode() const
{
    return m_imageMode;
}

void ImageInfoV2::SetImageMode(const string& _imageMode)
{
    m_imageMode = _imageMode;
    m_imageModeHasBeenSet = true;
}

bool ImageInfoV2::ImageModeHasBeenSet() const
{
    return m_imageModeHasBeenSet;
}

string ImageInfoV2::GetRegion() const
{
    return m_region;
}

void ImageInfoV2::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ImageInfoV2::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

bool ImageInfoV2::GetLegacyCCR() const
{
    return m_legacyCCR;
}

void ImageInfoV2::SetLegacyCCR(const bool& _legacyCCR)
{
    m_legacyCCR = _legacyCCR;
    m_legacyCCRHasBeenSet = true;
}

bool ImageInfoV2::LegacyCCRHasBeenSet() const
{
    return m_legacyCCRHasBeenSet;
}

string ImageInfoV2::GetFullImageUrl() const
{
    return m_fullImageUrl;
}

void ImageInfoV2::SetFullImageUrl(const string& _fullImageUrl)
{
    m_fullImageUrl = _fullImageUrl;
    m_fullImageUrlHasBeenSet = true;
}

bool ImageInfoV2::FullImageUrlHasBeenSet() const
{
    return m_fullImageUrlHasBeenSet;
}

string ImageInfoV2::GetMainVersion() const
{
    return m_mainVersion;
}

void ImageInfoV2::SetMainVersion(const string& _mainVersion)
{
    m_mainVersion = _mainVersion;
    m_mainVersionHasBeenSet = true;
}

bool ImageInfoV2::MainVersionHasBeenSet() const
{
    return m_mainVersionHasBeenSet;
}

string ImageInfoV2::GetRegistryUrl() const
{
    return m_registryUrl;
}

void ImageInfoV2::SetRegistryUrl(const string& _registryUrl)
{
    m_registryUrl = _registryUrl;
    m_registryUrlHasBeenSet = true;
}

bool ImageInfoV2::RegistryUrlHasBeenSet() const
{
    return m_registryUrlHasBeenSet;
}

string ImageInfoV2::GetNamespaceName() const
{
    return m_namespaceName;
}

void ImageInfoV2::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool ImageInfoV2::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string ImageInfoV2::GetRepoName() const
{
    return m_repoName;
}

void ImageInfoV2::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool ImageInfoV2::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string ImageInfoV2::GetTag() const
{
    return m_tag;
}

void ImageInfoV2::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool ImageInfoV2::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string ImageInfoV2::GetUsername() const
{
    return m_username;
}

void ImageInfoV2::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ImageInfoV2::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string ImageInfoV2::GetPassword() const
{
    return m_password;
}

void ImageInfoV2::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ImageInfoV2::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

ImagePullSecret ImageInfoV2::GetImagePullSecret() const
{
    return m_imagePullSecret;
}

void ImageInfoV2::SetImagePullSecret(const ImagePullSecret& _imagePullSecret)
{
    m_imagePullSecret = _imagePullSecret;
    m_imagePullSecretHasBeenSet = true;
}

bool ImageInfoV2::ImagePullSecretHasBeenSet() const
{
    return m_imagePullSecretHasBeenSet;
}

string ImageInfoV2::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void ImageInfoV2::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool ImageInfoV2::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

