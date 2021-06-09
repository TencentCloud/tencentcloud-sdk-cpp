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

#include <tencentcloud/sqlserver/v20180328/model/CreatePublishSubscribeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

CreatePublishSubscribeRequest::CreatePublishSubscribeRequest() :
    m_publishInstanceIdHasBeenSet(false),
    m_subscribeInstanceIdHasBeenSet(false),
    m_databaseTupleSetHasBeenSet(false),
    m_publishSubscribeNameHasBeenSet(false)
{
}

string CreatePublishSubscribeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_publishInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publishInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscribeInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseTupleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseTupleSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databaseTupleSet.begin(); itr != m_databaseTupleSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_publishSubscribeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishSubscribeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publishSubscribeName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePublishSubscribeRequest::GetPublishInstanceId() const
{
    return m_publishInstanceId;
}

void CreatePublishSubscribeRequest::SetPublishInstanceId(const string& _publishInstanceId)
{
    m_publishInstanceId = _publishInstanceId;
    m_publishInstanceIdHasBeenSet = true;
}

bool CreatePublishSubscribeRequest::PublishInstanceIdHasBeenSet() const
{
    return m_publishInstanceIdHasBeenSet;
}

string CreatePublishSubscribeRequest::GetSubscribeInstanceId() const
{
    return m_subscribeInstanceId;
}

void CreatePublishSubscribeRequest::SetSubscribeInstanceId(const string& _subscribeInstanceId)
{
    m_subscribeInstanceId = _subscribeInstanceId;
    m_subscribeInstanceIdHasBeenSet = true;
}

bool CreatePublishSubscribeRequest::SubscribeInstanceIdHasBeenSet() const
{
    return m_subscribeInstanceIdHasBeenSet;
}

vector<DatabaseTuple> CreatePublishSubscribeRequest::GetDatabaseTupleSet() const
{
    return m_databaseTupleSet;
}

void CreatePublishSubscribeRequest::SetDatabaseTupleSet(const vector<DatabaseTuple>& _databaseTupleSet)
{
    m_databaseTupleSet = _databaseTupleSet;
    m_databaseTupleSetHasBeenSet = true;
}

bool CreatePublishSubscribeRequest::DatabaseTupleSetHasBeenSet() const
{
    return m_databaseTupleSetHasBeenSet;
}

string CreatePublishSubscribeRequest::GetPublishSubscribeName() const
{
    return m_publishSubscribeName;
}

void CreatePublishSubscribeRequest::SetPublishSubscribeName(const string& _publishSubscribeName)
{
    m_publishSubscribeName = _publishSubscribeName;
    m_publishSubscribeNameHasBeenSet = true;
}

bool CreatePublishSubscribeRequest::PublishSubscribeNameHasBeenSet() const
{
    return m_publishSubscribeNameHasBeenSet;
}


