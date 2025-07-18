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

#include <tencentcloud/vpc/v20170312/model/ResetTrafficMirrorSrcsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ResetTrafficMirrorSrcsRequest::ResetTrafficMirrorSrcsRequest() :
    m_trafficMirrorIdHasBeenSet(false),
    m_collectorSrcsHasBeenSet(false)
{
}

string ResetTrafficMirrorSrcsRequest::ToJsonString() const
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

    if (m_collectorSrcsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorSrcs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_collectorSrcs.begin(); itr != m_collectorSrcs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResetTrafficMirrorSrcsRequest::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

void ResetTrafficMirrorSrcsRequest::SetTrafficMirrorId(const string& _trafficMirrorId)
{
    m_trafficMirrorId = _trafficMirrorId;
    m_trafficMirrorIdHasBeenSet = true;
}

bool ResetTrafficMirrorSrcsRequest::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

vector<string> ResetTrafficMirrorSrcsRequest::GetCollectorSrcs() const
{
    return m_collectorSrcs;
}

void ResetTrafficMirrorSrcsRequest::SetCollectorSrcs(const vector<string>& _collectorSrcs)
{
    m_collectorSrcs = _collectorSrcs;
    m_collectorSrcsHasBeenSet = true;
}

bool ResetTrafficMirrorSrcsRequest::CollectorSrcsHasBeenSet() const
{
    return m_collectorSrcsHasBeenSet;
}


