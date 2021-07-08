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

#include <tencentcloud/ssm/v20190923/model/DescribeAsyncRequestInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

DescribeAsyncRequestInfoRequest::DescribeAsyncRequestInfoRequest() :
    m_flowIDHasBeenSet(false)
{
}

string DescribeAsyncRequestInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_flowIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flowID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAsyncRequestInfoRequest::GetFlowID() const
{
    return m_flowID;
}

void DescribeAsyncRequestInfoRequest::SetFlowID(const int64_t& _flowID)
{
    m_flowID = _flowID;
    m_flowIDHasBeenSet = true;
}

bool DescribeAsyncRequestInfoRequest::FlowIDHasBeenSet() const
{
    return m_flowIDHasBeenSet;
}


