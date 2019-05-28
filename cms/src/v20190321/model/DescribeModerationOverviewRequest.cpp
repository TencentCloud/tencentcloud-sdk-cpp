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

#include <tencentcloud/cms/v20190321/model/DescribeModerationOverviewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

DescribeModerationOverviewRequest::DescribeModerationOverviewRequest() :
    m_dateHasBeenSet(false),
    m_serviceTypesHasBeenSet(false),
    m_channelsHasBeenSet(false)
{
}

string DescribeModerationOverviewRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_serviceTypes.begin(); itr != m_serviceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_channelsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Channels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_channels.begin(); itr != m_channels.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeModerationOverviewRequest::GetDate() const
{
    return m_date;
}

void DescribeModerationOverviewRequest::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DescribeModerationOverviewRequest::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

vector<string> DescribeModerationOverviewRequest::GetServiceTypes() const
{
    return m_serviceTypes;
}

void DescribeModerationOverviewRequest::SetServiceTypes(const vector<string>& _serviceTypes)
{
    m_serviceTypes = _serviceTypes;
    m_serviceTypesHasBeenSet = true;
}

bool DescribeModerationOverviewRequest::ServiceTypesHasBeenSet() const
{
    return m_serviceTypesHasBeenSet;
}

vector<uint64_t> DescribeModerationOverviewRequest::GetChannels() const
{
    return m_channels;
}

void DescribeModerationOverviewRequest::SetChannels(const vector<uint64_t>& _channels)
{
    m_channels = _channels;
    m_channelsHasBeenSet = true;
}

bool DescribeModerationOverviewRequest::ChannelsHasBeenSet() const
{
    return m_channelsHasBeenSet;
}


