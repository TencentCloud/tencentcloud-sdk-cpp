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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitExtraResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeUnitExtraResponse::DescribeEdgeUnitExtraResponse() :
    m_aPIServerTypeHasBeenSet(false),
    m_aPIServerURLHasBeenSet(false),
    m_aPIServerURLPortHasBeenSet(false),
    m_aPIServerResolveIPHasBeenSet(false),
    m_aPIServerExposeAddressHasBeenSet(false),
    m_isCreatePrometheusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEdgeUnitExtraResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("APIServerType") && !rsp["APIServerType"].IsNull())
    {
        if (!rsp["APIServerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIServerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIServerType = string(rsp["APIServerType"].GetString());
        m_aPIServerTypeHasBeenSet = true;
    }

    if (rsp.HasMember("APIServerURL") && !rsp["APIServerURL"].IsNull())
    {
        if (!rsp["APIServerURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIServerURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIServerURL = string(rsp["APIServerURL"].GetString());
        m_aPIServerURLHasBeenSet = true;
    }

    if (rsp.HasMember("APIServerURLPort") && !rsp["APIServerURLPort"].IsNull())
    {
        if (!rsp["APIServerURLPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIServerURLPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIServerURLPort = string(rsp["APIServerURLPort"].GetString());
        m_aPIServerURLPortHasBeenSet = true;
    }

    if (rsp.HasMember("APIServerResolveIP") && !rsp["APIServerResolveIP"].IsNull())
    {
        if (!rsp["APIServerResolveIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIServerResolveIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIServerResolveIP = string(rsp["APIServerResolveIP"].GetString());
        m_aPIServerResolveIPHasBeenSet = true;
    }

    if (rsp.HasMember("APIServerExposeAddress") && !rsp["APIServerExposeAddress"].IsNull())
    {
        if (!rsp["APIServerExposeAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIServerExposeAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIServerExposeAddress = string(rsp["APIServerExposeAddress"].GetString());
        m_aPIServerExposeAddressHasBeenSet = true;
    }

    if (rsp.HasMember("IsCreatePrometheus") && !rsp["IsCreatePrometheus"].IsNull())
    {
        if (!rsp["IsCreatePrometheus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsCreatePrometheus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCreatePrometheus = rsp["IsCreatePrometheus"].GetBool();
        m_isCreatePrometheusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEdgeUnitExtraResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_aPIServerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIServerURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIServerURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIServerURL.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIServerURLPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIServerURLPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIServerURLPort.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIServerResolveIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIServerResolveIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIServerResolveIP.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIServerExposeAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIServerExposeAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIServerExposeAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_isCreatePrometheusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCreatePrometheus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCreatePrometheus, allocator);
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


string DescribeEdgeUnitExtraResponse::GetAPIServerType() const
{
    return m_aPIServerType;
}

bool DescribeEdgeUnitExtraResponse::APIServerTypeHasBeenSet() const
{
    return m_aPIServerTypeHasBeenSet;
}

string DescribeEdgeUnitExtraResponse::GetAPIServerURL() const
{
    return m_aPIServerURL;
}

bool DescribeEdgeUnitExtraResponse::APIServerURLHasBeenSet() const
{
    return m_aPIServerURLHasBeenSet;
}

string DescribeEdgeUnitExtraResponse::GetAPIServerURLPort() const
{
    return m_aPIServerURLPort;
}

bool DescribeEdgeUnitExtraResponse::APIServerURLPortHasBeenSet() const
{
    return m_aPIServerURLPortHasBeenSet;
}

string DescribeEdgeUnitExtraResponse::GetAPIServerResolveIP() const
{
    return m_aPIServerResolveIP;
}

bool DescribeEdgeUnitExtraResponse::APIServerResolveIPHasBeenSet() const
{
    return m_aPIServerResolveIPHasBeenSet;
}

string DescribeEdgeUnitExtraResponse::GetAPIServerExposeAddress() const
{
    return m_aPIServerExposeAddress;
}

bool DescribeEdgeUnitExtraResponse::APIServerExposeAddressHasBeenSet() const
{
    return m_aPIServerExposeAddressHasBeenSet;
}

bool DescribeEdgeUnitExtraResponse::GetIsCreatePrometheus() const
{
    return m_isCreatePrometheus;
}

bool DescribeEdgeUnitExtraResponse::IsCreatePrometheusHasBeenSet() const
{
    return m_isCreatePrometheusHasBeenSet;
}


