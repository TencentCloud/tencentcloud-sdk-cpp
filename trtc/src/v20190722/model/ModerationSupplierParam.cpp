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

#include <tencentcloud/trtc/v20190722/model/ModerationSupplierParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

ModerationSupplierParam::ModerationSupplierParam() :
    m_appIDHasBeenSet(false),
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_audioBizTypeHasBeenSet(false),
    m_imageBizTypeHasBeenSet(false)
{
}

CoreInternalOutcome ModerationSupplierParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationSupplierParam.AppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appID = string(value["AppID"].GetString());
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("SecretId") && !value["SecretId"].IsNull())
    {
        if (!value["SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationSupplierParam.SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(value["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationSupplierParam.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("AudioBizType") && !value["AudioBizType"].IsNull())
    {
        if (!value["AudioBizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationSupplierParam.AudioBizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioBizType = string(value["AudioBizType"].GetString());
        m_audioBizTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageBizType") && !value["ImageBizType"].IsNull())
    {
        if (!value["ImageBizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationSupplierParam.ImageBizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageBizType = string(value["ImageBizType"].GetString());
        m_imageBizTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModerationSupplierParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appID.c_str(), allocator).Move(), allocator);
    }

    if (m_secretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_audioBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioBizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioBizType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageBizType.c_str(), allocator).Move(), allocator);
    }

}


string ModerationSupplierParam::GetAppID() const
{
    return m_appID;
}

void ModerationSupplierParam::SetAppID(const string& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool ModerationSupplierParam::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string ModerationSupplierParam::GetSecretId() const
{
    return m_secretId;
}

void ModerationSupplierParam::SetSecretId(const string& _secretId)
{
    m_secretId = _secretId;
    m_secretIdHasBeenSet = true;
}

bool ModerationSupplierParam::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string ModerationSupplierParam::GetSecretKey() const
{
    return m_secretKey;
}

void ModerationSupplierParam::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool ModerationSupplierParam::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string ModerationSupplierParam::GetAudioBizType() const
{
    return m_audioBizType;
}

void ModerationSupplierParam::SetAudioBizType(const string& _audioBizType)
{
    m_audioBizType = _audioBizType;
    m_audioBizTypeHasBeenSet = true;
}

bool ModerationSupplierParam::AudioBizTypeHasBeenSet() const
{
    return m_audioBizTypeHasBeenSet;
}

string ModerationSupplierParam::GetImageBizType() const
{
    return m_imageBizType;
}

void ModerationSupplierParam::SetImageBizType(const string& _imageBizType)
{
    m_imageBizType = _imageBizType;
    m_imageBizTypeHasBeenSet = true;
}

bool ModerationSupplierParam::ImageBizTypeHasBeenSet() const
{
    return m_imageBizTypeHasBeenSet;
}

