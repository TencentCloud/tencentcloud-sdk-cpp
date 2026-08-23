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

#include <tencentcloud/csip/v20221121/model/DescribeSkillScanAlertDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeSkillScanAlertDetailResponse::DescribeSkillScanAlertDetailResponse() :
    m_iDHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_belongAssetTypeHasBeenSet(false),
    m_skillNameHasBeenSet(false),
    m_skillPathHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_contentHashHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_securityScoreHasBeenSet(false),
    m_primaryRuleIDHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_skillDescriptionHasBeenSet(false),
    m_riskDescriptionHasBeenSet(false),
    m_mitigationHasBeenSet(false),
    m_capabilityTagsHasBeenSet(false),
    m_ruleCatalogHasBeenSet(false),
    m_scanItemsHasBeenSet(false),
    m_reportURLHasBeenSet(false),
    m_scannedAtHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSkillScanAlertDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ID") && !rsp["ID"].IsNull())
    {
        if (!rsp["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = rsp["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (rsp.HasMember("AppID") && !rsp["AppID"].IsNull())
    {
        if (!rsp["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = rsp["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (rsp.HasMember("UUID") && !rsp["UUID"].IsNull())
    {
        if (!rsp["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(rsp["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (rsp.HasMember("HostIP") && !rsp["HostIP"].IsNull())
    {
        if (!rsp["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(rsp["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceID") && !rsp["InstanceID"].IsNull())
    {
        if (!rsp["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(rsp["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("BelongAssetType") && !rsp["BelongAssetType"].IsNull())
    {
        if (!rsp["BelongAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BelongAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_belongAssetType = string(rsp["BelongAssetType"].GetString());
        m_belongAssetTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SkillName") && !rsp["SkillName"].IsNull())
    {
        if (!rsp["SkillName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillName = string(rsp["SkillName"].GetString());
        m_skillNameHasBeenSet = true;
    }

    if (rsp.HasMember("SkillPath") && !rsp["SkillPath"].IsNull())
    {
        if (!rsp["SkillPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillPath = string(rsp["SkillPath"].GetString());
        m_skillPathHasBeenSet = true;
    }

    if (rsp.HasMember("Scope") && !rsp["Scope"].IsNull())
    {
        if (!rsp["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(rsp["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (rsp.HasMember("Version") && !rsp["Version"].IsNull())
    {
        if (!rsp["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(rsp["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (rsp.HasMember("ContentHash") && !rsp["ContentHash"].IsNull())
    {
        if (!rsp["ContentHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentHash = string(rsp["ContentHash"].GetString());
        m_contentHashHasBeenSet = true;
    }

    if (rsp.HasMember("RiskLevel") && !rsp["RiskLevel"].IsNull())
    {
        if (!rsp["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(rsp["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (rsp.HasMember("SecurityScore") && !rsp["SecurityScore"].IsNull())
    {
        if (!rsp["SecurityScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_securityScore = rsp["SecurityScore"].GetInt64();
        m_securityScoreHasBeenSet = true;
    }

    if (rsp.HasMember("PrimaryRuleID") && !rsp["PrimaryRuleID"].IsNull())
    {
        if (!rsp["PrimaryRuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrimaryRuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryRuleID = string(rsp["PrimaryRuleID"].GetString());
        m_primaryRuleIDHasBeenSet = true;
    }

    if (rsp.HasMember("EngineVersion") && !rsp["EngineVersion"].IsNull())
    {
        if (!rsp["EngineVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EngineVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = rsp["EngineVersion"].GetInt64();
        m_engineVersionHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
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

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SkillDescription") && !rsp["SkillDescription"].IsNull())
    {
        if (!rsp["SkillDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillDescription = string(rsp["SkillDescription"].GetString());
        m_skillDescriptionHasBeenSet = true;
    }

    if (rsp.HasMember("RiskDescription") && !rsp["RiskDescription"].IsNull())
    {
        if (!rsp["RiskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskDescription = string(rsp["RiskDescription"].GetString());
        m_riskDescriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Mitigation") && !rsp["Mitigation"].IsNull())
    {
        if (!rsp["Mitigation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Mitigation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mitigation = string(rsp["Mitigation"].GetString());
        m_mitigationHasBeenSet = true;
    }

    if (rsp.HasMember("CapabilityTags") && !rsp["CapabilityTags"].IsNull())
    {
        if (!rsp["CapabilityTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CapabilityTags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CapabilityTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkillCapabilityTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_capabilityTags.push_back(item);
        }
        m_capabilityTagsHasBeenSet = true;
    }

    if (rsp.HasMember("RuleCatalog") && !rsp["RuleCatalog"].IsNull())
    {
        if (!rsp["RuleCatalog"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleCatalog` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RuleCatalog"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkillRuleCatalogItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleCatalog.push_back(item);
        }
        m_ruleCatalogHasBeenSet = true;
    }

    if (rsp.HasMember("ScanItems") && !rsp["ScanItems"].IsNull())
    {
        if (!rsp["ScanItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScanItems` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ScanItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkillScanEngineResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scanItems.push_back(item);
        }
        m_scanItemsHasBeenSet = true;
    }

    if (rsp.HasMember("ReportURL") && !rsp["ReportURL"].IsNull())
    {
        if (!rsp["ReportURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportURL = string(rsp["ReportURL"].GetString());
        m_reportURLHasBeenSet = true;
    }

    if (rsp.HasMember("ScannedAt") && !rsp["ScannedAt"].IsNull())
    {
        if (!rsp["ScannedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScannedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scannedAt = string(rsp["ScannedAt"].GetString());
        m_scannedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSkillScanAlertDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_uUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUID.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_belongAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_belongAssetType.c_str(), allocator).Move(), allocator);
    }

    if (m_skillNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillName.c_str(), allocator).Move(), allocator);
    }

    if (m_skillPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillPath.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentHash.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_securityScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityScore, allocator);
    }

    if (m_primaryRuleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryRuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryRuleID.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_engineVersion, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_skillDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_riskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_mitigationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mitigation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mitigation.c_str(), allocator).Move(), allocator);
    }

    if (m_capabilityTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapabilityTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_capabilityTags.begin(); itr != m_capabilityTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ruleCatalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCatalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleCatalog.begin(); itr != m_ruleCatalog.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scanItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scanItems.begin(); itr != m_scanItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_reportURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportURL.c_str(), allocator).Move(), allocator);
    }

    if (m_scannedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScannedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scannedAt.c_str(), allocator).Move(), allocator);
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


int64_t DescribeSkillScanAlertDetailResponse::GetID() const
{
    return m_iD;
}

bool DescribeSkillScanAlertDetailResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t DescribeSkillScanAlertDetailResponse::GetAppID() const
{
    return m_appID;
}

bool DescribeSkillScanAlertDetailResponse::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetUUID() const
{
    return m_uUID;
}

bool DescribeSkillScanAlertDetailResponse::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetHostIP() const
{
    return m_hostIP;
}

bool DescribeSkillScanAlertDetailResponse::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetInstanceID() const
{
    return m_instanceID;
}

bool DescribeSkillScanAlertDetailResponse::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeSkillScanAlertDetailResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetBelongAssetType() const
{
    return m_belongAssetType;
}

bool DescribeSkillScanAlertDetailResponse::BelongAssetTypeHasBeenSet() const
{
    return m_belongAssetTypeHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetSkillName() const
{
    return m_skillName;
}

bool DescribeSkillScanAlertDetailResponse::SkillNameHasBeenSet() const
{
    return m_skillNameHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetSkillPath() const
{
    return m_skillPath;
}

bool DescribeSkillScanAlertDetailResponse::SkillPathHasBeenSet() const
{
    return m_skillPathHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetScope() const
{
    return m_scope;
}

bool DescribeSkillScanAlertDetailResponse::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetVersion() const
{
    return m_version;
}

bool DescribeSkillScanAlertDetailResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetContentHash() const
{
    return m_contentHash;
}

bool DescribeSkillScanAlertDetailResponse::ContentHashHasBeenSet() const
{
    return m_contentHashHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetRiskLevel() const
{
    return m_riskLevel;
}

bool DescribeSkillScanAlertDetailResponse::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

int64_t DescribeSkillScanAlertDetailResponse::GetSecurityScore() const
{
    return m_securityScore;
}

bool DescribeSkillScanAlertDetailResponse::SecurityScoreHasBeenSet() const
{
    return m_securityScoreHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetPrimaryRuleID() const
{
    return m_primaryRuleID;
}

bool DescribeSkillScanAlertDetailResponse::PrimaryRuleIDHasBeenSet() const
{
    return m_primaryRuleIDHasBeenSet;
}

int64_t DescribeSkillScanAlertDetailResponse::GetEngineVersion() const
{
    return m_engineVersion;
}

bool DescribeSkillScanAlertDetailResponse::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

int64_t DescribeSkillScanAlertDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeSkillScanAlertDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetLevel() const
{
    return m_level;
}

bool DescribeSkillScanAlertDetailResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeSkillScanAlertDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetSkillDescription() const
{
    return m_skillDescription;
}

bool DescribeSkillScanAlertDetailResponse::SkillDescriptionHasBeenSet() const
{
    return m_skillDescriptionHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetRiskDescription() const
{
    return m_riskDescription;
}

bool DescribeSkillScanAlertDetailResponse::RiskDescriptionHasBeenSet() const
{
    return m_riskDescriptionHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetMitigation() const
{
    return m_mitigation;
}

bool DescribeSkillScanAlertDetailResponse::MitigationHasBeenSet() const
{
    return m_mitigationHasBeenSet;
}

vector<SkillCapabilityTag> DescribeSkillScanAlertDetailResponse::GetCapabilityTags() const
{
    return m_capabilityTags;
}

bool DescribeSkillScanAlertDetailResponse::CapabilityTagsHasBeenSet() const
{
    return m_capabilityTagsHasBeenSet;
}

vector<SkillRuleCatalogItem> DescribeSkillScanAlertDetailResponse::GetRuleCatalog() const
{
    return m_ruleCatalog;
}

bool DescribeSkillScanAlertDetailResponse::RuleCatalogHasBeenSet() const
{
    return m_ruleCatalogHasBeenSet;
}

vector<SkillScanEngineResult> DescribeSkillScanAlertDetailResponse::GetScanItems() const
{
    return m_scanItems;
}

bool DescribeSkillScanAlertDetailResponse::ScanItemsHasBeenSet() const
{
    return m_scanItemsHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetReportURL() const
{
    return m_reportURL;
}

bool DescribeSkillScanAlertDetailResponse::ReportURLHasBeenSet() const
{
    return m_reportURLHasBeenSet;
}

string DescribeSkillScanAlertDetailResponse::GetScannedAt() const
{
    return m_scannedAt;
}

bool DescribeSkillScanAlertDetailResponse::ScannedAtHasBeenSet() const
{
    return m_scannedAtHasBeenSet;
}


