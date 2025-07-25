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

#include <tencentcloud/tcss/v20201101/model/DescribeVirusEventTendencyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVirusEventTendencyRequest::DescribeVirusEventTendencyRequest() :
    m_tendencyPeriodHasBeenSet(false)
{
}

string DescribeVirusEventTendencyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tendencyPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TendencyPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tendencyPeriod, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeVirusEventTendencyRequest::GetTendencyPeriod() const
{
    return m_tendencyPeriod;
}

void DescribeVirusEventTendencyRequest::SetTendencyPeriod(const uint64_t& _tendencyPeriod)
{
    m_tendencyPeriod = _tendencyPeriod;
    m_tendencyPeriodHasBeenSet = true;
}

bool DescribeVirusEventTendencyRequest::TendencyPeriodHasBeenSet() const
{
    return m_tendencyPeriodHasBeenSet;
}


