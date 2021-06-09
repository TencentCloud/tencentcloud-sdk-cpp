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

#include <tencentcloud/tdmq/v20200217/model/PublishCmqMsgRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

PublishCmqMsgRequest::PublishCmqMsgRequest() :
    m_topicNameHasBeenSet(false),
    m_msgContentHasBeenSet(false),
    m_msgTagHasBeenSet(false)
{
}

string PublishCmqMsgRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_msgContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgContent.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_msgTag.begin(); itr != m_msgTag.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PublishCmqMsgRequest::GetTopicName() const
{
    return m_topicName;
}

void PublishCmqMsgRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool PublishCmqMsgRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string PublishCmqMsgRequest::GetMsgContent() const
{
    return m_msgContent;
}

void PublishCmqMsgRequest::SetMsgContent(const string& _msgContent)
{
    m_msgContent = _msgContent;
    m_msgContentHasBeenSet = true;
}

bool PublishCmqMsgRequest::MsgContentHasBeenSet() const
{
    return m_msgContentHasBeenSet;
}

vector<string> PublishCmqMsgRequest::GetMsgTag() const
{
    return m_msgTag;
}

void PublishCmqMsgRequest::SetMsgTag(const vector<string>& _msgTag)
{
    m_msgTag = _msgTag;
    m_msgTagHasBeenSet = true;
}

bool PublishCmqMsgRequest::MsgTagHasBeenSet() const
{
    return m_msgTagHasBeenSet;
}


