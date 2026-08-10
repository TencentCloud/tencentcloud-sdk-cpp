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

#include <tencentcloud/csip/v20221121/model/VulWhitelist.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulWhitelist::VulWhitelist() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_assetListHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_assetRangeHasBeenSet(false),
    m_kBIdHasBeenSet(false),
    m_vulIdHasBeenSet(false)
{
}

CoreInternalOutcome VulWhitelist::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulWhitelist.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulWhitelist.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulWhitelist.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulWhitelist.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AssetList") && !value["AssetList"].IsNull())
    {
        if (!value["AssetList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulWhitelist.AssetList` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetList.push_back((*itr).GetString());
        }
        m_assetListHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulWhitelist.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulWhitelist.Switch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switch = value["Switch"].GetInt64();
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("AssetRange") && !value["AssetRange"].IsNull())
    {
        if (!value["AssetRange"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulWhitelist.AssetRange` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetRange = value["AssetRange"].GetUint64();
        m_assetRangeHasBeenSet = true;
    }

    if (value.HasMember("KBId") && !value["KBId"].IsNull())
    {
        if (!value["KBId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulWhitelist.KBId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kBId = value["KBId"].GetUint64();
        m_kBIdHasBeenSet = true;
    }

    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulWhitelist.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulWhitelist::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_assetListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetList.begin(); itr != m_assetList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switch, allocator);
    }

    if (m_assetRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetRange, allocator);
    }

    if (m_kBIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KBId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kBId, allocator);
    }

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

}


uint64_t VulWhitelist::GetId() const
{
    return m_id;
}

void VulWhitelist::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VulWhitelist::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string VulWhitelist::GetName() const
{
    return m_name;
}

void VulWhitelist::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VulWhitelist::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VulWhitelist::GetRemark() const
{
    return m_remark;
}

void VulWhitelist::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool VulWhitelist::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t VulWhitelist::GetAppId() const
{
    return m_appId;
}

void VulWhitelist::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool VulWhitelist::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

vector<string> VulWhitelist::GetAssetList() const
{
    return m_assetList;
}

void VulWhitelist::SetAssetList(const vector<string>& _assetList)
{
    m_assetList = _assetList;
    m_assetListHasBeenSet = true;
}

bool VulWhitelist::AssetListHasBeenSet() const
{
    return m_assetListHasBeenSet;
}

string VulWhitelist::GetUpdateTime() const
{
    return m_updateTime;
}

void VulWhitelist::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VulWhitelist::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t VulWhitelist::GetSwitch() const
{
    return m_switch;
}

void VulWhitelist::SetSwitch(const int64_t& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool VulWhitelist::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

uint64_t VulWhitelist::GetAssetRange() const
{
    return m_assetRange;
}

void VulWhitelist::SetAssetRange(const uint64_t& _assetRange)
{
    m_assetRange = _assetRange;
    m_assetRangeHasBeenSet = true;
}

bool VulWhitelist::AssetRangeHasBeenSet() const
{
    return m_assetRangeHasBeenSet;
}

uint64_t VulWhitelist::GetKBId() const
{
    return m_kBId;
}

void VulWhitelist::SetKBId(const uint64_t& _kBId)
{
    m_kBId = _kBId;
    m_kBIdHasBeenSet = true;
}

bool VulWhitelist::KBIdHasBeenSet() const
{
    return m_kBIdHasBeenSet;
}

uint64_t VulWhitelist::GetVulId() const
{
    return m_vulId;
}

void VulWhitelist::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulWhitelist::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

