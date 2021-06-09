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

#include <tencentcloud/iotvideo/v20201215/model/DescribeForwardRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

DescribeForwardRuleRequest::DescribeForwardRuleRequest() :
    m_productIDHasBeenSet(false),
    m_skeyHasBeenSet(false),
    m_queueTypeHasBeenSet(false),
    m_consecretidHasBeenSet(false)
{
}

string DescribeForwardRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productID.c_str(), allocator).Move(), allocator);
    }

    if (m_skeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Skey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skey.c_str(), allocator).Move(), allocator);
    }

    if (m_queueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queueType, allocator);
    }

    if (m_consecretidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Consecretid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consecretid.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeForwardRuleRequest::GetProductID() const
{
    return m_productID;
}

void DescribeForwardRuleRequest::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool DescribeForwardRuleRequest::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

string DescribeForwardRuleRequest::GetSkey() const
{
    return m_skey;
}

void DescribeForwardRuleRequest::SetSkey(const string& _skey)
{
    m_skey = _skey;
    m_skeyHasBeenSet = true;
}

bool DescribeForwardRuleRequest::SkeyHasBeenSet() const
{
    return m_skeyHasBeenSet;
}

uint64_t DescribeForwardRuleRequest::GetQueueType() const
{
    return m_queueType;
}

void DescribeForwardRuleRequest::SetQueueType(const uint64_t& _queueType)
{
    m_queueType = _queueType;
    m_queueTypeHasBeenSet = true;
}

bool DescribeForwardRuleRequest::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

string DescribeForwardRuleRequest::GetConsecretid() const
{
    return m_consecretid;
}

void DescribeForwardRuleRequest::SetConsecretid(const string& _consecretid)
{
    m_consecretid = _consecretid;
    m_consecretidHasBeenSet = true;
}

bool DescribeForwardRuleRequest::ConsecretidHasBeenSet() const
{
    return m_consecretidHasBeenSet;
}


