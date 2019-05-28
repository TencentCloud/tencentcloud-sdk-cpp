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

#include <tencentcloud/cdb/v20170320/model/InstanceRebootTime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

InstanceRebootTime::InstanceRebootTime() :
    m_instanceIdHasBeenSet(false),
    m_timeInSecondsHasBeenSet(false)
{
}

CoreInternalOutcome InstanceRebootTime::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceRebootTime.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TimeInSeconds") && !value["TimeInSeconds"].IsNull())
    {
        if (!value["TimeInSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceRebootTime.TimeInSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeInSeconds = value["TimeInSeconds"].GetInt64();
        m_timeInSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceRebootTime::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeInSecondsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeInSeconds, allocator);
    }

}


string InstanceRebootTime::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceRebootTime::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceRebootTime::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t InstanceRebootTime::GetTimeInSeconds() const
{
    return m_timeInSeconds;
}

void InstanceRebootTime::SetTimeInSeconds(const int64_t& _timeInSeconds)
{
    m_timeInSeconds = _timeInSeconds;
    m_timeInSecondsHasBeenSet = true;
}

bool InstanceRebootTime::TimeInSecondsHasBeenSet() const
{
    return m_timeInSecondsHasBeenSet;
}

