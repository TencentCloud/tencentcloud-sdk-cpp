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

#include <tencentcloud/gwlb/v20240906/model/TargetGroupInstanceStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

TargetGroupInstanceStatus::TargetGroupInstanceStatus() :
    m_instanceIpHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome TargetGroupInstanceStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceIp") && !value["InstanceIp"].IsNull())
    {
        if (!value["InstanceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInstanceStatus.InstanceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceIp = string(value["InstanceIp"].GetString());
        m_instanceIpHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInstanceStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetGroupInstanceStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string TargetGroupInstanceStatus::GetInstanceIp() const
{
    return m_instanceIp;
}

void TargetGroupInstanceStatus::SetInstanceIp(const string& _instanceIp)
{
    m_instanceIp = _instanceIp;
    m_instanceIpHasBeenSet = true;
}

bool TargetGroupInstanceStatus::InstanceIpHasBeenSet() const
{
    return m_instanceIpHasBeenSet;
}

string TargetGroupInstanceStatus::GetStatus() const
{
    return m_status;
}

void TargetGroupInstanceStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TargetGroupInstanceStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

