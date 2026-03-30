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

#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest() :
    m_workLogIDHasBeenSet(false)
{
}

string DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workLogIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkLogID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workLogID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest::GetWorkLogID() const
{
    return m_workLogID;
}

void DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest::SetWorkLogID(const int64_t& _workLogID)
{
    m_workLogID = _workLogID;
    m_workLogIDHasBeenSet = true;
}

bool DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest::WorkLogIDHasBeenSet() const
{
    return m_workLogIDHasBeenSet;
}


