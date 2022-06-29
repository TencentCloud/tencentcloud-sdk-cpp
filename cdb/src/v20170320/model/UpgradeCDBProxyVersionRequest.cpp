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

#include <tencentcloud/cdb/v20170320/model/UpgradeCDBProxyVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

UpgradeCDBProxyVersionRequest::UpgradeCDBProxyVersionRequest() :
    m_instanceIdHasBeenSet(false),
    m_proxyGroupIdHasBeenSet(false),
    m_srcProxyVersionHasBeenSet(false),
    m_dstProxyVersionHasBeenSet(false),
    m_upgradeTimeHasBeenSet(false)
{
}

string UpgradeCDBProxyVersionRequest::ToJsonString() const
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

    if (m_srcProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcProxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dstProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstProxyVersion.c_str(), allocator).Move(), allocator);
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


string UpgradeCDBProxyVersionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeCDBProxyVersionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeCDBProxyVersionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpgradeCDBProxyVersionRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void UpgradeCDBProxyVersionRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool UpgradeCDBProxyVersionRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

string UpgradeCDBProxyVersionRequest::GetSrcProxyVersion() const
{
    return m_srcProxyVersion;
}

void UpgradeCDBProxyVersionRequest::SetSrcProxyVersion(const string& _srcProxyVersion)
{
    m_srcProxyVersion = _srcProxyVersion;
    m_srcProxyVersionHasBeenSet = true;
}

bool UpgradeCDBProxyVersionRequest::SrcProxyVersionHasBeenSet() const
{
    return m_srcProxyVersionHasBeenSet;
}

string UpgradeCDBProxyVersionRequest::GetDstProxyVersion() const
{
    return m_dstProxyVersion;
}

void UpgradeCDBProxyVersionRequest::SetDstProxyVersion(const string& _dstProxyVersion)
{
    m_dstProxyVersion = _dstProxyVersion;
    m_dstProxyVersionHasBeenSet = true;
}

bool UpgradeCDBProxyVersionRequest::DstProxyVersionHasBeenSet() const
{
    return m_dstProxyVersionHasBeenSet;
}

string UpgradeCDBProxyVersionRequest::GetUpgradeTime() const
{
    return m_upgradeTime;
}

void UpgradeCDBProxyVersionRequest::SetUpgradeTime(const string& _upgradeTime)
{
    m_upgradeTime = _upgradeTime;
    m_upgradeTimeHasBeenSet = true;
}

bool UpgradeCDBProxyVersionRequest::UpgradeTimeHasBeenSet() const
{
    return m_upgradeTimeHasBeenSet;
}


