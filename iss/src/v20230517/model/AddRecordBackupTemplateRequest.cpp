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

#include <tencentcloud/iss/v20230517/model/AddRecordBackupTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AddRecordBackupTemplateRequest::AddRecordBackupTemplateRequest() :
    m_templateNameHasBeenSet(false),
    m_timeSectionsHasBeenSet(false),
    m_devTimeSectionsHasBeenSet(false),
    m_scaleHasBeenSet(false)
{
}

string AddRecordBackupTemplateRequest::ToJsonString() const
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

    if (m_timeSectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSections";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeSections.begin(); itr != m_timeSections.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_devTimeSectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevTimeSections";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_devTimeSections.begin(); itr != m_devTimeSections.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_scaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scale";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scale, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddRecordBackupTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void AddRecordBackupTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool AddRecordBackupTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

vector<RecordTemplateTimeSections> AddRecordBackupTemplateRequest::GetTimeSections() const
{
    return m_timeSections;
}

void AddRecordBackupTemplateRequest::SetTimeSections(const vector<RecordTemplateTimeSections>& _timeSections)
{
    m_timeSections = _timeSections;
    m_timeSectionsHasBeenSet = true;
}

bool AddRecordBackupTemplateRequest::TimeSectionsHasBeenSet() const
{
    return m_timeSectionsHasBeenSet;
}

vector<RecordTemplateTimeSections> AddRecordBackupTemplateRequest::GetDevTimeSections() const
{
    return m_devTimeSections;
}

void AddRecordBackupTemplateRequest::SetDevTimeSections(const vector<RecordTemplateTimeSections>& _devTimeSections)
{
    m_devTimeSections = _devTimeSections;
    m_devTimeSectionsHasBeenSet = true;
}

bool AddRecordBackupTemplateRequest::DevTimeSectionsHasBeenSet() const
{
    return m_devTimeSectionsHasBeenSet;
}

int64_t AddRecordBackupTemplateRequest::GetScale() const
{
    return m_scale;
}

void AddRecordBackupTemplateRequest::SetScale(const int64_t& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool AddRecordBackupTemplateRequest::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}


