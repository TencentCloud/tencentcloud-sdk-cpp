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

#include <tencentcloud/csip/v20221121/model/DescribeAgentRunPolicyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAgentRunPolicyResponse::DescribeAgentRunPolicyResponse() :
    m_basicPolicyHasBeenSet(false),
    m_advancePolicyHasBeenSet(false),
    m_customPolicyHasBeenSet(false),
    m_customModeInstanceIDsHasBeenSet(false),
    m_advanceModeInstanceIDsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAgentRunPolicyResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("CustomModeInstanceIDs") && !rsp["CustomModeInstanceIDs"].IsNull())
    {
        if (!rsp["CustomModeInstanceIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomModeInstanceIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CustomModeInstanceIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customModeInstanceIDs.push_back((*itr).GetString());
        }
        m_customModeInstanceIDsHasBeenSet = true;
    }

    if (rsp.HasMember("AdvanceModeInstanceIDs") && !rsp["AdvanceModeInstanceIDs"].IsNull())
    {
        if (!rsp["AdvanceModeInstanceIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdvanceModeInstanceIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AdvanceModeInstanceIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_advanceModeInstanceIDs.push_back((*itr).GetString());
        }
        m_advanceModeInstanceIDsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAgentRunPolicyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_customPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customModeInstanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomModeInstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customModeInstanceIDs.begin(); itr != m_customModeInstanceIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_advanceModeInstanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceModeInstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_advanceModeInstanceIDs.begin(); itr != m_advanceModeInstanceIDs.end(); ++itr)
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


AgentRunModePolicy DescribeAgentRunPolicyResponse::GetBasicPolicy() const
{
    return m_basicPolicy;
}

bool DescribeAgentRunPolicyResponse::BasicPolicyHasBeenSet() const
{
    return m_basicPolicyHasBeenSet;
}

AgentRunModePolicy DescribeAgentRunPolicyResponse::GetAdvancePolicy() const
{
    return m_advancePolicy;
}

bool DescribeAgentRunPolicyResponse::AdvancePolicyHasBeenSet() const
{
    return m_advancePolicyHasBeenSet;
}

AgentRunModePolicy DescribeAgentRunPolicyResponse::GetCustomPolicy() const
{
    return m_customPolicy;
}

bool DescribeAgentRunPolicyResponse::CustomPolicyHasBeenSet() const
{
    return m_customPolicyHasBeenSet;
}

vector<string> DescribeAgentRunPolicyResponse::GetCustomModeInstanceIDs() const
{
    return m_customModeInstanceIDs;
}

bool DescribeAgentRunPolicyResponse::CustomModeInstanceIDsHasBeenSet() const
{
    return m_customModeInstanceIDsHasBeenSet;
}

vector<string> DescribeAgentRunPolicyResponse::GetAdvanceModeInstanceIDs() const
{
    return m_advanceModeInstanceIDs;
}

bool DescribeAgentRunPolicyResponse::AdvanceModeInstanceIDsHasBeenSet() const
{
    return m_advanceModeInstanceIDsHasBeenSet;
}


