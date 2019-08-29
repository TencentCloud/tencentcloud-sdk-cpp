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

#include <tencentcloud/gaap/v20180529/model/DescribeSecurityPolicyDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

DescribeSecurityPolicyDetailResponse::DescribeSecurityPolicyDetailResponse() :
    m_proxyIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_ruleListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecurityPolicyDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ProxyId") && !rsp["ProxyId"].IsNull())
    {
        if (!rsp["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(rsp["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("DefaultAction") && !rsp["DefaultAction"].IsNull())
    {
        if (!rsp["DefaultAction"].IsString())
        {
            return CoreInternalOutcome(Error("response `DefaultAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultAction = string(rsp["DefaultAction"].GetString());
        m_defaultActionHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyId") && !rsp["PolicyId"].IsNull())
    {
        if (!rsp["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(rsp["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (rsp.HasMember("RuleList") && !rsp["RuleList"].IsNull())
    {
        if (!rsp["RuleList"].IsArray())
            return CoreInternalOutcome(Error("response `RuleList` is not array type"));

        const Value &tmpValue = rsp["RuleList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityPolicyRuleOut item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleList.push_back(item);
        }
        m_ruleListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeSecurityPolicyDetailResponse::GetProxyId() const
{
    return m_proxyId;
}

bool DescribeSecurityPolicyDetailResponse::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string DescribeSecurityPolicyDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeSecurityPolicyDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeSecurityPolicyDetailResponse::GetDefaultAction() const
{
    return m_defaultAction;
}

bool DescribeSecurityPolicyDetailResponse::DefaultActionHasBeenSet() const
{
    return m_defaultActionHasBeenSet;
}

string DescribeSecurityPolicyDetailResponse::GetPolicyId() const
{
    return m_policyId;
}

bool DescribeSecurityPolicyDetailResponse::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

vector<SecurityPolicyRuleOut> DescribeSecurityPolicyDetailResponse::GetRuleList() const
{
    return m_ruleList;
}

bool DescribeSecurityPolicyDetailResponse::RuleListHasBeenSet() const
{
    return m_ruleListHasBeenSet;
}


