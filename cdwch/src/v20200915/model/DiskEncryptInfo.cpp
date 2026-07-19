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

#include <tencentcloud/cdwch/v20200915/model/DiskEncryptInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

DiskEncryptInfo::DiskEncryptInfo() :
    m_encryptTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_kmsRegionHasBeenSet(false),
    m_kmsKeyNameHasBeenSet(false)
{
}

CoreInternalOutcome DiskEncryptInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EncryptType") && !value["EncryptType"].IsNull())
    {
        if (!value["EncryptType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskEncryptInfo.EncryptType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptType = string(value["EncryptType"].GetString());
        m_encryptTypeHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyId") && !value["KmsKeyId"].IsNull())
    {
        if (!value["KmsKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskEncryptInfo.KmsKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyId = string(value["KmsKeyId"].GetString());
        m_kmsKeyIdHasBeenSet = true;
    }

    if (value.HasMember("KmsRegion") && !value["KmsRegion"].IsNull())
    {
        if (!value["KmsRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskEncryptInfo.KmsRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsRegion = string(value["KmsRegion"].GetString());
        m_kmsRegionHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyName") && !value["KmsKeyName"].IsNull())
    {
        if (!value["KmsKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskEncryptInfo.KmsKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyName = string(value["KmsKeyName"].GetString());
        m_kmsKeyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskEncryptInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encryptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptType.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKeyName.c_str(), allocator).Move(), allocator);
    }

}


string DiskEncryptInfo::GetEncryptType() const
{
    return m_encryptType;
}

void DiskEncryptInfo::SetEncryptType(const string& _encryptType)
{
    m_encryptType = _encryptType;
    m_encryptTypeHasBeenSet = true;
}

bool DiskEncryptInfo::EncryptTypeHasBeenSet() const
{
    return m_encryptTypeHasBeenSet;
}

string DiskEncryptInfo::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void DiskEncryptInfo::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool DiskEncryptInfo::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

string DiskEncryptInfo::GetKmsRegion() const
{
    return m_kmsRegion;
}

void DiskEncryptInfo::SetKmsRegion(const string& _kmsRegion)
{
    m_kmsRegion = _kmsRegion;
    m_kmsRegionHasBeenSet = true;
}

bool DiskEncryptInfo::KmsRegionHasBeenSet() const
{
    return m_kmsRegionHasBeenSet;
}

string DiskEncryptInfo::GetKmsKeyName() const
{
    return m_kmsKeyName;
}

void DiskEncryptInfo::SetKmsKeyName(const string& _kmsKeyName)
{
    m_kmsKeyName = _kmsKeyName;
    m_kmsKeyNameHasBeenSet = true;
}

bool DiskEncryptInfo::KmsKeyNameHasBeenSet() const
{
    return m_kmsKeyNameHasBeenSet;
}

