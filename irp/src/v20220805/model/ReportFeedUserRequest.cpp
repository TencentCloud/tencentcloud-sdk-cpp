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

#include <tencentcloud/irp/v20220805/model/ReportFeedUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Irp::V20220805::Model;
using namespace std;

ReportFeedUserRequest::ReportFeedUserRequest() :
    m_instanceIdHasBeenSet(false),
    m_feedUserListHasBeenSet(false)
{
}

string ReportFeedUserRequest::ToJsonString() const
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

    if (m_feedUserListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeedUserList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_feedUserList.begin(); itr != m_feedUserList.end(); ++itr, ++i)
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


string ReportFeedUserRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ReportFeedUserRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ReportFeedUserRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<FeedUserInfo> ReportFeedUserRequest::GetFeedUserList() const
{
    return m_feedUserList;
}

void ReportFeedUserRequest::SetFeedUserList(const vector<FeedUserInfo>& _feedUserList)
{
    m_feedUserList = _feedUserList;
    m_feedUserListHasBeenSet = true;
}

bool ReportFeedUserRequest::FeedUserListHasBeenSet() const
{
    return m_feedUserListHasBeenSet;
}


