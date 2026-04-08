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

#include <tencentcloud/vpc/v20170312/model/CreateTrafficMirrorFilterRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateTrafficMirrorFilterRulesRequest::CreateTrafficMirrorFilterRulesRequest() :
    m_trafficMirrorIdHasBeenSet(false),
    m_ingressFilterRulesHasBeenSet(false),
    m_egressFilterRulesHasBeenSet(false)
{
}

string CreateTrafficMirrorFilterRulesRequest::ToJsonString() const
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

    if (m_ingressFilterRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressFilterRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ingressFilterRules.begin(); itr != m_ingressFilterRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_egressFilterRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EgressFilterRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_egressFilterRules.begin(); itr != m_egressFilterRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTrafficMirrorFilterRulesRequest::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

void CreateTrafficMirrorFilterRulesRequest::SetTrafficMirrorId(const string& _trafficMirrorId)
{
    m_trafficMirrorId = _trafficMirrorId;
    m_trafficMirrorIdHasBeenSet = true;
}

bool CreateTrafficMirrorFilterRulesRequest::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

vector<TrafficMirrorFilter> CreateTrafficMirrorFilterRulesRequest::GetIngressFilterRules() const
{
    return m_ingressFilterRules;
}

void CreateTrafficMirrorFilterRulesRequest::SetIngressFilterRules(const vector<TrafficMirrorFilter>& _ingressFilterRules)
{
    m_ingressFilterRules = _ingressFilterRules;
    m_ingressFilterRulesHasBeenSet = true;
}

bool CreateTrafficMirrorFilterRulesRequest::IngressFilterRulesHasBeenSet() const
{
    return m_ingressFilterRulesHasBeenSet;
}

vector<TrafficMirrorFilter> CreateTrafficMirrorFilterRulesRequest::GetEgressFilterRules() const
{
    return m_egressFilterRules;
}

void CreateTrafficMirrorFilterRulesRequest::SetEgressFilterRules(const vector<TrafficMirrorFilter>& _egressFilterRules)
{
    m_egressFilterRules = _egressFilterRules;
    m_egressFilterRulesHasBeenSet = true;
}

bool CreateTrafficMirrorFilterRulesRequest::EgressFilterRulesHasBeenSet() const
{
    return m_egressFilterRulesHasBeenSet;
}


