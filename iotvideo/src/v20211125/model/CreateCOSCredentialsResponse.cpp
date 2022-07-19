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

#include <tencentcloud/iotvideo/v20211125/model/CreateCOSCredentialsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

CreateCOSCredentialsResponse::CreateCOSCredentialsResponse() :
    m_storageBucketHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_storagePathHasBeenSet(false),
    m_secretIDHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome CreateCOSCredentialsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("StorageBucket") && !rsp["StorageBucket"].IsNull())
    {
        if (!rsp["StorageBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageBucket = string(rsp["StorageBucket"].GetString());
        m_storageBucketHasBeenSet = true;
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

    if (rsp.HasMember("StoragePath") && !rsp["StoragePath"].IsNull())
    {
        if (!rsp["StoragePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StoragePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storagePath = string(rsp["StoragePath"].GetString());
        m_storagePathHasBeenSet = true;
    }

    if (rsp.HasMember("SecretID") && !rsp["SecretID"].IsNull())
    {
        if (!rsp["SecretID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretID = string(rsp["SecretID"].GetString());
        m_secretIDHasBeenSet = true;
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

    if (rsp.HasMember("Token") && !rsp["Token"].IsNull())
    {
        if (!rsp["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(rsp["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiredTime") && !rsp["ExpiredTime"].IsNull())
    {
        if (!rsp["ExpiredTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiredTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = rsp["ExpiredTime"].GetUint64();
        m_expiredTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateCOSCredentialsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_secretIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretID.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredTime, allocator);
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


string CreateCOSCredentialsResponse::GetStorageBucket() const
{
    return m_storageBucket;
}

bool CreateCOSCredentialsResponse::StorageBucketHasBeenSet() const
{
    return m_storageBucketHasBeenSet;
}

string CreateCOSCredentialsResponse::GetStorageRegion() const
{
    return m_storageRegion;
}

bool CreateCOSCredentialsResponse::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

string CreateCOSCredentialsResponse::GetStoragePath() const
{
    return m_storagePath;
}

bool CreateCOSCredentialsResponse::StoragePathHasBeenSet() const
{
    return m_storagePathHasBeenSet;
}

string CreateCOSCredentialsResponse::GetSecretID() const
{
    return m_secretID;
}

bool CreateCOSCredentialsResponse::SecretIDHasBeenSet() const
{
    return m_secretIDHasBeenSet;
}

string CreateCOSCredentialsResponse::GetSecretKey() const
{
    return m_secretKey;
}

bool CreateCOSCredentialsResponse::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string CreateCOSCredentialsResponse::GetToken() const
{
    return m_token;
}

bool CreateCOSCredentialsResponse::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

uint64_t CreateCOSCredentialsResponse::GetExpiredTime() const
{
    return m_expiredTime;
}

bool CreateCOSCredentialsResponse::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}


