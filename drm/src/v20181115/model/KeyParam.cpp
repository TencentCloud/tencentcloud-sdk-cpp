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

#include <tencentcloud/drm/v20181115/model/KeyParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

KeyParam::KeyParam() :
    m_trackHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_ivHasBeenSet(false)
{
}

CoreInternalOutcome KeyParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Track") && !value["Track"].IsNull())
    {
        if (!value["Track"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyParam.Track` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_track = string(value["Track"].GetString());
        m_trackHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyParam.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyParam.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("Iv") && !value["Iv"].IsNull())
    {
        if (!value["Iv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyParam.Iv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iv = string(value["Iv"].GetString());
        m_ivHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_trackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Track";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_track.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_ivHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Iv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iv.c_str(), allocator).Move(), allocator);
    }

}


string KeyParam::GetTrack() const
{
    return m_track;
}

void KeyParam::SetTrack(const string& _track)
{
    m_track = _track;
    m_trackHasBeenSet = true;
}

bool KeyParam::TrackHasBeenSet() const
{
    return m_trackHasBeenSet;
}

string KeyParam::GetKey() const
{
    return m_key;
}

void KeyParam::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool KeyParam::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string KeyParam::GetKeyId() const
{
    return m_keyId;
}

void KeyParam::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool KeyParam::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string KeyParam::GetIv() const
{
    return m_iv;
}

void KeyParam::SetIv(const string& _iv)
{
    m_iv = _iv;
    m_ivHasBeenSet = true;
}

bool KeyParam::IvHasBeenSet() const
{
    return m_ivHasBeenSet;
}

