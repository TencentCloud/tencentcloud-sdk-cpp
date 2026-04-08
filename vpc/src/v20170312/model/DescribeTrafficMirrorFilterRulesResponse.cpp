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

#include <tencentcloud/vpc/v20170312/model/DescribeTrafficMirrorFilterRulesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeTrafficMirrorFilterRulesResponse::DescribeTrafficMirrorFilterRulesResponse() :
    m_trafficMirrorIdHasBeenSet(false),
    m_ingressFilterRulesHasBeenSet(false),
    m_egressFilterRulesHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTrafficMirrorFilterRulesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TrafficMirrorId") && !rsp["TrafficMirrorId"].IsNull())
    {
        if (!rsp["TrafficMirrorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMirrorId = string(rsp["TrafficMirrorId"].GetString());
        m_trafficMirrorIdHasBeenSet = true;
    }

    if (rsp.HasMember("IngressFilterRules") && !rsp["IngressFilterRules"].IsNull())
    {
        if (!rsp["IngressFilterRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IngressFilterRules` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IngressFilterRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrafficMirrorFilter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ingressFilterRules.push_back(item);
        }
        m_ingressFilterRulesHasBeenSet = true;
    }

    if (rsp.HasMember("EgressFilterRules") && !rsp["EgressFilterRules"].IsNull())
    {
        if (!rsp["EgressFilterRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EgressFilterRules` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EgressFilterRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrafficMirrorFilter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_egressFilterRules.push_back(item);
        }
        m_egressFilterRulesHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTrafficMirrorFilterRulesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_trafficMirrorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficMirrorId.c_str(), allocator).Move(), allocator);
    }

    if (m_ingressFilterRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressFilterRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ingressFilterRules.begin(); itr != m_ingressFilterRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_egressFilterRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EgressFilterRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_egressFilterRules.begin(); itr != m_egressFilterRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
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


string DescribeTrafficMirrorFilterRulesResponse::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

bool DescribeTrafficMirrorFilterRulesResponse::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

vector<TrafficMirrorFilter> DescribeTrafficMirrorFilterRulesResponse::GetIngressFilterRules() const
{
    return m_ingressFilterRules;
}

bool DescribeTrafficMirrorFilterRulesResponse::IngressFilterRulesHasBeenSet() const
{
    return m_ingressFilterRulesHasBeenSet;
}

vector<TrafficMirrorFilter> DescribeTrafficMirrorFilterRulesResponse::GetEgressFilterRules() const
{
    return m_egressFilterRules;
}

bool DescribeTrafficMirrorFilterRulesResponse::EgressFilterRulesHasBeenSet() const
{
    return m_egressFilterRulesHasBeenSet;
}

uint64_t DescribeTrafficMirrorFilterRulesResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeTrafficMirrorFilterRulesResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


