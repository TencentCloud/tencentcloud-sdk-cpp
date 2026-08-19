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

#include <tencentcloud/tokenhub/v20260322/model/DescribeModelQuotaResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

DescribeModelQuotaResponse::DescribeModelQuotaResponse() :
    m_modelIdHasBeenSet(false),
    m_tPMLimitHasBeenSet(false),
    m_rPMLimitHasBeenSet(false),
    m_tPMInputQuotaLimitHasBeenSet(false),
    m_tPMOutputQuotaLimitHasBeenSet(false),
    m_tPMInputReserveLimitHasBeenSet(false),
    m_tPMOutputReserveLimitHasBeenSet(false)
{
}

CoreInternalOutcome DescribeModelQuotaResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ModelId") && !rsp["ModelId"].IsNull())
    {
        if (!rsp["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(rsp["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (rsp.HasMember("TPMLimit") && !rsp["TPMLimit"].IsNull())
    {
        if (!rsp["TPMLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TPMLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tPMLimit = rsp["TPMLimit"].GetInt64();
        m_tPMLimitHasBeenSet = true;
    }

    if (rsp.HasMember("RPMLimit") && !rsp["RPMLimit"].IsNull())
    {
        if (!rsp["RPMLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RPMLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rPMLimit = rsp["RPMLimit"].GetInt64();
        m_rPMLimitHasBeenSet = true;
    }

    if (rsp.HasMember("TPMInputQuotaLimit") && !rsp["TPMInputQuotaLimit"].IsNull())
    {
        if (!rsp["TPMInputQuotaLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TPMInputQuotaLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tPMInputQuotaLimit = rsp["TPMInputQuotaLimit"].GetInt64();
        m_tPMInputQuotaLimitHasBeenSet = true;
    }

    if (rsp.HasMember("TPMOutputQuotaLimit") && !rsp["TPMOutputQuotaLimit"].IsNull())
    {
        if (!rsp["TPMOutputQuotaLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TPMOutputQuotaLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tPMOutputQuotaLimit = rsp["TPMOutputQuotaLimit"].GetInt64();
        m_tPMOutputQuotaLimitHasBeenSet = true;
    }

    if (rsp.HasMember("TPMInputReserveLimit") && !rsp["TPMInputReserveLimit"].IsNull())
    {
        if (!rsp["TPMInputReserveLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TPMInputReserveLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tPMInputReserveLimit = rsp["TPMInputReserveLimit"].GetInt64();
        m_tPMInputReserveLimitHasBeenSet = true;
    }

    if (rsp.HasMember("TPMOutputReserveLimit") && !rsp["TPMOutputReserveLimit"].IsNull())
    {
        if (!rsp["TPMOutputReserveLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TPMOutputReserveLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tPMOutputReserveLimit = rsp["TPMOutputReserveLimit"].GetInt64();
        m_tPMOutputReserveLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeModelQuotaResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_tPMLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPMLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tPMLimit, allocator);
    }

    if (m_rPMLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RPMLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rPMLimit, allocator);
    }

    if (m_tPMInputQuotaLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPMInputQuotaLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tPMInputQuotaLimit, allocator);
    }

    if (m_tPMOutputQuotaLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPMOutputQuotaLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tPMOutputQuotaLimit, allocator);
    }

    if (m_tPMInputReserveLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPMInputReserveLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tPMInputReserveLimit, allocator);
    }

    if (m_tPMOutputReserveLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPMOutputReserveLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tPMOutputReserveLimit, allocator);
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


string DescribeModelQuotaResponse::GetModelId() const
{
    return m_modelId;
}

bool DescribeModelQuotaResponse::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

int64_t DescribeModelQuotaResponse::GetTPMLimit() const
{
    return m_tPMLimit;
}

bool DescribeModelQuotaResponse::TPMLimitHasBeenSet() const
{
    return m_tPMLimitHasBeenSet;
}

int64_t DescribeModelQuotaResponse::GetRPMLimit() const
{
    return m_rPMLimit;
}

bool DescribeModelQuotaResponse::RPMLimitHasBeenSet() const
{
    return m_rPMLimitHasBeenSet;
}

int64_t DescribeModelQuotaResponse::GetTPMInputQuotaLimit() const
{
    return m_tPMInputQuotaLimit;
}

bool DescribeModelQuotaResponse::TPMInputQuotaLimitHasBeenSet() const
{
    return m_tPMInputQuotaLimitHasBeenSet;
}

int64_t DescribeModelQuotaResponse::GetTPMOutputQuotaLimit() const
{
    return m_tPMOutputQuotaLimit;
}

bool DescribeModelQuotaResponse::TPMOutputQuotaLimitHasBeenSet() const
{
    return m_tPMOutputQuotaLimitHasBeenSet;
}

int64_t DescribeModelQuotaResponse::GetTPMInputReserveLimit() const
{
    return m_tPMInputReserveLimit;
}

bool DescribeModelQuotaResponse::TPMInputReserveLimitHasBeenSet() const
{
    return m_tPMInputReserveLimitHasBeenSet;
}

int64_t DescribeModelQuotaResponse::GetTPMOutputReserveLimit() const
{
    return m_tPMOutputReserveLimit;
}

bool DescribeModelQuotaResponse::TPMOutputReserveLimitHasBeenSet() const
{
    return m_tPMOutputReserveLimitHasBeenSet;
}


