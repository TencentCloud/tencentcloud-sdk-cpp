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

#include <tencentcloud/live/v20180801/model/CreateLiveTimeShiftTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateLiveTimeShiftTemplateRequest::CreateLiveTimeShiftTemplateRequest() :
    m_templateNameHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_itemDurationHasBeenSet(false),
    m_removeWatermarkHasBeenSet(false),
    m_transcodeTemplateIdsHasBeenSet(false)
{
}

string CreateLiveTimeShiftTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_itemDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_itemDuration, allocator);
    }

    if (m_removeWatermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveWatermark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_removeWatermark, allocator);
    }

    if (m_transcodeTemplateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeTemplateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_transcodeTemplateIds.begin(); itr != m_transcodeTemplateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLiveTimeShiftTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void CreateLiveTimeShiftTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool CreateLiveTimeShiftTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

uint64_t CreateLiveTimeShiftTemplateRequest::GetDuration() const
{
    return m_duration;
}

void CreateLiveTimeShiftTemplateRequest::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CreateLiveTimeShiftTemplateRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string CreateLiveTimeShiftTemplateRequest::GetDescription() const
{
    return m_description;
}

void CreateLiveTimeShiftTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateLiveTimeShiftTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateLiveTimeShiftTemplateRequest::GetArea() const
{
    return m_area;
}

void CreateLiveTimeShiftTemplateRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool CreateLiveTimeShiftTemplateRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

uint64_t CreateLiveTimeShiftTemplateRequest::GetItemDuration() const
{
    return m_itemDuration;
}

void CreateLiveTimeShiftTemplateRequest::SetItemDuration(const uint64_t& _itemDuration)
{
    m_itemDuration = _itemDuration;
    m_itemDurationHasBeenSet = true;
}

bool CreateLiveTimeShiftTemplateRequest::ItemDurationHasBeenSet() const
{
    return m_itemDurationHasBeenSet;
}

bool CreateLiveTimeShiftTemplateRequest::GetRemoveWatermark() const
{
    return m_removeWatermark;
}

void CreateLiveTimeShiftTemplateRequest::SetRemoveWatermark(const bool& _removeWatermark)
{
    m_removeWatermark = _removeWatermark;
    m_removeWatermarkHasBeenSet = true;
}

bool CreateLiveTimeShiftTemplateRequest::RemoveWatermarkHasBeenSet() const
{
    return m_removeWatermarkHasBeenSet;
}

vector<int64_t> CreateLiveTimeShiftTemplateRequest::GetTranscodeTemplateIds() const
{
    return m_transcodeTemplateIds;
}

void CreateLiveTimeShiftTemplateRequest::SetTranscodeTemplateIds(const vector<int64_t>& _transcodeTemplateIds)
{
    m_transcodeTemplateIds = _transcodeTemplateIds;
    m_transcodeTemplateIdsHasBeenSet = true;
}

bool CreateLiveTimeShiftTemplateRequest::TranscodeTemplateIdsHasBeenSet() const
{
    return m_transcodeTemplateIdsHasBeenSet;
}


