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

#include <tencentcloud/iotvideoindustry/v20201201/model/PresetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

PresetItem::PresetItem() :
    m_presetIdHasBeenSet(false),
    m_presetNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resetTimeHasBeenSet(false)
{
}

CoreInternalOutcome PresetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PresetId") && !value["PresetId"].IsNull())
    {
        if (!value["PresetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PresetItem.PresetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_presetId = value["PresetId"].GetInt64();
        m_presetIdHasBeenSet = true;
    }

    if (value.HasMember("PresetName") && !value["PresetName"].IsNull())
    {
        if (!value["PresetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetItem.PresetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_presetName = string(value["PresetName"].GetString());
        m_presetNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PresetItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ResetTime") && !value["ResetTime"].IsNull())
    {
        if (!value["ResetTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PresetItem.ResetTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resetTime = value["ResetTime"].GetInt64();
        m_resetTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PresetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_presetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_presetId, allocator);
    }

    if (m_presetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_presetName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_resetTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resetTime, allocator);
    }

}


int64_t PresetItem::GetPresetId() const
{
    return m_presetId;
}

void PresetItem::SetPresetId(const int64_t& _presetId)
{
    m_presetId = _presetId;
    m_presetIdHasBeenSet = true;
}

bool PresetItem::PresetIdHasBeenSet() const
{
    return m_presetIdHasBeenSet;
}

string PresetItem::GetPresetName() const
{
    return m_presetName;
}

void PresetItem::SetPresetName(const string& _presetName)
{
    m_presetName = _presetName;
    m_presetNameHasBeenSet = true;
}

bool PresetItem::PresetNameHasBeenSet() const
{
    return m_presetNameHasBeenSet;
}

int64_t PresetItem::GetStatus() const
{
    return m_status;
}

void PresetItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PresetItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t PresetItem::GetResetTime() const
{
    return m_resetTime;
}

void PresetItem::SetResetTime(const int64_t& _resetTime)
{
    m_resetTime = _resetTime;
    m_resetTimeHasBeenSet = true;
}

bool PresetItem::ResetTimeHasBeenSet() const
{
    return m_resetTimeHasBeenSet;
}

