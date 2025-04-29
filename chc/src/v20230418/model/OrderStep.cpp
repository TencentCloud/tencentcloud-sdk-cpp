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

#include <tencentcloud/chc/v20230418/model/OrderStep.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

OrderStep::OrderStep() :
    m_stepNameHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_ownerPhoneHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_stepStatusHasBeenSet(false)
{
}

CoreInternalOutcome OrderStep::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StepName") && !value["StepName"].IsNull())
    {
        if (!value["StepName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderStep.StepName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepName = string(value["StepName"].GetString());
        m_stepNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderStep.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerPhone") && !value["OwnerPhone"].IsNull())
    {
        if (!value["OwnerPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderStep.OwnerPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerPhone = string(value["OwnerPhone"].GetString());
        m_ownerPhoneHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderStep.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("StepStatus") && !value["StepStatus"].IsNull())
    {
        if (!value["StepStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderStep.StepStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepStatus = string(value["StepStatus"].GetString());
        m_stepStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrderStep::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stepNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stepStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepStatus.c_str(), allocator).Move(), allocator);
    }

}


string OrderStep::GetStepName() const
{
    return m_stepName;
}

void OrderStep::SetStepName(const string& _stepName)
{
    m_stepName = _stepName;
    m_stepNameHasBeenSet = true;
}

bool OrderStep::StepNameHasBeenSet() const
{
    return m_stepNameHasBeenSet;
}

string OrderStep::GetOwnerName() const
{
    return m_ownerName;
}

void OrderStep::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool OrderStep::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string OrderStep::GetOwnerPhone() const
{
    return m_ownerPhone;
}

void OrderStep::SetOwnerPhone(const string& _ownerPhone)
{
    m_ownerPhone = _ownerPhone;
    m_ownerPhoneHasBeenSet = true;
}

bool OrderStep::OwnerPhoneHasBeenSet() const
{
    return m_ownerPhoneHasBeenSet;
}

string OrderStep::GetFinishTime() const
{
    return m_finishTime;
}

void OrderStep::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool OrderStep::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string OrderStep::GetStepStatus() const
{
    return m_stepStatus;
}

void OrderStep::SetStepStatus(const string& _stepStatus)
{
    m_stepStatus = _stepStatus;
    m_stepStatusHasBeenSet = true;
}

bool OrderStep::StepStatusHasBeenSet() const
{
    return m_stepStatusHasBeenSet;
}

