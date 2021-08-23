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

#include <tencentcloud/yunjing/v20180228/model/DescribeAttackLogInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

DescribeAttackLogInfoResponse::DescribeAttackLogInfoResponse() :
    m_idHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_srcPortHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_httpHostHasBeenSet(false),
    m_httpHeadHasBeenSet(false),
    m_httpUserAgentHasBeenSet(false),
    m_httpRefererHasBeenSet(false),
    m_vulTypeHasBeenSet(false),
    m_httpCgiHasBeenSet(false),
    m_httpParamHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_httpContentHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAttackLogInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = rsp["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("Quuid") && !rsp["Quuid"].IsNull())
    {
        if (!rsp["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(rsp["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (rsp.HasMember("SrcPort") && !rsp["SrcPort"].IsNull())
    {
        if (!rsp["SrcPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SrcPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_srcPort = rsp["SrcPort"].GetUint64();
        m_srcPortHasBeenSet = true;
    }

    if (rsp.HasMember("SrcIp") && !rsp["SrcIp"].IsNull())
    {
        if (!rsp["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(rsp["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (rsp.HasMember("DstPort") && !rsp["DstPort"].IsNull())
    {
        if (!rsp["DstPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DstPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = rsp["DstPort"].GetUint64();
        m_dstPortHasBeenSet = true;
    }

    if (rsp.HasMember("DstIp") && !rsp["DstIp"].IsNull())
    {
        if (!rsp["DstIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DstIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIp = string(rsp["DstIp"].GetString());
        m_dstIpHasBeenSet = true;
    }

    if (rsp.HasMember("HttpMethod") && !rsp["HttpMethod"].IsNull())
    {
        if (!rsp["HttpMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpMethod = string(rsp["HttpMethod"].GetString());
        m_httpMethodHasBeenSet = true;
    }

    if (rsp.HasMember("HttpHost") && !rsp["HttpHost"].IsNull())
    {
        if (!rsp["HttpHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpHost = string(rsp["HttpHost"].GetString());
        m_httpHostHasBeenSet = true;
    }

    if (rsp.HasMember("HttpHead") && !rsp["HttpHead"].IsNull())
    {
        if (!rsp["HttpHead"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpHead` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpHead = string(rsp["HttpHead"].GetString());
        m_httpHeadHasBeenSet = true;
    }

    if (rsp.HasMember("HttpUserAgent") && !rsp["HttpUserAgent"].IsNull())
    {
        if (!rsp["HttpUserAgent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpUserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpUserAgent = string(rsp["HttpUserAgent"].GetString());
        m_httpUserAgentHasBeenSet = true;
    }

    if (rsp.HasMember("HttpReferer") && !rsp["HttpReferer"].IsNull())
    {
        if (!rsp["HttpReferer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpReferer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpReferer = string(rsp["HttpReferer"].GetString());
        m_httpRefererHasBeenSet = true;
    }

    if (rsp.HasMember("VulType") && !rsp["VulType"].IsNull())
    {
        if (!rsp["VulType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulType = string(rsp["VulType"].GetString());
        m_vulTypeHasBeenSet = true;
    }

    if (rsp.HasMember("HttpCgi") && !rsp["HttpCgi"].IsNull())
    {
        if (!rsp["HttpCgi"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpCgi` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCgi = string(rsp["HttpCgi"].GetString());
        m_httpCgiHasBeenSet = true;
    }

    if (rsp.HasMember("HttpParam") && !rsp["HttpParam"].IsNull())
    {
        if (!rsp["HttpParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpParam = string(rsp["HttpParam"].GetString());
        m_httpParamHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(rsp["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("HttpContent") && !rsp["HttpContent"].IsNull())
    {
        if (!rsp["HttpContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpContent = string(rsp["HttpContent"].GetString());
        m_httpContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAttackLogInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_srcPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_srcPort, allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstPort, allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

    if (m_httpMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_httpHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpHost.c_str(), allocator).Move(), allocator);
    }

    if (m_httpHeadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpHead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpHead.c_str(), allocator).Move(), allocator);
    }

    if (m_httpUserAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpUserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpUserAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_httpRefererHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpReferer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpReferer.c_str(), allocator).Move(), allocator);
    }

    if (m_vulTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulType.c_str(), allocator).Move(), allocator);
    }

    if (m_httpCgiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCgi";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpCgi.c_str(), allocator).Move(), allocator);
    }

    if (m_httpParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpParam.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_httpContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpContent.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeAttackLogInfoResponse::GetId() const
{
    return m_id;
}

bool DescribeAttackLogInfoResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeAttackLogInfoResponse::GetQuuid() const
{
    return m_quuid;
}

bool DescribeAttackLogInfoResponse::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

uint64_t DescribeAttackLogInfoResponse::GetSrcPort() const
{
    return m_srcPort;
}

bool DescribeAttackLogInfoResponse::SrcPortHasBeenSet() const
{
    return m_srcPortHasBeenSet;
}

string DescribeAttackLogInfoResponse::GetSrcIp() const
{
    return m_srcIp;
}

bool DescribeAttackLogInfoResponse::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

uint64_t DescribeAttackLogInfoResponse::GetDstPort() const
{
    return m_dstPort;
}

bool DescribeAttackLogInfoResponse::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

string DescribeAttackLogInfoResponse::GetDstIp() const
{
    return m_dstIp;
}

bool DescribeAttackLogInfoResponse::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

string DescribeAttackLogInfoResponse::GetHttpMethod() const
{
    return m_httpMethod;
}

bool DescribeAttackLogInfoResponse::HttpMethodHasBeenSet() const
{
    return m_httpMethodHasBeenSet;
}

string DescribeAttackLogInfoResponse::GetHttpHost() const
{
    return m_httpHost;
}

bool DescribeAttackLogInfoResponse::HttpHostHasBeenSet() const
{
    return m_httpHostHasBeenSet;
}

string DescribeAttackLogInfoResponse::GetHttpHead() const
{
    return m_httpHead;
}

bool DescribeAttackLogInfoResponse::HttpHeadHasBeenSet() const
{
    return m_httpHeadHasBeenSet;
}

string DescribeAttackLogInfoResponse::GetHttpUserAgent() const
{
    return m_httpUserAgent;
}

bool DescribeAttackLogInfoResponse::HttpUserAgentHasBeenSet() const
{
    return m_httpUserAgentHasBeenSet;
}

string DescribeAttackLogInfoResponse::GetHttpReferer() const
{
    return m_httpReferer;
}

bool DescribeAttackLogInfoResponse::HttpRefererHasBeenSet() const
{
    return m_httpRefererHasBeenSet;
}

string DescribeAttackLogInfoResponse::GetVulType() const
{
    return m_vulType;
}

bool DescribeAttackLogInfoResponse::VulTypeHasBeenSet() const
{
    return m_vulTypeHasBeenSet;
}

string DescribeAttackLogInfoResponse::GetHttpCgi() const
{
    return m_httpCgi;
}

bool DescribeAttackLogInfoResponse::HttpCgiHasBeenSet() const
{
    return m_httpCgiHasBeenSet;
}

string DescribeAttackLogInfoResponse::GetHttpParam() const
{
    return m_httpParam;
}

bool DescribeAttackLogInfoResponse::HttpParamHasBeenSet() const
{
    return m_httpParamHasBeenSet;
}

string DescribeAttackLogInfoResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool DescribeAttackLogInfoResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DescribeAttackLogInfoResponse::GetHttpContent() const
{
    return m_httpContent;
}

bool DescribeAttackLogInfoResponse::HttpContentHasBeenSet() const
{
    return m_httpContentHasBeenSet;
}


