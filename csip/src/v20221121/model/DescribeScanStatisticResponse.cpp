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

#include <tencentcloud/csip/v20221121/model/DescribeScanStatisticResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeScanStatisticResponse::DescribeScanStatisticResponse() :
    m_portServiceCountHasBeenSet(false),
    m_webAppCountHasBeenSet(false),
    m_weakPasswordCountHasBeenSet(false),
    m_vulCountHasBeenSet(false),
    m_highRiskPortServiceCountHasBeenSet(false),
    m_riskWebAppCountHasBeenSet(false),
    m_portServiceIncrementHasBeenSet(false),
    m_webAppIncrementHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScanStatisticResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PortServiceCount") && !rsp["PortServiceCount"].IsNull())
    {
        if (!rsp["PortServiceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortServiceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portServiceCount = rsp["PortServiceCount"].GetUint64();
        m_portServiceCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebAppCount") && !rsp["WebAppCount"].IsNull())
    {
        if (!rsp["WebAppCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebAppCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webAppCount = rsp["WebAppCount"].GetUint64();
        m_webAppCountHasBeenSet = true;
    }

    if (rsp.HasMember("WeakPasswordCount") && !rsp["WeakPasswordCount"].IsNull())
    {
        if (!rsp["WeakPasswordCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WeakPasswordCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weakPasswordCount = rsp["WeakPasswordCount"].GetUint64();
        m_weakPasswordCountHasBeenSet = true;
    }

    if (rsp.HasMember("VulCount") && !rsp["VulCount"].IsNull())
    {
        if (!rsp["VulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCount = rsp["VulCount"].GetUint64();
        m_vulCountHasBeenSet = true;
    }

    if (rsp.HasMember("HighRiskPortServiceCount") && !rsp["HighRiskPortServiceCount"].IsNull())
    {
        if (!rsp["HighRiskPortServiceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskPortServiceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskPortServiceCount = rsp["HighRiskPortServiceCount"].GetUint64();
        m_highRiskPortServiceCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskWebAppCount") && !rsp["RiskWebAppCount"].IsNull())
    {
        if (!rsp["RiskWebAppCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskWebAppCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskWebAppCount = rsp["RiskWebAppCount"].GetUint64();
        m_riskWebAppCountHasBeenSet = true;
    }

    if (rsp.HasMember("PortServiceIncrement") && !rsp["PortServiceIncrement"].IsNull())
    {
        if (!rsp["PortServiceIncrement"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortServiceIncrement` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portServiceIncrement = rsp["PortServiceIncrement"].GetUint64();
        m_portServiceIncrementHasBeenSet = true;
    }

    if (rsp.HasMember("WebAppIncrement") && !rsp["WebAppIncrement"].IsNull())
    {
        if (!rsp["WebAppIncrement"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebAppIncrement` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webAppIncrement = rsp["WebAppIncrement"].GetUint64();
        m_webAppIncrementHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeScanStatisticResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_portServiceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portServiceCount, allocator);
    }

    if (m_webAppCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebAppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webAppCount, allocator);
    }

    if (m_weakPasswordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeakPasswordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weakPasswordCount, allocator);
    }

    if (m_vulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCount, allocator);
    }

    if (m_highRiskPortServiceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskPortServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskPortServiceCount, allocator);
    }

    if (m_riskWebAppCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskWebAppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskWebAppCount, allocator);
    }

    if (m_portServiceIncrementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortServiceIncrement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portServiceIncrement, allocator);
    }

    if (m_webAppIncrementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebAppIncrement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webAppIncrement, allocator);
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


uint64_t DescribeScanStatisticResponse::GetPortServiceCount() const
{
    return m_portServiceCount;
}

bool DescribeScanStatisticResponse::PortServiceCountHasBeenSet() const
{
    return m_portServiceCountHasBeenSet;
}

uint64_t DescribeScanStatisticResponse::GetWebAppCount() const
{
    return m_webAppCount;
}

bool DescribeScanStatisticResponse::WebAppCountHasBeenSet() const
{
    return m_webAppCountHasBeenSet;
}

uint64_t DescribeScanStatisticResponse::GetWeakPasswordCount() const
{
    return m_weakPasswordCount;
}

bool DescribeScanStatisticResponse::WeakPasswordCountHasBeenSet() const
{
    return m_weakPasswordCountHasBeenSet;
}

uint64_t DescribeScanStatisticResponse::GetVulCount() const
{
    return m_vulCount;
}

bool DescribeScanStatisticResponse::VulCountHasBeenSet() const
{
    return m_vulCountHasBeenSet;
}

uint64_t DescribeScanStatisticResponse::GetHighRiskPortServiceCount() const
{
    return m_highRiskPortServiceCount;
}

bool DescribeScanStatisticResponse::HighRiskPortServiceCountHasBeenSet() const
{
    return m_highRiskPortServiceCountHasBeenSet;
}

uint64_t DescribeScanStatisticResponse::GetRiskWebAppCount() const
{
    return m_riskWebAppCount;
}

bool DescribeScanStatisticResponse::RiskWebAppCountHasBeenSet() const
{
    return m_riskWebAppCountHasBeenSet;
}

uint64_t DescribeScanStatisticResponse::GetPortServiceIncrement() const
{
    return m_portServiceIncrement;
}

bool DescribeScanStatisticResponse::PortServiceIncrementHasBeenSet() const
{
    return m_portServiceIncrementHasBeenSet;
}

uint64_t DescribeScanStatisticResponse::GetWebAppIncrement() const
{
    return m_webAppIncrement;
}

bool DescribeScanStatisticResponse::WebAppIncrementHasBeenSet() const
{
    return m_webAppIncrementHasBeenSet;
}


