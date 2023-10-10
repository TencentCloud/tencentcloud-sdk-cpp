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

#include <tencentcloud/cwp/v20180228/model/ModifyWebHookReceiverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyWebHookReceiverRequest::ModifyWebHookReceiverRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_addrHasBeenSet(false),
    m_isModifyHasBeenSet(false)
{
}

string ModifyWebHookReceiverRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_addrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Addr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addr.c_str(), allocator).Move(), allocator);
    }

    if (m_isModifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsModify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isModify, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyWebHookReceiverRequest::GetId() const
{
    return m_id;
}

void ModifyWebHookReceiverRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyWebHookReceiverRequest::GetName() const
{
    return m_name;
}

void ModifyWebHookReceiverRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyWebHookReceiverRequest::GetAddr() const
{
    return m_addr;
}

void ModifyWebHookReceiverRequest::SetAddr(const string& _addr)
{
    m_addr = _addr;
    m_addrHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::AddrHasBeenSet() const
{
    return m_addrHasBeenSet;
}

bool ModifyWebHookReceiverRequest::GetIsModify() const
{
    return m_isModify;
}

void ModifyWebHookReceiverRequest::SetIsModify(const bool& _isModify)
{
    m_isModify = _isModify;
    m_isModifyHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::IsModifyHasBeenSet() const
{
    return m_isModifyHasBeenSet;
}


