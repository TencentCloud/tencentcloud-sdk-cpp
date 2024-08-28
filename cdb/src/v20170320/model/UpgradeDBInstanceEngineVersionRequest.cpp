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
using namespace std;

UpgradeDBInstanceEngineVersionRequest::UpgradeDBInstanceEngineVersionRequest() :
    m_instanceIdHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_waitSwitchHasBeenSet(false),
    m_upgradeSubversionHasBeenSet(false),
    m_maxDelayTimeHasBeenSet(false),
    m_ignoreErrKeywordHasBeenSet(false),
    m_paramListHasBeenSet(false)
{
}

string UpgradeDBInstanceEngineVersionRequest::ToJsonString() const
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

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_waitSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_waitSwitch, allocator);
    }

    if (m_upgradeSubversionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeSubversion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upgradeSubversion, allocator);
    }

    if (m_maxDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDelayTime, allocator);
    }

    if (m_ignoreErrKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreErrKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignoreErrKeyword, allocator);
    }

    if (m_paramListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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

int64_t UpgradeDBInstanceEngineVersionRequest::GetMaxDelayTime() const
{
    return m_maxDelayTime;
}

void UpgradeDBInstanceEngineVersionRequest::SetMaxDelayTime(const int64_t& _maxDelayTime)
{
    m_maxDelayTime = _maxDelayTime;
    m_maxDelayTimeHasBeenSet = true;
}

bool UpgradeDBInstanceEngineVersionRequest::MaxDelayTimeHasBeenSet() const
{
    return m_maxDelayTimeHasBeenSet;
}

int64_t UpgradeDBInstanceEngineVersionRequest::GetIgnoreErrKeyword() const
{
    return m_ignoreErrKeyword;
}

void UpgradeDBInstanceEngineVersionRequest::SetIgnoreErrKeyword(const int64_t& _ignoreErrKeyword)
{
    m_ignoreErrKeyword = _ignoreErrKeyword;
    m_ignoreErrKeywordHasBeenSet = true;
}

bool UpgradeDBInstanceEngineVersionRequest::IgnoreErrKeywordHasBeenSet() const
{
    return m_ignoreErrKeywordHasBeenSet;
}

vector<UpgradeEngineVersionParams> UpgradeDBInstanceEngineVersionRequest::GetParamList() const
{
    return m_paramList;
}

void UpgradeDBInstanceEngineVersionRequest::SetParamList(const vector<UpgradeEngineVersionParams>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool UpgradeDBInstanceEngineVersionRequest::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}


