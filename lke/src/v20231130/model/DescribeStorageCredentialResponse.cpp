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

#include <tencentcloud/lke/v20231130/model/DescribeStorageCredentialResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeStorageCredentialResponse::DescribeStorageCredentialResponse() :
    m_credentialsHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_corpUinHasBeenSet(false),
    m_imagePathHasBeenSet(false),
    m_uploadPathHasBeenSet(false)
{
}

CoreInternalOutcome DescribeStorageCredentialResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Credentials") && !rsp["Credentials"].IsNull())
    {
        if (!rsp["Credentials"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Credentials` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_credentials.Deserialize(rsp["Credentials"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_credentialsHasBeenSet = true;
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

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = rsp["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Bucket") && !rsp["Bucket"].IsNull())
    {
        if (!rsp["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(rsp["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("FilePath") && !rsp["FilePath"].IsNull())
    {
        if (!rsp["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(rsp["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("CorpUin") && !rsp["CorpUin"].IsNull())
    {
        if (!rsp["CorpUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorpUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpUin = string(rsp["CorpUin"].GetString());
        m_corpUinHasBeenSet = true;
    }

    if (rsp.HasMember("ImagePath") && !rsp["ImagePath"].IsNull())
    {
        if (!rsp["ImagePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePath = string(rsp["ImagePath"].GetString());
        m_imagePathHasBeenSet = true;
    }

    if (rsp.HasMember("UploadPath") && !rsp["UploadPath"].IsNull())
    {
        if (!rsp["UploadPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadPath = string(rsp["UploadPath"].GetString());
        m_uploadPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeStorageCredentialResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_credentialsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credentials";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_credentials.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredTime, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_corpUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corpUin.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imagePath.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadPath.c_str(), allocator).Move(), allocator);
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


Credentials DescribeStorageCredentialResponse::GetCredentials() const
{
    return m_credentials;
}

bool DescribeStorageCredentialResponse::CredentialsHasBeenSet() const
{
    return m_credentialsHasBeenSet;
}

int64_t DescribeStorageCredentialResponse::GetExpiredTime() const
{
    return m_expiredTime;
}

bool DescribeStorageCredentialResponse::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

int64_t DescribeStorageCredentialResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeStorageCredentialResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeStorageCredentialResponse::GetBucket() const
{
    return m_bucket;
}

bool DescribeStorageCredentialResponse::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string DescribeStorageCredentialResponse::GetRegion() const
{
    return m_region;
}

bool DescribeStorageCredentialResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeStorageCredentialResponse::GetFilePath() const
{
    return m_filePath;
}

bool DescribeStorageCredentialResponse::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string DescribeStorageCredentialResponse::GetType() const
{
    return m_type;
}

bool DescribeStorageCredentialResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeStorageCredentialResponse::GetCorpUin() const
{
    return m_corpUin;
}

bool DescribeStorageCredentialResponse::CorpUinHasBeenSet() const
{
    return m_corpUinHasBeenSet;
}

string DescribeStorageCredentialResponse::GetImagePath() const
{
    return m_imagePath;
}

bool DescribeStorageCredentialResponse::ImagePathHasBeenSet() const
{
    return m_imagePathHasBeenSet;
}

string DescribeStorageCredentialResponse::GetUploadPath() const
{
    return m_uploadPath;
}

bool DescribeStorageCredentialResponse::UploadPathHasBeenSet() const
{
    return m_uploadPathHasBeenSet;
}


