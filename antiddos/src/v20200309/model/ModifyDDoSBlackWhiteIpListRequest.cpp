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

#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSBlackWhiteIpListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

ModifyDDoSBlackWhiteIpListRequest::ModifyDDoSBlackWhiteIpListRequest() :
    m_instanceIdHasBeenSet(false),
    m_oldIpTypeHasBeenSet(false),
    m_oldIpHasBeenSet(false),
    m_newIpTypeHasBeenSet(false),
    m_newIpHasBeenSet(false)
{
}

string ModifyDDoSBlackWhiteIpListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_oldIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldIpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldIpType.c_str(), allocator).Move(), allocator);
    }

    if (m_oldIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oldIp.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_newIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewIpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newIpType.c_str(), allocator).Move(), allocator);
    }

    if (m_newIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_newIp.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDDoSBlackWhiteIpListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDDoSBlackWhiteIpListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDDoSBlackWhiteIpListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDDoSBlackWhiteIpListRequest::GetOldIpType() const
{
    return m_oldIpType;
}

void ModifyDDoSBlackWhiteIpListRequest::SetOldIpType(const string& _oldIpType)
{
    m_oldIpType = _oldIpType;
    m_oldIpTypeHasBeenSet = true;
}

bool ModifyDDoSBlackWhiteIpListRequest::OldIpTypeHasBeenSet() const
{
    return m_oldIpTypeHasBeenSet;
}

IpSegment ModifyDDoSBlackWhiteIpListRequest::GetOldIp() const
{
    return m_oldIp;
}

void ModifyDDoSBlackWhiteIpListRequest::SetOldIp(const IpSegment& _oldIp)
{
    m_oldIp = _oldIp;
    m_oldIpHasBeenSet = true;
}

bool ModifyDDoSBlackWhiteIpListRequest::OldIpHasBeenSet() const
{
    return m_oldIpHasBeenSet;
}

string ModifyDDoSBlackWhiteIpListRequest::GetNewIpType() const
{
    return m_newIpType;
}

void ModifyDDoSBlackWhiteIpListRequest::SetNewIpType(const string& _newIpType)
{
    m_newIpType = _newIpType;
    m_newIpTypeHasBeenSet = true;
}

bool ModifyDDoSBlackWhiteIpListRequest::NewIpTypeHasBeenSet() const
{
    return m_newIpTypeHasBeenSet;
}

IpSegment ModifyDDoSBlackWhiteIpListRequest::GetNewIp() const
{
    return m_newIp;
}

void ModifyDDoSBlackWhiteIpListRequest::SetNewIp(const IpSegment& _newIp)
{
    m_newIp = _newIp;
    m_newIpHasBeenSet = true;
}

bool ModifyDDoSBlackWhiteIpListRequest::NewIpHasBeenSet() const
{
    return m_newIpHasBeenSet;
}


