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

#include <tencentcloud/oceanus/v20190422/model/Setats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

Setats::Setats() :
    m_setatsSerialIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_warehouseHasBeenSet(false),
    m_masterInfoHasBeenSet(false),
    m_workerInfoHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_secondsUntilExpiryHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_managerUrlHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false)
{
}

CoreInternalOutcome Setats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SetatsSerialId") && !value["SetatsSerialId"].IsNull())
    {
        if (!value["SetatsSerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Setats.SetatsSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setatsSerialId = string(value["SetatsSerialId"].GetString());
        m_setatsSerialIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Setats.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Warehouse") && !value["Warehouse"].IsNull())
    {
        if (!value["Warehouse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Setats.Warehouse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_warehouse.Deserialize(value["Warehouse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_warehouseHasBeenSet = true;
    }

    if (value.HasMember("MasterInfo") && !value["MasterInfo"].IsNull())
    {
        if (!value["MasterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Setats.MasterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_masterInfo.Deserialize(value["MasterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterInfoHasBeenSet = true;
    }

    if (value.HasMember("WorkerInfo") && !value["WorkerInfo"].IsNull())
    {
        if (!value["WorkerInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Setats.WorkerInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workerInfo.Deserialize(value["WorkerInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workerInfoHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Setats.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Setats.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Setats.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("SecondsUntilExpiry") && !value["SecondsUntilExpiry"].IsNull())
    {
        if (!value["SecondsUntilExpiry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Setats.SecondsUntilExpiry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondsUntilExpiry = string(value["SecondsUntilExpiry"].GetString());
        m_secondsUntilExpiryHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Setats.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ManagerUrl") && !value["ManagerUrl"].IsNull())
    {
        if (!value["ManagerUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Setats.ManagerUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerUrl = string(value["ManagerUrl"].GetString());
        m_managerUrlHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Setats.IsolatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = string(value["IsolatedTime"].GetString());
        m_isolatedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Setats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_setatsSerialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetatsSerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setatsSerialId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_warehouseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Warehouse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_warehouse.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_masterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_masterInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workerInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workerInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_secondsUntilExpiryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondsUntilExpiry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondsUntilExpiry.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_managerUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedTime.c_str(), allocator).Move(), allocator);
    }

}


string Setats::GetSetatsSerialId() const
{
    return m_setatsSerialId;
}

void Setats::SetSetatsSerialId(const string& _setatsSerialId)
{
    m_setatsSerialId = _setatsSerialId;
    m_setatsSerialIdHasBeenSet = true;
}

bool Setats::SetatsSerialIdHasBeenSet() const
{
    return m_setatsSerialIdHasBeenSet;
}

int64_t Setats::GetStatus() const
{
    return m_status;
}

void Setats::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Setats::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

Warehouse Setats::GetWarehouse() const
{
    return m_warehouse;
}

void Setats::SetWarehouse(const Warehouse& _warehouse)
{
    m_warehouse = _warehouse;
    m_warehouseHasBeenSet = true;
}

bool Setats::WarehouseHasBeenSet() const
{
    return m_warehouseHasBeenSet;
}

SetatsCvmInfo Setats::GetMasterInfo() const
{
    return m_masterInfo;
}

void Setats::SetMasterInfo(const SetatsCvmInfo& _masterInfo)
{
    m_masterInfo = _masterInfo;
    m_masterInfoHasBeenSet = true;
}

bool Setats::MasterInfoHasBeenSet() const
{
    return m_masterInfoHasBeenSet;
}

SetatsCvmInfo Setats::GetWorkerInfo() const
{
    return m_workerInfo;
}

void Setats::SetWorkerInfo(const SetatsCvmInfo& _workerInfo)
{
    m_workerInfo = _workerInfo;
    m_workerInfoHasBeenSet = true;
}

bool Setats::WorkerInfoHasBeenSet() const
{
    return m_workerInfoHasBeenSet;
}

vector<Tag> Setats::GetTags() const
{
    return m_tags;
}

void Setats::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Setats::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t Setats::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void Setats::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool Setats::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string Setats::GetExpireTime() const
{
    return m_expireTime;
}

void Setats::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Setats::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string Setats::GetSecondsUntilExpiry() const
{
    return m_secondsUntilExpiry;
}

void Setats::SetSecondsUntilExpiry(const string& _secondsUntilExpiry)
{
    m_secondsUntilExpiry = _secondsUntilExpiry;
    m_secondsUntilExpiryHasBeenSet = true;
}

bool Setats::SecondsUntilExpiryHasBeenSet() const
{
    return m_secondsUntilExpiryHasBeenSet;
}

string Setats::GetCreateTime() const
{
    return m_createTime;
}

void Setats::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Setats::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Setats::GetManagerUrl() const
{
    return m_managerUrl;
}

void Setats::SetManagerUrl(const string& _managerUrl)
{
    m_managerUrl = _managerUrl;
    m_managerUrlHasBeenSet = true;
}

bool Setats::ManagerUrlHasBeenSet() const
{
    return m_managerUrlHasBeenSet;
}

string Setats::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void Setats::SetIsolatedTime(const string& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool Setats::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

