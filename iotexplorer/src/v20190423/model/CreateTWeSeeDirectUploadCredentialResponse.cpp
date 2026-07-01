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

#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeSeeDirectUploadCredentialResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateTWeSeeDirectUploadCredentialResponse::CreateTWeSeeDirectUploadCredentialResponse() :
    m_expiredTimeHasBeenSet(false),
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_storageBucketHasBeenSet(false),
    m_storagePathHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

CoreInternalOutcome CreateTWeSeeDirectUploadCredentialResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ExpiredTime") && !rsp["ExpiredTime"].IsNull())
    {
        if (!rsp["ExpiredTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiredTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = rsp["ExpiredTime"].GetInt64();
        m_expiredTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SecretId") && !rsp["SecretId"].IsNull())
    {
        if (!rsp["SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(rsp["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (rsp.HasMember("SecretKey") && !rsp["SecretKey"].IsNull())
    {
        if (!rsp["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(rsp["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (rsp.HasMember("StorageBucket") && !rsp["StorageBucket"].IsNull())
    {
        if (!rsp["StorageBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageBucket = string(rsp["StorageBucket"].GetString());
        m_storageBucketHasBeenSet = true;
    }

    if (rsp.HasMember("StoragePath") && !rsp["StoragePath"].IsNull())
    {
        if (!rsp["StoragePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StoragePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storagePath = string(rsp["StoragePath"].GetString());
        m_storagePathHasBeenSet = true;
    }

    if (rsp.HasMember("StorageRegion") && !rsp["StorageRegion"].IsNull())
    {
        if (!rsp["StorageRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageRegion = string(rsp["StorageRegion"].GetString());
        m_storageRegionHasBeenSet = true;
    }

    if (rsp.HasMember("Token") && !rsp["Token"].IsNull())
    {
        if (!rsp["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(rsp["Token"].GetString());
        m_tokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateTWeSeeDirectUploadCredentialResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredTime, allocator);
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

    if (m_storageBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_storagePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storagePath.c_str(), allocator).Move(), allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
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


int64_t CreateTWeSeeDirectUploadCredentialResponse::GetExpiredTime() const
{
    return m_expiredTime;
}

bool CreateTWeSeeDirectUploadCredentialResponse::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string CreateTWeSeeDirectUploadCredentialResponse::GetSecretId() const
{
    return m_secretId;
}

bool CreateTWeSeeDirectUploadCredentialResponse::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string CreateTWeSeeDirectUploadCredentialResponse::GetSecretKey() const
{
    return m_secretKey;
}

bool CreateTWeSeeDirectUploadCredentialResponse::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string CreateTWeSeeDirectUploadCredentialResponse::GetStorageBucket() const
{
    return m_storageBucket;
}

bool CreateTWeSeeDirectUploadCredentialResponse::StorageBucketHasBeenSet() const
{
    return m_storageBucketHasBeenSet;
}

string CreateTWeSeeDirectUploadCredentialResponse::GetStoragePath() const
{
    return m_storagePath;
}

bool CreateTWeSeeDirectUploadCredentialResponse::StoragePathHasBeenSet() const
{
    return m_storagePathHasBeenSet;
}

string CreateTWeSeeDirectUploadCredentialResponse::GetStorageRegion() const
{
    return m_storageRegion;
}

bool CreateTWeSeeDirectUploadCredentialResponse::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

string CreateTWeSeeDirectUploadCredentialResponse::GetToken() const
{
    return m_token;
}

bool CreateTWeSeeDirectUploadCredentialResponse::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}


