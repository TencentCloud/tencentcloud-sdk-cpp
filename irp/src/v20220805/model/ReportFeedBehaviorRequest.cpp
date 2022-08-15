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

#include <tencentcloud/irp/v20220805/model/ReportFeedBehaviorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Irp::V20220805::Model;
using namespace std;

ReportFeedBehaviorRequest::ReportFeedBehaviorRequest() :
    m_instanceIdHasBeenSet(false),
    m_feedBehaviorListHasBeenSet(false)
{
}

string ReportFeedBehaviorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_feedBehaviorListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeedBehaviorList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_feedBehaviorList.begin(); itr != m_feedBehaviorList.end(); ++itr, ++i)
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


string ReportFeedBehaviorRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ReportFeedBehaviorRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ReportFeedBehaviorRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<FeedBehaviorInfo> ReportFeedBehaviorRequest::GetFeedBehaviorList() const
{
    return m_feedBehaviorList;
}

void ReportFeedBehaviorRequest::SetFeedBehaviorList(const vector<FeedBehaviorInfo>& _feedBehaviorList)
{
    m_feedBehaviorList = _feedBehaviorList;
    m_feedBehaviorListHasBeenSet = true;
}

bool ReportFeedBehaviorRequest::FeedBehaviorListHasBeenSet() const
{
    return m_feedBehaviorListHasBeenSet;
}


