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

#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeRumLogExportRequest::DescribeRumLogExportRequest() :
    m_nameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
}

string DescribeRumLogExportRequest::ToJsonString() const
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
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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


string DescribeRumLogExportRequest::GetName() const
{
    return m_name;
}

void DescribeRumLogExportRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeRumLogExportRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeRumLogExportRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeRumLogExportRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeRumLogExportRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeRumLogExportRequest::GetQuery() const
{
    return m_query;
}

void DescribeRumLogExportRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool DescribeRumLogExportRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string DescribeRumLogExportRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeRumLogExportRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeRumLogExportRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeRumLogExportRequest::GetID() const
{
    return m_iD;
}

void DescribeRumLogExportRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeRumLogExportRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

vector<string> DescribeRumLogExportRequest::GetFields() const
{
    return m_fields;
}

void DescribeRumLogExportRequest::SetFields(const vector<string>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool DescribeRumLogExportRequest::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}


