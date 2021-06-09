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

#include <tencentcloud/cat/v20180409/model/DescribeAlarmTopicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

DescribeAlarmTopicRequest::DescribeAlarmTopicRequest() :
    m_needAddHasBeenSet(false)
{
}

string DescribeAlarmTopicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_needAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedAdd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needAdd, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeAlarmTopicRequest::GetNeedAdd() const
{
    return m_needAdd;
}

void DescribeAlarmTopicRequest::SetNeedAdd(const uint64_t& _needAdd)
{
    m_needAdd = _needAdd;
    m_needAddHasBeenSet = true;
}

bool DescribeAlarmTopicRequest::NeedAddHasBeenSet() const
{
    return m_needAddHasBeenSet;
}


