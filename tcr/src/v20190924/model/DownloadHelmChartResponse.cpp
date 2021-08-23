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

#include <tencentcloud/tcr/v20190924/model/DownloadHelmChartResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DownloadHelmChartResponse::DownloadHelmChartResponse() :
    m_tmpTokenHasBeenSet(false),
    m_tmpSecretIdHasBeenSet(false),
    m_tmpSecretKeyHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome DownloadHelmChartResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TmpToken") && !rsp["TmpToken"].IsNull())
    {
        if (!rsp["TmpToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TmpToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpToken = string(rsp["TmpToken"].GetString());
        m_tmpTokenHasBeenSet = true;
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

    if (rsp.HasMember("Path") && !rsp["Path"].IsNull())
    {
        if (!rsp["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(rsp["Path"].GetString());
        m_pathHasBeenSet = true;
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

    if (rsp.HasMember("ExpiredTime") && !rsp["ExpiredTime"].IsNull())
    {
        if (!rsp["ExpiredTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiredTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = rsp["ExpiredTime"].GetInt64();
        m_expiredTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DownloadHelmChartResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_tmpTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmpToken.c_str(), allocator).Move(), allocator);
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

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
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


string DownloadHelmChartResponse::GetTmpToken() const
{
    return m_tmpToken;
}

bool DownloadHelmChartResponse::TmpTokenHasBeenSet() const
{
    return m_tmpTokenHasBeenSet;
}

string DownloadHelmChartResponse::GetTmpSecretId() const
{
    return m_tmpSecretId;
}

bool DownloadHelmChartResponse::TmpSecretIdHasBeenSet() const
{
    return m_tmpSecretIdHasBeenSet;
}

string DownloadHelmChartResponse::GetTmpSecretKey() const
{
    return m_tmpSecretKey;
}

bool DownloadHelmChartResponse::TmpSecretKeyHasBeenSet() const
{
    return m_tmpSecretKeyHasBeenSet;
}

string DownloadHelmChartResponse::GetBucket() const
{
    return m_bucket;
}

bool DownloadHelmChartResponse::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string DownloadHelmChartResponse::GetRegion() const
{
    return m_region;
}

bool DownloadHelmChartResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DownloadHelmChartResponse::GetPath() const
{
    return m_path;
}

bool DownloadHelmChartResponse::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

int64_t DownloadHelmChartResponse::GetStartTime() const
{
    return m_startTime;
}

bool DownloadHelmChartResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DownloadHelmChartResponse::GetExpiredTime() const
{
    return m_expiredTime;
}

bool DownloadHelmChartResponse::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}


