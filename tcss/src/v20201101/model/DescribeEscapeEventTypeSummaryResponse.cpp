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

#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventTypeSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeEscapeEventTypeSummaryResponse::DescribeEscapeEventTypeSummaryResponse() :
    m_containerEscapeEventCountHasBeenSet(false),
    m_processPrivilegeEventCountHasBeenSet(false),
    m_riskContainerEventCountHasBeenSet(false),
    m_pendingEscapeEventCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEscapeEventTypeSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ContainerEscapeEventCount") && !rsp["ContainerEscapeEventCount"].IsNull())
    {
        if (!rsp["ContainerEscapeEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerEscapeEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerEscapeEventCount = rsp["ContainerEscapeEventCount"].GetInt64();
        m_containerEscapeEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessPrivilegeEventCount") && !rsp["ProcessPrivilegeEventCount"].IsNull())
    {
        if (!rsp["ProcessPrivilegeEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessPrivilegeEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processPrivilegeEventCount = rsp["ProcessPrivilegeEventCount"].GetInt64();
        m_processPrivilegeEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskContainerEventCount") && !rsp["RiskContainerEventCount"].IsNull())
    {
        if (!rsp["RiskContainerEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskContainerEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskContainerEventCount = rsp["RiskContainerEventCount"].GetInt64();
        m_riskContainerEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("PendingEscapeEventCount") && !rsp["PendingEscapeEventCount"].IsNull())
    {
        if (!rsp["PendingEscapeEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PendingEscapeEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pendingEscapeEventCount = rsp["PendingEscapeEventCount"].GetInt64();
        m_pendingEscapeEventCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEscapeEventTypeSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_containerEscapeEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerEscapeEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerEscapeEventCount, allocator);
    }

    if (m_processPrivilegeEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPrivilegeEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processPrivilegeEventCount, allocator);
    }

    if (m_riskContainerEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskContainerEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskContainerEventCount, allocator);
    }

    if (m_pendingEscapeEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PendingEscapeEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pendingEscapeEventCount, allocator);
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


int64_t DescribeEscapeEventTypeSummaryResponse::GetContainerEscapeEventCount() const
{
    return m_containerEscapeEventCount;
}

bool DescribeEscapeEventTypeSummaryResponse::ContainerEscapeEventCountHasBeenSet() const
{
    return m_containerEscapeEventCountHasBeenSet;
}

int64_t DescribeEscapeEventTypeSummaryResponse::GetProcessPrivilegeEventCount() const
{
    return m_processPrivilegeEventCount;
}

bool DescribeEscapeEventTypeSummaryResponse::ProcessPrivilegeEventCountHasBeenSet() const
{
    return m_processPrivilegeEventCountHasBeenSet;
}

int64_t DescribeEscapeEventTypeSummaryResponse::GetRiskContainerEventCount() const
{
    return m_riskContainerEventCount;
}

bool DescribeEscapeEventTypeSummaryResponse::RiskContainerEventCountHasBeenSet() const
{
    return m_riskContainerEventCountHasBeenSet;
}

int64_t DescribeEscapeEventTypeSummaryResponse::GetPendingEscapeEventCount() const
{
    return m_pendingEscapeEventCount;
}

bool DescribeEscapeEventTypeSummaryResponse::PendingEscapeEventCountHasBeenSet() const
{
    return m_pendingEscapeEventCountHasBeenSet;
}


