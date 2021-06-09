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

#include <tencentcloud/tcaplusdb/v20190823/model/DescribeMachineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

DescribeMachineRequest::DescribeMachineRequest() :
    m_ipv6EnableHasBeenSet(false)
{
}

string DescribeMachineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ipv6EnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipv6Enable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeMachineRequest::GetIpv6Enable() const
{
    return m_ipv6Enable;
}

void DescribeMachineRequest::SetIpv6Enable(const int64_t& _ipv6Enable)
{
    m_ipv6Enable = _ipv6Enable;
    m_ipv6EnableHasBeenSet = true;
}

bool DescribeMachineRequest::Ipv6EnableHasBeenSet() const
{
    return m_ipv6EnableHasBeenSet;
}


