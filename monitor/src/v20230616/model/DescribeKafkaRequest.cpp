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

#include <tencentcloud/monitor/v20230616/model/DescribeKafkaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

DescribeKafkaRequest::DescribeKafkaRequest() :
    m_brokersHasBeenSet(false),
    m_dispenseRegionsHasBeenSet(false)
{
}

string DescribeKafkaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_brokersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brokers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brokers.c_str(), allocator).Move(), allocator);
    }

    if (m_dispenseRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispenseRegions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dispenseRegions.begin(); itr != m_dispenseRegions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeKafkaRequest::GetBrokers() const
{
    return m_brokers;
}

void DescribeKafkaRequest::SetBrokers(const string& _brokers)
{
    m_brokers = _brokers;
    m_brokersHasBeenSet = true;
}

bool DescribeKafkaRequest::BrokersHasBeenSet() const
{
    return m_brokersHasBeenSet;
}

vector<string> DescribeKafkaRequest::GetDispenseRegions() const
{
    return m_dispenseRegions;
}

void DescribeKafkaRequest::SetDispenseRegions(const vector<string>& _dispenseRegions)
{
    m_dispenseRegions = _dispenseRegions;
    m_dispenseRegionsHasBeenSet = true;
}

bool DescribeKafkaRequest::DispenseRegionsHasBeenSet() const
{
    return m_dispenseRegionsHasBeenSet;
}


