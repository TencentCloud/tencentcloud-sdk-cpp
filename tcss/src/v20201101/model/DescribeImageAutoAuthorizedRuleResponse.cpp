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

#include <tencentcloud/tcss/v20201101/model/DescribeImageAutoAuthorizedRuleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeImageAutoAuthorizedRuleResponse::DescribeImageAutoAuthorizedRuleResponse() :
    m_isEnabledHasBeenSet(false),
    m_rangeTypeHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_maxDailyCountHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_autoScanEnabledHasBeenSet(false),
    m_scanTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeImageAutoAuthorizedRuleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsEnabled") && !rsp["IsEnabled"].IsNull())
    {
        if (!rsp["IsEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = rsp["IsEnabled"].GetInt64();
        m_isEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("RangeType") && !rsp["RangeType"].IsNull())
    {
        if (!rsp["RangeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RangeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rangeType = string(rsp["RangeType"].GetString());
        m_rangeTypeHasBeenSet = true;
    }

    if (rsp.HasMember("HostCount") && !rsp["HostCount"].IsNull())
    {
        if (!rsp["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = rsp["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }

    if (rsp.HasMember("MaxDailyCount") && !rsp["MaxDailyCount"].IsNull())
    {
        if (!rsp["MaxDailyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxDailyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDailyCount = rsp["MaxDailyCount"].GetInt64();
        m_maxDailyCountHasBeenSet = true;
    }

    if (rsp.HasMember("RuleId") && !rsp["RuleId"].IsNull())
    {
        if (!rsp["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = rsp["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (rsp.HasMember("AutoScanEnabled") && !rsp["AutoScanEnabled"].IsNull())
    {
        if (!rsp["AutoScanEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScanEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoScanEnabled = rsp["AutoScanEnabled"].GetInt64();
        m_autoScanEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("ScanType") && !rsp["ScanType"].IsNull())
    {
        if (!rsp["ScanType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScanType` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ScanType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scanType.push_back((*itr).GetString());
        }
        m_scanTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeImageAutoAuthorizedRuleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_rangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rangeType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_maxDailyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDailyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDailyCount, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_autoScanEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScanEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoScanEnabled, allocator);
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanType.begin(); itr != m_scanType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


int64_t DescribeImageAutoAuthorizedRuleResponse::GetIsEnabled() const
{
    return m_isEnabled;
}

bool DescribeImageAutoAuthorizedRuleResponse::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

string DescribeImageAutoAuthorizedRuleResponse::GetRangeType() const
{
    return m_rangeType;
}

bool DescribeImageAutoAuthorizedRuleResponse::RangeTypeHasBeenSet() const
{
    return m_rangeTypeHasBeenSet;
}

int64_t DescribeImageAutoAuthorizedRuleResponse::GetHostCount() const
{
    return m_hostCount;
}

bool DescribeImageAutoAuthorizedRuleResponse::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

int64_t DescribeImageAutoAuthorizedRuleResponse::GetMaxDailyCount() const
{
    return m_maxDailyCount;
}

bool DescribeImageAutoAuthorizedRuleResponse::MaxDailyCountHasBeenSet() const
{
    return m_maxDailyCountHasBeenSet;
}

int64_t DescribeImageAutoAuthorizedRuleResponse::GetRuleId() const
{
    return m_ruleId;
}

bool DescribeImageAutoAuthorizedRuleResponse::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t DescribeImageAutoAuthorizedRuleResponse::GetAutoScanEnabled() const
{
    return m_autoScanEnabled;
}

bool DescribeImageAutoAuthorizedRuleResponse::AutoScanEnabledHasBeenSet() const
{
    return m_autoScanEnabledHasBeenSet;
}

vector<string> DescribeImageAutoAuthorizedRuleResponse::GetScanType() const
{
    return m_scanType;
}

bool DescribeImageAutoAuthorizedRuleResponse::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}


