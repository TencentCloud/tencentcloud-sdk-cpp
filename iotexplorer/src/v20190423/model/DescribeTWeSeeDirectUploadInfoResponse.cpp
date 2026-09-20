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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeSeeDirectUploadInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeTWeSeeDirectUploadInfoResponse::DescribeTWeSeeDirectUploadInfoResponse() :
    m_cOSURIHasBeenSet(false),
    m_storageBucketHasBeenSet(false),
    m_storagePathHasBeenSet(false),
    m_storageRegionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTWeSeeDirectUploadInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("COSURI") && !rsp["COSURI"].IsNull())
    {
        if (!rsp["COSURI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `COSURI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cOSURI = string(rsp["COSURI"].GetString());
        m_cOSURIHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeTWeSeeDirectUploadInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cOSURIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSURI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cOSURI.c_str(), allocator).Move(), allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeTWeSeeDirectUploadInfoResponse::GetCOSURI() const
{
    return m_cOSURI;
}

bool DescribeTWeSeeDirectUploadInfoResponse::COSURIHasBeenSet() const
{
    return m_cOSURIHasBeenSet;
}

string DescribeTWeSeeDirectUploadInfoResponse::GetStorageBucket() const
{
    return m_storageBucket;
}

bool DescribeTWeSeeDirectUploadInfoResponse::StorageBucketHasBeenSet() const
{
    return m_storageBucketHasBeenSet;
}

string DescribeTWeSeeDirectUploadInfoResponse::GetStoragePath() const
{
    return m_storagePath;
}

bool DescribeTWeSeeDirectUploadInfoResponse::StoragePathHasBeenSet() const
{
    return m_storagePathHasBeenSet;
}

string DescribeTWeSeeDirectUploadInfoResponse::GetStorageRegion() const
{
    return m_storageRegion;
}

bool DescribeTWeSeeDirectUploadInfoResponse::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}


