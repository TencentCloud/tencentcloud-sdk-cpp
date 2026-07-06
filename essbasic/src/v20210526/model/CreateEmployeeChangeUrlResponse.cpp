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

#include <tencentcloud/essbasic/v20210526/model/CreateEmployeeChangeUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateEmployeeChangeUrlResponse::CreateEmployeeChangeUrlResponse() :
    m_miniAppPathHasBeenSet(false),
    m_longUrlHasBeenSet(false),
    m_shortUrlHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome CreateEmployeeChangeUrlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MiniAppPath") && !rsp["MiniAppPath"].IsNull())
    {
        if (!rsp["MiniAppPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppPath = string(rsp["MiniAppPath"].GetString());
        m_miniAppPathHasBeenSet = true;
    }

    if (rsp.HasMember("LongUrl") && !rsp["LongUrl"].IsNull())
    {
        if (!rsp["LongUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LongUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longUrl = string(rsp["LongUrl"].GetString());
        m_longUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ShortUrl") && !rsp["ShortUrl"].IsNull())
    {
        if (!rsp["ShortUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShortUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shortUrl = string(rsp["ShortUrl"].GetString());
        m_shortUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = rsp["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateEmployeeChangeUrlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_miniAppPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniAppPath.c_str(), allocator).Move(), allocator);
    }

    if (m_longUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_shortUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shortUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
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


string CreateEmployeeChangeUrlResponse::GetMiniAppPath() const
{
    return m_miniAppPath;
}

bool CreateEmployeeChangeUrlResponse::MiniAppPathHasBeenSet() const
{
    return m_miniAppPathHasBeenSet;
}

string CreateEmployeeChangeUrlResponse::GetLongUrl() const
{
    return m_longUrl;
}

bool CreateEmployeeChangeUrlResponse::LongUrlHasBeenSet() const
{
    return m_longUrlHasBeenSet;
}

string CreateEmployeeChangeUrlResponse::GetShortUrl() const
{
    return m_shortUrl;
}

bool CreateEmployeeChangeUrlResponse::ShortUrlHasBeenSet() const
{
    return m_shortUrlHasBeenSet;
}

int64_t CreateEmployeeChangeUrlResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool CreateEmployeeChangeUrlResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}


