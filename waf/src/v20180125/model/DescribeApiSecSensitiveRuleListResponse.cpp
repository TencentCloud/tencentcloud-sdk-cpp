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

#include <tencentcloud/waf/v20180125/model/DescribeApiSecSensitiveRuleListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeApiSecSensitiveRuleListResponse::DescribeApiSecSensitiveRuleListResponse() :
    m_dataHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleNameListHasBeenSet(false),
    m_apiExtractRuleHasBeenSet(false),
    m_apiSecPrivilegeRuleHasBeenSet(false),
    m_apiSecSceneRuleHasBeenSet(false),
    m_apiSecCustomEventRuleHasBeenSet(false),
    m_apiExcludeRuleHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApiSecSensitiveRuleListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiSecSensitiveRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
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

    if (rsp.HasMember("RuleNameList") && !rsp["RuleNameList"].IsNull())
    {
        if (!rsp["RuleNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleNameList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RuleNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleNameList.push_back((*itr).GetString());
        }
        m_ruleNameListHasBeenSet = true;
    }

    if (rsp.HasMember("ApiExtractRule") && !rsp["ApiExtractRule"].IsNull())
    {
        if (!rsp["ApiExtractRule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiExtractRule` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ApiExtractRule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiSecExtractRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiExtractRule.push_back(item);
        }
        m_apiExtractRuleHasBeenSet = true;
    }

    if (rsp.HasMember("ApiSecPrivilegeRule") && !rsp["ApiSecPrivilegeRule"].IsNull())
    {
        if (!rsp["ApiSecPrivilegeRule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecPrivilegeRule` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ApiSecPrivilegeRule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiSecPrivilegeRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiSecPrivilegeRule.push_back(item);
        }
        m_apiSecPrivilegeRuleHasBeenSet = true;
    }

    if (rsp.HasMember("ApiSecSceneRule") && !rsp["ApiSecSceneRule"].IsNull())
    {
        if (!rsp["ApiSecSceneRule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecSceneRule` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ApiSecSceneRule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiSecSceneRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiSecSceneRule.push_back(item);
        }
        m_apiSecSceneRuleHasBeenSet = true;
    }

    if (rsp.HasMember("ApiSecCustomEventRule") && !rsp["ApiSecCustomEventRule"].IsNull())
    {
        if (!rsp["ApiSecCustomEventRule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomEventRule` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ApiSecCustomEventRule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiSecCustomEventRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiSecCustomEventRule.push_back(item);
        }
        m_apiSecCustomEventRuleHasBeenSet = true;
    }

    if (rsp.HasMember("ApiExcludeRule") && !rsp["ApiExcludeRule"].IsNull())
    {
        if (!rsp["ApiExcludeRule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiExcludeRule` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ApiExcludeRule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiSecExcludeRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiExcludeRule.push_back(item);
        }
        m_apiExcludeRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeApiSecSensitiveRuleListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleNameList.begin(); itr != m_ruleNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_apiExtractRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiExtractRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiExtractRule.begin(); itr != m_apiExtractRule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_apiSecPrivilegeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiSecPrivilegeRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiSecPrivilegeRule.begin(); itr != m_apiSecPrivilegeRule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_apiSecSceneRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiSecSceneRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiSecSceneRule.begin(); itr != m_apiSecSceneRule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_apiSecCustomEventRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiSecCustomEventRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiSecCustomEventRule.begin(); itr != m_apiSecCustomEventRule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_apiExcludeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiExcludeRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiExcludeRule.begin(); itr != m_apiExcludeRule.end(); ++itr, ++i)
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


vector<ApiSecSensitiveRule> DescribeApiSecSensitiveRuleListResponse::GetData() const
{
    return m_data;
}

bool DescribeApiSecSensitiveRuleListResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

uint64_t DescribeApiSecSensitiveRuleListResponse::GetTotal() const
{
    return m_total;
}

bool DescribeApiSecSensitiveRuleListResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t DescribeApiSecSensitiveRuleListResponse::GetStatus() const
{
    return m_status;
}

bool DescribeApiSecSensitiveRuleListResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeApiSecSensitiveRuleListResponse::GetRuleNameList() const
{
    return m_ruleNameList;
}

bool DescribeApiSecSensitiveRuleListResponse::RuleNameListHasBeenSet() const
{
    return m_ruleNameListHasBeenSet;
}

vector<ApiSecExtractRule> DescribeApiSecSensitiveRuleListResponse::GetApiExtractRule() const
{
    return m_apiExtractRule;
}

bool DescribeApiSecSensitiveRuleListResponse::ApiExtractRuleHasBeenSet() const
{
    return m_apiExtractRuleHasBeenSet;
}

vector<ApiSecPrivilegeRule> DescribeApiSecSensitiveRuleListResponse::GetApiSecPrivilegeRule() const
{
    return m_apiSecPrivilegeRule;
}

bool DescribeApiSecSensitiveRuleListResponse::ApiSecPrivilegeRuleHasBeenSet() const
{
    return m_apiSecPrivilegeRuleHasBeenSet;
}

vector<ApiSecSceneRule> DescribeApiSecSensitiveRuleListResponse::GetApiSecSceneRule() const
{
    return m_apiSecSceneRule;
}

bool DescribeApiSecSensitiveRuleListResponse::ApiSecSceneRuleHasBeenSet() const
{
    return m_apiSecSceneRuleHasBeenSet;
}

vector<ApiSecCustomEventRule> DescribeApiSecSensitiveRuleListResponse::GetApiSecCustomEventRule() const
{
    return m_apiSecCustomEventRule;
}

bool DescribeApiSecSensitiveRuleListResponse::ApiSecCustomEventRuleHasBeenSet() const
{
    return m_apiSecCustomEventRuleHasBeenSet;
}

vector<ApiSecExcludeRule> DescribeApiSecSensitiveRuleListResponse::GetApiExcludeRule() const
{
    return m_apiExcludeRule;
}

bool DescribeApiSecSensitiveRuleListResponse::ApiExcludeRuleHasBeenSet() const
{
    return m_apiExcludeRuleHasBeenSet;
}


