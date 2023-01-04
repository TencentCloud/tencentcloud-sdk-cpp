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

#include <tencentcloud/cwp/v20180228/model/BaselineItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineItem::BaselineItem() :
    m_itemIdHasBeenSet(false),
    m_itemNameHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_itemDescHasBeenSet(false),
    m_fixMethodHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_detectResultDescHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_detectStatusHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_canBeFixedHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome BaselineItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.ItemId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = value["ItemId"].GetInt64();
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("ItemName") && !value["ItemName"].IsNull())
    {
        if (!value["ItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.ItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemName = string(value["ItemName"].GetString());
        m_itemNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("ItemDesc") && !value["ItemDesc"].IsNull())
    {
        if (!value["ItemDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.ItemDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemDesc = string(value["ItemDesc"].GetString());
        m_itemDescHasBeenSet = true;
    }

    if (value.HasMember("FixMethod") && !value["FixMethod"].IsNull())
    {
        if (!value["FixMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.FixMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixMethod = string(value["FixMethod"].GetString());
        m_fixMethodHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("DetectResultDesc") && !value["DetectResultDesc"].IsNull())
    {
        if (!value["DetectResultDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.DetectResultDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectResultDesc = string(value["DetectResultDesc"].GetString());
        m_detectResultDescHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("DetectStatus") && !value["DetectStatus"].IsNull())
    {
        if (!value["DetectStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.DetectStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detectStatus = value["DetectStatus"].GetInt64();
        m_detectStatusHasBeenSet = true;
    }

    if (value.HasMember("HostId") && !value["HostId"].IsNull())
    {
        if (!value["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(value["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("CanBeFixed") && !value["CanBeFixed"].IsNull())
    {
        if (!value["CanBeFixed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.CanBeFixed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_canBeFixed = value["CanBeFixed"].GetInt64();
        m_canBeFixedHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.MachineExtraInfo` is not object type").SetRequestId(requestId));
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

void BaselineItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemId, allocator);
    }

    if (m_itemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_itemDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_fixMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_detectResultDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectResultDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectResultDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_detectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectStatus, allocator);
    }

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_canBeFixedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanBeFixed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canBeFixed, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
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


int64_t BaselineItem::GetItemId() const
{
    return m_itemId;
}

void BaselineItem::SetItemId(const int64_t& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool BaselineItem::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string BaselineItem::GetItemName() const
{
    return m_itemName;
}

void BaselineItem::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool BaselineItem::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

int64_t BaselineItem::GetCategoryId() const
{
    return m_categoryId;
}

void BaselineItem::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool BaselineItem::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string BaselineItem::GetItemDesc() const
{
    return m_itemDesc;
}

void BaselineItem::SetItemDesc(const string& _itemDesc)
{
    m_itemDesc = _itemDesc;
    m_itemDescHasBeenSet = true;
}

bool BaselineItem::ItemDescHasBeenSet() const
{
    return m_itemDescHasBeenSet;
}

string BaselineItem::GetFixMethod() const
{
    return m_fixMethod;
}

void BaselineItem::SetFixMethod(const string& _fixMethod)
{
    m_fixMethod = _fixMethod;
    m_fixMethodHasBeenSet = true;
}

bool BaselineItem::FixMethodHasBeenSet() const
{
    return m_fixMethodHasBeenSet;
}

string BaselineItem::GetRuleName() const
{
    return m_ruleName;
}

void BaselineItem::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool BaselineItem::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string BaselineItem::GetDetectResultDesc() const
{
    return m_detectResultDesc;
}

void BaselineItem::SetDetectResultDesc(const string& _detectResultDesc)
{
    m_detectResultDesc = _detectResultDesc;
    m_detectResultDescHasBeenSet = true;
}

bool BaselineItem::DetectResultDescHasBeenSet() const
{
    return m_detectResultDescHasBeenSet;
}

int64_t BaselineItem::GetLevel() const
{
    return m_level;
}

void BaselineItem::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BaselineItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t BaselineItem::GetDetectStatus() const
{
    return m_detectStatus;
}

void BaselineItem::SetDetectStatus(const int64_t& _detectStatus)
{
    m_detectStatus = _detectStatus;
    m_detectStatusHasBeenSet = true;
}

bool BaselineItem::DetectStatusHasBeenSet() const
{
    return m_detectStatusHasBeenSet;
}

string BaselineItem::GetHostId() const
{
    return m_hostId;
}

void BaselineItem::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool BaselineItem::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

string BaselineItem::GetHostName() const
{
    return m_hostName;
}

void BaselineItem::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool BaselineItem::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string BaselineItem::GetHostIp() const
{
    return m_hostIp;
}

void BaselineItem::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool BaselineItem::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string BaselineItem::GetWanIp() const
{
    return m_wanIp;
}

void BaselineItem::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool BaselineItem::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

string BaselineItem::GetFirstTime() const
{
    return m_firstTime;
}

void BaselineItem::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool BaselineItem::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

string BaselineItem::GetLastTime() const
{
    return m_lastTime;
}

void BaselineItem::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool BaselineItem::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

int64_t BaselineItem::GetCanBeFixed() const
{
    return m_canBeFixed;
}

void BaselineItem::SetCanBeFixed(const int64_t& _canBeFixed)
{
    m_canBeFixed = _canBeFixed;
    m_canBeFixedHasBeenSet = true;
}

bool BaselineItem::CanBeFixedHasBeenSet() const
{
    return m_canBeFixedHasBeenSet;
}

string BaselineItem::GetUuid() const
{
    return m_uuid;
}

void BaselineItem::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool BaselineItem::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

MachineExtraInfo BaselineItem::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void BaselineItem::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool BaselineItem::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

