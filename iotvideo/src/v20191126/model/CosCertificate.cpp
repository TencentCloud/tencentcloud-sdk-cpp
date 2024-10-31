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

#include <tencentcloud/iotvideo/v20191126/model/CosCertificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

CosCertificate::CosCertificate() :
    m_storageBucketHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_storagePathHasBeenSet(false),
    m_tempCertificateHasBeenSet(false),
    m_sessionKeyHasBeenSet(false)
{
}

CoreInternalOutcome CosCertificate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageBucket") && !value["StorageBucket"].IsNull())
    {
        if (!value["StorageBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosCertificate.StorageBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageBucket = string(value["StorageBucket"].GetString());
        m_storageBucketHasBeenSet = true;
    }

    if (value.HasMember("StorageRegion") && !value["StorageRegion"].IsNull())
    {
        if (!value["StorageRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosCertificate.StorageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageRegion = string(value["StorageRegion"].GetString());
        m_storageRegionHasBeenSet = true;
    }

    if (value.HasMember("StoragePath") && !value["StoragePath"].IsNull())
    {
        if (!value["StoragePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosCertificate.StoragePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storagePath = string(value["StoragePath"].GetString());
        m_storagePathHasBeenSet = true;
    }

    if (value.HasMember("TempCertificate") && !value["TempCertificate"].IsNull())
    {
        if (!value["TempCertificate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CosCertificate.TempCertificate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tempCertificate.Deserialize(value["TempCertificate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tempCertificateHasBeenSet = true;
    }

    if (value.HasMember("SessionKey") && !value["SessionKey"].IsNull())
    {
        if (!value["SessionKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosCertificate.SessionKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionKey = string(value["SessionKey"].GetString());
        m_sessionKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosCertificate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_storagePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storagePath.c_str(), allocator).Move(), allocator);
    }

    if (m_tempCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TempCertificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tempCertificate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sessionKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionKey.c_str(), allocator).Move(), allocator);
    }

}


string CosCertificate::GetStorageBucket() const
{
    return m_storageBucket;
}

void CosCertificate::SetStorageBucket(const string& _storageBucket)
{
    m_storageBucket = _storageBucket;
    m_storageBucketHasBeenSet = true;
}

bool CosCertificate::StorageBucketHasBeenSet() const
{
    return m_storageBucketHasBeenSet;
}

string CosCertificate::GetStorageRegion() const
{
    return m_storageRegion;
}

void CosCertificate::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool CosCertificate::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

string CosCertificate::GetStoragePath() const
{
    return m_storagePath;
}

void CosCertificate::SetStoragePath(const string& _storagePath)
{
    m_storagePath = _storagePath;
    m_storagePathHasBeenSet = true;
}

bool CosCertificate::StoragePathHasBeenSet() const
{
    return m_storagePathHasBeenSet;
}

CertificateInfo CosCertificate::GetTempCertificate() const
{
    return m_tempCertificate;
}

void CosCertificate::SetTempCertificate(const CertificateInfo& _tempCertificate)
{
    m_tempCertificate = _tempCertificate;
    m_tempCertificateHasBeenSet = true;
}

bool CosCertificate::TempCertificateHasBeenSet() const
{
    return m_tempCertificateHasBeenSet;
}

string CosCertificate::GetSessionKey() const
{
    return m_sessionKey;
}

void CosCertificate::SetSessionKey(const string& _sessionKey)
{
    m_sessionKey = _sessionKey;
    m_sessionKeyHasBeenSet = true;
}

bool CosCertificate::SessionKeyHasBeenSet() const
{
    return m_sessionKeyHasBeenSet;
}

