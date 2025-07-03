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

#include <tencentcloud/igtm/v20231024/model/CreateStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

CreateStrategyRequest::CreateStrategyRequest() :
    m_instanceIdHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_mainAddressPoolSetHasBeenSet(false),
    m_fallbackAddressPoolSetHasBeenSet(false),
    m_keepDomainRecordsHasBeenSet(false),
    m_switchPoolTypeHasBeenSet(false)
{
}

string CreateStrategyRequest::ToJsonString() const
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

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_source.begin(); itr != m_source.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_mainAddressPoolSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainAddressPoolSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mainAddressPoolSet.begin(); itr != m_mainAddressPoolSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_fallbackAddressPoolSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FallbackAddressPoolSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fallbackAddressPoolSet.begin(); itr != m_fallbackAddressPoolSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_keepDomainRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepDomainRecords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keepDomainRecords.c_str(), allocator).Move(), allocator);
    }

    if (m_switchPoolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchPoolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchPoolType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStrategyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateStrategyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateStrategyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateStrategyRequest::GetStrategyName() const
{
    return m_strategyName;
}

void CreateStrategyRequest::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool CreateStrategyRequest::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

vector<Source> CreateStrategyRequest::GetSource() const
{
    return m_source;
}

void CreateStrategyRequest::SetSource(const vector<Source>& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateStrategyRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

vector<MainAddressPool> CreateStrategyRequest::GetMainAddressPoolSet() const
{
    return m_mainAddressPoolSet;
}

void CreateStrategyRequest::SetMainAddressPoolSet(const vector<MainAddressPool>& _mainAddressPoolSet)
{
    m_mainAddressPoolSet = _mainAddressPoolSet;
    m_mainAddressPoolSetHasBeenSet = true;
}

bool CreateStrategyRequest::MainAddressPoolSetHasBeenSet() const
{
    return m_mainAddressPoolSetHasBeenSet;
}

vector<MainAddressPool> CreateStrategyRequest::GetFallbackAddressPoolSet() const
{
    return m_fallbackAddressPoolSet;
}

void CreateStrategyRequest::SetFallbackAddressPoolSet(const vector<MainAddressPool>& _fallbackAddressPoolSet)
{
    m_fallbackAddressPoolSet = _fallbackAddressPoolSet;
    m_fallbackAddressPoolSetHasBeenSet = true;
}

bool CreateStrategyRequest::FallbackAddressPoolSetHasBeenSet() const
{
    return m_fallbackAddressPoolSetHasBeenSet;
}

string CreateStrategyRequest::GetKeepDomainRecords() const
{
    return m_keepDomainRecords;
}

void CreateStrategyRequest::SetKeepDomainRecords(const string& _keepDomainRecords)
{
    m_keepDomainRecords = _keepDomainRecords;
    m_keepDomainRecordsHasBeenSet = true;
}

bool CreateStrategyRequest::KeepDomainRecordsHasBeenSet() const
{
    return m_keepDomainRecordsHasBeenSet;
}

string CreateStrategyRequest::GetSwitchPoolType() const
{
    return m_switchPoolType;
}

void CreateStrategyRequest::SetSwitchPoolType(const string& _switchPoolType)
{
    m_switchPoolType = _switchPoolType;
    m_switchPoolTypeHasBeenSet = true;
}

bool CreateStrategyRequest::SwitchPoolTypeHasBeenSet() const
{
    return m_switchPoolTypeHasBeenSet;
}


