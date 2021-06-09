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

#include <tencentcloud/as/v20180419/model/ScaleOutInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

ScaleOutInstancesRequest::ScaleOutInstancesRequest() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_scaleOutNumberHasBeenSet(false)
{
}

string ScaleOutInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleOutNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleOutNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scaleOutNumber, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleOutInstancesRequest::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void ScaleOutInstancesRequest::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool ScaleOutInstancesRequest::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

uint64_t ScaleOutInstancesRequest::GetScaleOutNumber() const
{
    return m_scaleOutNumber;
}

void ScaleOutInstancesRequest::SetScaleOutNumber(const uint64_t& _scaleOutNumber)
{
    m_scaleOutNumber = _scaleOutNumber;
    m_scaleOutNumberHasBeenSet = true;
}

bool ScaleOutInstancesRequest::ScaleOutNumberHasBeenSet() const
{
    return m_scaleOutNumberHasBeenSet;
}


