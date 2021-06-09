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

#include <tencentcloud/sqlserver/v20180328/model/ModifyPublishSubscribeNameRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyPublishSubscribeNameRequest::ModifyPublishSubscribeNameRequest() :
    m_publishSubscribeIdHasBeenSet(false),
    m_publishSubscribeNameHasBeenSet(false)
{
}

string ModifyPublishSubscribeNameRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_publishSubscribeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishSubscribeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_publishSubscribeId, allocator);
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


uint64_t ModifyPublishSubscribeNameRequest::GetPublishSubscribeId() const
{
    return m_publishSubscribeId;
}

void ModifyPublishSubscribeNameRequest::SetPublishSubscribeId(const uint64_t& _publishSubscribeId)
{
    m_publishSubscribeId = _publishSubscribeId;
    m_publishSubscribeIdHasBeenSet = true;
}

bool ModifyPublishSubscribeNameRequest::PublishSubscribeIdHasBeenSet() const
{
    return m_publishSubscribeIdHasBeenSet;
}

string ModifyPublishSubscribeNameRequest::GetPublishSubscribeName() const
{
    return m_publishSubscribeName;
}

void ModifyPublishSubscribeNameRequest::SetPublishSubscribeName(const string& _publishSubscribeName)
{
    m_publishSubscribeName = _publishSubscribeName;
    m_publishSubscribeNameHasBeenSet = true;
}

bool ModifyPublishSubscribeNameRequest::PublishSubscribeNameHasBeenSet() const
{
    return m_publishSubscribeNameHasBeenSet;
}


