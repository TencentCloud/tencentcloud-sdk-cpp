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

#include <tencentcloud/tcss/v20201101/model/DescribeImageDenyRuleSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeImageDenyRuleSummaryResponse::DescribeImageDenyRuleSummaryResponse() :
    m_ruleTotalCountHasBeenSet(false),
    m_enabledRuleCountHasBeenSet(false),
    m_observedRuleCountHasBeenSet(false),
    m_effectiveRuleCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeImageDenyRuleSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RuleTotalCount") && !rsp["RuleTotalCount"].IsNull())
    {
        if (!rsp["RuleTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTotalCount = rsp["RuleTotalCount"].GetUint64();
        m_ruleTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("EnabledRuleCount") && !rsp["EnabledRuleCount"].IsNull())
    {
        if (!rsp["EnabledRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnabledRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enabledRuleCount = rsp["EnabledRuleCount"].GetUint64();
        m_enabledRuleCountHasBeenSet = true;
    }

    if (rsp.HasMember("ObservedRuleCount") && !rsp["ObservedRuleCount"].IsNull())
    {
        if (!rsp["ObservedRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ObservedRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_observedRuleCount = rsp["ObservedRuleCount"].GetUint64();
        m_observedRuleCountHasBeenSet = true;
    }

    if (rsp.HasMember("EffectiveRuleCount") && !rsp["EffectiveRuleCount"].IsNull())
    {
        if (!rsp["EffectiveRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveRuleCount = rsp["EffectiveRuleCount"].GetUint64();
        m_effectiveRuleCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeImageDenyRuleSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_ruleTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleTotalCount, allocator);
    }

    if (m_enabledRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnabledRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabledRuleCount, allocator);
    }

    if (m_observedRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObservedRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_observedRuleCount, allocator);
    }

    if (m_effectiveRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveRuleCount, allocator);
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


uint64_t DescribeImageDenyRuleSummaryResponse::GetRuleTotalCount() const
{
    return m_ruleTotalCount;
}

bool DescribeImageDenyRuleSummaryResponse::RuleTotalCountHasBeenSet() const
{
    return m_ruleTotalCountHasBeenSet;
}

uint64_t DescribeImageDenyRuleSummaryResponse::GetEnabledRuleCount() const
{
    return m_enabledRuleCount;
}

bool DescribeImageDenyRuleSummaryResponse::EnabledRuleCountHasBeenSet() const
{
    return m_enabledRuleCountHasBeenSet;
}

uint64_t DescribeImageDenyRuleSummaryResponse::GetObservedRuleCount() const
{
    return m_observedRuleCount;
}

bool DescribeImageDenyRuleSummaryResponse::ObservedRuleCountHasBeenSet() const
{
    return m_observedRuleCountHasBeenSet;
}

uint64_t DescribeImageDenyRuleSummaryResponse::GetEffectiveRuleCount() const
{
    return m_effectiveRuleCount;
}

bool DescribeImageDenyRuleSummaryResponse::EffectiveRuleCountHasBeenSet() const
{
    return m_effectiveRuleCountHasBeenSet;
}


