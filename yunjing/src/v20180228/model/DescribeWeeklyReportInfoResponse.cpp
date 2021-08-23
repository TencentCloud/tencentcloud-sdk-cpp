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


    if (rsp.HasMember("CompanyName") && !rsp["CompanyName"].IsNull())
    {
        if (!rsp["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(rsp["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (rsp.HasMember("MachineNum") && !rsp["MachineNum"].IsNull())
    {
        if (!rsp["MachineNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineNum = rsp["MachineNum"].GetUint64();
        m_machineNumHasBeenSet = true;
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

    if (rsp.HasMember("OfflineMachineNum") && !rsp["OfflineMachineNum"].IsNull())
    {
        if (!rsp["OfflineMachineNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineMachineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offlineMachineNum = rsp["OfflineMachineNum"].GetUint64();
        m_offlineMachineNumHasBeenSet = true;
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

    if (rsp.HasMember("BeginDate") && !rsp["BeginDate"].IsNull())
    {
        if (!rsp["BeginDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeginDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginDate = string(rsp["BeginDate"].GetString());
        m_beginDateHasBeenSet = true;
    }

    if (rsp.HasMember("EndDate") && !rsp["EndDate"].IsNull())
    {
        if (!rsp["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(rsp["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(rsp["Level"].GetString());
        m_levelHasBeenSet = true;
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

    if (rsp.HasMember("DownloadUrl") && !rsp["DownloadUrl"].IsNull())
    {
        if (!rsp["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(rsp["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeWeeklyReportInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineNum, allocator);
    }

    if (m_onlineMachineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineMachineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineMachineNum, allocator);
    }

    if (m_offlineMachineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineMachineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offlineMachineNum, allocator);
    }

    if (m_proVersionMachineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProVersionMachineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proVersionMachineNum, allocator);
    }

    if (m_beginDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
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

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
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


