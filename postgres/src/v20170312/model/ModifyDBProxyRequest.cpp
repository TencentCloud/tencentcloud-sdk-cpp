/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/postgres/v20170312/model/ModifyDBProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ModifyDBProxyRequest::ModifyDBProxyRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_proxyGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_proxyNodeCustomHasBeenSet(false),
    m_reloadBalanceHasBeenSet(false),
    m_switchTagHasBeenSet(false),
    m_switchStartTimeHasBeenSet(false),
    m_switchEndTimeHasBeenSet(false)
{
}

string ModifyDBProxyRequest::ToJsonString() const
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

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyNodeCustomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodeCustom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyNodeCustom.begin(); itr != m_proxyNodeCustom.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_reloadBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReloadBalance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reloadBalance.c_str(), allocator).Move(), allocator);
    }

    if (m_switchTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchTag, allocator);
    }

    if (m_switchStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_switchEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchEndTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBProxyRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void ModifyDBProxyRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool ModifyDBProxyRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string ModifyDBProxyRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void ModifyDBProxyRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool ModifyDBProxyRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

string ModifyDBProxyRequest::GetDescription() const
{
    return m_description;
}

void ModifyDBProxyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyDBProxyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<ProxyNodeCustom> ModifyDBProxyRequest::GetProxyNodeCustom() const
{
    return m_proxyNodeCustom;
}

void ModifyDBProxyRequest::SetProxyNodeCustom(const vector<ProxyNodeCustom>& _proxyNodeCustom)
{
    m_proxyNodeCustom = _proxyNodeCustom;
    m_proxyNodeCustomHasBeenSet = true;
}

bool ModifyDBProxyRequest::ProxyNodeCustomHasBeenSet() const
{
    return m_proxyNodeCustomHasBeenSet;
}

string ModifyDBProxyRequest::GetReloadBalance() const
{
    return m_reloadBalance;
}

void ModifyDBProxyRequest::SetReloadBalance(const string& _reloadBalance)
{
    m_reloadBalance = _reloadBalance;
    m_reloadBalanceHasBeenSet = true;
}

bool ModifyDBProxyRequest::ReloadBalanceHasBeenSet() const
{
    return m_reloadBalanceHasBeenSet;
}

int64_t ModifyDBProxyRequest::GetSwitchTag() const
{
    return m_switchTag;
}

void ModifyDBProxyRequest::SetSwitchTag(const int64_t& _switchTag)
{
    m_switchTag = _switchTag;
    m_switchTagHasBeenSet = true;
}

bool ModifyDBProxyRequest::SwitchTagHasBeenSet() const
{
    return m_switchTagHasBeenSet;
}

string ModifyDBProxyRequest::GetSwitchStartTime() const
{
    return m_switchStartTime;
}

void ModifyDBProxyRequest::SetSwitchStartTime(const string& _switchStartTime)
{
    m_switchStartTime = _switchStartTime;
    m_switchStartTimeHasBeenSet = true;
}

bool ModifyDBProxyRequest::SwitchStartTimeHasBeenSet() const
{
    return m_switchStartTimeHasBeenSet;
}

string ModifyDBProxyRequest::GetSwitchEndTime() const
{
    return m_switchEndTime;
}

void ModifyDBProxyRequest::SetSwitchEndTime(const string& _switchEndTime)
{
    m_switchEndTime = _switchEndTime;
    m_switchEndTimeHasBeenSet = true;
}

bool ModifyDBProxyRequest::SwitchEndTimeHasBeenSet() const
{
    return m_switchEndTimeHasBeenSet;
}


