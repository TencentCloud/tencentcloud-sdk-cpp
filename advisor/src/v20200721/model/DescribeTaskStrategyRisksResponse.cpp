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

#include <tencentcloud/advisor/v20200721/model/DescribeTaskStrategyRisksResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Advisor::V20200721::Model;
using namespace std;

DescribeTaskStrategyRisksResponse::DescribeTaskStrategyRisksResponse() :
    m_riskFieldsDescHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_riskTotalCountHasBeenSet(false),
    m_risksHasBeenSet(false),
    m_resourceCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskStrategyRisksResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RiskFieldsDesc") && !rsp["RiskFieldsDesc"].IsNull())
    {
        if (!rsp["RiskFieldsDesc"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskFieldsDesc` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskFieldsDesc"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskFieldsDesc item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskFieldsDesc.push_back(item);
        }
        m_riskFieldsDescHasBeenSet = true;
    }

    if (rsp.HasMember("StrategyId") && !rsp["StrategyId"].IsNull())
    {
        if (!rsp["StrategyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = rsp["StrategyId"].GetUint64();
        m_strategyIdHasBeenSet = true;
    }

    if (rsp.HasMember("RiskTotalCount") && !rsp["RiskTotalCount"].IsNull())
    {
        if (!rsp["RiskTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskTotalCount = rsp["RiskTotalCount"].GetUint64();
        m_riskTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("Risks") && !rsp["Risks"].IsNull())
    {
        if (!rsp["Risks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Risks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_risks = string(rsp["Risks"].GetString());
        m_risksHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceCount") && !rsp["ResourceCount"].IsNull())
    {
        if (!rsp["ResourceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCount = rsp["ResourceCount"].GetUint64();
        m_resourceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTaskStrategyRisksResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_riskFieldsDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskFieldsDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskFieldsDesc.begin(); itr != m_riskFieldsDesc.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_riskTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskTotalCount, allocator);
    }

    if (m_risksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Risks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_risks.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceCount, allocator);
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


vector<RiskFieldsDesc> DescribeTaskStrategyRisksResponse::GetRiskFieldsDesc() const
{
    return m_riskFieldsDesc;
}

bool DescribeTaskStrategyRisksResponse::RiskFieldsDescHasBeenSet() const
{
    return m_riskFieldsDescHasBeenSet;
}

uint64_t DescribeTaskStrategyRisksResponse::GetStrategyId() const
{
    return m_strategyId;
}

bool DescribeTaskStrategyRisksResponse::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

uint64_t DescribeTaskStrategyRisksResponse::GetRiskTotalCount() const
{
    return m_riskTotalCount;
}

bool DescribeTaskStrategyRisksResponse::RiskTotalCountHasBeenSet() const
{
    return m_riskTotalCountHasBeenSet;
}

string DescribeTaskStrategyRisksResponse::GetRisks() const
{
    return m_risks;
}

bool DescribeTaskStrategyRisksResponse::RisksHasBeenSet() const
{
    return m_risksHasBeenSet;
}

uint64_t DescribeTaskStrategyRisksResponse::GetResourceCount() const
{
    return m_resourceCount;
}

bool DescribeTaskStrategyRisksResponse::ResourceCountHasBeenSet() const
{
    return m_resourceCountHasBeenSet;
}


