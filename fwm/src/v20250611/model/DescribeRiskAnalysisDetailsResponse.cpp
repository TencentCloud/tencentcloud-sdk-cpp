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

#include <tencentcloud/fwm/v20250611/model/DescribeRiskAnalysisDetailsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

DescribeRiskAnalysisDetailsResponse::DescribeRiskAnalysisDetailsResponse() :
    m_enterpriseSecurityGroupRuleHasBeenSet(false),
    m_securityGroupPolicyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enterpriseSecurityGroupRuleIPV6HasBeenSet(false)
{
}

CoreInternalOutcome DescribeRiskAnalysisDetailsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EnterpriseSecurityGroupRule") && !rsp["EnterpriseSecurityGroupRule"].IsNull())
    {
        if (!rsp["EnterpriseSecurityGroupRule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRule` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EnterpriseSecurityGroupRule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalysisSgRuleInfoResp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_enterpriseSecurityGroupRule.push_back(item);
        }
        m_enterpriseSecurityGroupRuleHasBeenSet = true;
    }

    if (rsp.HasMember("SecurityGroupPolicy") && !rsp["SecurityGroupPolicy"].IsNull())
    {
        if (!rsp["SecurityGroupPolicy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroupPolicy` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SecurityGroupPolicy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupRiskPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_securityGroupPolicy.push_back(item);
        }
        m_securityGroupPolicyHasBeenSet = true;
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

    if (rsp.HasMember("EnterpriseSecurityGroupRuleIPV6") && !rsp["EnterpriseSecurityGroupRuleIPV6"].IsNull())
    {
        if (!rsp["EnterpriseSecurityGroupRuleIPV6"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleIPV6` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EnterpriseSecurityGroupRuleIPV6"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalysisSgRuleInfoResp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_enterpriseSecurityGroupRuleIPV6.push_back(item);
        }
        m_enterpriseSecurityGroupRuleIPV6HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRiskAnalysisDetailsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_enterpriseSecurityGroupRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseSecurityGroupRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_enterpriseSecurityGroupRule.begin(); itr != m_enterpriseSecurityGroupRule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_securityGroupPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_securityGroupPolicy.begin(); itr != m_securityGroupPolicy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_enterpriseSecurityGroupRuleIPV6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseSecurityGroupRuleIPV6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_enterpriseSecurityGroupRuleIPV6.begin(); itr != m_enterpriseSecurityGroupRuleIPV6.end(); ++itr, ++i)
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


vector<AnalysisSgRuleInfoResp> DescribeRiskAnalysisDetailsResponse::GetEnterpriseSecurityGroupRule() const
{
    return m_enterpriseSecurityGroupRule;
}

bool DescribeRiskAnalysisDetailsResponse::EnterpriseSecurityGroupRuleHasBeenSet() const
{
    return m_enterpriseSecurityGroupRuleHasBeenSet;
}

vector<SecurityGroupRiskPolicy> DescribeRiskAnalysisDetailsResponse::GetSecurityGroupPolicy() const
{
    return m_securityGroupPolicy;
}

bool DescribeRiskAnalysisDetailsResponse::SecurityGroupPolicyHasBeenSet() const
{
    return m_securityGroupPolicyHasBeenSet;
}

int64_t DescribeRiskAnalysisDetailsResponse::GetStatus() const
{
    return m_status;
}

bool DescribeRiskAnalysisDetailsResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<AnalysisSgRuleInfoResp> DescribeRiskAnalysisDetailsResponse::GetEnterpriseSecurityGroupRuleIPV6() const
{
    return m_enterpriseSecurityGroupRuleIPV6;
}

bool DescribeRiskAnalysisDetailsResponse::EnterpriseSecurityGroupRuleIPV6HasBeenSet() const
{
    return m_enterpriseSecurityGroupRuleIPV6HasBeenSet;
}


