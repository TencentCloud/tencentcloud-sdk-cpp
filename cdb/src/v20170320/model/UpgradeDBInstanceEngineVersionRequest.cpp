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

#include <tencentcloud/cdb/v20170320/model/UpgradeDBInstanceEngineVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

UpgradeDBInstanceEngineVersionRequest::UpgradeDBInstanceEngineVersionRequest() :
    m_instanceIdHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_waitSwitchHasBeenSet(false),
    m_upgradeSubversionHasBeenSet(false)
{
}

string UpgradeDBInstanceEngineVersionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_waitSwitchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WaitSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_waitSwitch, allocator);
    }

    if (m_upgradeSubversionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpgradeSubversion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upgradeSubversion, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeDBInstanceEngineVersionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeDBInstanceEngineVersionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeDBInstanceEngineVersionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpgradeDBInstanceEngineVersionRequest::GetEngineVersion() const
{
    return m_engineVersion;
}

void UpgradeDBInstanceEngineVersionRequest::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool UpgradeDBInstanceEngineVersionRequest::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

int64_t UpgradeDBInstanceEngineVersionRequest::GetWaitSwitch() const
{
    return m_waitSwitch;
}

void UpgradeDBInstanceEngineVersionRequest::SetWaitSwitch(const int64_t& _waitSwitch)
{
    m_waitSwitch = _waitSwitch;
    m_waitSwitchHasBeenSet = true;
}

bool UpgradeDBInstanceEngineVersionRequest::WaitSwitchHasBeenSet() const
{
    return m_waitSwitchHasBeenSet;
}

int64_t UpgradeDBInstanceEngineVersionRequest::GetUpgradeSubversion() const
{
    return m_upgradeSubversion;
}

void UpgradeDBInstanceEngineVersionRequest::SetUpgradeSubversion(const int64_t& _upgradeSubversion)
{
    m_upgradeSubversion = _upgradeSubversion;
    m_upgradeSubversionHasBeenSet = true;
}

bool UpgradeDBInstanceEngineVersionRequest::UpgradeSubversionHasBeenSet() const
{
    return m_upgradeSubversionHasBeenSet;
}


