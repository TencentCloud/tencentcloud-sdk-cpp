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

#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceSSLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyDBInstanceSSLRequest::ModifyDBInstanceSSLRequest() :
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_waitSwitchHasBeenSet(false),
    m_isKMSHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyRegionHasBeenSet(false)
{
}

string ModifyDBInstanceSSLRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_waitSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_waitSwitch, allocator);
    }

    if (m_isKMSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKMS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isKMS, allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceSSLRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDBInstanceSSLRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDBInstanceSSLRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDBInstanceSSLRequest::GetType() const
{
    return m_type;
}

void ModifyDBInstanceSSLRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyDBInstanceSSLRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ModifyDBInstanceSSLRequest::GetWaitSwitch() const
{
    return m_waitSwitch;
}

void ModifyDBInstanceSSLRequest::SetWaitSwitch(const uint64_t& _waitSwitch)
{
    m_waitSwitch = _waitSwitch;
    m_waitSwitchHasBeenSet = true;
}

bool ModifyDBInstanceSSLRequest::WaitSwitchHasBeenSet() const
{
    return m_waitSwitchHasBeenSet;
}

int64_t ModifyDBInstanceSSLRequest::GetIsKMS() const
{
    return m_isKMS;
}

void ModifyDBInstanceSSLRequest::SetIsKMS(const int64_t& _isKMS)
{
    m_isKMS = _isKMS;
    m_isKMSHasBeenSet = true;
}

bool ModifyDBInstanceSSLRequest::IsKMSHasBeenSet() const
{
    return m_isKMSHasBeenSet;
}

string ModifyDBInstanceSSLRequest::GetKeyId() const
{
    return m_keyId;
}

void ModifyDBInstanceSSLRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool ModifyDBInstanceSSLRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string ModifyDBInstanceSSLRequest::GetKeyRegion() const
{
    return m_keyRegion;
}

void ModifyDBInstanceSSLRequest::SetKeyRegion(const string& _keyRegion)
{
    m_keyRegion = _keyRegion;
    m_keyRegionHasBeenSet = true;
}

bool ModifyDBInstanceSSLRequest::KeyRegionHasBeenSet() const
{
    return m_keyRegionHasBeenSet;
}


