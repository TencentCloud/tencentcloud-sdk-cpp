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

#include <tencentcloud/csip/v20221121/model/TestWebhookReceiverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TestWebhookReceiverRequest::TestWebhookReceiverRequest() :
    m_iDHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

string TestWebhookReceiverRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t TestWebhookReceiverRequest::GetID() const
{
    return m_iD;
}

void TestWebhookReceiverRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool TestWebhookReceiverRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string TestWebhookReceiverRequest::GetData() const
{
    return m_data;
}

void TestWebhookReceiverRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool TestWebhookReceiverRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


