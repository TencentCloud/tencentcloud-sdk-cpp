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

#include <tencentcloud/faceid/v20180301/model/CreateUploadUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

CreateUploadUrlResponse::CreateUploadUrlResponse() :
    m_uploadUrlHasBeenSet(false),
    m_resourceUrlHasBeenSet(false),
    m_expiredTimestampHasBeenSet(false)
{
}

CoreInternalOutcome CreateUploadUrlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UploadUrl") && !rsp["UploadUrl"].IsNull())
    {
        if (!rsp["UploadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadUrl = string(rsp["UploadUrl"].GetString());
        m_uploadUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceUrl") && !rsp["ResourceUrl"].IsNull())
    {
        if (!rsp["ResourceUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceUrl = string(rsp["ResourceUrl"].GetString());
        m_resourceUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiredTimestamp") && !rsp["ExpiredTimestamp"].IsNull())
    {
        if (!rsp["ExpiredTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiredTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTimestamp = rsp["ExpiredTimestamp"].GetInt64();
        m_expiredTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateUploadUrlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_uploadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredTimestamp, allocator);
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


string CreateUploadUrlResponse::GetUploadUrl() const
{
    return m_uploadUrl;
}

bool CreateUploadUrlResponse::UploadUrlHasBeenSet() const
{
    return m_uploadUrlHasBeenSet;
}

string CreateUploadUrlResponse::GetResourceUrl() const
{
    return m_resourceUrl;
}

bool CreateUploadUrlResponse::ResourceUrlHasBeenSet() const
{
    return m_resourceUrlHasBeenSet;
}

int64_t CreateUploadUrlResponse::GetExpiredTimestamp() const
{
    return m_expiredTimestamp;
}

bool CreateUploadUrlResponse::ExpiredTimestampHasBeenSet() const
{
    return m_expiredTimestampHasBeenSet;
}


