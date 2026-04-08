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

#include <tencentcloud/vpc/v20170312/model/DeleteTrafficMirrorFilterRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DeleteTrafficMirrorFilterRulesRequest::DeleteTrafficMirrorFilterRulesRequest() :
    m_trafficMirrorIdHasBeenSet(false),
    m_ingressFilterRuleIdsHasBeenSet(false),
    m_egressFilterRuleIdsHasBeenSet(false)
{
}

string DeleteTrafficMirrorFilterRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trafficMirrorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trafficMirrorId.c_str(), allocator).Move(), allocator);
    }

    if (m_ingressFilterRuleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressFilterRuleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ingressFilterRuleIds.begin(); itr != m_ingressFilterRuleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_egressFilterRuleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EgressFilterRuleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_egressFilterRuleIds.begin(); itr != m_egressFilterRuleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteTrafficMirrorFilterRulesRequest::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

void DeleteTrafficMirrorFilterRulesRequest::SetTrafficMirrorId(const string& _trafficMirrorId)
{
    m_trafficMirrorId = _trafficMirrorId;
    m_trafficMirrorIdHasBeenSet = true;
}

bool DeleteTrafficMirrorFilterRulesRequest::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

vector<string> DeleteTrafficMirrorFilterRulesRequest::GetIngressFilterRuleIds() const
{
    return m_ingressFilterRuleIds;
}

void DeleteTrafficMirrorFilterRulesRequest::SetIngressFilterRuleIds(const vector<string>& _ingressFilterRuleIds)
{
    m_ingressFilterRuleIds = _ingressFilterRuleIds;
    m_ingressFilterRuleIdsHasBeenSet = true;
}

bool DeleteTrafficMirrorFilterRulesRequest::IngressFilterRuleIdsHasBeenSet() const
{
    return m_ingressFilterRuleIdsHasBeenSet;
}

vector<string> DeleteTrafficMirrorFilterRulesRequest::GetEgressFilterRuleIds() const
{
    return m_egressFilterRuleIds;
}

void DeleteTrafficMirrorFilterRulesRequest::SetEgressFilterRuleIds(const vector<string>& _egressFilterRuleIds)
{
    m_egressFilterRuleIds = _egressFilterRuleIds;
    m_egressFilterRuleIdsHasBeenSet = true;
}

bool DeleteTrafficMirrorFilterRulesRequest::EgressFilterRuleIdsHasBeenSet() const
{
    return m_egressFilterRuleIdsHasBeenSet;
}


