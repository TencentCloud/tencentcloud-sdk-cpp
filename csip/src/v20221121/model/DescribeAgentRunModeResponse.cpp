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

#include <tencentcloud/csip/v20221121/model/DescribeAgentRunModeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAgentRunModeResponse::DescribeAgentRunModeResponse() :
    m_customPolicyHasBeenSet(false),
    m_advanceModeQuuidsHasBeenSet(false),
    m_customModeQuuidsHasBeenSet(false),
    m_enhanceLogModeHasBeenSet(false),
    m_malwarePocModeHasBeenSet(false),
    m_reportSourcePortHasBeenSet(false),
    m_basicPolicyHasBeenSet(false),
    m_advancePolicyHasBeenSet(false),
    m_logCollectSettingsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAgentRunModeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CustomPolicy") && !rsp["CustomPolicy"].IsNull())
    {
        if (!rsp["CustomPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customPolicy.Deserialize(rsp["CustomPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customPolicyHasBeenSet = true;
    }

    if (rsp.HasMember("AdvanceModeQuuids") && !rsp["AdvanceModeQuuids"].IsNull())
    {
        if (!rsp["AdvanceModeQuuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdvanceModeQuuids` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AdvanceModeQuuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_advanceModeQuuids.push_back((*itr).GetString());
        }
        m_advanceModeQuuidsHasBeenSet = true;
    }

    if (rsp.HasMember("CustomModeQuuids") && !rsp["CustomModeQuuids"].IsNull())
    {
        if (!rsp["CustomModeQuuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomModeQuuids` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CustomModeQuuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customModeQuuids.push_back((*itr).GetString());
        }
        m_customModeQuuidsHasBeenSet = true;
    }

    if (rsp.HasMember("EnhanceLogMode") && !rsp["EnhanceLogMode"].IsNull())
    {
        if (!rsp["EnhanceLogMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnhanceLogMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enhanceLogMode = rsp["EnhanceLogMode"].GetUint64();
        m_enhanceLogModeHasBeenSet = true;
    }

    if (rsp.HasMember("MalwarePocMode") && !rsp["MalwarePocMode"].IsNull())
    {
        if (!rsp["MalwarePocMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MalwarePocMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_malwarePocMode = rsp["MalwarePocMode"].GetUint64();
        m_malwarePocModeHasBeenSet = true;
    }

    if (rsp.HasMember("ReportSourcePort") && !rsp["ReportSourcePort"].IsNull())
    {
        if (!rsp["ReportSourcePort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportSourcePort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reportSourcePort = rsp["ReportSourcePort"].GetUint64();
        m_reportSourcePortHasBeenSet = true;
    }

    if (rsp.HasMember("BasicPolicy") && !rsp["BasicPolicy"].IsNull())
    {
        if (!rsp["BasicPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BasicPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicPolicy.Deserialize(rsp["BasicPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicPolicyHasBeenSet = true;
    }

    if (rsp.HasMember("AdvancePolicy") && !rsp["AdvancePolicy"].IsNull())
    {
        if (!rsp["AdvancePolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancePolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advancePolicy.Deserialize(rsp["AdvancePolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancePolicyHasBeenSet = true;
    }

    if (rsp.HasMember("LogCollectSettings") && !rsp["LogCollectSettings"].IsNull())
    {
        if (!rsp["LogCollectSettings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogCollectSettings` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LogCollectSettings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logCollectSettings.push_back((*itr).GetString());
        }
        m_logCollectSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAgentRunModeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_customPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_advanceModeQuuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceModeQuuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_advanceModeQuuids.begin(); itr != m_advanceModeQuuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customModeQuuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomModeQuuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customModeQuuids.begin(); itr != m_customModeQuuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enhanceLogModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhanceLogMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enhanceLogMode, allocator);
    }

    if (m_malwarePocModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MalwarePocMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_malwarePocMode, allocator);
    }

    if (m_reportSourcePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportSourcePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportSourcePort, allocator);
    }

    if (m_basicPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_advancePolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancePolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advancePolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logCollectSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCollectSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logCollectSettings.begin(); itr != m_logCollectSettings.end(); ++itr)
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


CustomAgentRunModePolicy DescribeAgentRunModeResponse::GetCustomPolicy() const
{
    return m_customPolicy;
}

bool DescribeAgentRunModeResponse::CustomPolicyHasBeenSet() const
{
    return m_customPolicyHasBeenSet;
}

vector<string> DescribeAgentRunModeResponse::GetAdvanceModeQuuids() const
{
    return m_advanceModeQuuids;
}

bool DescribeAgentRunModeResponse::AdvanceModeQuuidsHasBeenSet() const
{
    return m_advanceModeQuuidsHasBeenSet;
}

vector<string> DescribeAgentRunModeResponse::GetCustomModeQuuids() const
{
    return m_customModeQuuids;
}

bool DescribeAgentRunModeResponse::CustomModeQuuidsHasBeenSet() const
{
    return m_customModeQuuidsHasBeenSet;
}

uint64_t DescribeAgentRunModeResponse::GetEnhanceLogMode() const
{
    return m_enhanceLogMode;
}

bool DescribeAgentRunModeResponse::EnhanceLogModeHasBeenSet() const
{
    return m_enhanceLogModeHasBeenSet;
}

uint64_t DescribeAgentRunModeResponse::GetMalwarePocMode() const
{
    return m_malwarePocMode;
}

bool DescribeAgentRunModeResponse::MalwarePocModeHasBeenSet() const
{
    return m_malwarePocModeHasBeenSet;
}

uint64_t DescribeAgentRunModeResponse::GetReportSourcePort() const
{
    return m_reportSourcePort;
}

bool DescribeAgentRunModeResponse::ReportSourcePortHasBeenSet() const
{
    return m_reportSourcePortHasBeenSet;
}

CustomAgentRunModePolicy DescribeAgentRunModeResponse::GetBasicPolicy() const
{
    return m_basicPolicy;
}

bool DescribeAgentRunModeResponse::BasicPolicyHasBeenSet() const
{
    return m_basicPolicyHasBeenSet;
}

CustomAgentRunModePolicy DescribeAgentRunModeResponse::GetAdvancePolicy() const
{
    return m_advancePolicy;
}

bool DescribeAgentRunModeResponse::AdvancePolicyHasBeenSet() const
{
    return m_advancePolicyHasBeenSet;
}

vector<string> DescribeAgentRunModeResponse::GetLogCollectSettings() const
{
    return m_logCollectSettings;
}

bool DescribeAgentRunModeResponse::LogCollectSettingsHasBeenSet() const
{
    return m_logCollectSettingsHasBeenSet;
}


