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

#include <tencentcloud/csip/v20221121/model/NotifySetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

NotifySetting::NotifySetting() :
    m_moduleHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_assetRangeHasBeenSet(false),
    m_optionHasBeenSet(false),
    m_subModuleHasBeenSet(false),
    m_itemHasBeenSet(false)
{
}

CoreInternalOutcome NotifySetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotifySetting.Module` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_module = string(value["Module"].GetString());
        m_moduleHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotifySetting.Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotifySetting.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotifySetting.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotifySetting.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("AssetRange") && !value["AssetRange"].IsNull())
    {
        if (!value["AssetRange"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotifySetting.AssetRange` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetRange = value["AssetRange"].GetInt64();
        m_assetRangeHasBeenSet = true;
    }

    if (value.HasMember("Option") && !value["Option"].IsNull())
    {
        if (!value["Option"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotifySetting.Option` is not array type"));

        const rapidjson::Value &tmpValue = value["Option"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_option.push_back((*itr).GetString());
        }
        m_optionHasBeenSet = true;
    }

    if (value.HasMember("SubModule") && !value["SubModule"].IsNull())
    {
        if (!value["SubModule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotifySetting.SubModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subModule = string(value["SubModule"].GetString());
        m_subModuleHasBeenSet = true;
    }

    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotifySetting.Item` is not array type"));

        const rapidjson::Value &tmpValue = value["Item"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_item.push_back((*itr).GetString());
        }
        m_itemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotifySetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetRange, allocator);
    }

    if (m_optionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_option.begin(); itr != m_option.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subModule.c_str(), allocator).Move(), allocator);
    }

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_item.begin(); itr != m_item.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string NotifySetting::GetModule() const
{
    return m_module;
}

void NotifySetting::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool NotifySetting::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t NotifySetting::GetMode() const
{
    return m_mode;
}

void NotifySetting::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool NotifySetting::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t NotifySetting::GetStatus() const
{
    return m_status;
}

void NotifySetting::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NotifySetting::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NotifySetting::GetBeginTime() const
{
    return m_beginTime;
}

void NotifySetting::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool NotifySetting::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string NotifySetting::GetEndTime() const
{
    return m_endTime;
}

void NotifySetting::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool NotifySetting::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t NotifySetting::GetAssetRange() const
{
    return m_assetRange;
}

void NotifySetting::SetAssetRange(const int64_t& _assetRange)
{
    m_assetRange = _assetRange;
    m_assetRangeHasBeenSet = true;
}

bool NotifySetting::AssetRangeHasBeenSet() const
{
    return m_assetRangeHasBeenSet;
}

vector<string> NotifySetting::GetOption() const
{
    return m_option;
}

void NotifySetting::SetOption(const vector<string>& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool NotifySetting::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}

string NotifySetting::GetSubModule() const
{
    return m_subModule;
}

void NotifySetting::SetSubModule(const string& _subModule)
{
    m_subModule = _subModule;
    m_subModuleHasBeenSet = true;
}

bool NotifySetting::SubModuleHasBeenSet() const
{
    return m_subModuleHasBeenSet;
}

vector<string> NotifySetting::GetItem() const
{
    return m_item;
}

void NotifySetting::SetItem(const vector<string>& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool NotifySetting::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

