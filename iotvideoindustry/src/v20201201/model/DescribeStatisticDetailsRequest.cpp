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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeStatisticDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeStatisticDetailsRequest::DescribeStatisticDetailsRequest() :
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_statisticFieldHasBeenSet(false)
{
}

string DescribeStatisticDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_statisticFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_statisticField.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStatisticDetailsRequest::GetStartDate() const
{
    return m_startDate;
}

void DescribeStatisticDetailsRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool DescribeStatisticDetailsRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DescribeStatisticDetailsRequest::GetEndDate() const
{
    return m_endDate;
}

void DescribeStatisticDetailsRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DescribeStatisticDetailsRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string DescribeStatisticDetailsRequest::GetStatisticField() const
{
    return m_statisticField;
}

void DescribeStatisticDetailsRequest::SetStatisticField(const string& _statisticField)
{
    m_statisticField = _statisticField;
    m_statisticFieldHasBeenSet = true;
}

bool DescribeStatisticDetailsRequest::StatisticFieldHasBeenSet() const
{
    return m_statisticFieldHasBeenSet;
}


