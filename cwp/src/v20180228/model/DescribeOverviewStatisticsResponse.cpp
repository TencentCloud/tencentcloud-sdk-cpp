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

#include <tencentcloud/cwp/v20180228/model/DescribeOverviewStatisticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeOverviewStatisticsResponse::DescribeOverviewStatisticsResponse() :
    m_onlineMachineNumHasBeenSet(false),
    m_proVersionMachineNumHasBeenSet(false),
    m_malwareNumHasBeenSet(false),
    m_nonlocalLoginNumHasBeenSet(false),
    m_bruteAttackSuccessNumHasBeenSet(false),
    m_vulNumHasBeenSet(false),
    m_baseLineNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOverviewStatisticsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OnlineMachineNum") && !rsp["OnlineMachineNum"].IsNull())
    {
        if (!rsp["OnlineMachineNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineMachineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineMachineNum = rsp["OnlineMachineNum"].GetUint64();
        m_onlineMachineNumHasBeenSet = true;
    }

    if (rsp.HasMember("ProVersionMachineNum") && !rsp["ProVersionMachineNum"].IsNull())
    {
        if (!rsp["ProVersionMachineNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProVersionMachineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proVersionMachineNum = rsp["ProVersionMachineNum"].GetUint64();
        m_proVersionMachineNumHasBeenSet = true;
    }

    if (rsp.HasMember("MalwareNum") && !rsp["MalwareNum"].IsNull())
    {
        if (!rsp["MalwareNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MalwareNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_malwareNum = rsp["MalwareNum"].GetUint64();
        m_malwareNumHasBeenSet = true;
    }

    if (rsp.HasMember("NonlocalLoginNum") && !rsp["NonlocalLoginNum"].IsNull())
    {
        if (!rsp["NonlocalLoginNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NonlocalLoginNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nonlocalLoginNum = rsp["NonlocalLoginNum"].GetUint64();
        m_nonlocalLoginNumHasBeenSet = true;
    }

    if (rsp.HasMember("BruteAttackSuccessNum") && !rsp["BruteAttackSuccessNum"].IsNull())
    {
        if (!rsp["BruteAttackSuccessNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackSuccessNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bruteAttackSuccessNum = rsp["BruteAttackSuccessNum"].GetUint64();
        m_bruteAttackSuccessNumHasBeenSet = true;
    }

    if (rsp.HasMember("VulNum") && !rsp["VulNum"].IsNull())
    {
        if (!rsp["VulNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulNum = rsp["VulNum"].GetUint64();
        m_vulNumHasBeenSet = true;
    }

    if (rsp.HasMember("BaseLineNum") && !rsp["BaseLineNum"].IsNull())
    {
        if (!rsp["BaseLineNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseLineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_baseLineNum = rsp["BaseLineNum"].GetUint64();
        m_baseLineNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOverviewStatisticsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_onlineMachineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineMachineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineMachineNum, allocator);
    }

    if (m_proVersionMachineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProVersionMachineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proVersionMachineNum, allocator);
    }

    if (m_malwareNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MalwareNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_malwareNum, allocator);
    }

    if (m_nonlocalLoginNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonlocalLoginNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nonlocalLoginNum, allocator);
    }

    if (m_bruteAttackSuccessNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BruteAttackSuccessNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bruteAttackSuccessNum, allocator);
    }

    if (m_vulNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulNum, allocator);
    }

    if (m_baseLineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseLineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baseLineNum, allocator);
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


uint64_t DescribeOverviewStatisticsResponse::GetOnlineMachineNum() const
{
    return m_onlineMachineNum;
}

bool DescribeOverviewStatisticsResponse::OnlineMachineNumHasBeenSet() const
{
    return m_onlineMachineNumHasBeenSet;
}

uint64_t DescribeOverviewStatisticsResponse::GetProVersionMachineNum() const
{
    return m_proVersionMachineNum;
}

bool DescribeOverviewStatisticsResponse::ProVersionMachineNumHasBeenSet() const
{
    return m_proVersionMachineNumHasBeenSet;
}

uint64_t DescribeOverviewStatisticsResponse::GetMalwareNum() const
{
    return m_malwareNum;
}

bool DescribeOverviewStatisticsResponse::MalwareNumHasBeenSet() const
{
    return m_malwareNumHasBeenSet;
}

uint64_t DescribeOverviewStatisticsResponse::GetNonlocalLoginNum() const
{
    return m_nonlocalLoginNum;
}

bool DescribeOverviewStatisticsResponse::NonlocalLoginNumHasBeenSet() const
{
    return m_nonlocalLoginNumHasBeenSet;
}

uint64_t DescribeOverviewStatisticsResponse::GetBruteAttackSuccessNum() const
{
    return m_bruteAttackSuccessNum;
}

bool DescribeOverviewStatisticsResponse::BruteAttackSuccessNumHasBeenSet() const
{
    return m_bruteAttackSuccessNumHasBeenSet;
}

uint64_t DescribeOverviewStatisticsResponse::GetVulNum() const
{
    return m_vulNum;
}

bool DescribeOverviewStatisticsResponse::VulNumHasBeenSet() const
{
    return m_vulNumHasBeenSet;
}

uint64_t DescribeOverviewStatisticsResponse::GetBaseLineNum() const
{
    return m_baseLineNum;
}

bool DescribeOverviewStatisticsResponse::BaseLineNumHasBeenSet() const
{
    return m_baseLineNumHasBeenSet;
}


