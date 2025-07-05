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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitMonitorStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeUnitMonitorStatusResponse::DescribeEdgeUnitMonitorStatusResponse() :
    m_monitorStatusHasBeenSet(false),
    m_isAvailableHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEdgeUnitMonitorStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MonitorStatus") && !rsp["MonitorStatus"].IsNull())
    {
        if (!rsp["MonitorStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorStatus = string(rsp["MonitorStatus"].GetString());
        m_monitorStatusHasBeenSet = true;
    }

    if (rsp.HasMember("IsAvailable") && !rsp["IsAvailable"].IsNull())
    {
        if (!rsp["IsAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAvailable = rsp["IsAvailable"].GetBool();
        m_isAvailableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEdgeUnitMonitorStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAvailable, allocator);
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


string DescribeEdgeUnitMonitorStatusResponse::GetMonitorStatus() const
{
    return m_monitorStatus;
}

bool DescribeEdgeUnitMonitorStatusResponse::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

bool DescribeEdgeUnitMonitorStatusResponse::GetIsAvailable() const
{
    return m_isAvailable;
}

bool DescribeEdgeUnitMonitorStatusResponse::IsAvailableHasBeenSet() const
{
    return m_isAvailableHasBeenSet;
}


