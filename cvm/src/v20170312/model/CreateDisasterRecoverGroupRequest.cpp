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

#include <tencentcloud/cvm/v20170312/model/CreateDisasterRecoverGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateDisasterRecoverGroupRequest::CreateDisasterRecoverGroupRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string CreateDisasterRecoverGroupRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDisasterRecoverGroupRequest::GetName() const
{
    return m_name;
}

void CreateDisasterRecoverGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDisasterRecoverGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDisasterRecoverGroupRequest::GetType() const
{
    return m_type;
}

void CreateDisasterRecoverGroupRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateDisasterRecoverGroupRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateDisasterRecoverGroupRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateDisasterRecoverGroupRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateDisasterRecoverGroupRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


