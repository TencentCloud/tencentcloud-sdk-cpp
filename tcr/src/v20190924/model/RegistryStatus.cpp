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

#include <tencentcloud/tcr/v20190924/model/RegistryStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace rapidjson;
using namespace std;

RegistryStatus::RegistryStatus() :
    m_registryIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
}

CoreInternalOutcome RegistryStatus::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegistryStatus.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegistryStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Conditions") && !value["Conditions"].IsNull())
    {
        if (!value["Conditions"].IsArray())
            return CoreInternalOutcome(Error("response `RegistryStatus.Conditions` is not array type"));

        const Value &tmpValue = value["Conditions"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegistryCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conditions.push_back(item);
        }
        m_conditionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegistryStatus::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_registryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Conditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditions.begin(); itr != m_conditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RegistryStatus::GetRegistryId() const
{
    return m_registryId;
}

void RegistryStatus::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool RegistryStatus::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string RegistryStatus::GetStatus() const
{
    return m_status;
}

void RegistryStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RegistryStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<RegistryCondition> RegistryStatus::GetConditions() const
{
    return m_conditions;
}

void RegistryStatus::SetConditions(const vector<RegistryCondition>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool RegistryStatus::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

