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

#include <tencentcloud/as/v20180419/model/CreateAutoScalingGroupFromInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

CreateAutoScalingGroupFromInstanceRequest::CreateAutoScalingGroupFromInstanceRequest() :
    m_autoScalingGroupNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_desiredCapacityHasBeenSet(false),
    m_inheritInstanceTagHasBeenSet(false)
{
}

string CreateAutoScalingGroupFromInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minSize, allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_desiredCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredCapacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_desiredCapacity, allocator);
    }

    if (m_inheritInstanceTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InheritInstanceTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_inheritInstanceTag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAutoScalingGroupFromInstanceRequest::GetAutoScalingGroupName() const
{
    return m_autoScalingGroupName;
}

void CreateAutoScalingGroupFromInstanceRequest::SetAutoScalingGroupName(const string& _autoScalingGroupName)
{
    m_autoScalingGroupName = _autoScalingGroupName;
    m_autoScalingGroupNameHasBeenSet = true;
}

bool CreateAutoScalingGroupFromInstanceRequest::AutoScalingGroupNameHasBeenSet() const
{
    return m_autoScalingGroupNameHasBeenSet;
}

string CreateAutoScalingGroupFromInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateAutoScalingGroupFromInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateAutoScalingGroupFromInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t CreateAutoScalingGroupFromInstanceRequest::GetMinSize() const
{
    return m_minSize;
}

void CreateAutoScalingGroupFromInstanceRequest::SetMinSize(const int64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool CreateAutoScalingGroupFromInstanceRequest::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

int64_t CreateAutoScalingGroupFromInstanceRequest::GetMaxSize() const
{
    return m_maxSize;
}

void CreateAutoScalingGroupFromInstanceRequest::SetMaxSize(const int64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool CreateAutoScalingGroupFromInstanceRequest::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

int64_t CreateAutoScalingGroupFromInstanceRequest::GetDesiredCapacity() const
{
    return m_desiredCapacity;
}

void CreateAutoScalingGroupFromInstanceRequest::SetDesiredCapacity(const int64_t& _desiredCapacity)
{
    m_desiredCapacity = _desiredCapacity;
    m_desiredCapacityHasBeenSet = true;
}

bool CreateAutoScalingGroupFromInstanceRequest::DesiredCapacityHasBeenSet() const
{
    return m_desiredCapacityHasBeenSet;
}

bool CreateAutoScalingGroupFromInstanceRequest::GetInheritInstanceTag() const
{
    return m_inheritInstanceTag;
}

void CreateAutoScalingGroupFromInstanceRequest::SetInheritInstanceTag(const bool& _inheritInstanceTag)
{
    m_inheritInstanceTag = _inheritInstanceTag;
    m_inheritInstanceTagHasBeenSet = true;
}

bool CreateAutoScalingGroupFromInstanceRequest::InheritInstanceTagHasBeenSet() const
{
    return m_inheritInstanceTagHasBeenSet;
}


