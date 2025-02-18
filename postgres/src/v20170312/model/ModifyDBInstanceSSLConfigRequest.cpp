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

#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceSSLConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ModifyDBInstanceSSLConfigRequest::ModifyDBInstanceSSLConfigRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_sSLEnabledHasBeenSet(false),
    m_connectAddressHasBeenSet(false)
{
}

string ModifyDBInstanceSSLConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sSLEnabled, allocator);
    }

    if (m_connectAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectAddress.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceSSLConfigRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void ModifyDBInstanceSSLConfigRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool ModifyDBInstanceSSLConfigRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

bool ModifyDBInstanceSSLConfigRequest::GetSSLEnabled() const
{
    return m_sSLEnabled;
}

void ModifyDBInstanceSSLConfigRequest::SetSSLEnabled(const bool& _sSLEnabled)
{
    m_sSLEnabled = _sSLEnabled;
    m_sSLEnabledHasBeenSet = true;
}

bool ModifyDBInstanceSSLConfigRequest::SSLEnabledHasBeenSet() const
{
    return m_sSLEnabledHasBeenSet;
}

string ModifyDBInstanceSSLConfigRequest::GetConnectAddress() const
{
    return m_connectAddress;
}

void ModifyDBInstanceSSLConfigRequest::SetConnectAddress(const string& _connectAddress)
{
    m_connectAddress = _connectAddress;
    m_connectAddressHasBeenSet = true;
}

bool ModifyDBInstanceSSLConfigRequest::ConnectAddressHasBeenSet() const
{
    return m_connectAddressHasBeenSet;
}


