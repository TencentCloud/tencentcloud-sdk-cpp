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

#include <tencentcloud/sqlserver/v20180328/model/DescribeUploadIncrementalInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeUploadIncrementalInfoResponse::DescribeUploadIncrementalInfoResponse() :
    m_bucketNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_tmpSecretIdHasBeenSet(false),
    m_tmpSecretKeyHasBeenSet(false),
    m_xCosSecurityTokenHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_cosSecurityTokenHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUploadIncrementalInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BucketName") && !rsp["BucketName"].IsNull())
    {
        if (!rsp["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(rsp["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
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

    if (rsp.HasMember("Path") && !rsp["Path"].IsNull())
    {
        if (!rsp["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(rsp["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (rsp.HasMember("TmpSecretId") && !rsp["TmpSecretId"].IsNull())
    {
        if (!rsp["TmpSecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TmpSecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretId = string(rsp["TmpSecretId"].GetString());
        m_tmpSecretIdHasBeenSet = true;
    }

    if (rsp.HasMember("TmpSecretKey") && !rsp["TmpSecretKey"].IsNull())
    {
        if (!rsp["TmpSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TmpSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretKey = string(rsp["TmpSecretKey"].GetString());
        m_tmpSecretKeyHasBeenSet = true;
    }

    if (rsp.HasMember("XCosSecurityToken") && !rsp["XCosSecurityToken"].IsNull())
    {
        if (!rsp["XCosSecurityToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XCosSecurityToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xCosSecurityToken = string(rsp["XCosSecurityToken"].GetString());
        m_xCosSecurityTokenHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiredTime") && !rsp["ExpiredTime"].IsNull())
    {
        if (!rsp["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(rsp["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CosSecurityToken") && !rsp["CosSecurityToken"].IsNull())
    {
        if (!rsp["CosSecurityToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosSecurityToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosSecurityToken = string(rsp["CosSecurityToken"].GetString());
        m_cosSecurityTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUploadIncrementalInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_tmpSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpSecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmpSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_tmpSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmpSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_xCosSecurityTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XCosSecurityToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xCosSecurityToken.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cosSecurityTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSecurityToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosSecurityToken.c_str(), allocator).Move(), allocator);
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


string DescribeUploadIncrementalInfoResponse::GetBucketName() const
{
    return m_bucketName;
}

bool DescribeUploadIncrementalInfoResponse::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string DescribeUploadIncrementalInfoResponse::GetRegion() const
{
    return m_region;
}

bool DescribeUploadIncrementalInfoResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeUploadIncrementalInfoResponse::GetPath() const
{
    return m_path;
}

bool DescribeUploadIncrementalInfoResponse::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string DescribeUploadIncrementalInfoResponse::GetTmpSecretId() const
{
    return m_tmpSecretId;
}

bool DescribeUploadIncrementalInfoResponse::TmpSecretIdHasBeenSet() const
{
    return m_tmpSecretIdHasBeenSet;
}

string DescribeUploadIncrementalInfoResponse::GetTmpSecretKey() const
{
    return m_tmpSecretKey;
}

bool DescribeUploadIncrementalInfoResponse::TmpSecretKeyHasBeenSet() const
{
    return m_tmpSecretKeyHasBeenSet;
}

string DescribeUploadIncrementalInfoResponse::GetXCosSecurityToken() const
{
    return m_xCosSecurityToken;
}

bool DescribeUploadIncrementalInfoResponse::XCosSecurityTokenHasBeenSet() const
{
    return m_xCosSecurityTokenHasBeenSet;
}

string DescribeUploadIncrementalInfoResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeUploadIncrementalInfoResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeUploadIncrementalInfoResponse::GetExpiredTime() const
{
    return m_expiredTime;
}

bool DescribeUploadIncrementalInfoResponse::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string DescribeUploadIncrementalInfoResponse::GetCosSecurityToken() const
{
    return m_cosSecurityToken;
}

bool DescribeUploadIncrementalInfoResponse::CosSecurityTokenHasBeenSet() const
{
    return m_cosSecurityTokenHasBeenSet;
}


