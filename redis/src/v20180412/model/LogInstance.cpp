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

#include <tencentcloud/redis/v20180412/model/LogInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

LogInstance::LogInstance() :
    m_instanceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enableQueryHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_highLogExpireDayHasBeenSet(false),
    m_lowLogExpireDayHasBeenSet(false),
    m_logExpireDayHasBeenSet(false),
    m_highStorageHasBeenSet(false),
    m_lowStorageHasBeenSet(false),
    m_logStorageHasBeenSet(false),
    m_deliverHasBeenSet(false),
    m_deliverSummaryHasBeenSet(false),
    m_instanceInfoHasBeenSet(false),
    m_logSubTypeHasBeenSet(false)
{
}

CoreInternalOutcome LogInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EnableQuery") && !value["EnableQuery"].IsNull())
    {
        if (!value["EnableQuery"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstance.EnableQuery` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enableQuery = string(value["EnableQuery"].GetString());
        m_enableQueryHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstance.CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(value["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }

    if (value.HasMember("HighLogExpireDay") && !value["HighLogExpireDay"].IsNull())
    {
        if (!value["HighLogExpireDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstance.HighLogExpireDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_highLogExpireDay = value["HighLogExpireDay"].GetInt64();
        m_highLogExpireDayHasBeenSet = true;
    }

    if (value.HasMember("LowLogExpireDay") && !value["LowLogExpireDay"].IsNull())
    {
        if (!value["LowLogExpireDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstance.LowLogExpireDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lowLogExpireDay = value["LowLogExpireDay"].GetInt64();
        m_lowLogExpireDayHasBeenSet = true;
    }

    if (value.HasMember("LogExpireDay") && !value["LogExpireDay"].IsNull())
    {
        if (!value["LogExpireDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstance.LogExpireDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logExpireDay = value["LogExpireDay"].GetInt64();
        m_logExpireDayHasBeenSet = true;
    }

    if (value.HasMember("HighStorage") && !value["HighStorage"].IsNull())
    {
        if (!value["HighStorage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstance.HighStorage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_highStorage = value["HighStorage"].GetDouble();
        m_highStorageHasBeenSet = true;
    }

    if (value.HasMember("LowStorage") && !value["LowStorage"].IsNull())
    {
        if (!value["LowStorage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstance.LowStorage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lowStorage = value["LowStorage"].GetDouble();
        m_lowStorageHasBeenSet = true;
    }

    if (value.HasMember("LogStorage") && !value["LogStorage"].IsNull())
    {
        if (!value["LogStorage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstance.LogStorage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_logStorage = value["LogStorage"].GetDouble();
        m_logStorageHasBeenSet = true;
    }

    if (value.HasMember("Deliver") && !value["Deliver"].IsNull())
    {
        if (!value["Deliver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstance.Deliver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliver = string(value["Deliver"].GetString());
        m_deliverHasBeenSet = true;
    }

    if (value.HasMember("DeliverSummary") && !value["DeliverSummary"].IsNull())
    {
        if (!value["DeliverSummary"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogInstance.DeliverSummary` is not array type"));

        const rapidjson::Value &tmpValue = value["DeliverSummary"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeliverSummary item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deliverSummary.push_back(item);
        }
        m_deliverSummaryHasBeenSet = true;
    }

    if (value.HasMember("InstanceInfo") && !value["InstanceInfo"].IsNull())
    {
        if (!value["InstanceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstance.InstanceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceInfo.Deserialize(value["InstanceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceInfoHasBeenSet = true;
    }

    if (value.HasMember("LogSubType") && !value["LogSubType"].IsNull())
    {
        if (!value["LogSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInstance.LogSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSubType = string(value["LogSubType"].GetString());
        m_logSubTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_enableQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enableQuery.c_str(), allocator).Move(), allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
    }

    if (m_highLogExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highLogExpireDay, allocator);
    }

    if (m_lowLogExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowLogExpireDay, allocator);
    }

    if (m_logExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logExpireDay, allocator);
    }

    if (m_highStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highStorage, allocator);
    }

    if (m_lowStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowStorage, allocator);
    }

    if (m_logStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logStorage, allocator);
    }

    if (m_deliverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deliver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliver.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deliverSummary.begin(); itr != m_deliverSummary.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSubType.c_str(), allocator).Move(), allocator);
    }

}


string LogInstance::GetInstanceId() const
{
    return m_instanceId;
}

void LogInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool LogInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string LogInstance::GetStatus() const
{
    return m_status;
}

void LogInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LogInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LogInstance::GetEnableQuery() const
{
    return m_enableQuery;
}

void LogInstance::SetEnableQuery(const string& _enableQuery)
{
    m_enableQuery = _enableQuery;
    m_enableQueryHasBeenSet = true;
}

bool LogInstance::EnableQueryHasBeenSet() const
{
    return m_enableQueryHasBeenSet;
}

string LogInstance::GetCreateAt() const
{
    return m_createAt;
}

void LogInstance::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool LogInstance::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

int64_t LogInstance::GetHighLogExpireDay() const
{
    return m_highLogExpireDay;
}

void LogInstance::SetHighLogExpireDay(const int64_t& _highLogExpireDay)
{
    m_highLogExpireDay = _highLogExpireDay;
    m_highLogExpireDayHasBeenSet = true;
}

bool LogInstance::HighLogExpireDayHasBeenSet() const
{
    return m_highLogExpireDayHasBeenSet;
}

int64_t LogInstance::GetLowLogExpireDay() const
{
    return m_lowLogExpireDay;
}

void LogInstance::SetLowLogExpireDay(const int64_t& _lowLogExpireDay)
{
    m_lowLogExpireDay = _lowLogExpireDay;
    m_lowLogExpireDayHasBeenSet = true;
}

bool LogInstance::LowLogExpireDayHasBeenSet() const
{
    return m_lowLogExpireDayHasBeenSet;
}

int64_t LogInstance::GetLogExpireDay() const
{
    return m_logExpireDay;
}

void LogInstance::SetLogExpireDay(const int64_t& _logExpireDay)
{
    m_logExpireDay = _logExpireDay;
    m_logExpireDayHasBeenSet = true;
}

bool LogInstance::LogExpireDayHasBeenSet() const
{
    return m_logExpireDayHasBeenSet;
}

double LogInstance::GetHighStorage() const
{
    return m_highStorage;
}

void LogInstance::SetHighStorage(const double& _highStorage)
{
    m_highStorage = _highStorage;
    m_highStorageHasBeenSet = true;
}

bool LogInstance::HighStorageHasBeenSet() const
{
    return m_highStorageHasBeenSet;
}

double LogInstance::GetLowStorage() const
{
    return m_lowStorage;
}

void LogInstance::SetLowStorage(const double& _lowStorage)
{
    m_lowStorage = _lowStorage;
    m_lowStorageHasBeenSet = true;
}

bool LogInstance::LowStorageHasBeenSet() const
{
    return m_lowStorageHasBeenSet;
}

double LogInstance::GetLogStorage() const
{
    return m_logStorage;
}

void LogInstance::SetLogStorage(const double& _logStorage)
{
    m_logStorage = _logStorage;
    m_logStorageHasBeenSet = true;
}

bool LogInstance::LogStorageHasBeenSet() const
{
    return m_logStorageHasBeenSet;
}

string LogInstance::GetDeliver() const
{
    return m_deliver;
}

void LogInstance::SetDeliver(const string& _deliver)
{
    m_deliver = _deliver;
    m_deliverHasBeenSet = true;
}

bool LogInstance::DeliverHasBeenSet() const
{
    return m_deliverHasBeenSet;
}

vector<DeliverSummary> LogInstance::GetDeliverSummary() const
{
    return m_deliverSummary;
}

void LogInstance::SetDeliverSummary(const vector<DeliverSummary>& _deliverSummary)
{
    m_deliverSummary = _deliverSummary;
    m_deliverSummaryHasBeenSet = true;
}

bool LogInstance::DeliverSummaryHasBeenSet() const
{
    return m_deliverSummaryHasBeenSet;
}

InstanceInfo LogInstance::GetInstanceInfo() const
{
    return m_instanceInfo;
}

void LogInstance::SetInstanceInfo(const InstanceInfo& _instanceInfo)
{
    m_instanceInfo = _instanceInfo;
    m_instanceInfoHasBeenSet = true;
}

bool LogInstance::InstanceInfoHasBeenSet() const
{
    return m_instanceInfoHasBeenSet;
}

string LogInstance::GetLogSubType() const
{
    return m_logSubType;
}

void LogInstance::SetLogSubType(const string& _logSubType)
{
    m_logSubType = _logSubType;
    m_logSubTypeHasBeenSet = true;
}

bool LogInstance::LogSubTypeHasBeenSet() const
{
    return m_logSubTypeHasBeenSet;
}

