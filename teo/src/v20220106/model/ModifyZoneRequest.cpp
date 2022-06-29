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

#include <tencentcloud/teo/v20220106/model/ModifyZoneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

ModifyZoneRequest::ModifyZoneRequest() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vanityNameServersHasBeenSet(false)
{
}

string ModifyZoneRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_vanityNameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VanityNameServers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vanityNameServers.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyZoneRequest::GetId() const
{
    return m_id;
}

void ModifyZoneRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyZoneRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyZoneRequest::GetType() const
{
    return m_type;
}

void ModifyZoneRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyZoneRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

VanityNameServers ModifyZoneRequest::GetVanityNameServers() const
{
    return m_vanityNameServers;
}

void ModifyZoneRequest::SetVanityNameServers(const VanityNameServers& _vanityNameServers)
{
    m_vanityNameServers = _vanityNameServers;
    m_vanityNameServersHasBeenSet = true;
}

bool ModifyZoneRequest::VanityNameServersHasBeenSet() const
{
    return m_vanityNameServersHasBeenSet;
}


