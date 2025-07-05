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

#include <tencentcloud/cdb/v20170320/model/AdjustCdbProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

AdjustCdbProxyRequest::AdjustCdbProxyRequest() :
    m_instanceIdHasBeenSet(false),
    m_proxyGroupIdHasBeenSet(false),
    m_proxyNodeCustomHasBeenSet(false),
    m_reloadBalanceHasBeenSet(false),
    m_upgradeTimeHasBeenSet(false)
{
}

string AdjustCdbProxyRequest::ToJsonString() const
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

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
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

    if (m_upgradeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upgradeTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AdjustCdbProxyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AdjustCdbProxyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AdjustCdbProxyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AdjustCdbProxyRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void AdjustCdbProxyRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool AdjustCdbProxyRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

vector<ProxyNodeCustom> AdjustCdbProxyRequest::GetProxyNodeCustom() const
{
    return m_proxyNodeCustom;
}

void AdjustCdbProxyRequest::SetProxyNodeCustom(const vector<ProxyNodeCustom>& _proxyNodeCustom)
{
    m_proxyNodeCustom = _proxyNodeCustom;
    m_proxyNodeCustomHasBeenSet = true;
}

bool AdjustCdbProxyRequest::ProxyNodeCustomHasBeenSet() const
{
    return m_proxyNodeCustomHasBeenSet;
}

string AdjustCdbProxyRequest::GetReloadBalance() const
{
    return m_reloadBalance;
}

void AdjustCdbProxyRequest::SetReloadBalance(const string& _reloadBalance)
{
    m_reloadBalance = _reloadBalance;
    m_reloadBalanceHasBeenSet = true;
}

bool AdjustCdbProxyRequest::ReloadBalanceHasBeenSet() const
{
    return m_reloadBalanceHasBeenSet;
}

string AdjustCdbProxyRequest::GetUpgradeTime() const
{
    return m_upgradeTime;
}

void AdjustCdbProxyRequest::SetUpgradeTime(const string& _upgradeTime)
{
    m_upgradeTime = _upgradeTime;
    m_upgradeTimeHasBeenSet = true;
}

bool AdjustCdbProxyRequest::UpgradeTimeHasBeenSet() const
{
    return m_upgradeTimeHasBeenSet;
}


