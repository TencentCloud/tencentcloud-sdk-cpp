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

#include <tencentcloud/vpc/v20170312/model/UsedDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

UsedDetail::UsedDetail() :
    m_trafficPackageIdHasBeenSet(false),
    m_trafficPackageNameHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_deductionHasBeenSet(false),
    m_remainingAmountHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_deadlineHasBeenSet(false)
{
}

CoreInternalOutcome UsedDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TrafficPackageId") && !value["TrafficPackageId"].IsNull())
    {
        if (!value["TrafficPackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedDetail.TrafficPackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficPackageId = string(value["TrafficPackageId"].GetString());
        m_trafficPackageIdHasBeenSet = true;
    }

    if (value.HasMember("TrafficPackageName") && !value["TrafficPackageName"].IsNull())
    {
        if (!value["TrafficPackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedDetail.TrafficPackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficPackageName = string(value["TrafficPackageName"].GetString());
        m_trafficPackageNameHasBeenSet = true;
    }

    if (value.HasMember("TotalAmount") && !value["TotalAmount"].IsNull())
    {
        if (!value["TotalAmount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UsedDetail.TotalAmount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_totalAmount.Deserialize(value["TotalAmount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_totalAmountHasBeenSet = true;
    }

    if (value.HasMember("Deduction") && !value["Deduction"].IsNull())
    {
        if (!value["Deduction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UsedDetail.Deduction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deduction.Deserialize(value["Deduction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deductionHasBeenSet = true;
    }

    if (value.HasMember("RemainingAmount") && !value["RemainingAmount"].IsNull())
    {
        if (!value["RemainingAmount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UsedDetail.RemainingAmount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_remainingAmount.Deserialize(value["RemainingAmount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_remainingAmountHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedDetail.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedDetail.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedDetail.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedDetail.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedDetail.Deadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = string(value["Deadline"].GetString());
        m_deadlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsedDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_trafficPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficPackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficPackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficPackageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficPackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficPackageName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_totalAmount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deductionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deduction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deduction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_remainingAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_remainingAmount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }

}


string UsedDetail::GetTrafficPackageId() const
{
    return m_trafficPackageId;
}

void UsedDetail::SetTrafficPackageId(const string& _trafficPackageId)
{
    m_trafficPackageId = _trafficPackageId;
    m_trafficPackageIdHasBeenSet = true;
}

bool UsedDetail::TrafficPackageIdHasBeenSet() const
{
    return m_trafficPackageIdHasBeenSet;
}

string UsedDetail::GetTrafficPackageName() const
{
    return m_trafficPackageName;
}

void UsedDetail::SetTrafficPackageName(const string& _trafficPackageName)
{
    m_trafficPackageName = _trafficPackageName;
    m_trafficPackageNameHasBeenSet = true;
}

bool UsedDetail::TrafficPackageNameHasBeenSet() const
{
    return m_trafficPackageNameHasBeenSet;
}

TrafficFlow UsedDetail::GetTotalAmount() const
{
    return m_totalAmount;
}

void UsedDetail::SetTotalAmount(const TrafficFlow& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool UsedDetail::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

TrafficFlow UsedDetail::GetDeduction() const
{
    return m_deduction;
}

void UsedDetail::SetDeduction(const TrafficFlow& _deduction)
{
    m_deduction = _deduction;
    m_deductionHasBeenSet = true;
}

bool UsedDetail::DeductionHasBeenSet() const
{
    return m_deductionHasBeenSet;
}

TrafficFlow UsedDetail::GetRemainingAmount() const
{
    return m_remainingAmount;
}

void UsedDetail::SetRemainingAmount(const TrafficFlow& _remainingAmount)
{
    m_remainingAmount = _remainingAmount;
    m_remainingAmountHasBeenSet = true;
}

bool UsedDetail::RemainingAmountHasBeenSet() const
{
    return m_remainingAmountHasBeenSet;
}

string UsedDetail::GetTime() const
{
    return m_time;
}

void UsedDetail::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool UsedDetail::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string UsedDetail::GetResourceType() const
{
    return m_resourceType;
}

void UsedDetail::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool UsedDetail::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string UsedDetail::GetResourceId() const
{
    return m_resourceId;
}

void UsedDetail::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool UsedDetail::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string UsedDetail::GetResourceName() const
{
    return m_resourceName;
}

void UsedDetail::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool UsedDetail::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string UsedDetail::GetDeadline() const
{
    return m_deadline;
}

void UsedDetail::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool UsedDetail::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

