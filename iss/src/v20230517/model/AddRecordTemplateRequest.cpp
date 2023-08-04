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

#include <tencentcloud/iss/v20230517/model/AddRecordTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AddRecordTemplateRequest::AddRecordTemplateRequest() :
    m_templateNameHasBeenSet(false),
    m_timeSectionsHasBeenSet(false)
{
}

string AddRecordTemplateRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddRecordTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void AddRecordTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool AddRecordTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

vector<RecordTemplateTimeSections> AddRecordTemplateRequest::GetTimeSections() const
{
    return m_timeSections;
}

void AddRecordTemplateRequest::SetTimeSections(const vector<RecordTemplateTimeSections>& _timeSections)
{
    m_timeSections = _timeSections;
    m_timeSectionsHasBeenSet = true;
}

bool AddRecordTemplateRequest::TimeSectionsHasBeenSet() const
{
    return m_timeSectionsHasBeenSet;
}


