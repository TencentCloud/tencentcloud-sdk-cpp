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

#include <tencentcloud/ms/v20180408/model/CreateCosSecKeyInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

CreateCosSecKeyInstanceResponse::CreateCosSecKeyInstanceResponse() :
    m_cosAppidHasBeenSet(false),
    m_cosBucketHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_cosIdHasBeenSet(false),
    m_cosKeyHasBeenSet(false),
    m_cosTockenHasBeenSet(false),
    m_cosPrefixHasBeenSet(false)
{
}

CoreInternalOutcome CreateCosSecKeyInstanceResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("CosAppid") && !rsp["CosAppid"].IsNull())
    {
        if (!rsp["CosAppid"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CosAppid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cosAppid = rsp["CosAppid"].GetUint64();
        m_cosAppidHasBeenSet = true;
    }

    if (rsp.HasMember("CosBucket") && !rsp["CosBucket"].IsNull())
    {
        if (!rsp["CosBucket"].IsString())
        {
            return CoreInternalOutcome(Error("response `CosBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucket = string(rsp["CosBucket"].GetString());
        m_cosBucketHasBeenSet = true;
    }

    if (rsp.HasMember("CosRegion") && !rsp["CosRegion"].IsNull())
    {
        if (!rsp["CosRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `CosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosRegion = string(rsp["CosRegion"].GetString());
        m_cosRegionHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = rsp["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CosId") && !rsp["CosId"].IsNull())
    {
        if (!rsp["CosId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CosId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosId = string(rsp["CosId"].GetString());
        m_cosIdHasBeenSet = true;
    }

    if (rsp.HasMember("CosKey") && !rsp["CosKey"].IsNull())
    {
        if (!rsp["CosKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `CosKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosKey = string(rsp["CosKey"].GetString());
        m_cosKeyHasBeenSet = true;
    }

    if (rsp.HasMember("CosTocken") && !rsp["CosTocken"].IsNull())
    {
        if (!rsp["CosTocken"].IsString())
        {
            return CoreInternalOutcome(Error("response `CosTocken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosTocken = string(rsp["CosTocken"].GetString());
        m_cosTockenHasBeenSet = true;
    }

    if (rsp.HasMember("CosPrefix") && !rsp["CosPrefix"].IsNull())
    {
        if (!rsp["CosPrefix"].IsString())
        {
            return CoreInternalOutcome(Error("response `CosPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosPrefix = string(rsp["CosPrefix"].GetString());
        m_cosPrefixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t CreateCosSecKeyInstanceResponse::GetCosAppid() const
{
    return m_cosAppid;
}

bool CreateCosSecKeyInstanceResponse::CosAppidHasBeenSet() const
{
    return m_cosAppidHasBeenSet;
}

string CreateCosSecKeyInstanceResponse::GetCosBucket() const
{
    return m_cosBucket;
}

bool CreateCosSecKeyInstanceResponse::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string CreateCosSecKeyInstanceResponse::GetCosRegion() const
{
    return m_cosRegion;
}

bool CreateCosSecKeyInstanceResponse::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

uint64_t CreateCosSecKeyInstanceResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool CreateCosSecKeyInstanceResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string CreateCosSecKeyInstanceResponse::GetCosId() const
{
    return m_cosId;
}

bool CreateCosSecKeyInstanceResponse::CosIdHasBeenSet() const
{
    return m_cosIdHasBeenSet;
}

string CreateCosSecKeyInstanceResponse::GetCosKey() const
{
    return m_cosKey;
}

bool CreateCosSecKeyInstanceResponse::CosKeyHasBeenSet() const
{
    return m_cosKeyHasBeenSet;
}

string CreateCosSecKeyInstanceResponse::GetCosTocken() const
{
    return m_cosTocken;
}

bool CreateCosSecKeyInstanceResponse::CosTockenHasBeenSet() const
{
    return m_cosTockenHasBeenSet;
}

string CreateCosSecKeyInstanceResponse::GetCosPrefix() const
{
    return m_cosPrefix;
}

bool CreateCosSecKeyInstanceResponse::CosPrefixHasBeenSet() const
{
    return m_cosPrefixHasBeenSet;
}


