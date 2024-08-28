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

#include <tencentcloud/wedata/v20210820/model/GetCosTokenResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

GetCosTokenResponse::GetCosTokenResponse() :
    m_regionHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_endPointHasBeenSet(false)
{
}

CoreInternalOutcome GetCosTokenResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("Token") && !rsp["Token"].IsNull())
    {
        if (!rsp["Token"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Token` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_token.Deserialize(rsp["Token"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tokenHasBeenSet = true;
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

    if (rsp.HasMember("EndPoint") && !rsp["EndPoint"].IsNull())
    {
        if (!rsp["EndPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPoint = string(rsp["EndPoint"].GetString());
        m_endPointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetCosTokenResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_token.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPoint.c_str(), allocator).Move(), allocator);
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


string GetCosTokenResponse::GetRegion() const
{
    return m_region;
}

bool GetCosTokenResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

CosTokenResponse GetCosTokenResponse::GetToken() const
{
    return m_token;
}

bool GetCosTokenResponse::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

string GetCosTokenResponse::GetBucket() const
{
    return m_bucket;
}

bool GetCosTokenResponse::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string GetCosTokenResponse::GetEndPoint() const
{
    return m_endPoint;
}

bool GetCosTokenResponse::EndPointHasBeenSet() const
{
    return m_endPointHasBeenSet;
}


