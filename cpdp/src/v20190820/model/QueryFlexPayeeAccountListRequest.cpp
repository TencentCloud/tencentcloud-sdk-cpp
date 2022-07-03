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

#include <tencentcloud/cpdp/v20190820/model/QueryFlexPayeeAccountListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryFlexPayeeAccountListRequest::QueryFlexPayeeAccountListRequest() :
    m_propertyInfoHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string QueryFlexPayeeAccountListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_propertyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_propertyInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pageNumber.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


PayeeAccountPropertyInfo QueryFlexPayeeAccountListRequest::GetPropertyInfo() const
{
    return m_propertyInfo;
}

void QueryFlexPayeeAccountListRequest::SetPropertyInfo(const PayeeAccountPropertyInfo& _propertyInfo)
{
    m_propertyInfo = _propertyInfo;
    m_propertyInfoHasBeenSet = true;
}

bool QueryFlexPayeeAccountListRequest::PropertyInfoHasBeenSet() const
{
    return m_propertyInfoHasBeenSet;
}

string QueryFlexPayeeAccountListRequest::GetStartTime() const
{
    return m_startTime;
}

void QueryFlexPayeeAccountListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool QueryFlexPayeeAccountListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string QueryFlexPayeeAccountListRequest::GetEndTime() const
{
    return m_endTime;
}

void QueryFlexPayeeAccountListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool QueryFlexPayeeAccountListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

Paging QueryFlexPayeeAccountListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void QueryFlexPayeeAccountListRequest::SetPageNumber(const Paging& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool QueryFlexPayeeAccountListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string QueryFlexPayeeAccountListRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryFlexPayeeAccountListRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryFlexPayeeAccountListRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


