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

#include <tencentcloud/teo/v20220106/model/CreateZoneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

CreateZoneRequest::CreateZoneRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_jumpStartHasBeenSet(false)
{
}

string CreateZoneRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jumpStart, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateZoneRequest::GetName() const
{
    return m_name;
}

void CreateZoneRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateZoneRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateZoneRequest::GetType() const
{
    return m_type;
}

void CreateZoneRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateZoneRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool CreateZoneRequest::GetJumpStart() const
{
    return m_jumpStart;
}

void CreateZoneRequest::SetJumpStart(const bool& _jumpStart)
{
    m_jumpStart = _jumpStart;
    m_jumpStartHasBeenSet = true;
}

bool CreateZoneRequest::JumpStartHasBeenSet() const
{
    return m_jumpStartHasBeenSet;
}


