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

#include <tencentcloud/irp/v20220324/model/ReportActionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Irp::V20220324::Model;
using namespace std;

ReportActionRequest::ReportActionRequest() :
    m_bidHasBeenSet(false),
    m_docBehaviorListHasBeenSet(false)
{
}

string ReportActionRequest::ToJsonString() const
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

    if (m_docBehaviorListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBehaviorList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_docBehaviorList.begin(); itr != m_docBehaviorList.end(); ++itr, ++i)
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


string ReportActionRequest::GetBid() const
{
    return m_bid;
}

void ReportActionRequest::SetBid(const string& _bid)
{
    m_bid = _bid;
    m_bidHasBeenSet = true;
}

bool ReportActionRequest::BidHasBeenSet() const
{
    return m_bidHasBeenSet;
}

vector<DocBehavior> ReportActionRequest::GetDocBehaviorList() const
{
    return m_docBehaviorList;
}

void ReportActionRequest::SetDocBehaviorList(const vector<DocBehavior>& _docBehaviorList)
{
    m_docBehaviorList = _docBehaviorList;
    m_docBehaviorListHasBeenSet = true;
}

bool ReportActionRequest::DocBehaviorListHasBeenSet() const
{
    return m_docBehaviorListHasBeenSet;
}


