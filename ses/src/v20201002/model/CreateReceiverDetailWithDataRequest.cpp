/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ses/v20201002/model/CreateReceiverDetailWithDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

CreateReceiverDetailWithDataRequest::CreateReceiverDetailWithDataRequest() :
    m_receiverIdHasBeenSet(false),
    m_datasHasBeenSet(false)
{
}

string CreateReceiverDetailWithDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_receiverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_receiverId, allocator);
    }

    if (m_datasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Datas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_datas.begin(); itr != m_datas.end(); ++itr, ++i)
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


uint64_t CreateReceiverDetailWithDataRequest::GetReceiverId() const
{
    return m_receiverId;
}

void CreateReceiverDetailWithDataRequest::SetReceiverId(const uint64_t& _receiverId)
{
    m_receiverId = _receiverId;
    m_receiverIdHasBeenSet = true;
}

bool CreateReceiverDetailWithDataRequest::ReceiverIdHasBeenSet() const
{
    return m_receiverIdHasBeenSet;
}

vector<ReceiverInputData> CreateReceiverDetailWithDataRequest::GetDatas() const
{
    return m_datas;
}

void CreateReceiverDetailWithDataRequest::SetDatas(const vector<ReceiverInputData>& _datas)
{
    m_datas = _datas;
    m_datasHasBeenSet = true;
}

bool CreateReceiverDetailWithDataRequest::DatasHasBeenSet() const
{
    return m_datasHasBeenSet;
}


