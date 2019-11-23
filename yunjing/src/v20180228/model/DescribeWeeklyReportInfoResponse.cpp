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

#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace rapidjson;
using namespace std;

DescribeWeeklyReportInfoResponse::DescribeWeeklyReportInfoResponse() :
    m_companyNameHasBeenSet(false),
    m_machineNumHasBeenSet(false),
    m_onlineMachineNumHasBeenSet(false),
    m_offlineMachineNumHasBeenSet(false),
    m_proVersionMachineNumHasBeenSet(false),
    m_beginDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_malwareNumHasBeenSet(false),
    m_nonlocalLoginNumHasBeenSet(false),
    m_bruteAttackSuccessNumHasBeenSet(false),
    m_vulNumHasBeenSet(false),
    m_downloadUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWeeklyReportInfoResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("CompanyName") && !rsp["CompanyName"].IsNull())
    {
        if (!rsp["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(rsp["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (rsp.HasMember("MachineNum") && !rsp["MachineNum"].IsNull())
    {
        if (!rsp["MachineNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MachineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineNum = rsp["MachineNum"].GetUint64();
        m_machineNumHasBeenSet = true;
    }

    if (rsp.HasMember("OnlineMachineNum") && !rsp["OnlineMachineNum"].IsNull())
    {
        if (!rsp["OnlineMachineNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OnlineMachineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineMachineNum = rsp["OnlineMachineNum"].GetUint64();
        m_onlineMachineNumHasBeenSet = true;
    }

    if (rsp.HasMember("OfflineMachineNum") && !rsp["OfflineMachineNum"].IsNull())
    {
        if (!rsp["OfflineMachineNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OfflineMachineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offlineMachineNum = rsp["OfflineMachineNum"].GetUint64();
        m_offlineMachineNumHasBeenSet = true;
    }

    if (rsp.HasMember("ProVersionMachineNum") && !rsp["ProVersionMachineNum"].IsNull())
    {
        if (!rsp["ProVersionMachineNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProVersionMachineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proVersionMachineNum = rsp["ProVersionMachineNum"].GetUint64();
        m_proVersionMachineNumHasBeenSet = true;
    }

    if (rsp.HasMember("BeginDate") && !rsp["BeginDate"].IsNull())
    {
        if (!rsp["BeginDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `BeginDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginDate = string(rsp["BeginDate"].GetString());
        m_beginDateHasBeenSet = true;
    }

    if (rsp.HasMember("EndDate") && !rsp["EndDate"].IsNull())
    {
        if (!rsp["EndDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(rsp["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsString())
        {
            return CoreInternalOutcome(Error("response `Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(rsp["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (rsp.HasMember("MalwareNum") && !rsp["MalwareNum"].IsNull())
    {
        if (!rsp["MalwareNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MalwareNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_malwareNum = rsp["MalwareNum"].GetUint64();
        m_malwareNumHasBeenSet = true;
    }

    if (rsp.HasMember("NonlocalLoginNum") && !rsp["NonlocalLoginNum"].IsNull())
    {
        if (!rsp["NonlocalLoginNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NonlocalLoginNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nonlocalLoginNum = rsp["NonlocalLoginNum"].GetUint64();
        m_nonlocalLoginNumHasBeenSet = true;
    }

    if (rsp.HasMember("BruteAttackSuccessNum") && !rsp["BruteAttackSuccessNum"].IsNull())
    {
        if (!rsp["BruteAttackSuccessNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `BruteAttackSuccessNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bruteAttackSuccessNum = rsp["BruteAttackSuccessNum"].GetUint64();
        m_bruteAttackSuccessNumHasBeenSet = true;
    }

    if (rsp.HasMember("VulNum") && !rsp["VulNum"].IsNull())
    {
        if (!rsp["VulNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VulNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulNum = rsp["VulNum"].GetUint64();
        m_vulNumHasBeenSet = true;
    }

    if (rsp.HasMember("DownloadUrl") && !rsp["DownloadUrl"].IsNull())
    {
        if (!rsp["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(rsp["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeWeeklyReportInfoResponse::GetCompanyName() const
{
    return m_companyName;
}

bool DescribeWeeklyReportInfoResponse::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

uint64_t DescribeWeeklyReportInfoResponse::GetMachineNum() const
{
    return m_machineNum;
}

bool DescribeWeeklyReportInfoResponse::MachineNumHasBeenSet() const
{
    return m_machineNumHasBeenSet;
}

uint64_t DescribeWeeklyReportInfoResponse::GetOnlineMachineNum() const
{
    return m_onlineMachineNum;
}

bool DescribeWeeklyReportInfoResponse::OnlineMachineNumHasBeenSet() const
{
    return m_onlineMachineNumHasBeenSet;
}

uint64_t DescribeWeeklyReportInfoResponse::GetOfflineMachineNum() const
{
    return m_offlineMachineNum;
}

bool DescribeWeeklyReportInfoResponse::OfflineMachineNumHasBeenSet() const
{
    return m_offlineMachineNumHasBeenSet;
}

uint64_t DescribeWeeklyReportInfoResponse::GetProVersionMachineNum() const
{
    return m_proVersionMachineNum;
}

bool DescribeWeeklyReportInfoResponse::ProVersionMachineNumHasBeenSet() const
{
    return m_proVersionMachineNumHasBeenSet;
}

string DescribeWeeklyReportInfoResponse::GetBeginDate() const
{
    return m_beginDate;
}

bool DescribeWeeklyReportInfoResponse::BeginDateHasBeenSet() const
{
    return m_beginDateHasBeenSet;
}

string DescribeWeeklyReportInfoResponse::GetEndDate() const
{
    return m_endDate;
}

bool DescribeWeeklyReportInfoResponse::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string DescribeWeeklyReportInfoResponse::GetLevel() const
{
    return m_level;
}

bool DescribeWeeklyReportInfoResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t DescribeWeeklyReportInfoResponse::GetMalwareNum() const
{
    return m_malwareNum;
}

bool DescribeWeeklyReportInfoResponse::MalwareNumHasBeenSet() const
{
    return m_malwareNumHasBeenSet;
}

uint64_t DescribeWeeklyReportInfoResponse::GetNonlocalLoginNum() const
{
    return m_nonlocalLoginNum;
}

bool DescribeWeeklyReportInfoResponse::NonlocalLoginNumHasBeenSet() const
{
    return m_nonlocalLoginNumHasBeenSet;
}

uint64_t DescribeWeeklyReportInfoResponse::GetBruteAttackSuccessNum() const
{
    return m_bruteAttackSuccessNum;
}

bool DescribeWeeklyReportInfoResponse::BruteAttackSuccessNumHasBeenSet() const
{
    return m_bruteAttackSuccessNumHasBeenSet;
}

uint64_t DescribeWeeklyReportInfoResponse::GetVulNum() const
{
    return m_vulNum;
}

bool DescribeWeeklyReportInfoResponse::VulNumHasBeenSet() const
{
    return m_vulNumHasBeenSet;
}

string DescribeWeeklyReportInfoResponse::GetDownloadUrl() const
{
    return m_downloadUrl;
}

bool DescribeWeeklyReportInfoResponse::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}


