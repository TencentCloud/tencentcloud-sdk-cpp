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

#include <tencentcloud/monitor/v20180724/model/InstanceGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

InstanceGroup::InstanceGroup() :
    m_instanceGroupIdHasBeenSet(false),
    m_instanceGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome InstanceGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceGroupId") && !value["InstanceGroupId"].IsNull())
    {
        if (!value["InstanceGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceGroup.InstanceGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceGroupId = value["InstanceGroupId"].GetInt64();
        m_instanceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceGroupName") && !value["InstanceGroupName"].IsNull())
    {
        if (!value["InstanceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceGroup.InstanceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceGroupName = string(value["InstanceGroupName"].GetString());
        m_instanceGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceGroupId, allocator);
    }

    if (m_instanceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceGroupName.c_str(), allocator).Move(), allocator);
    }

}


int64_t InstanceGroup::GetInstanceGroupId() const
{
    return m_instanceGroupId;
}

void InstanceGroup::SetInstanceGroupId(const int64_t& _instanceGroupId)
{
    m_instanceGroupId = _instanceGroupId;
    m_instanceGroupIdHasBeenSet = true;
}

bool InstanceGroup::InstanceGroupIdHasBeenSet() const
{
    return m_instanceGroupIdHasBeenSet;
}

string InstanceGroup::GetInstanceGroupName() const
{
    return m_instanceGroupName;
}

void InstanceGroup::SetInstanceGroupName(const string& _instanceGroupName)
{
    m_instanceGroupName = _instanceGroupName;
    m_instanceGroupNameHasBeenSet = true;
}

bool InstanceGroup::InstanceGroupNameHasBeenSet() const
{
    return m_instanceGroupNameHasBeenSet;
}

