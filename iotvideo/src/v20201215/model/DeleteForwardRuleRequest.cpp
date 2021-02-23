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

#include <tencentcloud/iotvideo/v20201215/model/DeleteForwardRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace rapidjson;
using namespace std;

DeleteForwardRuleRequest::DeleteForwardRuleRequest() :
    m_productIDHasBeenSet(false),
    m_skeyHasBeenSet(false),
    m_queueTypeHasBeenSet(false),
    m_queueNameHasBeenSet(false)
{
}

string DeleteForwardRuleRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productID.c_str(), allocator).Move(), allocator);
    }

    if (m_skeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Skey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_skey.c_str(), allocator).Move(), allocator);
    }

    if (m_queueTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueueType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queueType, allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_queueName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteForwardRuleRequest::GetProductID() const
{
    return m_productID;
}

void DeleteForwardRuleRequest::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool DeleteForwardRuleRequest::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

string DeleteForwardRuleRequest::GetSkey() const
{
    return m_skey;
}

void DeleteForwardRuleRequest::SetSkey(const string& _skey)
{
    m_skey = _skey;
    m_skeyHasBeenSet = true;
}

bool DeleteForwardRuleRequest::SkeyHasBeenSet() const
{
    return m_skeyHasBeenSet;
}

uint64_t DeleteForwardRuleRequest::GetQueueType() const
{
    return m_queueType;
}

void DeleteForwardRuleRequest::SetQueueType(const uint64_t& _queueType)
{
    m_queueType = _queueType;
    m_queueTypeHasBeenSet = true;
}

bool DeleteForwardRuleRequest::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

string DeleteForwardRuleRequest::GetQueueName() const
{
    return m_queueName;
}

void DeleteForwardRuleRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool DeleteForwardRuleRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}


