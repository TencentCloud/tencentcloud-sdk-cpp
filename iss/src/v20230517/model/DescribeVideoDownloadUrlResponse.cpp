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

#include <tencentcloud/iss/v20230517/model/DescribeVideoDownloadUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeVideoDownloadUrlResponse::DescribeVideoDownloadUrlResponse() :
    m_urlHasBeenSet(false),
    m_actualBeginTimeHasBeenSet(false),
    m_actualEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVideoDownloadUrlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Url") && !rsp["Url"].IsNull())
    {
        if (!rsp["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(rsp["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (rsp.HasMember("ActualBeginTime") && !rsp["ActualBeginTime"].IsNull())
    {
        if (!rsp["ActualBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActualBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actualBeginTime = string(rsp["ActualBeginTime"].GetString());
        m_actualBeginTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ActualEndTime") && !rsp["ActualEndTime"].IsNull())
    {
        if (!rsp["ActualEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActualEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actualEndTime = string(rsp["ActualEndTime"].GetString());
        m_actualEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVideoDownloadUrlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_actualBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActualBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actualBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actualEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActualEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actualEndTime.c_str(), allocator).Move(), allocator);
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


string DescribeVideoDownloadUrlResponse::GetUrl() const
{
    return m_url;
}

bool DescribeVideoDownloadUrlResponse::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DescribeVideoDownloadUrlResponse::GetActualBeginTime() const
{
    return m_actualBeginTime;
}

bool DescribeVideoDownloadUrlResponse::ActualBeginTimeHasBeenSet() const
{
    return m_actualBeginTimeHasBeenSet;
}

string DescribeVideoDownloadUrlResponse::GetActualEndTime() const
{
    return m_actualEndTime;
}

bool DescribeVideoDownloadUrlResponse::ActualEndTimeHasBeenSet() const
{
    return m_actualEndTimeHasBeenSet;
}


