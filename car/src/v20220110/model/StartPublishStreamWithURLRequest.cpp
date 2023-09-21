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

#include <tencentcloud/car/v20220110/model/StartPublishStreamWithURLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

StartPublishStreamWithURLRequest::StartPublishStreamWithURLRequest() :
    m_userIdHasBeenSet(false),
    m_publishStreamURLHasBeenSet(false)
{
}

string StartPublishStreamWithURLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_publishStreamURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishStreamURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publishStreamURL.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartPublishStreamWithURLRequest::GetUserId() const
{
    return m_userId;
}

void StartPublishStreamWithURLRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool StartPublishStreamWithURLRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string StartPublishStreamWithURLRequest::GetPublishStreamURL() const
{
    return m_publishStreamURL;
}

void StartPublishStreamWithURLRequest::SetPublishStreamURL(const string& _publishStreamURL)
{
    m_publishStreamURL = _publishStreamURL;
    m_publishStreamURLHasBeenSet = true;
}

bool StartPublishStreamWithURLRequest::PublishStreamURLHasBeenSet() const
{
    return m_publishStreamURLHasBeenSet;
}


