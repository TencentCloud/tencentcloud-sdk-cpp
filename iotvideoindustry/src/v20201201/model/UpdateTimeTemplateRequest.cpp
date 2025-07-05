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

#include <tencentcloud/iotvideoindustry/v20201201/model/UpdateTimeTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

UpdateTimeTemplateRequest::UpdateTimeTemplateRequest() :
    m_templateIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_isAllWeekHasBeenSet(false),
    m_timeTemplateSpecsHasBeenSet(false)
{
}

string UpdateTimeTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_isAllWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllWeek";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAllWeek, allocator);
    }

    if (m_timeTemplateSpecsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeTemplateSpecs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeTemplateSpecs.begin(); itr != m_timeTemplateSpecs.end(); ++itr, ++i)
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


string UpdateTimeTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void UpdateTimeTemplateRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool UpdateTimeTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string UpdateTimeTemplateRequest::GetName() const
{
    return m_name;
}

void UpdateTimeTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateTimeTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t UpdateTimeTemplateRequest::GetIsAllWeek() const
{
    return m_isAllWeek;
}

void UpdateTimeTemplateRequest::SetIsAllWeek(const int64_t& _isAllWeek)
{
    m_isAllWeek = _isAllWeek;
    m_isAllWeekHasBeenSet = true;
}

bool UpdateTimeTemplateRequest::IsAllWeekHasBeenSet() const
{
    return m_isAllWeekHasBeenSet;
}

vector<TimeTemplateSpec> UpdateTimeTemplateRequest::GetTimeTemplateSpecs() const
{
    return m_timeTemplateSpecs;
}

void UpdateTimeTemplateRequest::SetTimeTemplateSpecs(const vector<TimeTemplateSpec>& _timeTemplateSpecs)
{
    m_timeTemplateSpecs = _timeTemplateSpecs;
    m_timeTemplateSpecsHasBeenSet = true;
}

bool UpdateTimeTemplateRequest::TimeTemplateSpecsHasBeenSet() const
{
    return m_timeTemplateSpecsHasBeenSet;
}


