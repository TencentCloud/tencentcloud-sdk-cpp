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

#include <tencentcloud/iss/v20230517/model/CreateVideoSnapshotTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

CreateVideoSnapshotTemplateRequest::CreateVideoSnapshotTemplateRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_timesHasBeenSet(false),
    m_multiModeHasBeenSet(false)
{
}

string CreateVideoSnapshotTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interval, allocator);
    }

    if (m_timesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Times";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_times.begin(); itr != m_times.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_multiModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_multiMode.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVideoSnapshotTemplateRequest::GetName() const
{
    return m_name;
}

void CreateVideoSnapshotTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateVideoSnapshotTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateVideoSnapshotTemplateRequest::GetType() const
{
    return m_type;
}

void CreateVideoSnapshotTemplateRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateVideoSnapshotTemplateRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t CreateVideoSnapshotTemplateRequest::GetInterval() const
{
    return m_interval;
}

void CreateVideoSnapshotTemplateRequest::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool CreateVideoSnapshotTemplateRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

vector<EffectiveTime> CreateVideoSnapshotTemplateRequest::GetTimes() const
{
    return m_times;
}

void CreateVideoSnapshotTemplateRequest::SetTimes(const vector<EffectiveTime>& _times)
{
    m_times = _times;
    m_timesHasBeenSet = true;
}

bool CreateVideoSnapshotTemplateRequest::TimesHasBeenSet() const
{
    return m_timesHasBeenSet;
}

MultiVideoSnapshotMode CreateVideoSnapshotTemplateRequest::GetMultiMode() const
{
    return m_multiMode;
}

void CreateVideoSnapshotTemplateRequest::SetMultiMode(const MultiVideoSnapshotMode& _multiMode)
{
    m_multiMode = _multiMode;
    m_multiModeHasBeenSet = true;
}

bool CreateVideoSnapshotTemplateRequest::MultiModeHasBeenSet() const
{
    return m_multiModeHasBeenSet;
}


