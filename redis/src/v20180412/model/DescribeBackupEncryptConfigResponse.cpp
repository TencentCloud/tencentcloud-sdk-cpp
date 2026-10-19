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

#include <tencentcloud/redis/v20180412/model/DescribeBackupEncryptConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeBackupEncryptConfigResponse::DescribeBackupEncryptConfigResponse() :
    m_backupEncryptHasBeenSet(false),
    m_encryptKeyTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_kmsRegionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupEncryptConfigResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("BackupEncrypt") && !rsp["BackupEncrypt"].IsNull())
    {
        if (!rsp["BackupEncrypt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackupEncrypt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_backupEncrypt = rsp["BackupEncrypt"].GetBool();
        m_backupEncryptHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptKeyType") && !rsp["EncryptKeyType"].IsNull())
    {
        if (!rsp["EncryptKeyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptKeyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptKeyType = rsp["EncryptKeyType"].GetInt64();
        m_encryptKeyTypeHasBeenSet = true;
    }

    if (rsp.HasMember("KmsKeyId") && !rsp["KmsKeyId"].IsNull())
    {
        if (!rsp["KmsKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KmsKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyId = string(rsp["KmsKeyId"].GetString());
        m_kmsKeyIdHasBeenSet = true;
    }

    if (rsp.HasMember("KmsRegion") && !rsp["KmsRegion"].IsNull())
    {
        if (!rsp["KmsRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KmsRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsRegion = string(rsp["KmsRegion"].GetString());
        m_kmsRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupEncryptConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_backupEncryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupEncrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupEncrypt, allocator);
    }

    if (m_encryptKeyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptKeyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptKeyType, allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


bool DescribeBackupEncryptConfigResponse::GetBackupEncrypt() const
{
    return m_backupEncrypt;
}

bool DescribeBackupEncryptConfigResponse::BackupEncryptHasBeenSet() const
{
    return m_backupEncryptHasBeenSet;
}

int64_t DescribeBackupEncryptConfigResponse::GetEncryptKeyType() const
{
    return m_encryptKeyType;
}

bool DescribeBackupEncryptConfigResponse::EncryptKeyTypeHasBeenSet() const
{
    return m_encryptKeyTypeHasBeenSet;
}

string DescribeBackupEncryptConfigResponse::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

bool DescribeBackupEncryptConfigResponse::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

string DescribeBackupEncryptConfigResponse::GetKmsRegion() const
{
    return m_kmsRegion;
}

bool DescribeBackupEncryptConfigResponse::KmsRegionHasBeenSet() const
{
    return m_kmsRegionHasBeenSet;
}


