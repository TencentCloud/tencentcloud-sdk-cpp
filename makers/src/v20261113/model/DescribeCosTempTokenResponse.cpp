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

#include <tencentcloud/makers/v20261113/model/DescribeCosTempTokenResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

DescribeCosTempTokenResponse::DescribeCosTempTokenResponse() :
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_targetPathHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_expirationHasBeenSet(false),
    m_credentialsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCosTempTokenResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("TargetPath") && !rsp["TargetPath"].IsNull())
    {
        if (!rsp["TargetPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetPath = string(rsp["TargetPath"].GetString());
        m_targetPathHasBeenSet = true;
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

    if (rsp.HasMember("Expiration") && !rsp["Expiration"].IsNull())
    {
        if (!rsp["Expiration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Expiration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiration = string(rsp["Expiration"].GetString());
        m_expirationHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeCosTempTokenResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_targetPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetPath.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredTime, allocator);
    }

    if (m_expirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiration.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credentials";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_credentials.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeCosTempTokenResponse::GetBucket() const
{
    return m_bucket;
}

bool DescribeCosTempTokenResponse::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string DescribeCosTempTokenResponse::GetRegion() const
{
    return m_region;
}

bool DescribeCosTempTokenResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeCosTempTokenResponse::GetTargetPath() const
{
    return m_targetPath;
}

bool DescribeCosTempTokenResponse::TargetPathHasBeenSet() const
{
    return m_targetPathHasBeenSet;
}

int64_t DescribeCosTempTokenResponse::GetExpiredTime() const
{
    return m_expiredTime;
}

bool DescribeCosTempTokenResponse::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string DescribeCosTempTokenResponse::GetExpiration() const
{
    return m_expiration;
}

bool DescribeCosTempTokenResponse::ExpirationHasBeenSet() const
{
    return m_expirationHasBeenSet;
}

CosCredentials DescribeCosTempTokenResponse::GetCredentials() const
{
    return m_credentials;
}

bool DescribeCosTempTokenResponse::CredentialsHasBeenSet() const
{
    return m_credentialsHasBeenSet;
}


