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

#include <tencentcloud/cwp/v20180228/model/DescribeSecurityProtectionStatResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeSecurityProtectionStatResponse::DescribeSecurityProtectionStatResponse() :
    m_assetManageStatHasBeenSet(false),
    m_vulManageStatHasBeenSet(false),
    m_secureBasicLineStatHasBeenSet(false),
    m_malwareScanStatHasBeenSet(false),
    m_defenseBruteAttackStatHasBeenSet(false),
    m_fileTamperStatHasBeenSet(false),
    m_webPageStatHasBeenSet(false),
    m_loginLogStatHasBeenSet(false),
    m_discoverBruteAttackStatHasBeenSet(false),
    m_maliciousRequestStatHasBeenSet(false),
    m_privilegeStatHasBeenSet(false),
    m_reverseShellStatHasBeenSet(false),
    m_expertServiceStatHasBeenSet(false),
    m_logAnalysisStatHasBeenSet(false),
    m_warningSetStatHasBeenSet(false),
    m_eventBashStatHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecurityProtectionStatResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AssetManageStat") && !rsp["AssetManageStat"].IsNull())
    {
        if (!rsp["AssetManageStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetManageStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetManageStat = rsp["AssetManageStat"].GetUint64();
        m_assetManageStatHasBeenSet = true;
    }

    if (rsp.HasMember("VulManageStat") && !rsp["VulManageStat"].IsNull())
    {
        if (!rsp["VulManageStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulManageStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulManageStat = rsp["VulManageStat"].GetUint64();
        m_vulManageStatHasBeenSet = true;
    }

    if (rsp.HasMember("SecureBasicLineStat") && !rsp["SecureBasicLineStat"].IsNull())
    {
        if (!rsp["SecureBasicLineStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecureBasicLineStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_secureBasicLineStat = rsp["SecureBasicLineStat"].GetUint64();
        m_secureBasicLineStatHasBeenSet = true;
    }

    if (rsp.HasMember("MalwareScanStat") && !rsp["MalwareScanStat"].IsNull())
    {
        if (!rsp["MalwareScanStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MalwareScanStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_malwareScanStat = rsp["MalwareScanStat"].GetUint64();
        m_malwareScanStatHasBeenSet = true;
    }

    if (rsp.HasMember("DefenseBruteAttackStat") && !rsp["DefenseBruteAttackStat"].IsNull())
    {
        if (!rsp["DefenseBruteAttackStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DefenseBruteAttackStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defenseBruteAttackStat = rsp["DefenseBruteAttackStat"].GetUint64();
        m_defenseBruteAttackStatHasBeenSet = true;
    }

    if (rsp.HasMember("FileTamperStat") && !rsp["FileTamperStat"].IsNull())
    {
        if (!rsp["FileTamperStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileTamperStat = rsp["FileTamperStat"].GetUint64();
        m_fileTamperStatHasBeenSet = true;
    }

    if (rsp.HasMember("WebPageStat") && !rsp["WebPageStat"].IsNull())
    {
        if (!rsp["WebPageStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebPageStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webPageStat = rsp["WebPageStat"].GetUint64();
        m_webPageStatHasBeenSet = true;
    }

    if (rsp.HasMember("LoginLogStat") && !rsp["LoginLogStat"].IsNull())
    {
        if (!rsp["LoginLogStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginLogStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loginLogStat = rsp["LoginLogStat"].GetUint64();
        m_loginLogStatHasBeenSet = true;
    }

    if (rsp.HasMember("DiscoverBruteAttackStat") && !rsp["DiscoverBruteAttackStat"].IsNull())
    {
        if (!rsp["DiscoverBruteAttackStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiscoverBruteAttackStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_discoverBruteAttackStat = rsp["DiscoverBruteAttackStat"].GetUint64();
        m_discoverBruteAttackStatHasBeenSet = true;
    }

    if (rsp.HasMember("MaliciousRequestStat") && !rsp["MaliciousRequestStat"].IsNull())
    {
        if (!rsp["MaliciousRequestStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequestStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maliciousRequestStat = rsp["MaliciousRequestStat"].GetUint64();
        m_maliciousRequestStatHasBeenSet = true;
    }

    if (rsp.HasMember("PrivilegeStat") && !rsp["PrivilegeStat"].IsNull())
    {
        if (!rsp["PrivilegeStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_privilegeStat = rsp["PrivilegeStat"].GetUint64();
        m_privilegeStatHasBeenSet = true;
    }

    if (rsp.HasMember("ReverseShellStat") && !rsp["ReverseShellStat"].IsNull())
    {
        if (!rsp["ReverseShellStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reverseShellStat = rsp["ReverseShellStat"].GetUint64();
        m_reverseShellStatHasBeenSet = true;
    }

    if (rsp.HasMember("ExpertServiceStat") && !rsp["ExpertServiceStat"].IsNull())
    {
        if (!rsp["ExpertServiceStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertServiceStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expertServiceStat = rsp["ExpertServiceStat"].GetUint64();
        m_expertServiceStatHasBeenSet = true;
    }

    if (rsp.HasMember("LogAnalysisStat") && !rsp["LogAnalysisStat"].IsNull())
    {
        if (!rsp["LogAnalysisStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogAnalysisStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logAnalysisStat = rsp["LogAnalysisStat"].GetUint64();
        m_logAnalysisStatHasBeenSet = true;
    }

    if (rsp.HasMember("WarningSetStat") && !rsp["WarningSetStat"].IsNull())
    {
        if (!rsp["WarningSetStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WarningSetStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_warningSetStat = rsp["WarningSetStat"].GetUint64();
        m_warningSetStatHasBeenSet = true;
    }

    if (rsp.HasMember("EventBashStat") && !rsp["EventBashStat"].IsNull())
    {
        if (!rsp["EventBashStat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventBashStat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventBashStat = rsp["EventBashStat"].GetUint64();
        m_eventBashStatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSecurityProtectionStatResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_assetManageStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetManageStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetManageStat, allocator);
    }

    if (m_vulManageStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulManageStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulManageStat, allocator);
    }

    if (m_secureBasicLineStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecureBasicLineStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secureBasicLineStat, allocator);
    }

    if (m_malwareScanStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MalwareScanStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_malwareScanStat, allocator);
    }

    if (m_defenseBruteAttackStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenseBruteAttackStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defenseBruteAttackStat, allocator);
    }

    if (m_fileTamperStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTamperStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileTamperStat, allocator);
    }

    if (m_webPageStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebPageStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webPageStat, allocator);
    }

    if (m_loginLogStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginLogStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginLogStat, allocator);
    }

    if (m_discoverBruteAttackStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscoverBruteAttackStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discoverBruteAttackStat, allocator);
    }

    if (m_maliciousRequestStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaliciousRequestStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maliciousRequestStat, allocator);
    }

    if (m_privilegeStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privilegeStat, allocator);
    }

    if (m_reverseShellStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReverseShellStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reverseShellStat, allocator);
    }

    if (m_expertServiceStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpertServiceStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expertServiceStat, allocator);
    }

    if (m_logAnalysisStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogAnalysisStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logAnalysisStat, allocator);
    }

    if (m_warningSetStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningSetStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warningSetStat, allocator);
    }

    if (m_eventBashStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBashStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventBashStat, allocator);
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


uint64_t DescribeSecurityProtectionStatResponse::GetAssetManageStat() const
{
    return m_assetManageStat;
}

bool DescribeSecurityProtectionStatResponse::AssetManageStatHasBeenSet() const
{
    return m_assetManageStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetVulManageStat() const
{
    return m_vulManageStat;
}

bool DescribeSecurityProtectionStatResponse::VulManageStatHasBeenSet() const
{
    return m_vulManageStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetSecureBasicLineStat() const
{
    return m_secureBasicLineStat;
}

bool DescribeSecurityProtectionStatResponse::SecureBasicLineStatHasBeenSet() const
{
    return m_secureBasicLineStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetMalwareScanStat() const
{
    return m_malwareScanStat;
}

bool DescribeSecurityProtectionStatResponse::MalwareScanStatHasBeenSet() const
{
    return m_malwareScanStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetDefenseBruteAttackStat() const
{
    return m_defenseBruteAttackStat;
}

bool DescribeSecurityProtectionStatResponse::DefenseBruteAttackStatHasBeenSet() const
{
    return m_defenseBruteAttackStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetFileTamperStat() const
{
    return m_fileTamperStat;
}

bool DescribeSecurityProtectionStatResponse::FileTamperStatHasBeenSet() const
{
    return m_fileTamperStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetWebPageStat() const
{
    return m_webPageStat;
}

bool DescribeSecurityProtectionStatResponse::WebPageStatHasBeenSet() const
{
    return m_webPageStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetLoginLogStat() const
{
    return m_loginLogStat;
}

bool DescribeSecurityProtectionStatResponse::LoginLogStatHasBeenSet() const
{
    return m_loginLogStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetDiscoverBruteAttackStat() const
{
    return m_discoverBruteAttackStat;
}

bool DescribeSecurityProtectionStatResponse::DiscoverBruteAttackStatHasBeenSet() const
{
    return m_discoverBruteAttackStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetMaliciousRequestStat() const
{
    return m_maliciousRequestStat;
}

bool DescribeSecurityProtectionStatResponse::MaliciousRequestStatHasBeenSet() const
{
    return m_maliciousRequestStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetPrivilegeStat() const
{
    return m_privilegeStat;
}

bool DescribeSecurityProtectionStatResponse::PrivilegeStatHasBeenSet() const
{
    return m_privilegeStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetReverseShellStat() const
{
    return m_reverseShellStat;
}

bool DescribeSecurityProtectionStatResponse::ReverseShellStatHasBeenSet() const
{
    return m_reverseShellStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetExpertServiceStat() const
{
    return m_expertServiceStat;
}

bool DescribeSecurityProtectionStatResponse::ExpertServiceStatHasBeenSet() const
{
    return m_expertServiceStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetLogAnalysisStat() const
{
    return m_logAnalysisStat;
}

bool DescribeSecurityProtectionStatResponse::LogAnalysisStatHasBeenSet() const
{
    return m_logAnalysisStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetWarningSetStat() const
{
    return m_warningSetStat;
}

bool DescribeSecurityProtectionStatResponse::WarningSetStatHasBeenSet() const
{
    return m_warningSetStatHasBeenSet;
}

uint64_t DescribeSecurityProtectionStatResponse::GetEventBashStat() const
{
    return m_eventBashStat;
}

bool DescribeSecurityProtectionStatResponse::EventBashStatHasBeenSet() const
{
    return m_eventBashStatHasBeenSet;
}


