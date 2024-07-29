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

#include <tencentcloud/csip/v20221121/model/DescribeCFWAssetStatisticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeCFWAssetStatisticsResponse::DescribeCFWAssetStatisticsResponse() :
    m_networkTotalHasBeenSet(false),
    m_clbTotalHasBeenSet(false),
    m_natTotalHasBeenSet(false),
    m_publicAssetTotalHasBeenSet(false),
    m_cVMAssetTotalHasBeenSet(false),
    m_cFGTotalHasBeenSet(false),
    m_portTotalHasBeenSet(false),
    m_websiteTotalHasBeenSet(false),
    m_serverTotalHasBeenSet(false),
    m_weakPasswordTotalHasBeenSet(false),
    m_vULTotalHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCFWAssetStatisticsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NetworkTotal") && !rsp["NetworkTotal"].IsNull())
    {
        if (!rsp["NetworkTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkTotal = rsp["NetworkTotal"].GetInt64();
        m_networkTotalHasBeenSet = true;
    }

    if (rsp.HasMember("ClbTotal") && !rsp["ClbTotal"].IsNull())
    {
        if (!rsp["ClbTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClbTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clbTotal = rsp["ClbTotal"].GetInt64();
        m_clbTotalHasBeenSet = true;
    }

    if (rsp.HasMember("NatTotal") && !rsp["NatTotal"].IsNull())
    {
        if (!rsp["NatTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_natTotal = rsp["NatTotal"].GetInt64();
        m_natTotalHasBeenSet = true;
    }

    if (rsp.HasMember("PublicAssetTotal") && !rsp["PublicAssetTotal"].IsNull())
    {
        if (!rsp["PublicAssetTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publicAssetTotal = rsp["PublicAssetTotal"].GetInt64();
        m_publicAssetTotalHasBeenSet = true;
    }

    if (rsp.HasMember("CVMAssetTotal") && !rsp["CVMAssetTotal"].IsNull())
    {
        if (!rsp["CVMAssetTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cVMAssetTotal = rsp["CVMAssetTotal"].GetInt64();
        m_cVMAssetTotalHasBeenSet = true;
    }

    if (rsp.HasMember("CFGTotal") && !rsp["CFGTotal"].IsNull())
    {
        if (!rsp["CFGTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CFGTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cFGTotal = rsp["CFGTotal"].GetInt64();
        m_cFGTotalHasBeenSet = true;
    }

    if (rsp.HasMember("PortTotal") && !rsp["PortTotal"].IsNull())
    {
        if (!rsp["PortTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_portTotal = rsp["PortTotal"].GetInt64();
        m_portTotalHasBeenSet = true;
    }

    if (rsp.HasMember("WebsiteTotal") && !rsp["WebsiteTotal"].IsNull())
    {
        if (!rsp["WebsiteTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_websiteTotal = rsp["WebsiteTotal"].GetInt64();
        m_websiteTotalHasBeenSet = true;
    }

    if (rsp.HasMember("ServerTotal") && !rsp["ServerTotal"].IsNull())
    {
        if (!rsp["ServerTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serverTotal = rsp["ServerTotal"].GetInt64();
        m_serverTotalHasBeenSet = true;
    }

    if (rsp.HasMember("WeakPasswordTotal") && !rsp["WeakPasswordTotal"].IsNull())
    {
        if (!rsp["WeakPasswordTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WeakPasswordTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weakPasswordTotal = rsp["WeakPasswordTotal"].GetInt64();
        m_weakPasswordTotalHasBeenSet = true;
    }

    if (rsp.HasMember("VULTotal") && !rsp["VULTotal"].IsNull())
    {
        if (!rsp["VULTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VULTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vULTotal = rsp["VULTotal"].GetInt64();
        m_vULTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCFWAssetStatisticsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_networkTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkTotal, allocator);
    }

    if (m_clbTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClbTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clbTotal, allocator);
    }

    if (m_natTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_natTotal, allocator);
    }

    if (m_publicAssetTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAssetTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicAssetTotal, allocator);
    }

    if (m_cVMAssetTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVMAssetTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVMAssetTotal, allocator);
    }

    if (m_cFGTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFGTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cFGTotal, allocator);
    }

    if (m_portTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portTotal, allocator);
    }

    if (m_websiteTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebsiteTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_websiteTotal, allocator);
    }

    if (m_serverTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serverTotal, allocator);
    }

    if (m_weakPasswordTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeakPasswordTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weakPasswordTotal, allocator);
    }

    if (m_vULTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vULTotal, allocator);
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


int64_t DescribeCFWAssetStatisticsResponse::GetNetworkTotal() const
{
    return m_networkTotal;
}

bool DescribeCFWAssetStatisticsResponse::NetworkTotalHasBeenSet() const
{
    return m_networkTotalHasBeenSet;
}

int64_t DescribeCFWAssetStatisticsResponse::GetClbTotal() const
{
    return m_clbTotal;
}

bool DescribeCFWAssetStatisticsResponse::ClbTotalHasBeenSet() const
{
    return m_clbTotalHasBeenSet;
}

int64_t DescribeCFWAssetStatisticsResponse::GetNatTotal() const
{
    return m_natTotal;
}

bool DescribeCFWAssetStatisticsResponse::NatTotalHasBeenSet() const
{
    return m_natTotalHasBeenSet;
}

int64_t DescribeCFWAssetStatisticsResponse::GetPublicAssetTotal() const
{
    return m_publicAssetTotal;
}

bool DescribeCFWAssetStatisticsResponse::PublicAssetTotalHasBeenSet() const
{
    return m_publicAssetTotalHasBeenSet;
}

int64_t DescribeCFWAssetStatisticsResponse::GetCVMAssetTotal() const
{
    return m_cVMAssetTotal;
}

bool DescribeCFWAssetStatisticsResponse::CVMAssetTotalHasBeenSet() const
{
    return m_cVMAssetTotalHasBeenSet;
}

int64_t DescribeCFWAssetStatisticsResponse::GetCFGTotal() const
{
    return m_cFGTotal;
}

bool DescribeCFWAssetStatisticsResponse::CFGTotalHasBeenSet() const
{
    return m_cFGTotalHasBeenSet;
}

int64_t DescribeCFWAssetStatisticsResponse::GetPortTotal() const
{
    return m_portTotal;
}

bool DescribeCFWAssetStatisticsResponse::PortTotalHasBeenSet() const
{
    return m_portTotalHasBeenSet;
}

int64_t DescribeCFWAssetStatisticsResponse::GetWebsiteTotal() const
{
    return m_websiteTotal;
}

bool DescribeCFWAssetStatisticsResponse::WebsiteTotalHasBeenSet() const
{
    return m_websiteTotalHasBeenSet;
}

int64_t DescribeCFWAssetStatisticsResponse::GetServerTotal() const
{
    return m_serverTotal;
}

bool DescribeCFWAssetStatisticsResponse::ServerTotalHasBeenSet() const
{
    return m_serverTotalHasBeenSet;
}

int64_t DescribeCFWAssetStatisticsResponse::GetWeakPasswordTotal() const
{
    return m_weakPasswordTotal;
}

bool DescribeCFWAssetStatisticsResponse::WeakPasswordTotalHasBeenSet() const
{
    return m_weakPasswordTotalHasBeenSet;
}

int64_t DescribeCFWAssetStatisticsResponse::GetVULTotal() const
{
    return m_vULTotal;
}

bool DescribeCFWAssetStatisticsResponse::VULTotalHasBeenSet() const
{
    return m_vULTotalHasBeenSet;
}


