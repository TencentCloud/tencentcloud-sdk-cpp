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

#include <tencentcloud/dc/v20180410/model/DescribeInternetAddressQuotaResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

DescribeInternetAddressQuotaResponse::DescribeInternetAddressQuotaResponse() :
    m_ipv6PrefixLenHasBeenSet(false),
    m_ipv4BgpQuotaHasBeenSet(false),
    m_ipv4OtherQuotaHasBeenSet(false),
    m_ipv4BgpNumHasBeenSet(false),
    m_ipv4OtherNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInternetAddressQuotaResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Ipv6PrefixLen") && !rsp["Ipv6PrefixLen"].IsNull())
    {
        if (!rsp["Ipv6PrefixLen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv6PrefixLen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6PrefixLen = rsp["Ipv6PrefixLen"].GetInt64();
        m_ipv6PrefixLenHasBeenSet = true;
    }

    if (rsp.HasMember("Ipv4BgpQuota") && !rsp["Ipv4BgpQuota"].IsNull())
    {
        if (!rsp["Ipv4BgpQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv4BgpQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv4BgpQuota = rsp["Ipv4BgpQuota"].GetInt64();
        m_ipv4BgpQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("Ipv4OtherQuota") && !rsp["Ipv4OtherQuota"].IsNull())
    {
        if (!rsp["Ipv4OtherQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv4OtherQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv4OtherQuota = rsp["Ipv4OtherQuota"].GetInt64();
        m_ipv4OtherQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("Ipv4BgpNum") && !rsp["Ipv4BgpNum"].IsNull())
    {
        if (!rsp["Ipv4BgpNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv4BgpNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv4BgpNum = rsp["Ipv4BgpNum"].GetInt64();
        m_ipv4BgpNumHasBeenSet = true;
    }

    if (rsp.HasMember("Ipv4OtherNum") && !rsp["Ipv4OtherNum"].IsNull())
    {
        if (!rsp["Ipv4OtherNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv4OtherNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv4OtherNum = rsp["Ipv4OtherNum"].GetInt64();
        m_ipv4OtherNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeInternetAddressQuotaResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_ipv6PrefixLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6PrefixLen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv6PrefixLen, allocator);
    }

    if (m_ipv4BgpQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv4BgpQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv4BgpQuota, allocator);
    }

    if (m_ipv4OtherQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv4OtherQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv4OtherQuota, allocator);
    }

    if (m_ipv4BgpNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv4BgpNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv4BgpNum, allocator);
    }

    if (m_ipv4OtherNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv4OtherNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv4OtherNum, allocator);
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


int64_t DescribeInternetAddressQuotaResponse::GetIpv6PrefixLen() const
{
    return m_ipv6PrefixLen;
}

bool DescribeInternetAddressQuotaResponse::Ipv6PrefixLenHasBeenSet() const
{
    return m_ipv6PrefixLenHasBeenSet;
}

int64_t DescribeInternetAddressQuotaResponse::GetIpv4BgpQuota() const
{
    return m_ipv4BgpQuota;
}

bool DescribeInternetAddressQuotaResponse::Ipv4BgpQuotaHasBeenSet() const
{
    return m_ipv4BgpQuotaHasBeenSet;
}

int64_t DescribeInternetAddressQuotaResponse::GetIpv4OtherQuota() const
{
    return m_ipv4OtherQuota;
}

bool DescribeInternetAddressQuotaResponse::Ipv4OtherQuotaHasBeenSet() const
{
    return m_ipv4OtherQuotaHasBeenSet;
}

int64_t DescribeInternetAddressQuotaResponse::GetIpv4BgpNum() const
{
    return m_ipv4BgpNum;
}

bool DescribeInternetAddressQuotaResponse::Ipv4BgpNumHasBeenSet() const
{
    return m_ipv4BgpNumHasBeenSet;
}

int64_t DescribeInternetAddressQuotaResponse::GetIpv4OtherNum() const
{
    return m_ipv4OtherNum;
}

bool DescribeInternetAddressQuotaResponse::Ipv4OtherNumHasBeenSet() const
{
    return m_ipv4OtherNumHasBeenSet;
}


