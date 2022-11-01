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

#include <tencentcloud/tcss/v20201101/model/DescribeContainerSecEventSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeContainerSecEventSummaryResponse::DescribeContainerSecEventSummaryResponse() :
    m_unhandledEscapeCntHasBeenSet(false),
    m_unhandledReverseShellCntHasBeenSet(false),
    m_unhandledRiskSyscallCntHasBeenSet(false),
    m_unhandledAbnormalProcessCntHasBeenSet(false),
    m_unhandledFileCntHasBeenSet(false),
    m_unhandledVirusEventCntHasBeenSet(false),
    m_unhandledMaliciousConnectionEventCntHasBeenSet(false),
    m_unhandledK8sApiEventCntHasBeenSet(false)
{
}

CoreInternalOutcome DescribeContainerSecEventSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UnhandledEscapeCnt") && !rsp["UnhandledEscapeCnt"].IsNull())
    {
        if (!rsp["UnhandledEscapeCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnhandledEscapeCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandledEscapeCnt = rsp["UnhandledEscapeCnt"].GetUint64();
        m_unhandledEscapeCntHasBeenSet = true;
    }

    if (rsp.HasMember("UnhandledReverseShellCnt") && !rsp["UnhandledReverseShellCnt"].IsNull())
    {
        if (!rsp["UnhandledReverseShellCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnhandledReverseShellCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandledReverseShellCnt = rsp["UnhandledReverseShellCnt"].GetUint64();
        m_unhandledReverseShellCntHasBeenSet = true;
    }

    if (rsp.HasMember("UnhandledRiskSyscallCnt") && !rsp["UnhandledRiskSyscallCnt"].IsNull())
    {
        if (!rsp["UnhandledRiskSyscallCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnhandledRiskSyscallCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandledRiskSyscallCnt = rsp["UnhandledRiskSyscallCnt"].GetUint64();
        m_unhandledRiskSyscallCntHasBeenSet = true;
    }

    if (rsp.HasMember("UnhandledAbnormalProcessCnt") && !rsp["UnhandledAbnormalProcessCnt"].IsNull())
    {
        if (!rsp["UnhandledAbnormalProcessCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnhandledAbnormalProcessCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandledAbnormalProcessCnt = rsp["UnhandledAbnormalProcessCnt"].GetUint64();
        m_unhandledAbnormalProcessCntHasBeenSet = true;
    }

    if (rsp.HasMember("UnhandledFileCnt") && !rsp["UnhandledFileCnt"].IsNull())
    {
        if (!rsp["UnhandledFileCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnhandledFileCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandledFileCnt = rsp["UnhandledFileCnt"].GetUint64();
        m_unhandledFileCntHasBeenSet = true;
    }

    if (rsp.HasMember("UnhandledVirusEventCnt") && !rsp["UnhandledVirusEventCnt"].IsNull())
    {
        if (!rsp["UnhandledVirusEventCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnhandledVirusEventCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandledVirusEventCnt = rsp["UnhandledVirusEventCnt"].GetUint64();
        m_unhandledVirusEventCntHasBeenSet = true;
    }

    if (rsp.HasMember("UnhandledMaliciousConnectionEventCnt") && !rsp["UnhandledMaliciousConnectionEventCnt"].IsNull())
    {
        if (!rsp["UnhandledMaliciousConnectionEventCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnhandledMaliciousConnectionEventCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandledMaliciousConnectionEventCnt = rsp["UnhandledMaliciousConnectionEventCnt"].GetUint64();
        m_unhandledMaliciousConnectionEventCntHasBeenSet = true;
    }

    if (rsp.HasMember("UnhandledK8sApiEventCnt") && !rsp["UnhandledK8sApiEventCnt"].IsNull())
    {
        if (!rsp["UnhandledK8sApiEventCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnhandledK8sApiEventCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandledK8sApiEventCnt = rsp["UnhandledK8sApiEventCnt"].GetUint64();
        m_unhandledK8sApiEventCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeContainerSecEventSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_unhandledEscapeCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandledEscapeCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandledEscapeCnt, allocator);
    }

    if (m_unhandledReverseShellCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandledReverseShellCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandledReverseShellCnt, allocator);
    }

    if (m_unhandledRiskSyscallCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandledRiskSyscallCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandledRiskSyscallCnt, allocator);
    }

    if (m_unhandledAbnormalProcessCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandledAbnormalProcessCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandledAbnormalProcessCnt, allocator);
    }

    if (m_unhandledFileCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandledFileCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandledFileCnt, allocator);
    }

    if (m_unhandledVirusEventCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandledVirusEventCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandledVirusEventCnt, allocator);
    }

    if (m_unhandledMaliciousConnectionEventCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandledMaliciousConnectionEventCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandledMaliciousConnectionEventCnt, allocator);
    }

    if (m_unhandledK8sApiEventCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandledK8sApiEventCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandledK8sApiEventCnt, allocator);
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


uint64_t DescribeContainerSecEventSummaryResponse::GetUnhandledEscapeCnt() const
{
    return m_unhandledEscapeCnt;
}

bool DescribeContainerSecEventSummaryResponse::UnhandledEscapeCntHasBeenSet() const
{
    return m_unhandledEscapeCntHasBeenSet;
}

uint64_t DescribeContainerSecEventSummaryResponse::GetUnhandledReverseShellCnt() const
{
    return m_unhandledReverseShellCnt;
}

bool DescribeContainerSecEventSummaryResponse::UnhandledReverseShellCntHasBeenSet() const
{
    return m_unhandledReverseShellCntHasBeenSet;
}

uint64_t DescribeContainerSecEventSummaryResponse::GetUnhandledRiskSyscallCnt() const
{
    return m_unhandledRiskSyscallCnt;
}

bool DescribeContainerSecEventSummaryResponse::UnhandledRiskSyscallCntHasBeenSet() const
{
    return m_unhandledRiskSyscallCntHasBeenSet;
}

uint64_t DescribeContainerSecEventSummaryResponse::GetUnhandledAbnormalProcessCnt() const
{
    return m_unhandledAbnormalProcessCnt;
}

bool DescribeContainerSecEventSummaryResponse::UnhandledAbnormalProcessCntHasBeenSet() const
{
    return m_unhandledAbnormalProcessCntHasBeenSet;
}

uint64_t DescribeContainerSecEventSummaryResponse::GetUnhandledFileCnt() const
{
    return m_unhandledFileCnt;
}

bool DescribeContainerSecEventSummaryResponse::UnhandledFileCntHasBeenSet() const
{
    return m_unhandledFileCntHasBeenSet;
}

uint64_t DescribeContainerSecEventSummaryResponse::GetUnhandledVirusEventCnt() const
{
    return m_unhandledVirusEventCnt;
}

bool DescribeContainerSecEventSummaryResponse::UnhandledVirusEventCntHasBeenSet() const
{
    return m_unhandledVirusEventCntHasBeenSet;
}

uint64_t DescribeContainerSecEventSummaryResponse::GetUnhandledMaliciousConnectionEventCnt() const
{
    return m_unhandledMaliciousConnectionEventCnt;
}

bool DescribeContainerSecEventSummaryResponse::UnhandledMaliciousConnectionEventCntHasBeenSet() const
{
    return m_unhandledMaliciousConnectionEventCntHasBeenSet;
}

uint64_t DescribeContainerSecEventSummaryResponse::GetUnhandledK8sApiEventCnt() const
{
    return m_unhandledK8sApiEventCnt;
}

bool DescribeContainerSecEventSummaryResponse::UnhandledK8sApiEventCntHasBeenSet() const
{
    return m_unhandledK8sApiEventCntHasBeenSet;
}


