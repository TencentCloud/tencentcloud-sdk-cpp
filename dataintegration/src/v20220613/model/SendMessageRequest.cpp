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

#include <tencentcloud/dataintegration/v20220613/model/SendMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dataintegration::V20220613::Model;
using namespace std;

SendMessageRequest::SendMessageRequest() :
    m_dataHubIdHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

string SendMessageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataHubIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataHubId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataHubId.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_message.begin(); itr != m_message.end(); ++itr, ++i)
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


string SendMessageRequest::GetDataHubId() const
{
    return m_dataHubId;
}

void SendMessageRequest::SetDataHubId(const string& _dataHubId)
{
    m_dataHubId = _dataHubId;
    m_dataHubIdHasBeenSet = true;
}

bool SendMessageRequest::DataHubIdHasBeenSet() const
{
    return m_dataHubIdHasBeenSet;
}

vector<BatchContent> SendMessageRequest::GetMessage() const
{
    return m_message;
}

void SendMessageRequest::SetMessage(const vector<BatchContent>& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SendMessageRequest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}


