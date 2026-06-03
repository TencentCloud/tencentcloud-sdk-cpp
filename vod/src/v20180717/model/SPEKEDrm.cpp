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

#include <tencentcloud/vod/v20180717/model/SPEKEDrm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SPEKEDrm::SPEKEDrm() :
    m_resourceIdHasBeenSet(false),
    m_keyServerUrlHasBeenSet(false),
    m_vectorHasBeenSet(false),
    m_encryptionMethodHasBeenSet(false),
    m_encryptionPresetHasBeenSet(false),
    m_keyAcquireModeHasBeenSet(false)
{
}

CoreInternalOutcome SPEKEDrm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SPEKEDrm.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("KeyServerUrl") && !value["KeyServerUrl"].IsNull())
    {
        if (!value["KeyServerUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SPEKEDrm.KeyServerUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyServerUrl = string(value["KeyServerUrl"].GetString());
        m_keyServerUrlHasBeenSet = true;
    }

    if (value.HasMember("Vector") && !value["Vector"].IsNull())
    {
        if (!value["Vector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SPEKEDrm.Vector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vector = string(value["Vector"].GetString());
        m_vectorHasBeenSet = true;
    }

    if (value.HasMember("EncryptionMethod") && !value["EncryptionMethod"].IsNull())
    {
        if (!value["EncryptionMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SPEKEDrm.EncryptionMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionMethod = string(value["EncryptionMethod"].GetString());
        m_encryptionMethodHasBeenSet = true;
    }

    if (value.HasMember("EncryptionPreset") && !value["EncryptionPreset"].IsNull())
    {
        if (!value["EncryptionPreset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SPEKEDrm.EncryptionPreset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionPreset = string(value["EncryptionPreset"].GetString());
        m_encryptionPresetHasBeenSet = true;
    }

    if (value.HasMember("KeyAcquireMode") && !value["KeyAcquireMode"].IsNull())
    {
        if (!value["KeyAcquireMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SPEKEDrm.KeyAcquireMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyAcquireMode = string(value["KeyAcquireMode"].GetString());
        m_keyAcquireModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SPEKEDrm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyServerUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyServerUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyServerUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_vectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vector.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptionMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionPresetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionPreset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptionPreset.c_str(), allocator).Move(), allocator);
    }

    if (m_keyAcquireModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyAcquireMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyAcquireMode.c_str(), allocator).Move(), allocator);
    }

}


string SPEKEDrm::GetResourceId() const
{
    return m_resourceId;
}

void SPEKEDrm::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool SPEKEDrm::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string SPEKEDrm::GetKeyServerUrl() const
{
    return m_keyServerUrl;
}

void SPEKEDrm::SetKeyServerUrl(const string& _keyServerUrl)
{
    m_keyServerUrl = _keyServerUrl;
    m_keyServerUrlHasBeenSet = true;
}

bool SPEKEDrm::KeyServerUrlHasBeenSet() const
{
    return m_keyServerUrlHasBeenSet;
}

string SPEKEDrm::GetVector() const
{
    return m_vector;
}

void SPEKEDrm::SetVector(const string& _vector)
{
    m_vector = _vector;
    m_vectorHasBeenSet = true;
}

bool SPEKEDrm::VectorHasBeenSet() const
{
    return m_vectorHasBeenSet;
}

string SPEKEDrm::GetEncryptionMethod() const
{
    return m_encryptionMethod;
}

void SPEKEDrm::SetEncryptionMethod(const string& _encryptionMethod)
{
    m_encryptionMethod = _encryptionMethod;
    m_encryptionMethodHasBeenSet = true;
}

bool SPEKEDrm::EncryptionMethodHasBeenSet() const
{
    return m_encryptionMethodHasBeenSet;
}

string SPEKEDrm::GetEncryptionPreset() const
{
    return m_encryptionPreset;
}

void SPEKEDrm::SetEncryptionPreset(const string& _encryptionPreset)
{
    m_encryptionPreset = _encryptionPreset;
    m_encryptionPresetHasBeenSet = true;
}

bool SPEKEDrm::EncryptionPresetHasBeenSet() const
{
    return m_encryptionPresetHasBeenSet;
}

string SPEKEDrm::GetKeyAcquireMode() const
{
    return m_keyAcquireMode;
}

void SPEKEDrm::SetKeyAcquireMode(const string& _keyAcquireMode)
{
    m_keyAcquireMode = _keyAcquireMode;
    m_keyAcquireModeHasBeenSet = true;
}

bool SPEKEDrm::KeyAcquireModeHasBeenSet() const
{
    return m_keyAcquireModeHasBeenSet;
}

