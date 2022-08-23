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

#include <tencentcloud/cwp/v20180228/model/DescribeVulInfoCvssResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeVulInfoCvssResponse::DescribeVulInfoCvssResponse() :
    m_vulIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_vulLevelHasBeenSet(false),
    m_vulTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_repairPlanHasBeenSet(false),
    m_cveIdHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_cVSSHasBeenSet(false),
    m_publicDateHasBeenSet(false),
    m_cvssScoreHasBeenSet(false),
    m_cveInfoHasBeenSet(false),
    m_cvssScoreFloatHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_defenseAttackCountHasBeenSet(false),
    m_successFixCountHasBeenSet(false),
    m_fixSwitchHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulInfoCvssResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VulId") && !rsp["VulId"].IsNull())
    {
        if (!rsp["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = rsp["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (rsp.HasMember("VulName") && !rsp["VulName"].IsNull())
    {
        if (!rsp["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(rsp["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (rsp.HasMember("VulLevel") && !rsp["VulLevel"].IsNull())
    {
        if (!rsp["VulLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulLevel = rsp["VulLevel"].GetUint64();
        m_vulLevelHasBeenSet = true;
    }

    if (rsp.HasMember("VulType") && !rsp["VulType"].IsNull())
    {
        if (!rsp["VulType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulType = rsp["VulType"].GetUint64();
        m_vulTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("RepairPlan") && !rsp["RepairPlan"].IsNull())
    {
        if (!rsp["RepairPlan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairPlan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repairPlan = string(rsp["RepairPlan"].GetString());
        m_repairPlanHasBeenSet = true;
    }

    if (rsp.HasMember("CveId") && !rsp["CveId"].IsNull())
    {
        if (!rsp["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(rsp["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }

    if (rsp.HasMember("Reference") && !rsp["Reference"].IsNull())
    {
        if (!rsp["Reference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reference = string(rsp["Reference"].GetString());
        m_referenceHasBeenSet = true;
    }

    if (rsp.HasMember("CVSS") && !rsp["CVSS"].IsNull())
    {
        if (!rsp["CVSS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVSS = string(rsp["CVSS"].GetString());
        m_cVSSHasBeenSet = true;
    }

    if (rsp.HasMember("PublicDate") && !rsp["PublicDate"].IsNull())
    {
        if (!rsp["PublicDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDate = string(rsp["PublicDate"].GetString());
        m_publicDateHasBeenSet = true;
    }

    if (rsp.HasMember("CvssScore") && !rsp["CvssScore"].IsNull())
    {
        if (!rsp["CvssScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CvssScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cvssScore = rsp["CvssScore"].GetUint64();
        m_cvssScoreHasBeenSet = true;
    }

    if (rsp.HasMember("CveInfo") && !rsp["CveInfo"].IsNull())
    {
        if (!rsp["CveInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CveInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveInfo = string(rsp["CveInfo"].GetString());
        m_cveInfoHasBeenSet = true;
    }

    if (rsp.HasMember("CvssScoreFloat") && !rsp["CvssScoreFloat"].IsNull())
    {
        if (!rsp["CvssScoreFloat"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CvssScoreFloat` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cvssScoreFloat = rsp["CvssScoreFloat"].GetDouble();
        m_cvssScoreFloatHasBeenSet = true;
    }

    if (rsp.HasMember("Labels") && !rsp["Labels"].IsNull())
    {
        if (!rsp["Labels"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Labels` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labels = string(rsp["Labels"].GetString());
        m_labelsHasBeenSet = true;
    }

    if (rsp.HasMember("DefenseAttackCount") && !rsp["DefenseAttackCount"].IsNull())
    {
        if (!rsp["DefenseAttackCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DefenseAttackCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defenseAttackCount = rsp["DefenseAttackCount"].GetUint64();
        m_defenseAttackCountHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessFixCount") && !rsp["SuccessFixCount"].IsNull())
    {
        if (!rsp["SuccessFixCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessFixCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successFixCount = rsp["SuccessFixCount"].GetUint64();
        m_successFixCountHasBeenSet = true;
    }

    if (rsp.HasMember("FixSwitch") && !rsp["FixSwitch"].IsNull())
    {
        if (!rsp["FixSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FixSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fixSwitch = rsp["FixSwitch"].GetInt64();
        m_fixSwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulInfoCvssResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulLevel, allocator);
    }

    if (m_vulTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulType, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_repairPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repairPlan.c_str(), allocator).Move(), allocator);
    }

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reference.c_str(), allocator).Move(), allocator);
    }

    if (m_cVSSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVSS.c_str(), allocator).Move(), allocator);
    }

    if (m_publicDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicDate.c_str(), allocator).Move(), allocator);
    }

    if (m_cvssScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvssScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvssScore, allocator);
    }

    if (m_cveInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_cvssScoreFloatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvssScoreFloat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvssScoreFloat, allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labels.c_str(), allocator).Move(), allocator);
    }

    if (m_defenseAttackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenseAttackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defenseAttackCount, allocator);
    }

    if (m_successFixCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessFixCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successFixCount, allocator);
    }

    if (m_fixSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixSwitch, allocator);
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


uint64_t DescribeVulInfoCvssResponse::GetVulId() const
{
    return m_vulId;
}

bool DescribeVulInfoCvssResponse::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string DescribeVulInfoCvssResponse::GetVulName() const
{
    return m_vulName;
}

bool DescribeVulInfoCvssResponse::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

uint64_t DescribeVulInfoCvssResponse::GetVulLevel() const
{
    return m_vulLevel;
}

bool DescribeVulInfoCvssResponse::VulLevelHasBeenSet() const
{
    return m_vulLevelHasBeenSet;
}

uint64_t DescribeVulInfoCvssResponse::GetVulType() const
{
    return m_vulType;
}

bool DescribeVulInfoCvssResponse::VulTypeHasBeenSet() const
{
    return m_vulTypeHasBeenSet;
}

string DescribeVulInfoCvssResponse::GetDescription() const
{
    return m_description;
}

bool DescribeVulInfoCvssResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeVulInfoCvssResponse::GetRepairPlan() const
{
    return m_repairPlan;
}

bool DescribeVulInfoCvssResponse::RepairPlanHasBeenSet() const
{
    return m_repairPlanHasBeenSet;
}

string DescribeVulInfoCvssResponse::GetCveId() const
{
    return m_cveId;
}

bool DescribeVulInfoCvssResponse::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

string DescribeVulInfoCvssResponse::GetReference() const
{
    return m_reference;
}

bool DescribeVulInfoCvssResponse::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

string DescribeVulInfoCvssResponse::GetCVSS() const
{
    return m_cVSS;
}

bool DescribeVulInfoCvssResponse::CVSSHasBeenSet() const
{
    return m_cVSSHasBeenSet;
}

string DescribeVulInfoCvssResponse::GetPublicDate() const
{
    return m_publicDate;
}

bool DescribeVulInfoCvssResponse::PublicDateHasBeenSet() const
{
    return m_publicDateHasBeenSet;
}

uint64_t DescribeVulInfoCvssResponse::GetCvssScore() const
{
    return m_cvssScore;
}

bool DescribeVulInfoCvssResponse::CvssScoreHasBeenSet() const
{
    return m_cvssScoreHasBeenSet;
}

string DescribeVulInfoCvssResponse::GetCveInfo() const
{
    return m_cveInfo;
}

bool DescribeVulInfoCvssResponse::CveInfoHasBeenSet() const
{
    return m_cveInfoHasBeenSet;
}

double DescribeVulInfoCvssResponse::GetCvssScoreFloat() const
{
    return m_cvssScoreFloat;
}

bool DescribeVulInfoCvssResponse::CvssScoreFloatHasBeenSet() const
{
    return m_cvssScoreFloatHasBeenSet;
}

string DescribeVulInfoCvssResponse::GetLabels() const
{
    return m_labels;
}

bool DescribeVulInfoCvssResponse::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

uint64_t DescribeVulInfoCvssResponse::GetDefenseAttackCount() const
{
    return m_defenseAttackCount;
}

bool DescribeVulInfoCvssResponse::DefenseAttackCountHasBeenSet() const
{
    return m_defenseAttackCountHasBeenSet;
}

uint64_t DescribeVulInfoCvssResponse::GetSuccessFixCount() const
{
    return m_successFixCount;
}

bool DescribeVulInfoCvssResponse::SuccessFixCountHasBeenSet() const
{
    return m_successFixCountHasBeenSet;
}

int64_t DescribeVulInfoCvssResponse::GetFixSwitch() const
{
    return m_fixSwitch;
}

bool DescribeVulInfoCvssResponse::FixSwitchHasBeenSet() const
{
    return m_fixSwitchHasBeenSet;
}


