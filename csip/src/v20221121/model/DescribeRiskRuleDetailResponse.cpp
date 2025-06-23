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

#include <tencentcloud/csip/v20221121/model/DescribeRiskRuleDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeRiskRuleDetailResponse::DescribeRiskRuleDetailResponse() :
    m_riskRuleIdHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_riskNameHasBeenSet(false),
    m_riskInfluenceHasBeenSet(false),
    m_riskFixAdviceHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRiskRuleDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RiskRuleId") && !rsp["RiskRuleId"].IsNull())
    {
        if (!rsp["RiskRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskRuleId = string(rsp["RiskRuleId"].GetString());
        m_riskRuleIdHasBeenSet = true;
    }

    if (rsp.HasMember("Provider") && !rsp["Provider"].IsNull())
    {
        if (!rsp["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(rsp["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (rsp.HasMember("RiskName") && !rsp["RiskName"].IsNull())
    {
        if (!rsp["RiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskName = string(rsp["RiskName"].GetString());
        m_riskNameHasBeenSet = true;
    }

    if (rsp.HasMember("RiskInfluence") && !rsp["RiskInfluence"].IsNull())
    {
        if (!rsp["RiskInfluence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskInfluence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskInfluence = string(rsp["RiskInfluence"].GetString());
        m_riskInfluenceHasBeenSet = true;
    }

    if (rsp.HasMember("RiskFixAdvice") && !rsp["RiskFixAdvice"].IsNull())
    {
        if (!rsp["RiskFixAdvice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskFixAdvice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskFixAdvice = string(rsp["RiskFixAdvice"].GetString());
        m_riskFixAdviceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRiskRuleDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_riskRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_riskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskInfluenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskInfluence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskInfluence.c_str(), allocator).Move(), allocator);
    }

    if (m_riskFixAdviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskFixAdvice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskFixAdvice.c_str(), allocator).Move(), allocator);
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


string DescribeRiskRuleDetailResponse::GetRiskRuleId() const
{
    return m_riskRuleId;
}

bool DescribeRiskRuleDetailResponse::RiskRuleIdHasBeenSet() const
{
    return m_riskRuleIdHasBeenSet;
}

string DescribeRiskRuleDetailResponse::GetProvider() const
{
    return m_provider;
}

bool DescribeRiskRuleDetailResponse::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string DescribeRiskRuleDetailResponse::GetRiskName() const
{
    return m_riskName;
}

bool DescribeRiskRuleDetailResponse::RiskNameHasBeenSet() const
{
    return m_riskNameHasBeenSet;
}

string DescribeRiskRuleDetailResponse::GetRiskInfluence() const
{
    return m_riskInfluence;
}

bool DescribeRiskRuleDetailResponse::RiskInfluenceHasBeenSet() const
{
    return m_riskInfluenceHasBeenSet;
}

string DescribeRiskRuleDetailResponse::GetRiskFixAdvice() const
{
    return m_riskFixAdvice;
}

bool DescribeRiskRuleDetailResponse::RiskFixAdviceHasBeenSet() const
{
    return m_riskFixAdviceHasBeenSet;
}


