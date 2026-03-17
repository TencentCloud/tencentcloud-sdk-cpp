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

#include <tencentcloud/tcss/v20201101/model/DescribeImageDenyRuleDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeImageDenyRuleDetailResponse::DescribeImageDenyRuleDetailResponse() :
    m_iDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_effectImageCountHasBeenSet(false),
    m_isEffectAllImageHasBeenSet(false),
    m_effectTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_operationUinHasBeenSet(false),
    m_effectStatusHasBeenSet(false),
    m_ruleDescriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vulHasBeenSet(false),
    m_cVEIDSetHasBeenSet(false),
    m_componentSetHasBeenSet(false),
    m_vulClassSetHasBeenSet(false),
    m_vulLevelSetHasBeenSet(false),
    m_vulLabelSetHasBeenSet(false),
    m_virusHasBeenSet(false),
    m_virusMD5SetHasBeenSet(false),
    m_virusLevelSetHasBeenSet(false),
    m_virusNameHasBeenSet(false),
    m_riskHasBeenSet(false),
    m_riskLevelSetHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_privilegeRunHasBeenSet(false),
    m_privilegeDetailHasBeenSet(false),
    m_effectImageSetHasBeenSet(false),
    m_effectDayHasBeenSet(false),
    m_ruleIDHasBeenSet(false)
{
}

