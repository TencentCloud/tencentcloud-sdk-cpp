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

#include <tencentcloud/cwp/v20180228/model/BaselineFix.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineFix::BaselineFix() :
    m_itemNameHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_fixTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome BaselineFix::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemName") && !value["ItemName"].IsNull())
    {
        if (!value["ItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFix.ItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemName = string(value["ItemName"].GetString());
        m_itemNameHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFix.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFix.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFix.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("FixTime") && !value["FixTime"].IsNull())
    {
        if (!value["FixTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFix.FixTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixTime = string(value["FixTime"].GetString());
        m_fixTimeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFix.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFix.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineFix::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fixTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixTime.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string BaselineFix::GetItemName() const
{
    return m_itemName;
}

void BaselineFix::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool BaselineFix::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

string BaselineFix::GetHostIp() const
{
    return m_hostIp;
}

void BaselineFix::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool BaselineFix::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string BaselineFix::GetCreateTime() const
{
    return m_createTime;
}

void BaselineFix::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BaselineFix::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BaselineFix::GetModifyTime() const
{
    return m_modifyTime;
}

void BaselineFix::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BaselineFix::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string BaselineFix::GetFixTime() const
{
    return m_fixTime;
}

void BaselineFix::SetFixTime(const string& _fixTime)
{
    m_fixTime = _fixTime;
    m_fixTimeHasBeenSet = true;
}

bool BaselineFix::FixTimeHasBeenSet() const
{
    return m_fixTimeHasBeenSet;
}

int64_t BaselineFix::GetId() const
{
    return m_id;
}

void BaselineFix::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BaselineFix::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

MachineExtraInfo BaselineFix::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void BaselineFix::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool BaselineFix::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

