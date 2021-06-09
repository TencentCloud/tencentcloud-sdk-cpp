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

#include <tencentcloud/dts/v20180330/model/ModifySubscribeObjectsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20180330::Model;
using namespace std;

ModifySubscribeObjectsRequest::ModifySubscribeObjectsRequest() :
    m_subscribeIdHasBeenSet(false),
    m_subscribeObjectTypeHasBeenSet(false),
    m_objectsHasBeenSet(false)
{
}

string ModifySubscribeObjectsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subscribeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscribeId.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeObjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeObjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subscribeObjectType, allocator);
    }

    if (m_objectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Objects";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_objects.begin(); itr != m_objects.end(); ++itr, ++i)
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


string ModifySubscribeObjectsRequest::GetSubscribeId() const
{
    return m_subscribeId;
}

void ModifySubscribeObjectsRequest::SetSubscribeId(const string& _subscribeId)
{
    m_subscribeId = _subscribeId;
    m_subscribeIdHasBeenSet = true;
}

bool ModifySubscribeObjectsRequest::SubscribeIdHasBeenSet() const
{
    return m_subscribeIdHasBeenSet;
}

int64_t ModifySubscribeObjectsRequest::GetSubscribeObjectType() const
{
    return m_subscribeObjectType;
}

void ModifySubscribeObjectsRequest::SetSubscribeObjectType(const int64_t& _subscribeObjectType)
{
    m_subscribeObjectType = _subscribeObjectType;
    m_subscribeObjectTypeHasBeenSet = true;
}

bool ModifySubscribeObjectsRequest::SubscribeObjectTypeHasBeenSet() const
{
    return m_subscribeObjectTypeHasBeenSet;
}

vector<SubscribeObject> ModifySubscribeObjectsRequest::GetObjects() const
{
    return m_objects;
}

void ModifySubscribeObjectsRequest::SetObjects(const vector<SubscribeObject>& _objects)
{
    m_objects = _objects;
    m_objectsHasBeenSet = true;
}

bool ModifySubscribeObjectsRequest::ObjectsHasBeenSet() const
{
    return m_objectsHasBeenSet;
}


