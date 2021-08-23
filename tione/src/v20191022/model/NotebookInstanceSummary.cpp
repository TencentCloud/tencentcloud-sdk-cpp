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

#include <tencentcloud/tione/v20191022/model/NotebookInstanceSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

NotebookInstanceSummary::NotebookInstanceSummary() :
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_notebookInstanceNameHasBeenSet(false),
    m_notebookInstanceStatusHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_startupTimeHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_prepayHasBeenSet(false),
    m_billingLabelHasBeenSet(false),
    m_runtimeInSecondsHasBeenSet(false),
    m_remainTimeInSecondsHasBeenSet(false)
{
}

CoreInternalOutcome NotebookInstanceSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookInstanceSummary.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedTime") && !value["LastModifiedTime"].IsNull())
    {
        if (!value["LastModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookInstanceSummary.LastModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedTime = string(value["LastModifiedTime"].GetString());
        m_lastModifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("NotebookInstanceName") && !value["NotebookInstanceName"].IsNull())
    {
        if (!value["NotebookInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookInstanceSummary.NotebookInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notebookInstanceName = string(value["NotebookInstanceName"].GetString());
        m_notebookInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("NotebookInstanceStatus") && !value["NotebookInstanceStatus"].IsNull())
    {
        if (!value["NotebookInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookInstanceSummary.NotebookInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notebookInstanceStatus = string(value["NotebookInstanceStatus"].GetString());
        m_notebookInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookInstanceSummary.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookInstanceSummary.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("StartupTime") && !value["StartupTime"].IsNull())
    {
        if (!value["StartupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookInstanceSummary.StartupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startupTime = string(value["StartupTime"].GetString());
        m_startupTimeHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookInstanceSummary.Deadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = string(value["Deadline"].GetString());
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("StoppingCondition") && !value["StoppingCondition"].IsNull())
    {
        if (!value["StoppingCondition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookInstanceSummary.StoppingCondition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stoppingCondition.Deserialize(value["StoppingCondition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stoppingConditionHasBeenSet = true;
    }

    if (value.HasMember("Prepay") && !value["Prepay"].IsNull())
    {
        if (!value["Prepay"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookInstanceSummary.Prepay` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_prepay = value["Prepay"].GetBool();
        m_prepayHasBeenSet = true;
    }

    if (value.HasMember("BillingLabel") && !value["BillingLabel"].IsNull())
    {
        if (!value["BillingLabel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookInstanceSummary.BillingLabel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_billingLabel.Deserialize(value["BillingLabel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_billingLabelHasBeenSet = true;
    }

    if (value.HasMember("RuntimeInSeconds") && !value["RuntimeInSeconds"].IsNull())
    {
        if (!value["RuntimeInSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookInstanceSummary.RuntimeInSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeInSeconds = value["RuntimeInSeconds"].GetInt64();
        m_runtimeInSecondsHasBeenSet = true;
    }

    if (value.HasMember("RemainTimeInSeconds") && !value["RemainTimeInSeconds"].IsNull())
    {
        if (!value["RemainTimeInSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookInstanceSummary.RemainTimeInSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainTimeInSeconds = value["RemainTimeInSeconds"].GetInt64();
        m_remainTimeInSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotebookInstanceSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_notebookInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notebookInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_notebookInstanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notebookInstanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_startupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }

    if (m_stoppingConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoppingCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stoppingCondition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_prepayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prepay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_prepay, allocator);
    }

    if (m_billingLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_billingLabel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_runtimeInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runtimeInSeconds, allocator);
    }

    if (m_remainTimeInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainTimeInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainTimeInSeconds, allocator);
    }

}


string NotebookInstanceSummary::GetCreationTime() const
{
    return m_creationTime;
}

void NotebookInstanceSummary::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool NotebookInstanceSummary::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string NotebookInstanceSummary::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

void NotebookInstanceSummary::SetLastModifiedTime(const string& _lastModifiedTime)
{
    m_lastModifiedTime = _lastModifiedTime;
    m_lastModifiedTimeHasBeenSet = true;
}

bool NotebookInstanceSummary::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}

string NotebookInstanceSummary::GetNotebookInstanceName() const
{
    return m_notebookInstanceName;
}

void NotebookInstanceSummary::SetNotebookInstanceName(const string& _notebookInstanceName)
{
    m_notebookInstanceName = _notebookInstanceName;
    m_notebookInstanceNameHasBeenSet = true;
}

bool NotebookInstanceSummary::NotebookInstanceNameHasBeenSet() const
{
    return m_notebookInstanceNameHasBeenSet;
}

string NotebookInstanceSummary::GetNotebookInstanceStatus() const
{
    return m_notebookInstanceStatus;
}

void NotebookInstanceSummary::SetNotebookInstanceStatus(const string& _notebookInstanceStatus)
{
    m_notebookInstanceStatus = _notebookInstanceStatus;
    m_notebookInstanceStatusHasBeenSet = true;
}

bool NotebookInstanceSummary::NotebookInstanceStatusHasBeenSet() const
{
    return m_notebookInstanceStatusHasBeenSet;
}

string NotebookInstanceSummary::GetInstanceType() const
{
    return m_instanceType;
}

void NotebookInstanceSummary::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool NotebookInstanceSummary::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string NotebookInstanceSummary::GetInstanceId() const
{
    return m_instanceId;
}

void NotebookInstanceSummary::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool NotebookInstanceSummary::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string NotebookInstanceSummary::GetStartupTime() const
{
    return m_startupTime;
}

void NotebookInstanceSummary::SetStartupTime(const string& _startupTime)
{
    m_startupTime = _startupTime;
    m_startupTimeHasBeenSet = true;
}

bool NotebookInstanceSummary::StartupTimeHasBeenSet() const
{
    return m_startupTimeHasBeenSet;
}

string NotebookInstanceSummary::GetDeadline() const
{
    return m_deadline;
}

void NotebookInstanceSummary::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool NotebookInstanceSummary::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

StoppingCondition NotebookInstanceSummary::GetStoppingCondition() const
{
    return m_stoppingCondition;
}

void NotebookInstanceSummary::SetStoppingCondition(const StoppingCondition& _stoppingCondition)
{
    m_stoppingCondition = _stoppingCondition;
    m_stoppingConditionHasBeenSet = true;
}

bool NotebookInstanceSummary::StoppingConditionHasBeenSet() const
{
    return m_stoppingConditionHasBeenSet;
}

bool NotebookInstanceSummary::GetPrepay() const
{
    return m_prepay;
}

void NotebookInstanceSummary::SetPrepay(const bool& _prepay)
{
    m_prepay = _prepay;
    m_prepayHasBeenSet = true;
}

bool NotebookInstanceSummary::PrepayHasBeenSet() const
{
    return m_prepayHasBeenSet;
}

BillingLabel NotebookInstanceSummary::GetBillingLabel() const
{
    return m_billingLabel;
}

void NotebookInstanceSummary::SetBillingLabel(const BillingLabel& _billingLabel)
{
    m_billingLabel = _billingLabel;
    m_billingLabelHasBeenSet = true;
}

bool NotebookInstanceSummary::BillingLabelHasBeenSet() const
{
    return m_billingLabelHasBeenSet;
}

int64_t NotebookInstanceSummary::GetRuntimeInSeconds() const
{
    return m_runtimeInSeconds;
}

void NotebookInstanceSummary::SetRuntimeInSeconds(const int64_t& _runtimeInSeconds)
{
    m_runtimeInSeconds = _runtimeInSeconds;
    m_runtimeInSecondsHasBeenSet = true;
}

bool NotebookInstanceSummary::RuntimeInSecondsHasBeenSet() const
{
    return m_runtimeInSecondsHasBeenSet;
}

int64_t NotebookInstanceSummary::GetRemainTimeInSeconds() const
{
    return m_remainTimeInSeconds;
}

void NotebookInstanceSummary::SetRemainTimeInSeconds(const int64_t& _remainTimeInSeconds)
{
    m_remainTimeInSeconds = _remainTimeInSeconds;
    m_remainTimeInSecondsHasBeenSet = true;
}

bool NotebookInstanceSummary::RemainTimeInSecondsHasBeenSet() const
{
    return m_remainTimeInSecondsHasBeenSet;
}

