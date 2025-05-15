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

#include <tencentcloud/as/v20180419/model/DescribeAutoScalingGroupLastActivitiesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

DescribeAutoScalingGroupLastActivitiesRequest::DescribeAutoScalingGroupLastActivitiesRequest() :
    m_autoScalingGroupIdsHasBeenSet(false),
    m_excludeCancelledActivityHasBeenSet(false)
{
}

string DescribeAutoScalingGroupLastActivitiesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_autoScalingGroupIds.begin(); itr != m_autoScalingGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeCancelledActivityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeCancelledActivity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_excludeCancelledActivity, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeAutoScalingGroupLastActivitiesRequest::GetAutoScalingGroupIds() const
{
    return m_autoScalingGroupIds;
}

void DescribeAutoScalingGroupLastActivitiesRequest::SetAutoScalingGroupIds(const vector<string>& _autoScalingGroupIds)
{
    m_autoScalingGroupIds = _autoScalingGroupIds;
    m_autoScalingGroupIdsHasBeenSet = true;
}

bool DescribeAutoScalingGroupLastActivitiesRequest::AutoScalingGroupIdsHasBeenSet() const
{
    return m_autoScalingGroupIdsHasBeenSet;
}

bool DescribeAutoScalingGroupLastActivitiesRequest::GetExcludeCancelledActivity() const
{
    return m_excludeCancelledActivity;
}

void DescribeAutoScalingGroupLastActivitiesRequest::SetExcludeCancelledActivity(const bool& _excludeCancelledActivity)
{
    m_excludeCancelledActivity = _excludeCancelledActivity;
    m_excludeCancelledActivityHasBeenSet = true;
}

bool DescribeAutoScalingGroupLastActivitiesRequest::ExcludeCancelledActivityHasBeenSet() const
{
    return m_excludeCancelledActivityHasBeenSet;
}


