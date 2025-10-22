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

#include <tencentcloud/igtm/v20231024/model/StrategyDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

StrategyDetail::StrategyDetail() :
    m_instanceIdHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_mainAddressPoolSetHasBeenSet(false),
    m_fallbackAddressPoolSetHasBeenSet(false),
    m_keepDomainRecordsHasBeenSet(false),
    m_activateMainPoolIdHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false),
    m_switchPoolTypeHasBeenSet(false)
{
}

CoreInternalOutcome StrategyDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyDetail.StrategyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = value["StrategyId"].GetUint64();
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StrategyDetail.Source` is not array type"));

        const rapidjson::Value &tmpValue = value["Source"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Source item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_source.push_back(item);
        }
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("MainAddressPoolSet") && !value["MainAddressPoolSet"].IsNull())
    {
        if (!value["MainAddressPoolSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StrategyDetail.MainAddressPoolSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MainAddressPoolSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MainAddressPool item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mainAddressPoolSet.push_back(item);
        }
        m_mainAddressPoolSetHasBeenSet = true;
    }

    if (value.HasMember("FallbackAddressPoolSet") && !value["FallbackAddressPoolSet"].IsNull())
    {
        if (!value["FallbackAddressPoolSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StrategyDetail.FallbackAddressPoolSet` is not array type"));

        const rapidjson::Value &tmpValue = value["FallbackAddressPoolSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MainAddressPool item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fallbackAddressPoolSet.push_back(item);
        }
        m_fallbackAddressPoolSetHasBeenSet = true;
    }

    if (value.HasMember("KeepDomainRecords") && !value["KeepDomainRecords"].IsNull())
    {
        if (!value["KeepDomainRecords"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyDetail.KeepDomainRecords` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keepDomainRecords = string(value["KeepDomainRecords"].GetString());
        m_keepDomainRecordsHasBeenSet = true;
    }

    if (value.HasMember("ActivateMainPoolId") && !value["ActivateMainPoolId"].IsNull())
    {
        if (!value["ActivateMainPoolId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyDetail.ActivateMainPoolId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activateMainPoolId = value["ActivateMainPoolId"].GetUint64();
        m_activateMainPoolIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyDetail.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyDetail.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }

    if (value.HasMember("SwitchPoolType") && !value["SwitchPoolType"].IsNull())
    {
        if (!value["SwitchPoolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyDetail.SwitchPoolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchPoolType = string(value["SwitchPoolType"].GetString());
        m_switchPoolTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StrategyDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_source.begin(); itr != m_source.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mainAddressPoolSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainAddressPoolSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mainAddressPoolSet.begin(); itr != m_mainAddressPoolSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fallbackAddressPoolSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FallbackAddressPoolSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fallbackAddressPoolSet.begin(); itr != m_fallbackAddressPoolSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_keepDomainRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepDomainRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keepDomainRecords.c_str(), allocator).Move(), allocator);
    }

    if (m_activateMainPoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivateMainPoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activateMainPoolId, allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_switchPoolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchPoolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchPoolType.c_str(), allocator).Move(), allocator);
    }

}


string StrategyDetail::GetInstanceId() const
{
    return m_instanceId;
}

void StrategyDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool StrategyDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t StrategyDetail::GetStrategyId() const
{
    return m_strategyId;
}

void StrategyDetail::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool StrategyDetail::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string StrategyDetail::GetName() const
{
    return m_name;
}

void StrategyDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool StrategyDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<Source> StrategyDetail::GetSource() const
{
    return m_source;
}

void StrategyDetail::SetSource(const vector<Source>& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool StrategyDetail::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

vector<MainAddressPool> StrategyDetail::GetMainAddressPoolSet() const
{
    return m_mainAddressPoolSet;
}

void StrategyDetail::SetMainAddressPoolSet(const vector<MainAddressPool>& _mainAddressPoolSet)
{
    m_mainAddressPoolSet = _mainAddressPoolSet;
    m_mainAddressPoolSetHasBeenSet = true;
}

bool StrategyDetail::MainAddressPoolSetHasBeenSet() const
{
    return m_mainAddressPoolSetHasBeenSet;
}

vector<MainAddressPool> StrategyDetail::GetFallbackAddressPoolSet() const
{
    return m_fallbackAddressPoolSet;
}

void StrategyDetail::SetFallbackAddressPoolSet(const vector<MainAddressPool>& _fallbackAddressPoolSet)
{
    m_fallbackAddressPoolSet = _fallbackAddressPoolSet;
    m_fallbackAddressPoolSetHasBeenSet = true;
}

bool StrategyDetail::FallbackAddressPoolSetHasBeenSet() const
{
    return m_fallbackAddressPoolSetHasBeenSet;
}

string StrategyDetail::GetKeepDomainRecords() const
{
    return m_keepDomainRecords;
}

void StrategyDetail::SetKeepDomainRecords(const string& _keepDomainRecords)
{
    m_keepDomainRecords = _keepDomainRecords;
    m_keepDomainRecordsHasBeenSet = true;
}

bool StrategyDetail::KeepDomainRecordsHasBeenSet() const
{
    return m_keepDomainRecordsHasBeenSet;
}

uint64_t StrategyDetail::GetActivateMainPoolId() const
{
    return m_activateMainPoolId;
}

void StrategyDetail::SetActivateMainPoolId(const uint64_t& _activateMainPoolId)
{
    m_activateMainPoolId = _activateMainPoolId;
    m_activateMainPoolIdHasBeenSet = true;
}

bool StrategyDetail::ActivateMainPoolIdHasBeenSet() const
{
    return m_activateMainPoolIdHasBeenSet;
}

string StrategyDetail::GetCreatedOn() const
{
    return m_createdOn;
}

void StrategyDetail::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool StrategyDetail::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string StrategyDetail::GetUpdatedOn() const
{
    return m_updatedOn;
}

void StrategyDetail::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool StrategyDetail::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

string StrategyDetail::GetSwitchPoolType() const
{
    return m_switchPoolType;
}

void StrategyDetail::SetSwitchPoolType(const string& _switchPoolType)
{
    m_switchPoolType = _switchPoolType;
    m_switchPoolTypeHasBeenSet = true;
}

bool StrategyDetail::SwitchPoolTypeHasBeenSet() const
{
    return m_switchPoolTypeHasBeenSet;
}

