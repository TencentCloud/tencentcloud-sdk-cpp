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

#include <tencentcloud/gse/v20191112/model/PutTimerScalingPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

PutTimerScalingPolicyRequest::PutTimerScalingPolicyRequest() :
    m_timerScalingPolicyHasBeenSet(false)
{
}

string PutTimerScalingPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timerScalingPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerScalingPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timerScalingPolicy.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


TimerScalingPolicy PutTimerScalingPolicyRequest::GetTimerScalingPolicy() const
{
    return m_timerScalingPolicy;
}

void PutTimerScalingPolicyRequest::SetTimerScalingPolicy(const TimerScalingPolicy& _timerScalingPolicy)
{
    m_timerScalingPolicy = _timerScalingPolicy;
    m_timerScalingPolicyHasBeenSet = true;
}

bool PutTimerScalingPolicyRequest::TimerScalingPolicyHasBeenSet() const
{
    return m_timerScalingPolicyHasBeenSet;
}


