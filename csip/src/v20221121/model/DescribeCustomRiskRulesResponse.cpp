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

#include <tencentcloud/csip/v20221121/model/DescribeCustomRiskRulesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeCustomRiskRulesResponse::DescribeCustomRiskRulesResponse() :
    m_totalCountHasBeenSet(false),
    m_riskRuleListHasBeenSet(false),
    m_providerListHasBeenSet(false),
    m_assetTypeListHasBeenSet(false),
    m_standardNameListHasBeenSet(false),
    m_ruleSeverityListHasBeenSet(false),
    m_checkTypeListHasBeenSet(false),
    m_classifyListHasBeenSet(false),
    m_standardListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCustomRiskRulesResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("RiskRuleList") && !rsp["RiskRuleList"].IsNull())
    {
        if (!rsp["RiskRuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskRuleList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskRuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomRiskRuleItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskRuleList.push_back(item);
        }
        m_riskRuleListHasBeenSet = true;
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

    if (rsp.HasMember("AssetTypeList") && !rsp["AssetTypeList"].IsNull())
    {
        if (!rsp["AssetTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetTypeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AssetTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttributeOptionSet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assetTypeList.push_back(item);
        }
        m_assetTypeListHasBeenSet = true;
    }

    if (rsp.HasMember("StandardNameList") && !rsp["StandardNameList"].IsNull())
    {
        if (!rsp["StandardNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandardNameList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StandardNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StandardItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_standardNameList.push_back(item);
        }
        m_standardNameListHasBeenSet = true;
    }

    if (rsp.HasMember("RuleSeverityList") && !rsp["RuleSeverityList"].IsNull())
    {
        if (!rsp["RuleSeverityList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleSeverityList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RuleSeverityList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleStatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleSeverityList.push_back(item);
        }
        m_ruleSeverityListHasBeenSet = true;
    }

    if (rsp.HasMember("CheckTypeList") && !rsp["CheckTypeList"].IsNull())
    {
        if (!rsp["CheckTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CheckTypeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CheckTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleStatisticsItem item;
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

    if (rsp.HasMember("ClassifyList") && !rsp["ClassifyList"].IsNull())
    {
        if (!rsp["ClassifyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClassifyList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ClassifyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleStatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_classifyList.push_back(item);
        }
        m_classifyListHasBeenSet = true;
    }

    if (rsp.HasMember("StandardList") && !rsp["StandardList"].IsNull())
    {
        if (!rsp["StandardList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandardList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StandardList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleStatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_standardList.push_back(item);
        }
        m_standardListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCustomRiskRulesResponse::ToJsonString() const
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

    if (m_riskRuleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskRuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskRuleList.begin(); itr != m_riskRuleList.end(); ++itr, ++i)
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

    if (m_assetTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assetTypeList.begin(); itr != m_assetTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_standardNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_standardNameList.begin(); itr != m_standardNameList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ruleSeverityListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleSeverityList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleSeverityList.begin(); itr != m_ruleSeverityList.end(); ++itr, ++i)
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

    if (m_classifyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassifyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_classifyList.begin(); itr != m_classifyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_standardListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_standardList.begin(); itr != m_standardList.end(); ++itr, ++i)
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


int64_t DescribeCustomRiskRulesResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeCustomRiskRulesResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<CustomRiskRuleItem> DescribeCustomRiskRulesResponse::GetRiskRuleList() const
{
    return m_riskRuleList;
}

bool DescribeCustomRiskRulesResponse::RiskRuleListHasBeenSet() const
{
    return m_riskRuleListHasBeenSet;
}

vector<AttributeOptionSet> DescribeCustomRiskRulesResponse::GetProviderList() const
{
    return m_providerList;
}

bool DescribeCustomRiskRulesResponse::ProviderListHasBeenSet() const
{
    return m_providerListHasBeenSet;
}

vector<AttributeOptionSet> DescribeCustomRiskRulesResponse::GetAssetTypeList() const
{
    return m_assetTypeList;
}

bool DescribeCustomRiskRulesResponse::AssetTypeListHasBeenSet() const
{
    return m_assetTypeListHasBeenSet;
}

vector<StandardItem> DescribeCustomRiskRulesResponse::GetStandardNameList() const
{
    return m_standardNameList;
}

bool DescribeCustomRiskRulesResponse::StandardNameListHasBeenSet() const
{
    return m_standardNameListHasBeenSet;
}

vector<RuleStatisticsItem> DescribeCustomRiskRulesResponse::GetRuleSeverityList() const
{
    return m_ruleSeverityList;
}

bool DescribeCustomRiskRulesResponse::RuleSeverityListHasBeenSet() const
{
    return m_ruleSeverityListHasBeenSet;
}

vector<RuleStatisticsItem> DescribeCustomRiskRulesResponse::GetCheckTypeList() const
{
    return m_checkTypeList;
}

bool DescribeCustomRiskRulesResponse::CheckTypeListHasBeenSet() const
{
    return m_checkTypeListHasBeenSet;
}

vector<RuleStatisticsItem> DescribeCustomRiskRulesResponse::GetClassifyList() const
{
    return m_classifyList;
}

bool DescribeCustomRiskRulesResponse::ClassifyListHasBeenSet() const
{
    return m_classifyListHasBeenSet;
}

vector<RuleStatisticsItem> DescribeCustomRiskRulesResponse::GetStandardList() const
{
    return m_standardList;
}

bool DescribeCustomRiskRulesResponse::StandardListHasBeenSet() const
{
    return m_standardListHasBeenSet;
}