CoreInternalOutcome DescribeImageDenyRuleDetailResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("RuleName") && !rsp["RuleName"].IsNull())
    {
        if (!rsp["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(rsp["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (rsp.HasMember("RuleType") && !rsp["RuleType"].IsNull())
    {
        if (!rsp["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(rsp["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (rsp.HasMember("EffectImageCount") && !rsp["EffectImageCount"].IsNull())
    {
        if (!rsp["EffectImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EffectImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectImageCount = rsp["EffectImageCount"].GetInt64();
        m_effectImageCountHasBeenSet = true;
    }

    if (rsp.HasMember("IsEffectAllImage") && !rsp["IsEffectAllImage"].IsNull())
    {
        if (!rsp["IsEffectAllImage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsEffectAllImage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEffectAllImage = rsp["IsEffectAllImage"].GetInt64();
        m_isEffectAllImageHasBeenSet = true;
    }

    if (rsp.HasMember("EffectTime") && !rsp["EffectTime"].IsNull())
    {
        if (!rsp["EffectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectTime = string(rsp["EffectTime"].GetString());
        m_effectTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("OperationUin") && !rsp["OperationUin"].IsNull())
    {
        if (!rsp["OperationUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationUin = string(rsp["OperationUin"].GetString());
        m_operationUinHasBeenSet = true;
    }

    if (rsp.HasMember("EffectStatus") && !rsp["EffectStatus"].IsNull())
    {
        if (!rsp["EffectStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectStatus = string(rsp["EffectStatus"].GetString());
        m_effectStatusHasBeenSet = true;
    }

    if (rsp.HasMember("RuleDescription") && !rsp["RuleDescription"].IsNull())
    {
        if (!rsp["RuleDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleDescription = string(rsp["RuleDescription"].GetString());
        m_ruleDescriptionHasBeenSet = true;
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

    if (rsp.HasMember("Vul") && !rsp["Vul"].IsNull())
    {
        if (!rsp["Vul"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Vul` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vul = rsp["Vul"].GetInt64();
        m_vulHasBeenSet = true;
    }

    if (rsp.HasMember("CVEIDSet") && !rsp["CVEIDSet"].IsNull())
    {
        if (!rsp["CVEIDSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CVEIDSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CVEIDSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cVEIDSet.push_back((*itr).GetString());
        }
        m_cVEIDSetHasBeenSet = true;
    }

    if (rsp.HasMember("ComponentSet") && !rsp["ComponentSet"].IsNull())
    {
        if (!rsp["ComponentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComponentSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ComponentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_componentSet.push_back((*itr).GetString());
        }
        m_componentSetHasBeenSet = true;
    }

    if (rsp.HasMember("VulClassSet") && !rsp["VulClassSet"].IsNull())
    {
        if (!rsp["VulClassSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulClassSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VulClassSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulClassSet.push_back((*itr).GetString());
        }
        m_vulClassSetHasBeenSet = true;
    }

    if (rsp.HasMember("VulLevelSet") && !rsp["VulLevelSet"].IsNull())
    {
        if (!rsp["VulLevelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulLevelSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VulLevelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulLevelSet.push_back((*itr).GetString());
        }
        m_vulLevelSetHasBeenSet = true;
    }

    if (rsp.HasMember("VulLabelSet") && !rsp["VulLabelSet"].IsNull())
    {
        if (!rsp["VulLabelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulLabelSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VulLabelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulLabelSet.push_back((*itr).GetString());
        }
        m_vulLabelSetHasBeenSet = true;
    }

    if (rsp.HasMember("Virus") && !rsp["Virus"].IsNull())
    {
        if (!rsp["Virus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Virus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_virus = rsp["Virus"].GetInt64();
        m_virusHasBeenSet = true;
    }

    if (rsp.HasMember("VirusMD5Set") && !rsp["VirusMD5Set"].IsNull())
    {
        if (!rsp["VirusMD5Set"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VirusMD5Set` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VirusMD5Set"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_virusMD5Set.push_back((*itr).GetString());
        }
        m_virusMD5SetHasBeenSet = true;
    }

    if (rsp.HasMember("VirusLevelSet") && !rsp["VirusLevelSet"].IsNull())
    {
        if (!rsp["VirusLevelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VirusLevelSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VirusLevelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_virusLevelSet.push_back((*itr).GetString());
        }
        m_virusLevelSetHasBeenSet = true;
    }

    if (rsp.HasMember("VirusName") && !rsp["VirusName"].IsNull())
    {
        if (!rsp["VirusName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VirusName` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VirusName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_virusName.push_back((*itr).GetString());
        }
        m_virusNameHasBeenSet = true;
    }

    if (rsp.HasMember("Risk") && !rsp["Risk"].IsNull())
    {
        if (!rsp["Risk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Risk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_risk = rsp["Risk"].GetInt64();
        m_riskHasBeenSet = true;
    }

    if (rsp.HasMember("RiskLevelSet") && !rsp["RiskLevelSet"].IsNull())
    {
        if (!rsp["RiskLevelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskLevelSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskLevelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskLevelSet.push_back((*itr).GetString());
        }
        m_riskLevelSetHasBeenSet = true;
    }

    if (rsp.HasMember("RiskType") && !rsp["RiskType"].IsNull())
    {
        if (!rsp["RiskType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskType` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskType.push_back((*itr).GetString());
        }
        m_riskTypeHasBeenSet = true;
    }

    if (rsp.HasMember("PrivilegeRun") && !rsp["PrivilegeRun"].IsNull())
    {
        if (!rsp["PrivilegeRun"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRun` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_privilegeRun = rsp["PrivilegeRun"].GetInt64();
        m_privilegeRunHasBeenSet = true;
    }

    if (rsp.HasMember("PrivilegeDetail") && !rsp["PrivilegeDetail"].IsNull())
    {
        if (!rsp["PrivilegeDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivilegeDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PrivilegeDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privilegeDetail.push_back((*itr).GetString());
        }
        m_privilegeDetailHasBeenSet = true;
    }

    if (rsp.HasMember("EffectImageSet") && !rsp["EffectImageSet"].IsNull())
    {
        if (!rsp["EffectImageSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EffectImageSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EffectImageSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_effectImageSet.push_back((*itr).GetString());
        }
        m_effectImageSetHasBeenSet = true;
    }

    if (rsp.HasMember("EffectDay") && !rsp["EffectDay"].IsNull())
    {
        if (!rsp["EffectDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EffectDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectDay = rsp["EffectDay"].GetUint64();
        m_effectDayHasBeenSet = true;
    }

    if (rsp.HasMember("RuleID") && !rsp["RuleID"].IsNull())
    {
        if (!rsp["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(rsp["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeImageDenyRuleDetailResponse::ToJsonString() const
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

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_effectImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectImageCount, allocator);
    }

    if (m_isEffectAllImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEffectAllImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEffectAllImage, allocator);
    }

    if (m_effectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operationUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationUin.c_str(), allocator).Move(), allocator);
    }

    if (m_effectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_vulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vul, allocator);
    }

    if (m_cVEIDSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEIDSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cVEIDSet.begin(); itr != m_cVEIDSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_componentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_componentSet.begin(); itr != m_componentSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vulClassSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulClassSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulClassSet.begin(); itr != m_vulClassSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vulLevelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulLevelSet.begin(); itr != m_vulLevelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vulLabelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLabelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulLabelSet.begin(); itr != m_vulLabelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_virusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Virus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virus, allocator);
    }

    if (m_virusMD5SetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusMD5Set";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_virusMD5Set.begin(); itr != m_virusMD5Set.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_virusLevelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusLevelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_virusLevelSet.begin(); itr != m_virusLevelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_virusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_virusName.begin(); itr != m_virusName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_riskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Risk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_risk, allocator);
    }

    if (m_riskLevelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskLevelSet.begin(); itr != m_riskLevelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskType.begin(); itr != m_riskType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_privilegeRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privilegeRun, allocator);
    }

    if (m_privilegeDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privilegeDetail.begin(); itr != m_privilegeDetail.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_effectImageSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectImageSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_effectImageSet.begin(); itr != m_effectImageSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_effectDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectDay, allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
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


int64_t DescribeImageDenyRuleDetailResponse::GetID() const
{
    return m_iD;
}

bool DescribeImageDenyRuleDetailResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeImageDenyRuleDetailResponse::GetRuleName() const
{
    return m_ruleName;
}

bool DescribeImageDenyRuleDetailResponse::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string DescribeImageDenyRuleDetailResponse::GetRuleType() const
{
    return m_ruleType;
}

bool DescribeImageDenyRuleDetailResponse::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t DescribeImageDenyRuleDetailResponse::GetEffectImageCount() const
{
    return m_effectImageCount;
}

bool DescribeImageDenyRuleDetailResponse::EffectImageCountHasBeenSet() const
{
    return m_effectImageCountHasBeenSet;
}

int64_t DescribeImageDenyRuleDetailResponse::GetIsEffectAllImage() const
{
    return m_isEffectAllImage;
}

bool DescribeImageDenyRuleDetailResponse::IsEffectAllImageHasBeenSet() const
{
    return m_isEffectAllImageHasBeenSet;
}

string DescribeImageDenyRuleDetailResponse::GetEffectTime() const
{
    return m_effectTime;
}

bool DescribeImageDenyRuleDetailResponse::EffectTimeHasBeenSet() const
{
    return m_effectTimeHasBeenSet;
}

string DescribeImageDenyRuleDetailResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeImageDenyRuleDetailResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeImageDenyRuleDetailResponse::GetOperationUin() const
{
    return m_operationUin;
}

bool DescribeImageDenyRuleDetailResponse::OperationUinHasBeenSet() const
{
    return m_operationUinHasBeenSet;
}

string DescribeImageDenyRuleDetailResponse::GetEffectStatus() const
{
    return m_effectStatus;
}

bool DescribeImageDenyRuleDetailResponse::EffectStatusHasBeenSet() const
{
    return m_effectStatusHasBeenSet;
}

string DescribeImageDenyRuleDetailResponse::GetRuleDescription() const
{
    return m_ruleDescription;
}

bool DescribeImageDenyRuleDetailResponse::RuleDescriptionHasBeenSet() const
{
    return m_ruleDescriptionHasBeenSet;
}

int64_t DescribeImageDenyRuleDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeImageDenyRuleDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeImageDenyRuleDetailResponse::GetVul() const
{
    return m_vul;
}

bool DescribeImageDenyRuleDetailResponse::VulHasBeenSet() const
{
    return m_vulHasBeenSet;
}

vector<string> DescribeImageDenyRuleDetailResponse::GetCVEIDSet() const
{
    return m_cVEIDSet;
}

bool DescribeImageDenyRuleDetailResponse::CVEIDSetHasBeenSet() const
{
    return m_cVEIDSetHasBeenSet;
}

vector<string> DescribeImageDenyRuleDetailResponse::GetComponentSet() const
{
    return m_componentSet;
}

bool DescribeImageDenyRuleDetailResponse::ComponentSetHasBeenSet() const
{
    return m_componentSetHasBeenSet;
}

vector<string> DescribeImageDenyRuleDetailResponse::GetVulClassSet() const
{
    return m_vulClassSet;
}

bool DescribeImageDenyRuleDetailResponse::VulClassSetHasBeenSet() const
{
    return m_vulClassSetHasBeenSet;
}

vector<string> DescribeImageDenyRuleDetailResponse::GetVulLevelSet() const
{
    return m_vulLevelSet;
}

bool DescribeImageDenyRuleDetailResponse::VulLevelSetHasBeenSet() const
{
    return m_vulLevelSetHasBeenSet;
}

vector<string> DescribeImageDenyRuleDetailResponse::GetVulLabelSet() const
{
    return m_vulLabelSet;
}

bool DescribeImageDenyRuleDetailResponse::VulLabelSetHasBeenSet() const
{
    return m_vulLabelSetHasBeenSet;
}

int64_t DescribeImageDenyRuleDetailResponse::GetVirus() const
{
    return m_virus;
}

bool DescribeImageDenyRuleDetailResponse::VirusHasBeenSet() const
{
    return m_virusHasBeenSet;
}

vector<string> DescribeImageDenyRuleDetailResponse::GetVirusMD5Set() const
{
    return m_virusMD5Set;
}

bool DescribeImageDenyRuleDetailResponse::VirusMD5SetHasBeenSet() const
{
    return m_virusMD5SetHasBeenSet;
}

vector<string> DescribeImageDenyRuleDetailResponse::GetVirusLevelSet() const
{
    return m_virusLevelSet;
}

bool DescribeImageDenyRuleDetailResponse::VirusLevelSetHasBeenSet() const
{
    return m_virusLevelSetHasBeenSet;
}

vector<string> DescribeImageDenyRuleDetailResponse::GetVirusName() const
{
    return m_virusName;
}

bool DescribeImageDenyRuleDetailResponse::VirusNameHasBeenSet() const
{
    return m_virusNameHasBeenSet;
}

int64_t DescribeImageDenyRuleDetailResponse::GetRisk() const
{
    return m_risk;
}

bool DescribeImageDenyRuleDetailResponse::RiskHasBeenSet() const
{
    return m_riskHasBeenSet;
}

vector<string> DescribeImageDenyRuleDetailResponse::GetRiskLevelSet() const
{
    return m_riskLevelSet;
}

bool DescribeImageDenyRuleDetailResponse::RiskLevelSetHasBeenSet() const
{
    return m_riskLevelSetHasBeenSet;
}

vector<string> DescribeImageDenyRuleDetailResponse::GetRiskType() const
{
    return m_riskType;
}

bool DescribeImageDenyRuleDetailResponse::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

int64_t DescribeImageDenyRuleDetailResponse::GetPrivilegeRun() const
{
    return m_privilegeRun;
}

bool DescribeImageDenyRuleDetailResponse::PrivilegeRunHasBeenSet() const
{
    return m_privilegeRunHasBeenSet;
}

vector<string> DescribeImageDenyRuleDetailResponse::GetPrivilegeDetail() const
{
    return m_privilegeDetail;
}

bool DescribeImageDenyRuleDetailResponse::PrivilegeDetailHasBeenSet() const
{
    return m_privilegeDetailHasBeenSet;
}

vector<string> DescribeImageDenyRuleDetailResponse::GetEffectImageSet() const
{
    return m_effectImageSet;
}

bool DescribeImageDenyRuleDetailResponse::EffectImageSetHasBeenSet() const
{
    return m_effectImageSetHasBeenSet;
}

uint64_t DescribeImageDenyRuleDetailResponse::GetEffectDay() const
{
    return m_effectDay;
}

bool DescribeImageDenyRuleDetailResponse::EffectDayHasBeenSet() const
{
    return m_effectDayHasBeenSet;
}

string DescribeImageDenyRuleDetailResponse::GetRuleID() const
{
    return m_ruleID;
}

bool DescribeImageDenyRuleDetailResponse::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}


