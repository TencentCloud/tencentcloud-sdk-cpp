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

#include <tencentcloud/igtm/v20231024/model/Strategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

Strategy::Strategy() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_activateMainPoolIdHasBeenSet(false),
    m_activateLevelHasBeenSet(false),
    m_activePoolTypeHasBeenSet(false),
    m_activeTrafficStrategyHasBeenSet(false),
    m_monitorNumHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_keepDomainRecordsHasBeenSet(false),
    m_switchPoolTypeHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false)
{
}

CoreInternalOutcome Strategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Strategy.Source` is not array type"));

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

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.StrategyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = value["StrategyId"].GetUint64();
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ActivateMainPoolId") && !value["ActivateMainPoolId"].IsNull())
    {
        if (!value["ActivateMainPoolId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.ActivateMainPoolId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activateMainPoolId = value["ActivateMainPoolId"].GetInt64();
        m_activateMainPoolIdHasBeenSet = true;
    }

    if (value.HasMember("ActivateLevel") && !value["ActivateLevel"].IsNull())
    {
        if (!value["ActivateLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.ActivateLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activateLevel = value["ActivateLevel"].GetInt64();
        m_activateLevelHasBeenSet = true;
    }

    if (value.HasMember("ActivePoolType") && !value["ActivePoolType"].IsNull())
    {
        if (!value["ActivePoolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.ActivePoolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activePoolType = string(value["ActivePoolType"].GetString());
        m_activePoolTypeHasBeenSet = true;
    }

    if (value.HasMember("ActiveTrafficStrategy") && !value["ActiveTrafficStrategy"].IsNull())
    {
        if (!value["ActiveTrafficStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.ActiveTrafficStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeTrafficStrategy = string(value["ActiveTrafficStrategy"].GetString());
        m_activeTrafficStrategyHasBeenSet = true;
    }

    if (value.HasMember("MonitorNum") && !value["MonitorNum"].IsNull())
    {
        if (!value["MonitorNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.MonitorNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorNum = value["MonitorNum"].GetUint64();
        m_monitorNumHasBeenSet = true;
    }

    if (value.HasMember("IsEnabled") && !value["IsEnabled"].IsNull())
    {
        if (!value["IsEnabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.IsEnabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = string(value["IsEnabled"].GetString());
        m_isEnabledHasBeenSet = true;
    }

    if (value.HasMember("KeepDomainRecords") && !value["KeepDomainRecords"].IsNull())
    {
        if (!value["KeepDomainRecords"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.KeepDomainRecords` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keepDomainRecords = string(value["KeepDomainRecords"].GetString());
        m_keepDomainRecordsHasBeenSet = true;
    }

    if (value.HasMember("SwitchPoolType") && !value["SwitchPoolType"].IsNull())
    {
        if (!value["SwitchPoolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.SwitchPoolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchPoolType = string(value["SwitchPoolType"].GetString());
        m_switchPoolTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Strategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_activateMainPoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivateMainPoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activateMainPoolId, allocator);
    }

    if (m_activateLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivateLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activateLevel, allocator);
    }

    if (m_activePoolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivePoolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activePoolType.c_str(), allocator).Move(), allocator);
    }

    if (m_activeTrafficStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveTrafficStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeTrafficStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorNum, allocator);
    }

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isEnabled.c_str(), allocator).Move(), allocator);
    }

    if (m_keepDomainRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepDomainRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keepDomainRecords.c_str(), allocator).Move(), allocator);
    }

    if (m_switchPoolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchPoolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchPoolType.c_str(), allocator).Move(), allocator);
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

}


string Strategy::GetInstanceId() const
{
    return m_instanceId;
}

void Strategy::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Strategy::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Strategy::GetName() const
{
    return m_name;
}

void Strategy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Strategy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<Source> Strategy::GetSource() const
{
    return m_source;
}

void Strategy::SetSource(const vector<Source>& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool Strategy::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

uint64_t Strategy::GetStrategyId() const
{
    return m_strategyId;
}

void Strategy::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool Strategy::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string Strategy::GetStatus() const
{
    return m_status;
}

void Strategy::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Strategy::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t Strategy::GetActivateMainPoolId() const
{
    return m_activateMainPoolId;
}

void Strategy::SetActivateMainPoolId(const int64_t& _activateMainPoolId)
{
    m_activateMainPoolId = _activateMainPoolId;
    m_activateMainPoolIdHasBeenSet = true;
}

bool Strategy::ActivateMainPoolIdHasBeenSet() const
{
    return m_activateMainPoolIdHasBeenSet;
}

int64_t Strategy::GetActivateLevel() const
{
    return m_activateLevel;
}

void Strategy::SetActivateLevel(const int64_t& _activateLevel)
{
    m_activateLevel = _activateLevel;
    m_activateLevelHasBeenSet = true;
}

bool Strategy::ActivateLevelHasBeenSet() const
{
    return m_activateLevelHasBeenSet;
}

string Strategy::GetActivePoolType() const
{
    return m_activePoolType;
}

void Strategy::SetActivePoolType(const string& _activePoolType)
{
    m_activePoolType = _activePoolType;
    m_activePoolTypeHasBeenSet = true;
}

bool Strategy::ActivePoolTypeHasBeenSet() const
{
    return m_activePoolTypeHasBeenSet;
}

string Strategy::GetActiveTrafficStrategy() const
{
    return m_activeTrafficStrategy;
}

void Strategy::SetActiveTrafficStrategy(const string& _activeTrafficStrategy)
{
    m_activeTrafficStrategy = _activeTrafficStrategy;
    m_activeTrafficStrategyHasBeenSet = true;
}

bool Strategy::ActiveTrafficStrategyHasBeenSet() const
{
    return m_activeTrafficStrategyHasBeenSet;
}

uint64_t Strategy::GetMonitorNum() const
{
    return m_monitorNum;
}

void Strategy::SetMonitorNum(const uint64_t& _monitorNum)
{
    m_monitorNum = _monitorNum;
    m_monitorNumHasBeenSet = true;
}

bool Strategy::MonitorNumHasBeenSet() const
{
    return m_monitorNumHasBeenSet;
}

string Strategy::GetIsEnabled() const
{
    return m_isEnabled;
}

void Strategy::SetIsEnabled(const string& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool Strategy::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

string Strategy::GetKeepDomainRecords() const
{
    return m_keepDomainRecords;
}

void Strategy::SetKeepDomainRecords(const string& _keepDomainRecords)
{
    m_keepDomainRecords = _keepDomainRecords;
    m_keepDomainRecordsHasBeenSet = true;
}

bool Strategy::KeepDomainRecordsHasBeenSet() const
{
    return m_keepDomainRecordsHasBeenSet;
}

string Strategy::GetSwitchPoolType() const
{
    return m_switchPoolType;
}

void Strategy::SetSwitchPoolType(const string& _switchPoolType)
{
    m_switchPoolType = _switchPoolType;
    m_switchPoolTypeHasBeenSet = true;
}

bool Strategy::SwitchPoolTypeHasBeenSet() const
{
    return m_switchPoolTypeHasBeenSet;
}

string Strategy::GetCreatedOn() const
{
    return m_createdOn;
}

void Strategy::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool Strategy::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string Strategy::GetUpdatedOn() const
{
    return m_updatedOn;
}

void Strategy::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool Strategy::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

