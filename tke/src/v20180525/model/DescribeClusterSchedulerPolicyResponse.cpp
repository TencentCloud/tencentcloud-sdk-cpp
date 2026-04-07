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

#include <tencentcloud/tke/v20180525/model/DescribeClusterSchedulerPolicyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeClusterSchedulerPolicyResponse::DescribeClusterSchedulerPolicyResponse() :
    m_policyHasBeenSet(false),
    m_schedulerPolicyConfigHasBeenSet(false),
    m_clientConnectionHasBeenSet(false),
    m_extendersHasBeenSet(false),
    m_highPerformanceHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterSchedulerPolicyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Policy") && !rsp["Policy"].IsNull())
    {
        if (!rsp["Policy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policy = string(rsp["Policy"].GetString());
        m_policyHasBeenSet = true;
    }

    if (rsp.HasMember("SchedulerPolicyConfig") && !rsp["SchedulerPolicyConfig"].IsNull())
    {
        if (!rsp["SchedulerPolicyConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulerPolicyConfig` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SchedulerPolicyConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SchedulerPolicyConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_schedulerPolicyConfig.push_back(item);
        }
        m_schedulerPolicyConfigHasBeenSet = true;
    }

    if (rsp.HasMember("ClientConnection") && !rsp["ClientConnection"].IsNull())
    {
        if (!rsp["ClientConnection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClientConnection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientConnection.Deserialize(rsp["ClientConnection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientConnectionHasBeenSet = true;
    }

    if (rsp.HasMember("Extenders") && !rsp["Extenders"].IsNull())
    {
        if (!rsp["Extenders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Extenders` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Extenders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Extenders item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extenders.push_back(item);
        }
        m_extendersHasBeenSet = true;
    }

    if (rsp.HasMember("HighPerformance") && !rsp["HighPerformance"].IsNull())
    {
        if (!rsp["HighPerformance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HighPerformance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_highPerformance = rsp["HighPerformance"].GetBool();
        m_highPerformanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterSchedulerPolicyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policy.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerPolicyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerPolicyConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_schedulerPolicyConfig.begin(); itr != m_schedulerPolicyConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clientConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientConnection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_extendersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extenders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extenders.begin(); itr != m_extenders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_highPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPerformance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highPerformance, allocator);
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


string DescribeClusterSchedulerPolicyResponse::GetPolicy() const
{
    return m_policy;
}

bool DescribeClusterSchedulerPolicyResponse::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

vector<SchedulerPolicyConfig> DescribeClusterSchedulerPolicyResponse::GetSchedulerPolicyConfig() const
{
    return m_schedulerPolicyConfig;
}

bool DescribeClusterSchedulerPolicyResponse::SchedulerPolicyConfigHasBeenSet() const
{
    return m_schedulerPolicyConfigHasBeenSet;
}

ClientConnection DescribeClusterSchedulerPolicyResponse::GetClientConnection() const
{
    return m_clientConnection;
}

bool DescribeClusterSchedulerPolicyResponse::ClientConnectionHasBeenSet() const
{
    return m_clientConnectionHasBeenSet;
}

vector<Extenders> DescribeClusterSchedulerPolicyResponse::GetExtenders() const
{
    return m_extenders;
}

bool DescribeClusterSchedulerPolicyResponse::ExtendersHasBeenSet() const
{
    return m_extendersHasBeenSet;
}

bool DescribeClusterSchedulerPolicyResponse::GetHighPerformance() const
{
    return m_highPerformance;
}

bool DescribeClusterSchedulerPolicyResponse::HighPerformanceHasBeenSet() const
{
    return m_highPerformanceHasBeenSet;
}


