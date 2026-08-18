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

#include <tencentcloud/wedata/v20210820/model/RealtimeTaskInstanceVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RealtimeTaskInstanceVO::RealtimeTaskInstanceVO() :
    m_instanceDateHasBeenSet(false),
    m_runningOrderIdHasBeenSet(false)
{
}

CoreInternalOutcome RealtimeTaskInstanceVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceDate") && !value["InstanceDate"].IsNull())
    {
        if (!value["InstanceDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeTaskInstanceVO.InstanceDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceDate = string(value["InstanceDate"].GetString());
        m_instanceDateHasBeenSet = true;
    }

    if (value.HasMember("RunningOrderId") && !value["RunningOrderId"].IsNull())
    {
        if (!value["RunningOrderId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeTaskInstanceVO.RunningOrderId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningOrderId = value["RunningOrderId"].GetInt64();
        m_runningOrderIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RealtimeTaskInstanceVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceDate.c_str(), allocator).Move(), allocator);
    }

    if (m_runningOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningOrderId, allocator);
    }

}


string RealtimeTaskInstanceVO::GetInstanceDate() const
{
    return m_instanceDate;
}

void RealtimeTaskInstanceVO::SetInstanceDate(const string& _instanceDate)
{
    m_instanceDate = _instanceDate;
    m_instanceDateHasBeenSet = true;
}

bool RealtimeTaskInstanceVO::InstanceDateHasBeenSet() const
{
    return m_instanceDateHasBeenSet;
}

int64_t RealtimeTaskInstanceVO::GetRunningOrderId() const
{
    return m_runningOrderId;
}

void RealtimeTaskInstanceVO::SetRunningOrderId(const int64_t& _runningOrderId)
{
    m_runningOrderId = _runningOrderId;
    m_runningOrderIdHasBeenSet = true;
}

bool RealtimeTaskInstanceVO::RunningOrderIdHasBeenSet() const
{
    return m_runningOrderIdHasBeenSet;
}

