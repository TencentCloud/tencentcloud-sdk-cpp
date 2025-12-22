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

#include <tencentcloud/cdwdoris/v20211228/model/BucketEncryptionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

BucketEncryptionInfo::BucketEncryptionInfo() :
    m_isEncryptedHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false),
    m_lastOperationHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome BucketEncryptionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsEncrypted") && !value["IsEncrypted"].IsNull())
    {
        if (!value["IsEncrypted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BucketEncryptionInfo.IsEncrypted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEncrypted = value["IsEncrypted"].GetBool();
        m_isEncryptedHasBeenSet = true;
    }

    if (value.HasMember("EncryptionType") && !value["EncryptionType"].IsNull())
    {
        if (!value["EncryptionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BucketEncryptionInfo.EncryptionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionType = string(value["EncryptionType"].GetString());
        m_encryptionTypeHasBeenSet = true;
    }

    if (value.HasMember("LastOperation") && !value["LastOperation"].IsNull())
    {
        if (!value["LastOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BucketEncryptionInfo.LastOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOperation = string(value["LastOperation"].GetString());
        m_lastOperationHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BucketEncryptionInfo.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BucketEncryptionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isEncryptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEncrypted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEncrypted, allocator);
    }

    if (m_encryptionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptionType.c_str(), allocator).Move(), allocator);
    }

    if (m_lastOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

}


bool BucketEncryptionInfo::GetIsEncrypted() const
{
    return m_isEncrypted;
}

void BucketEncryptionInfo::SetIsEncrypted(const bool& _isEncrypted)
{
    m_isEncrypted = _isEncrypted;
    m_isEncryptedHasBeenSet = true;
}

bool BucketEncryptionInfo::IsEncryptedHasBeenSet() const
{
    return m_isEncryptedHasBeenSet;
}

string BucketEncryptionInfo::GetEncryptionType() const
{
    return m_encryptionType;
}

void BucketEncryptionInfo::SetEncryptionType(const string& _encryptionType)
{
    m_encryptionType = _encryptionType;
    m_encryptionTypeHasBeenSet = true;
}

bool BucketEncryptionInfo::EncryptionTypeHasBeenSet() const
{
    return m_encryptionTypeHasBeenSet;
}

string BucketEncryptionInfo::GetLastOperation() const
{
    return m_lastOperation;
}

void BucketEncryptionInfo::SetLastOperation(const string& _lastOperation)
{
    m_lastOperation = _lastOperation;
    m_lastOperationHasBeenSet = true;
}

bool BucketEncryptionInfo::LastOperationHasBeenSet() const
{
    return m_lastOperationHasBeenSet;
}

string BucketEncryptionInfo::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void BucketEncryptionInfo::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool BucketEncryptionInfo::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

