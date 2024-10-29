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

#include <tencentcloud/teo/v20220901/model/LoadBalancer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

LoadBalancer::LoadBalancer() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_healthCheckerHasBeenSet(false),
    m_steeringPolicyHasBeenSet(false),
    m_failoverPolicyHasBeenSet(false),
    m_originGroupHealthStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_l4UsedListHasBeenSet(false),
    m_l7UsedListHasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("HealthChecker") && !value["HealthChecker"].IsNull())
    {
        if (!value["HealthChecker"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.HealthChecker` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthChecker.Deserialize(value["HealthChecker"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckerHasBeenSet = true;
    }

    if (value.HasMember("SteeringPolicy") && !value["SteeringPolicy"].IsNull())
    {
        if (!value["SteeringPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.SteeringPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_steeringPolicy = string(value["SteeringPolicy"].GetString());
        m_steeringPolicyHasBeenSet = true;
    }

    if (value.HasMember("FailoverPolicy") && !value["FailoverPolicy"].IsNull())
    {
        if (!value["FailoverPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.FailoverPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failoverPolicy = string(value["FailoverPolicy"].GetString());
        m_failoverPolicyHasBeenSet = true;
    }

    if (value.HasMember("OriginGroupHealthStatus") && !value["OriginGroupHealthStatus"].IsNull())
    {
        if (!value["OriginGroupHealthStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.OriginGroupHealthStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginGroupHealthStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginGroupHealthStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_originGroupHealthStatus.push_back(item);
        }
        m_originGroupHealthStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("L4UsedList") && !value["L4UsedList"].IsNull())
    {
        if (!value["L4UsedList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.L4UsedList` is not array type"));

        const rapidjson::Value &tmpValue = value["L4UsedList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_l4UsedList.push_back((*itr).GetString());
        }
        m_l4UsedListHasBeenSet = true;
    }

    if (value.HasMember("L7UsedList") && !value["L7UsedList"].IsNull())
    {
        if (!value["L7UsedList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.L7UsedList` is not array type"));

        const rapidjson::Value &tmpValue = value["L7UsedList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_l7UsedList.push_back((*itr).GetString());
        }
        m_l7UsedListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthChecker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthChecker.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_steeringPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SteeringPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_steeringPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_failoverPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailoverPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failoverPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_originGroupHealthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroupHealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originGroupHealthStatus.begin(); itr != m_originGroupHealthStatus.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_l4UsedListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L4UsedList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_l4UsedList.begin(); itr != m_l4UsedList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_l7UsedListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L7UsedList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_l7UsedList.begin(); itr != m_l7UsedList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string LoadBalancer::GetInstanceId() const
{
    return m_instanceId;
}

void LoadBalancer::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool LoadBalancer::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string LoadBalancer::GetName() const
{
    return m_name;
}

void LoadBalancer::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LoadBalancer::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LoadBalancer::GetType() const
{
    return m_type;
}

void LoadBalancer::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LoadBalancer::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

HealthChecker LoadBalancer::GetHealthChecker() const
{
    return m_healthChecker;
}

void LoadBalancer::SetHealthChecker(const HealthChecker& _healthChecker)
{
    m_healthChecker = _healthChecker;
    m_healthCheckerHasBeenSet = true;
}

bool LoadBalancer::HealthCheckerHasBeenSet() const
{
    return m_healthCheckerHasBeenSet;
}

string LoadBalancer::GetSteeringPolicy() const
{
    return m_steeringPolicy;
}

void LoadBalancer::SetSteeringPolicy(const string& _steeringPolicy)
{
    m_steeringPolicy = _steeringPolicy;
    m_steeringPolicyHasBeenSet = true;
}

bool LoadBalancer::SteeringPolicyHasBeenSet() const
{
    return m_steeringPolicyHasBeenSet;
}

string LoadBalancer::GetFailoverPolicy() const
{
    return m_failoverPolicy;
}

void LoadBalancer::SetFailoverPolicy(const string& _failoverPolicy)
{
    m_failoverPolicy = _failoverPolicy;
    m_failoverPolicyHasBeenSet = true;
}

bool LoadBalancer::FailoverPolicyHasBeenSet() const
{
    return m_failoverPolicyHasBeenSet;
}

vector<OriginGroupHealthStatus> LoadBalancer::GetOriginGroupHealthStatus() const
{
    return m_originGroupHealthStatus;
}

void LoadBalancer::SetOriginGroupHealthStatus(const vector<OriginGroupHealthStatus>& _originGroupHealthStatus)
{
    m_originGroupHealthStatus = _originGroupHealthStatus;
    m_originGroupHealthStatusHasBeenSet = true;
}

bool LoadBalancer::OriginGroupHealthStatusHasBeenSet() const
{
    return m_originGroupHealthStatusHasBeenSet;
}

string LoadBalancer::GetStatus() const
{
    return m_status;
}

void LoadBalancer::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LoadBalancer::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> LoadBalancer::GetL4UsedList() const
{
    return m_l4UsedList;
}

void LoadBalancer::SetL4UsedList(const vector<string>& _l4UsedList)
{
    m_l4UsedList = _l4UsedList;
    m_l4UsedListHasBeenSet = true;
}

bool LoadBalancer::L4UsedListHasBeenSet() const
{
    return m_l4UsedListHasBeenSet;
}

vector<string> LoadBalancer::GetL7UsedList() const
{
    return m_l7UsedList;
}

void LoadBalancer::SetL7UsedList(const vector<string>& _l7UsedList)
{
    m_l7UsedList = _l7UsedList;
    m_l7UsedListHasBeenSet = true;
}

bool LoadBalancer::L7UsedListHasBeenSet() const
{
    return m_l7UsedListHasBeenSet;
}

