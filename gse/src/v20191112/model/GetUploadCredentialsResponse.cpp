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

#include <tencentcloud/gse/v20191112/model/GetUploadCredentialsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

GetUploadCredentialsResponse::GetUploadCredentialsResponse() :
    m_bucketAuthHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_assetRegionHasBeenSet(false)
{
}

CoreInternalOutcome GetUploadCredentialsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BucketAuth") && !rsp["BucketAuth"].IsNull())
    {
        if (!rsp["BucketAuth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BucketAuth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketAuth = string(rsp["BucketAuth"].GetString());
        m_bucketAuthHasBeenSet = true;
    }

    if (rsp.HasMember("BucketName") && !rsp["BucketName"].IsNull())
    {
        if (!rsp["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(rsp["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (rsp.HasMember("AssetRegion") && !rsp["AssetRegion"].IsNull())
    {
        if (!rsp["AssetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetRegion = string(rsp["AssetRegion"].GetString());
        m_assetRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetUploadCredentialsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_bucketAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketAuth.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetRegion.c_str(), allocator).Move(), allocator);
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


string GetUploadCredentialsResponse::GetBucketAuth() const
{
    return m_bucketAuth;
}

bool GetUploadCredentialsResponse::BucketAuthHasBeenSet() const
{
    return m_bucketAuthHasBeenSet;
}

string GetUploadCredentialsResponse::GetBucketName() const
{
    return m_bucketName;
}

bool GetUploadCredentialsResponse::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string GetUploadCredentialsResponse::GetAssetRegion() const
{
    return m_assetRegion;
}

bool GetUploadCredentialsResponse::AssetRegionHasBeenSet() const
{
    return m_assetRegionHasBeenSet;
}


