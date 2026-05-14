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

#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeRumLogExportV2Request::DescribeRumLogExportV2Request() :
    m_nameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
}

string DescribeRumLogExportV2Request::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fields.begin(); itr != m_fields.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRumLogExportV2Request::GetName() const
{
    return m_name;
}

void DescribeRumLogExportV2Request::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeRumLogExportV2Request::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeRumLogExportV2Request::GetStartTime() const
{
    return m_startTime;
}

void DescribeRumLogExportV2Request::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeRumLogExportV2Request::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeRumLogExportV2Request::GetFilter() const
{
    return m_filter;
}

void DescribeRumLogExportV2Request::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeRumLogExportV2Request::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

int64_t DescribeRumLogExportV2Request::GetEndTime() const
{
    return m_endTime;
}

void DescribeRumLogExportV2Request::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeRumLogExportV2Request::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeRumLogExportV2Request::GetID() const
{
    return m_iD;
}

void DescribeRumLogExportV2Request::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeRumLogExportV2Request::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

vector<string> DescribeRumLogExportV2Request::GetFields() const
{
    return m_fields;
}

void DescribeRumLogExportV2Request::SetFields(const vector<string>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool DescribeRumLogExportV2Request::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}


