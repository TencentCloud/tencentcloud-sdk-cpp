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

#include <tencentcloud/config/v20220802/model/DescribeSystemCompliancePackResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

DescribeSystemCompliancePackResponse::DescribeSystemCompliancePackResponse() :
    m_compliancePackIdHasBeenSet(false),
    m_compliancePackNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_configRulesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSystemCompliancePackResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CompliancePackId") && !rsp["CompliancePackId"].IsNull())
    {
        if (!rsp["CompliancePackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compliancePackId = string(rsp["CompliancePackId"].GetString());
        m_compliancePackIdHasBeenSet = true;
    }

    if (rsp.HasMember("CompliancePackName") && !rsp["CompliancePackName"].IsNull())
    {
        if (!rsp["CompliancePackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compliancePackName = string(rsp["CompliancePackName"].GetString());
        m_compliancePackNameHasBeenSet = true;
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

    if (rsp.HasMember("RiskLevel") && !rsp["RiskLevel"].IsNull())
    {
        if (!rsp["RiskLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = rsp["RiskLevel"].GetUint64();
        m_riskLevelHasBeenSet = true;
    }

    if (rsp.HasMember("ConfigRules") && !rsp["ConfigRules"].IsNull())
    {
        if (!rsp["ConfigRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigRules` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ConfigRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CompliancePackRuleForManage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configRules.push_back(item);
        }
        m_configRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSystemCompliancePackResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_compliancePackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compliancePackId.c_str(), allocator).Move(), allocator);
    }

    if (m_compliancePackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compliancePackName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_configRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configRules.begin(); itr != m_configRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeSystemCompliancePackResponse::GetCompliancePackId() const
{
    return m_compliancePackId;
}

bool DescribeSystemCompliancePackResponse::CompliancePackIdHasBeenSet() const
{
    return m_compliancePackIdHasBeenSet;
}

string DescribeSystemCompliancePackResponse::GetCompliancePackName() const
{
    return m_compliancePackName;
}

bool DescribeSystemCompliancePackResponse::CompliancePackNameHasBeenSet() const
{
    return m_compliancePackNameHasBeenSet;
}

string DescribeSystemCompliancePackResponse::GetDescription() const
{
    return m_description;
}

bool DescribeSystemCompliancePackResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t DescribeSystemCompliancePackResponse::GetRiskLevel() const
{
    return m_riskLevel;
}

bool DescribeSystemCompliancePackResponse::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

vector<CompliancePackRuleForManage> DescribeSystemCompliancePackResponse::GetConfigRules() const
{
    return m_configRules;
}

bool DescribeSystemCompliancePackResponse::ConfigRulesHasBeenSet() const
{
    return m_configRulesHasBeenSet;
}


