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

#include <tencentcloud/scf/v20180416/model/VersionProvisionedConcurrencyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

VersionProvisionedConcurrencyInfo::VersionProvisionedConcurrencyInfo() :
    m_allocatedProvisionedConcurrencyNumHasBeenSet(false),
    m_availableProvisionedConcurrencyNumHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_triggerActionsHasBeenSet(false)
{
}

CoreInternalOutcome VersionProvisionedConcurrencyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AllocatedProvisionedConcurrencyNum") && !value["AllocatedProvisionedConcurrencyNum"].IsNull())
    {
        if (!value["AllocatedProvisionedConcurrencyNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionProvisionedConcurrencyInfo.AllocatedProvisionedConcurrencyNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allocatedProvisionedConcurrencyNum = value["AllocatedProvisionedConcurrencyNum"].GetUint64();
        m_allocatedProvisionedConcurrencyNumHasBeenSet = true;
    }

    if (value.HasMember("AvailableProvisionedConcurrencyNum") && !value["AvailableProvisionedConcurrencyNum"].IsNull())
    {
        if (!value["AvailableProvisionedConcurrencyNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionProvisionedConcurrencyInfo.AvailableProvisionedConcurrencyNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableProvisionedConcurrencyNum = value["AvailableProvisionedConcurrencyNum"].GetUint64();
        m_availableProvisionedConcurrencyNumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionProvisionedConcurrencyInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusReason") && !value["StatusReason"].IsNull())
    {
        if (!value["StatusReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionProvisionedConcurrencyInfo.StatusReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusReason = string(value["StatusReason"].GetString());
        m_statusReasonHasBeenSet = true;
    }

    if (value.HasMember("Qualifier") && !value["Qualifier"].IsNull())
    {
        if (!value["Qualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionProvisionedConcurrencyInfo.Qualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifier = string(value["Qualifier"].GetString());
        m_qualifierHasBeenSet = true;
    }

    if (value.HasMember("TriggerActions") && !value["TriggerActions"].IsNull())
    {
        if (!value["TriggerActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VersionProvisionedConcurrencyInfo.TriggerActions` is not array type"));

        const rapidjson::Value &tmpValue = value["TriggerActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TriggerAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_triggerActions.push_back(item);
        }
        m_triggerActionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VersionProvisionedConcurrencyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_allocatedProvisionedConcurrencyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocatedProvisionedConcurrencyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allocatedProvisionedConcurrencyNum, allocator);
    }

    if (m_availableProvisionedConcurrencyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableProvisionedConcurrencyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableProvisionedConcurrencyNum, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusReason.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggerActions.begin(); itr != m_triggerActions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t VersionProvisionedConcurrencyInfo::GetAllocatedProvisionedConcurrencyNum() const
{
    return m_allocatedProvisionedConcurrencyNum;
}

void VersionProvisionedConcurrencyInfo::SetAllocatedProvisionedConcurrencyNum(const uint64_t& _allocatedProvisionedConcurrencyNum)
{
    m_allocatedProvisionedConcurrencyNum = _allocatedProvisionedConcurrencyNum;
    m_allocatedProvisionedConcurrencyNumHasBeenSet = true;
}

bool VersionProvisionedConcurrencyInfo::AllocatedProvisionedConcurrencyNumHasBeenSet() const
{
    return m_allocatedProvisionedConcurrencyNumHasBeenSet;
}

uint64_t VersionProvisionedConcurrencyInfo::GetAvailableProvisionedConcurrencyNum() const
{
    return m_availableProvisionedConcurrencyNum;
}

void VersionProvisionedConcurrencyInfo::SetAvailableProvisionedConcurrencyNum(const uint64_t& _availableProvisionedConcurrencyNum)
{
    m_availableProvisionedConcurrencyNum = _availableProvisionedConcurrencyNum;
    m_availableProvisionedConcurrencyNumHasBeenSet = true;
}

bool VersionProvisionedConcurrencyInfo::AvailableProvisionedConcurrencyNumHasBeenSet() const
{
    return m_availableProvisionedConcurrencyNumHasBeenSet;
}

string VersionProvisionedConcurrencyInfo::GetStatus() const
{
    return m_status;
}

void VersionProvisionedConcurrencyInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VersionProvisionedConcurrencyInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VersionProvisionedConcurrencyInfo::GetStatusReason() const
{
    return m_statusReason;
}

void VersionProvisionedConcurrencyInfo::SetStatusReason(const string& _statusReason)
{
    m_statusReason = _statusReason;
    m_statusReasonHasBeenSet = true;
}

bool VersionProvisionedConcurrencyInfo::StatusReasonHasBeenSet() const
{
    return m_statusReasonHasBeenSet;
}

string VersionProvisionedConcurrencyInfo::GetQualifier() const
{
    return m_qualifier;
}

void VersionProvisionedConcurrencyInfo::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool VersionProvisionedConcurrencyInfo::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

vector<TriggerAction> VersionProvisionedConcurrencyInfo::GetTriggerActions() const
{
    return m_triggerActions;
}

void VersionProvisionedConcurrencyInfo::SetTriggerActions(const vector<TriggerAction>& _triggerActions)
{
    m_triggerActions = _triggerActions;
    m_triggerActionsHasBeenSet = true;
}

bool VersionProvisionedConcurrencyInfo::TriggerActionsHasBeenSet() const
{
    return m_triggerActionsHasBeenSet;
}

