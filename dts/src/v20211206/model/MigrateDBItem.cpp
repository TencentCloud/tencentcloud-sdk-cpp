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

#include <tencentcloud/dts/v20211206/model/MigrateDBItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

MigrateDBItem::MigrateDBItem() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_usableHasBeenSet(false),
    m_hintHasBeenSet(false)
{
}

CoreInternalOutcome MigrateDBItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateDBItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateDBItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateDBItem.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateDBItem.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("Usable") && !value["Usable"].IsNull())
    {
        if (!value["Usable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateDBItem.Usable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usable = value["Usable"].GetInt64();
        m_usableHasBeenSet = true;
    }

    if (value.HasMember("Hint") && !value["Hint"].IsNull())
    {
        if (!value["Hint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateDBItem.Hint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hint = string(value["Hint"].GetString());
        m_hintHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateDBItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_usableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usable, allocator);
    }

    if (m_hintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hint.c_str(), allocator).Move(), allocator);
    }

}


string MigrateDBItem::GetInstanceId() const
{
    return m_instanceId;
}

void MigrateDBItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool MigrateDBItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string MigrateDBItem::GetInstanceName() const
{
    return m_instanceName;
}

void MigrateDBItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool MigrateDBItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string MigrateDBItem::GetVip() const
{
    return m_vip;
}

void MigrateDBItem::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool MigrateDBItem::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t MigrateDBItem::GetVport() const
{
    return m_vport;
}

void MigrateDBItem::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool MigrateDBItem::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

int64_t MigrateDBItem::GetUsable() const
{
    return m_usable;
}

void MigrateDBItem::SetUsable(const int64_t& _usable)
{
    m_usable = _usable;
    m_usableHasBeenSet = true;
}

bool MigrateDBItem::UsableHasBeenSet() const
{
    return m_usableHasBeenSet;
}

string MigrateDBItem::GetHint() const
{
    return m_hint;
}

void MigrateDBItem::SetHint(const string& _hint)
{
    m_hint = _hint;
    m_hintHasBeenSet = true;
}

bool MigrateDBItem::HintHasBeenSet() const
{
    return m_hintHasBeenSet;
}

