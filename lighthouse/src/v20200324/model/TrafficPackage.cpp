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

#include <tencentcloud/lighthouse/v20200324/model/TrafficPackage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

TrafficPackage::TrafficPackage() :
    m_trafficPackageIdHasBeenSet(false),
    m_trafficUsedHasBeenSet(false),
    m_trafficPackageTotalHasBeenSet(false),
    m_trafficPackageRemainingHasBeenSet(false),
    m_trafficOverflowHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_statusHasBeenSet(false)
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

    if (value.HasMember("TrafficUsed") && !value["TrafficUsed"].IsNull())
    {
        if (!value["TrafficUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.TrafficUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trafficUsed = value["TrafficUsed"].GetInt64();
        m_trafficUsedHasBeenSet = true;
    }

    if (value.HasMember("TrafficPackageTotal") && !value["TrafficPackageTotal"].IsNull())
    {
        if (!value["TrafficPackageTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.TrafficPackageTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trafficPackageTotal = value["TrafficPackageTotal"].GetInt64();
        m_trafficPackageTotalHasBeenSet = true;
    }

    if (value.HasMember("TrafficPackageRemaining") && !value["TrafficPackageRemaining"].IsNull())
    {
        if (!value["TrafficPackageRemaining"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.TrafficPackageRemaining` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trafficPackageRemaining = value["TrafficPackageRemaining"].GetInt64();
        m_trafficPackageRemainingHasBeenSet = true;
    }

    if (value.HasMember("TrafficOverflow") && !value["TrafficOverflow"].IsNull())
    {
        if (!value["TrafficOverflow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.TrafficOverflow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trafficOverflow = value["TrafficOverflow"].GetInt64();
        m_trafficOverflowHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
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

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
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

    if (m_trafficUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trafficUsed, allocator);
    }

    if (m_trafficPackageTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficPackageTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trafficPackageTotal, allocator);
    }

    if (m_trafficPackageRemainingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficPackageRemaining";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trafficPackageRemaining, allocator);
    }

    if (m_trafficOverflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficOverflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trafficOverflow, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

int64_t TrafficPackage::GetTrafficUsed() const
{
    return m_trafficUsed;
}

void TrafficPackage::SetTrafficUsed(const int64_t& _trafficUsed)
{
    m_trafficUsed = _trafficUsed;
    m_trafficUsedHasBeenSet = true;
}

bool TrafficPackage::TrafficUsedHasBeenSet() const
{
    return m_trafficUsedHasBeenSet;
}

int64_t TrafficPackage::GetTrafficPackageTotal() const
{
    return m_trafficPackageTotal;
}

void TrafficPackage::SetTrafficPackageTotal(const int64_t& _trafficPackageTotal)
{
    m_trafficPackageTotal = _trafficPackageTotal;
    m_trafficPackageTotalHasBeenSet = true;
}

bool TrafficPackage::TrafficPackageTotalHasBeenSet() const
{
    return m_trafficPackageTotalHasBeenSet;
}

int64_t TrafficPackage::GetTrafficPackageRemaining() const
{
    return m_trafficPackageRemaining;
}

void TrafficPackage::SetTrafficPackageRemaining(const int64_t& _trafficPackageRemaining)
{
    m_trafficPackageRemaining = _trafficPackageRemaining;
    m_trafficPackageRemainingHasBeenSet = true;
}

bool TrafficPackage::TrafficPackageRemainingHasBeenSet() const
{
    return m_trafficPackageRemainingHasBeenSet;
}

int64_t TrafficPackage::GetTrafficOverflow() const
{
    return m_trafficOverflow;
}

void TrafficPackage::SetTrafficOverflow(const int64_t& _trafficOverflow)
{
    m_trafficOverflow = _trafficOverflow;
    m_trafficOverflowHasBeenSet = true;
}

bool TrafficPackage::TrafficOverflowHasBeenSet() const
{
    return m_trafficOverflowHasBeenSet;
}

string TrafficPackage::GetStartTime() const
{
    return m_startTime;
}

void TrafficPackage::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TrafficPackage::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TrafficPackage::GetEndTime() const
{
    return m_endTime;
}

void TrafficPackage::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TrafficPackage::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
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

