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

#include <tencentcloud/mongodb/v20190725/model/KMSInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

KMSInfoDetail::KMSInfoDetail() :
    m_keyIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_keyUsageHasBeenSet(false),
    m_keyOriginHasBeenSet(false),
    m_kmsRegionHasBeenSet(false)
{
}

CoreInternalOutcome KMSInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KMSInfoDetail.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("KeyName") && !value["KeyName"].IsNull())
    {
        if (!value["KeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KMSInfoDetail.KeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyName = string(value["KeyName"].GetString());
        m_keyNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KMSInfoDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KMSInfoDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("KeyUsage") && !value["KeyUsage"].IsNull())
    {
        if (!value["KeyUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KMSInfoDetail.KeyUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyUsage = string(value["KeyUsage"].GetString());
        m_keyUsageHasBeenSet = true;
    }

    if (value.HasMember("KeyOrigin") && !value["KeyOrigin"].IsNull())
    {
        if (!value["KeyOrigin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KMSInfoDetail.KeyOrigin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyOrigin = string(value["KeyOrigin"].GetString());
        m_keyOriginHasBeenSet = true;
    }

    if (value.HasMember("KmsRegion") && !value["KmsRegion"].IsNull())
    {
        if (!value["KmsRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KMSInfoDetail.KmsRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsRegion = string(value["KmsRegion"].GetString());
        m_kmsRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KMSInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_keyUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_keyOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyOrigin.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsRegion.c_str(), allocator).Move(), allocator);
    }

}


string KMSInfoDetail::GetKeyId() const
{
    return m_keyId;
}

void KMSInfoDetail::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool KMSInfoDetail::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string KMSInfoDetail::GetKeyName() const
{
    return m_keyName;
}

void KMSInfoDetail::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool KMSInfoDetail::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

string KMSInfoDetail::GetCreateTime() const
{
    return m_createTime;
}

void KMSInfoDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool KMSInfoDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string KMSInfoDetail::GetStatus() const
{
    return m_status;
}

void KMSInfoDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool KMSInfoDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string KMSInfoDetail::GetKeyUsage() const
{
    return m_keyUsage;
}

void KMSInfoDetail::SetKeyUsage(const string& _keyUsage)
{
    m_keyUsage = _keyUsage;
    m_keyUsageHasBeenSet = true;
}

bool KMSInfoDetail::KeyUsageHasBeenSet() const
{
    return m_keyUsageHasBeenSet;
}

string KMSInfoDetail::GetKeyOrigin() const
{
    return m_keyOrigin;
}

void KMSInfoDetail::SetKeyOrigin(const string& _keyOrigin)
{
    m_keyOrigin = _keyOrigin;
    m_keyOriginHasBeenSet = true;
}

bool KMSInfoDetail::KeyOriginHasBeenSet() const
{
    return m_keyOriginHasBeenSet;
}

string KMSInfoDetail::GetKmsRegion() const
{
    return m_kmsRegion;
}

void KMSInfoDetail::SetKmsRegion(const string& _kmsRegion)
{
    m_kmsRegion = _kmsRegion;
    m_kmsRegionHasBeenSet = true;
}

bool KMSInfoDetail::KmsRegionHasBeenSet() const
{
    return m_kmsRegionHasBeenSet;
}

