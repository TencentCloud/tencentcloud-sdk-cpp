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

#include <tencentcloud/hunyuan/v20230901/model/ImageQuestionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

ImageQuestionRequest::ImageQuestionRequest() :
    m_modelHasBeenSet(false),
    m_messagesHasBeenSet(false),
    m_streamHasBeenSet(false)
{
}

string ImageQuestionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_messagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Messages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_messages.begin(); itr != m_messages.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_stream, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImageQuestionRequest::GetModel() const
{
    return m_model;
}

void ImageQuestionRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ImageQuestionRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<ImageMessage> ImageQuestionRequest::GetMessages() const
{
    return m_messages;
}

void ImageQuestionRequest::SetMessages(const vector<ImageMessage>& _messages)
{
    m_messages = _messages;
    m_messagesHasBeenSet = true;
}

bool ImageQuestionRequest::MessagesHasBeenSet() const
{
    return m_messagesHasBeenSet;
}

bool ImageQuestionRequest::GetStream() const
{
    return m_stream;
}

void ImageQuestionRequest::SetStream(const bool& _stream)
{
    m_stream = _stream;
    m_streamHasBeenSet = true;
}

bool ImageQuestionRequest::StreamHasBeenSet() const
{
    return m_streamHasBeenSet;
}


