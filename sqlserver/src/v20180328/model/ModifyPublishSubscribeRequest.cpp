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

#include <tencentcloud/sqlserver/v20180328/model/ModifyPublishSubscribeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyPublishSubscribeRequest::ModifyPublishSubscribeRequest() :
    m_instanceIdHasBeenSet(false),
    m_publishSubscribeIdHasBeenSet(false),
    m_databaseTupleSetHasBeenSet(false)
{
}

string ModifyPublishSubscribeRequest::ToJsonString() const
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

    if (m_publishSubscribeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishSubscribeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_publishSubscribeId, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPublishSubscribeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyPublishSubscribeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyPublishSubscribeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyPublishSubscribeRequest::GetPublishSubscribeId() const
{
    return m_publishSubscribeId;
}

void ModifyPublishSubscribeRequest::SetPublishSubscribeId(const int64_t& _publishSubscribeId)
{
    m_publishSubscribeId = _publishSubscribeId;
    m_publishSubscribeIdHasBeenSet = true;
}

bool ModifyPublishSubscribeRequest::PublishSubscribeIdHasBeenSet() const
{
    return m_publishSubscribeIdHasBeenSet;
}

vector<ModifyDataBaseTuple> ModifyPublishSubscribeRequest::GetDatabaseTupleSet() const
{
    return m_databaseTupleSet;
}

void ModifyPublishSubscribeRequest::SetDatabaseTupleSet(const vector<ModifyDataBaseTuple>& _databaseTupleSet)
{
    m_databaseTupleSet = _databaseTupleSet;
    m_databaseTupleSetHasBeenSet = true;
}

bool ModifyPublishSubscribeRequest::DatabaseTupleSetHasBeenSet() const
{
    return m_databaseTupleSetHasBeenSet;
}


