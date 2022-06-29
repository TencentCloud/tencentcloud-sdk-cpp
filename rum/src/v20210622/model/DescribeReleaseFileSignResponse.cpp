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

#include <tencentcloud/rum/v20210622/model/DescribeReleaseFileSignResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeReleaseFileSignResponse::DescribeReleaseFileSignResponse() :
    m_secretKeyHasBeenSet(false),
    m_secretIDHasBeenSet(false),
    m_sessionTokenHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeReleaseFileSignResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SecretKey") && !rsp["SecretKey"].IsNull())
    {
        if (!rsp["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(rsp["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
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

    if (rsp.HasMember("SessionToken") && !rsp["SessionToken"].IsNull())
    {
        if (!rsp["SessionToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionToken = string(rsp["SessionToken"].GetString());
        m_sessionTokenHasBeenSet = true;
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

string DescribeReleaseFileSignResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secretIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretID.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionToken.c_str(), allocator).Move(), allocator);
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


string DescribeReleaseFileSignResponse::GetSecretKey() const
{
    return m_secretKey;
}

bool DescribeReleaseFileSignResponse::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string DescribeReleaseFileSignResponse::GetSecretID() const
{
    return m_secretID;
}

bool DescribeReleaseFileSignResponse::SecretIDHasBeenSet() const
{
    return m_secretIDHasBeenSet;
}

string DescribeReleaseFileSignResponse::GetSessionToken() const
{
    return m_sessionToken;
}

bool DescribeReleaseFileSignResponse::SessionTokenHasBeenSet() const
{
    return m_sessionTokenHasBeenSet;
}

int64_t DescribeReleaseFileSignResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeReleaseFileSignResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeReleaseFileSignResponse::GetExpiredTime() const
{
    return m_expiredTime;
}

bool DescribeReleaseFileSignResponse::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}


