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

#include <tencentcloud/csip/v20221121/model/DescribeConfigCheckRulesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeConfigCheckRulesResponse::DescribeConfigCheckRulesResponse() :
    m_totalCountHasBeenSet(false),
    m_ruleListHasBeenSet(false),
    m_providerListHasBeenSet(false),
    m_riskLevelListHasBeenSet(false),
    m_dispositionTypeListHasBeenSet(false),
    m_checkTypeListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConfigCheckRulesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("RuleList") && !rsp["RuleList"].IsNull())
    {
        if (!rsp["RuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskRuleInfo item;
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

    if (rsp.HasMember("ProviderList") && !rsp["ProviderList"].IsNull())
    {
        if (!rsp["ProviderList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProviderList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ProviderList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttributeOptionSet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_providerList.push_back(item);
        }
        m_providerListHasBeenSet = true;
    }

    if (rsp.HasMember("RiskLevelList") && !rsp["RiskLevelList"].IsNull())
    {
        if (!rsp["RiskLevelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskLevelList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskLevelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttributeOptionSet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskLevelList.push_back(item);
        }
        m_riskLevelListHasBeenSet = true;
    }

    if (rsp.HasMember("DispositionTypeList") && !rsp["DispositionTypeList"].IsNull())
    {
        if (!rsp["DispositionTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DispositionTypeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DispositionTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttributeOptionSet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dispositionTypeList.push_back(item);
        }
        m_dispositionTypeListHasBeenSet = true;
    }

    if (rsp.HasMember("CheckTypeList") && !rsp["CheckTypeList"].IsNull())
    {
        if (!rsp["CheckTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CheckTypeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CheckTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttributeOptionSet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_checkTypeList.push_back(item);
        }
        m_checkTypeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeConfigCheckRulesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_ruleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleList.begin(); itr != m_ruleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_providerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_providerList.begin(); itr != m_providerList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_riskLevelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskLevelList.begin(); itr != m_riskLevelList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dispositionTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispositionTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dispositionTypeList.begin(); itr != m_dispositionTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_checkTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_checkTypeList.begin(); itr != m_checkTypeList.end(); ++itr, ++i)
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


int64_t DescribeConfigCheckRulesResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeConfigCheckRulesResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<RiskRuleInfo> DescribeConfigCheckRulesResponse::GetRuleList() const
{
    return m_ruleList;
}

bool DescribeConfigCheckRulesResponse::RuleListHasBeenSet() const
{
    return m_ruleListHasBeenSet;
}

vector<AttributeOptionSet> DescribeConfigCheckRulesResponse::GetProviderList() const
{
    return m_providerList;
}

bool DescribeConfigCheckRulesResponse::ProviderListHasBeenSet() const
{
    return m_providerListHasBeenSet;
}

vector<AttributeOptionSet> DescribeConfigCheckRulesResponse::GetRiskLevelList() const
{
    return m_riskLevelList;
}

bool DescribeConfigCheckRulesResponse::RiskLevelListHasBeenSet() const
{
    return m_riskLevelListHasBeenSet;
}

vector<AttributeOptionSet> DescribeConfigCheckRulesResponse::GetDispositionTypeList() const
{
    return m_dispositionTypeList;
}

bool DescribeConfigCheckRulesResponse::DispositionTypeListHasBeenSet() const
{
    return m_dispositionTypeListHasBeenSet;
}

vector<AttributeOptionSet> DescribeConfigCheckRulesResponse::GetCheckTypeList() const
{
    return m_checkTypeList;
}

bool DescribeConfigCheckRulesResponse::CheckTypeListHasBeenSet() const
{
    return m_checkTypeListHasBeenSet;
}


