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

#include <tencentcloud/vpc/v20170312/model/TrafficPackage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

TrafficPackage::TrafficPackage() :
    m_trafficPackageIdHasBeenSet(false),
    m_trafficPackageNameHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_remainingAmountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_usedAmountHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_deductTypeHasBeenSet(false)
{
}

CoreInternalOutcome TrafficPackage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TrafficPackageId") && !value["TrafficPackageId"].IsNull())
    {
        if (!value["TrafficPackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.TrafficPackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficPackageId = string(value["TrafficPackageId"].GetString());
        m_trafficPackageIdHasBeenSet = true;
    }

    if (value.HasMember("TrafficPackageName") && !value["TrafficPackageName"].IsNull())
    {
        if (!value["TrafficPackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.TrafficPackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficPackageName = string(value["TrafficPackageName"].GetString());
        m_trafficPackageNameHasBeenSet = true;
    }

    if (value.HasMember("TotalAmount") && !value["TotalAmount"].IsNull())
    {
        if (!value["TotalAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.TotalAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmount = value["TotalAmount"].GetDouble();
        m_totalAmountHasBeenSet = true;
    }

    if (value.HasMember("RemainingAmount") && !value["RemainingAmount"].IsNull())
    {
        if (!value["RemainingAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.RemainingAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingAmount = value["RemainingAmount"].GetDouble();
        m_remainingAmountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.Deadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = string(value["Deadline"].GetString());
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("UsedAmount") && !value["UsedAmount"].IsNull())
    {
        if (!value["UsedAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.UsedAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usedAmount = value["UsedAmount"].GetDouble();
        m_usedAmountHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("DeductType") && !value["DeductType"].IsNull())
    {
        if (!value["DeductType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.DeductType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductType = string(value["DeductType"].GetString());
        m_deductTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficPackage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_totalAmount, allocator);
    }

    if (m_remainingAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingAmount, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }

    if (m_usedAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedAmount, allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deductTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductType.c_str(), allocator).Move(), allocator);
    }

}


string TrafficPackage::GetTrafficPackageId() const
{
    return m_trafficPackageId;
}

void TrafficPackage::SetTrafficPackageId(const string& _trafficPackageId)
{
    m_trafficPackageId = _trafficPackageId;
    m_trafficPackageIdHasBeenSet = true;
}

bool TrafficPackage::TrafficPackageIdHasBeenSet() const
{
    return m_trafficPackageIdHasBeenSet;
}

string TrafficPackage::GetTrafficPackageName() const
{
    return m_trafficPackageName;
}

void TrafficPackage::SetTrafficPackageName(const string& _trafficPackageName)
{
    m_trafficPackageName = _trafficPackageName;
    m_trafficPackageNameHasBeenSet = true;
}

bool TrafficPackage::TrafficPackageNameHasBeenSet() const
{
    return m_trafficPackageNameHasBeenSet;
}

double TrafficPackage::GetTotalAmount() const
{
    return m_totalAmount;
}

void TrafficPackage::SetTotalAmount(const double& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool TrafficPackage::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

double TrafficPackage::GetRemainingAmount() const
{
    return m_remainingAmount;
}

void TrafficPackage::SetRemainingAmount(const double& _remainingAmount)
{
    m_remainingAmount = _remainingAmount;
    m_remainingAmountHasBeenSet = true;
}

bool TrafficPackage::RemainingAmountHasBeenSet() const
{
    return m_remainingAmountHasBeenSet;
}

string TrafficPackage::GetStatus() const
{
    return m_status;
}

void TrafficPackage::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TrafficPackage::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TrafficPackage::GetCreatedTime() const
{
    return m_createdTime;
}

void TrafficPackage::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool TrafficPackage::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string TrafficPackage::GetDeadline() const
{
    return m_deadline;
}

void TrafficPackage::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool TrafficPackage::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

double TrafficPackage::GetUsedAmount() const
{
    return m_usedAmount;
}

void TrafficPackage::SetUsedAmount(const double& _usedAmount)
{
    m_usedAmount = _usedAmount;
    m_usedAmountHasBeenSet = true;
}

bool TrafficPackage::UsedAmountHasBeenSet() const
{
    return m_usedAmountHasBeenSet;
}

vector<Tag> TrafficPackage::GetTagSet() const
{
    return m_tagSet;
}

void TrafficPackage::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool TrafficPackage::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

string TrafficPackage::GetDeductType() const
{
    return m_deductType;
}

void TrafficPackage::SetDeductType(const string& _deductType)
{
    m_deductType = _deductType;
    m_deductTypeHasBeenSet = true;
}

bool TrafficPackage::DeductTypeHasBeenSet() const
{
    return m_deductTypeHasBeenSet;
}

