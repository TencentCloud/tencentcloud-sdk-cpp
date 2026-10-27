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

#include <tencentcloud/cvd/v20201104/model/DescribeInstanceFetchMsgResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

DescribeInstanceFetchMsgResponse::DescribeInstanceFetchMsgResponse() :
    m_fetchStatusTicketHasBeenSet(false),
    m_fetchTicketHasBeenSet(false),
    m_fetchUrlHasBeenSet(false),
    m_protocolVersionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstanceFetchMsgResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FetchStatusTicket") && !rsp["FetchStatusTicket"].IsNull())
    {
        if (!rsp["FetchStatusTicket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FetchStatusTicket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fetchStatusTicket = string(rsp["FetchStatusTicket"].GetString());
        m_fetchStatusTicketHasBeenSet = true;
    }

    if (rsp.HasMember("FetchTicket") && !rsp["FetchTicket"].IsNull())
    {
        if (!rsp["FetchTicket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FetchTicket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fetchTicket = string(rsp["FetchTicket"].GetString());
        m_fetchTicketHasBeenSet = true;
    }

    if (rsp.HasMember("FetchUrl") && !rsp["FetchUrl"].IsNull())
    {
        if (!rsp["FetchUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FetchUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fetchUrl = string(rsp["FetchUrl"].GetString());
        m_fetchUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ProtocolVersion") && !rsp["ProtocolVersion"].IsNull())
    {
        if (!rsp["ProtocolVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocolVersion = string(rsp["ProtocolVersion"].GetString());
        m_protocolVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeInstanceFetchMsgResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_fetchStatusTicketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchStatusTicket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fetchStatusTicket.c_str(), allocator).Move(), allocator);
    }

    if (m_fetchTicketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchTicket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fetchTicket.c_str(), allocator).Move(), allocator);
    }

    if (m_fetchUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fetchUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocolVersion.c_str(), allocator).Move(), allocator);
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


string DescribeInstanceFetchMsgResponse::GetFetchStatusTicket() const
{
    return m_fetchStatusTicket;
}

bool DescribeInstanceFetchMsgResponse::FetchStatusTicketHasBeenSet() const
{
    return m_fetchStatusTicketHasBeenSet;
}

string DescribeInstanceFetchMsgResponse::GetFetchTicket() const
{
    return m_fetchTicket;
}

bool DescribeInstanceFetchMsgResponse::FetchTicketHasBeenSet() const
{
    return m_fetchTicketHasBeenSet;
}

string DescribeInstanceFetchMsgResponse::GetFetchUrl() const
{
    return m_fetchUrl;
}

bool DescribeInstanceFetchMsgResponse::FetchUrlHasBeenSet() const
{
    return m_fetchUrlHasBeenSet;
}

string DescribeInstanceFetchMsgResponse::GetProtocolVersion() const
{
    return m_protocolVersion;
}

bool DescribeInstanceFetchMsgResponse::ProtocolVersionHasBeenSet() const
{
    return m_protocolVersionHasBeenSet;
}


