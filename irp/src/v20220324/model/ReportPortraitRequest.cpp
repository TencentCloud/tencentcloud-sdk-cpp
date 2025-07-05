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

#include <tencentcloud/irp/v20220324/model/ReportPortraitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Irp::V20220324::Model;
using namespace std;

ReportPortraitRequest::ReportPortraitRequest() :
    m_bidHasBeenSet(false),
    m_portraitListHasBeenSet(false)
{
}

string ReportPortraitRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bid.c_str(), allocator).Move(), allocator);
    }

    if (m_portraitListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_portraitList.begin(); itr != m_portraitList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReportPortraitRequest::GetBid() const
{
    return m_bid;
}

void ReportPortraitRequest::SetBid(const string& _bid)
{
    m_bid = _bid;
    m_bidHasBeenSet = true;
}

bool ReportPortraitRequest::BidHasBeenSet() const
{
    return m_bidHasBeenSet;
}

vector<PortraitInfo> ReportPortraitRequest::GetPortraitList() const
{
    return m_portraitList;
}

void ReportPortraitRequest::SetPortraitList(const vector<PortraitInfo>& _portraitList)
{
    m_portraitList = _portraitList;
    m_portraitListHasBeenSet = true;
}

bool ReportPortraitRequest::PortraitListHasBeenSet() const
{
    return m_portraitListHasBeenSet;
}


