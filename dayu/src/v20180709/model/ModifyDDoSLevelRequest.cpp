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

#include <tencentcloud/dayu/v20180709/model/ModifyDDoSLevelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

ModifyDDoSLevelRequest::ModifyDDoSLevelRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_dDoSLevelHasBeenSet(false)
{
}

string ModifyDDoSLevelRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_dDoSLevelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DDoSLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dDoSLevel.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDDoSLevelRequest::GetBusiness() const
{
    return m_business;
}

void ModifyDDoSLevelRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ModifyDDoSLevelRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string ModifyDDoSLevelRequest::GetId() const
{
    return m_id;
}

void ModifyDDoSLevelRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyDDoSLevelRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyDDoSLevelRequest::GetMethod() const
{
    return m_method;
}

void ModifyDDoSLevelRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ModifyDDoSLevelRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ModifyDDoSLevelRequest::GetDDoSLevel() const
{
    return m_dDoSLevel;
}

void ModifyDDoSLevelRequest::SetDDoSLevel(const string& _dDoSLevel)
{
    m_dDoSLevel = _dDoSLevel;
    m_dDoSLevelHasBeenSet = true;
}

bool ModifyDDoSLevelRequest::DDoSLevelHasBeenSet() const
{
    return m_dDoSLevelHasBeenSet;
}


