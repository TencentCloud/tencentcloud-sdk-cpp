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

#include <tencentcloud/tcr/v20190924/model/TcrImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

TcrImageInfo::TcrImageInfo() :
    m_digestHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_imageVersionHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_kmsSignatureHasBeenSet(false)
{
}

CoreInternalOutcome TcrImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Digest") && !value["Digest"].IsNull())
    {
        if (!value["Digest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrImageInfo.Digest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_digest = string(value["Digest"].GetString());
        m_digestHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TcrImageInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("ImageVersion") && !value["ImageVersion"].IsNull())
    {
        if (!value["ImageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrImageInfo.ImageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageVersion = string(value["ImageVersion"].GetString());
        m_imageVersionHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrImageInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrImageInfo.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("KmsSignature") && !value["KmsSignature"].IsNull())
    {
        if (!value["KmsSignature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrImageInfo.KmsSignature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsSignature = string(value["KmsSignature"].GetString());
        m_kmsSignatureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TcrImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_digestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Digest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_digest.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_imageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsSignature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsSignature.c_str(), allocator).Move(), allocator);
    }

}


string TcrImageInfo::GetDigest() const
{
    return m_digest;
}

void TcrImageInfo::SetDigest(const string& _digest)
{
    m_digest = _digest;
    m_digestHasBeenSet = true;
}

bool TcrImageInfo::DigestHasBeenSet() const
{
    return m_digestHasBeenSet;
}

int64_t TcrImageInfo::GetSize() const
{
    return m_size;
}

void TcrImageInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool TcrImageInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string TcrImageInfo::GetImageVersion() const
{
    return m_imageVersion;
}

void TcrImageInfo::SetImageVersion(const string& _imageVersion)
{
    m_imageVersion = _imageVersion;
    m_imageVersionHasBeenSet = true;
}

bool TcrImageInfo::ImageVersionHasBeenSet() const
{
    return m_imageVersionHasBeenSet;
}

string TcrImageInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void TcrImageInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TcrImageInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TcrImageInfo::GetKind() const
{
    return m_kind;
}

void TcrImageInfo::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool TcrImageInfo::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string TcrImageInfo::GetKmsSignature() const
{
    return m_kmsSignature;
}

void TcrImageInfo::SetKmsSignature(const string& _kmsSignature)
{
    m_kmsSignature = _kmsSignature;
    m_kmsSignatureHasBeenSet = true;
}

bool TcrImageInfo::KmsSignatureHasBeenSet() const
{
    return m_kmsSignatureHasBeenSet;
}

