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

#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupInstanceStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

DescribeTargetGroupInstanceStatusRequest::DescribeTargetGroupInstanceStatusRequest() :
    m_targetGroupIdHasBeenSet(false),
    m_targetGroupInstanceIpsHasBeenSet(false)
{
}

string DescribeTargetGroupInstanceStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetGroupInstanceIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupInstanceIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetGroupInstanceIps.begin(); itr != m_targetGroupInstanceIps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTargetGroupInstanceStatusRequest::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void DescribeTargetGroupInstanceStatusRequest::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool DescribeTargetGroupInstanceStatusRequest::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

vector<string> DescribeTargetGroupInstanceStatusRequest::GetTargetGroupInstanceIps() const
{
    return m_targetGroupInstanceIps;
}

void DescribeTargetGroupInstanceStatusRequest::SetTargetGroupInstanceIps(const vector<string>& _targetGroupInstanceIps)
{
    m_targetGroupInstanceIps = _targetGroupInstanceIps;
    m_targetGroupInstanceIpsHasBeenSet = true;
}

bool DescribeTargetGroupInstanceStatusRequest::TargetGroupInstanceIpsHasBeenSet() const
{
    return m_targetGroupInstanceIpsHasBeenSet;
}


