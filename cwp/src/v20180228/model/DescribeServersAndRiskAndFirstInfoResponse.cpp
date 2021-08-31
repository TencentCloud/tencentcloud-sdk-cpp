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

#include <tencentcloud/cwp/v20180228/model/DescribeServersAndRiskAndFirstInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeServersAndRiskAndFirstInfoResponse::DescribeServersAndRiskAndFirstInfoResponse() :
    m_riskFileCountHasBeenSet(false),
    m_addRiskFileCountHasBeenSet(false),
    m_serversCountHasBeenSet(false),
    m_isFirstCheckHasBeenSet(false),
    m_scanTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeServersAndRiskAndFirstInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RiskFileCount") && !rsp["RiskFileCount"].IsNull())
    {
        if (!rsp["RiskFileCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskFileCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskFileCount = rsp["RiskFileCount"].GetUint64();
        m_riskFileCountHasBeenSet = true;
    }

    if (rsp.HasMember("AddRiskFileCount") && !rsp["AddRiskFileCount"].IsNull())
    {
        if (!rsp["AddRiskFileCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddRiskFileCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_addRiskFileCount = rsp["AddRiskFileCount"].GetUint64();
        m_addRiskFileCountHasBeenSet = true;
    }

    if (rsp.HasMember("ServersCount") && !rsp["ServersCount"].IsNull())
    {
        if (!rsp["ServersCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServersCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serversCount = rsp["ServersCount"].GetUint64();
        m_serversCountHasBeenSet = true;
    }

    if (rsp.HasMember("IsFirstCheck") && !rsp["IsFirstCheck"].IsNull())
    {
        if (!rsp["IsFirstCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsFirstCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFirstCheck = rsp["IsFirstCheck"].GetBool();
        m_isFirstCheckHasBeenSet = true;
    }

    if (rsp.HasMember("ScanTime") && !rsp["ScanTime"].IsNull())
    {
        if (!rsp["ScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = string(rsp["ScanTime"].GetString());
        m_scanTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeServersAndRiskAndFirstInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_riskFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskFileCount, allocator);
    }

    if (m_addRiskFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddRiskFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addRiskFileCount, allocator);
    }

    if (m_serversCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServersCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serversCount, allocator);
    }

    if (m_isFirstCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFirstCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFirstCheck, allocator);
    }

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeServersAndRiskAndFirstInfoResponse::GetRiskFileCount() const
{
    return m_riskFileCount;
}

bool DescribeServersAndRiskAndFirstInfoResponse::RiskFileCountHasBeenSet() const
{
    return m_riskFileCountHasBeenSet;
}

uint64_t DescribeServersAndRiskAndFirstInfoResponse::GetAddRiskFileCount() const
{
    return m_addRiskFileCount;
}

bool DescribeServersAndRiskAndFirstInfoResponse::AddRiskFileCountHasBeenSet() const
{
    return m_addRiskFileCountHasBeenSet;
}

uint64_t DescribeServersAndRiskAndFirstInfoResponse::GetServersCount() const
{
    return m_serversCount;
}

bool DescribeServersAndRiskAndFirstInfoResponse::ServersCountHasBeenSet() const
{
    return m_serversCountHasBeenSet;
}

bool DescribeServersAndRiskAndFirstInfoResponse::GetIsFirstCheck() const
{
    return m_isFirstCheck;
}

bool DescribeServersAndRiskAndFirstInfoResponse::IsFirstCheckHasBeenSet() const
{
    return m_isFirstCheckHasBeenSet;
}

string DescribeServersAndRiskAndFirstInfoResponse::GetScanTime() const
{
    return m_scanTime;
}

bool DescribeServersAndRiskAndFirstInfoResponse::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}


