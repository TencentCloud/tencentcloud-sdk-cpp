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

#include <tencentcloud/live/v20180801/model/TimeShiftTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

TimeShiftTemplate::TimeShiftTemplate() :
    m_templateNameHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_itemDurationHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_removeWatermarkHasBeenSet(false),
    m_transcodeTemplateIdsHasBeenSet(false)
{
}

CoreInternalOutcome TimeShiftTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftTemplate.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftTemplate.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ItemDuration") && !value["ItemDuration"].IsNull())
    {
        if (!value["ItemDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftTemplate.ItemDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_itemDuration = value["ItemDuration"].GetUint64();
        m_itemDurationHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftTemplate.TemplateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetUint64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftTemplate.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftTemplate.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("RemoveWatermark") && !value["RemoveWatermark"].IsNull())
    {
        if (!value["RemoveWatermark"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftTemplate.RemoveWatermark` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_removeWatermark = value["RemoveWatermark"].GetBool();
        m_removeWatermarkHasBeenSet = true;
    }

    if (value.HasMember("TranscodeTemplateIds") && !value["TranscodeTemplateIds"].IsNull())
    {
        if (!value["TranscodeTemplateIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimeShiftTemplate.TranscodeTemplateIds` is not array type"));

        const rapidjson::Value &tmpValue = value["TranscodeTemplateIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_transcodeTemplateIds.push_back((*itr).GetUint64());
        }
        m_transcodeTemplateIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeShiftTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_itemDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemDuration, allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_removeWatermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveWatermark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeWatermark, allocator);
    }

    if (m_transcodeTemplateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeTemplateIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_transcodeTemplateIds.begin(); itr != m_transcodeTemplateIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


string TimeShiftTemplate::GetTemplateName() const
{
    return m_templateName;
}

void TimeShiftTemplate::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool TimeShiftTemplate::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

uint64_t TimeShiftTemplate::GetDuration() const
{
    return m_duration;
}

void TimeShiftTemplate::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool TimeShiftTemplate::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

uint64_t TimeShiftTemplate::GetItemDuration() const
{
    return m_itemDuration;
}

void TimeShiftTemplate::SetItemDuration(const uint64_t& _itemDuration)
{
    m_itemDuration = _itemDuration;
    m_itemDurationHasBeenSet = true;
}

bool TimeShiftTemplate::ItemDurationHasBeenSet() const
{
    return m_itemDurationHasBeenSet;
}

uint64_t TimeShiftTemplate::GetTemplateId() const
{
    return m_templateId;
}

void TimeShiftTemplate::SetTemplateId(const uint64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool TimeShiftTemplate::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string TimeShiftTemplate::GetDescription() const
{
    return m_description;
}

void TimeShiftTemplate::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TimeShiftTemplate::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TimeShiftTemplate::GetArea() const
{
    return m_area;
}

void TimeShiftTemplate::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool TimeShiftTemplate::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

bool TimeShiftTemplate::GetRemoveWatermark() const
{
    return m_removeWatermark;
}

void TimeShiftTemplate::SetRemoveWatermark(const bool& _removeWatermark)
{
    m_removeWatermark = _removeWatermark;
    m_removeWatermarkHasBeenSet = true;
}

bool TimeShiftTemplate::RemoveWatermarkHasBeenSet() const
{
    return m_removeWatermarkHasBeenSet;
}

vector<uint64_t> TimeShiftTemplate::GetTranscodeTemplateIds() const
{
    return m_transcodeTemplateIds;
}

void TimeShiftTemplate::SetTranscodeTemplateIds(const vector<uint64_t>& _transcodeTemplateIds)
{
    m_transcodeTemplateIds = _transcodeTemplateIds;
    m_transcodeTemplateIdsHasBeenSet = true;
}

bool TimeShiftTemplate::TranscodeTemplateIdsHasBeenSet() const
{
    return m_transcodeTemplateIdsHasBeenSet;
}

