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

#include <tencentcloud/chc/v20230418/model/ExportCustomerWorkOrderDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

ExportCustomerWorkOrderDetailRequest::ExportCustomerWorkOrderDetailRequest() :
    m_workOrderTypeHasBeenSet(false),
    m_beginDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
}

string ExportCustomerWorkOrderDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workOrderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkOrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workOrderType.begin(); itr != m_workOrderType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_beginDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginDateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginDateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDateTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ExportCustomerWorkOrderDetailRequest::GetWorkOrderType() const
{
    return m_workOrderType;
}

void ExportCustomerWorkOrderDetailRequest::SetWorkOrderType(const vector<string>& _workOrderType)
{
    m_workOrderType = _workOrderType;
    m_workOrderTypeHasBeenSet = true;
}

bool ExportCustomerWorkOrderDetailRequest::WorkOrderTypeHasBeenSet() const
{
    return m_workOrderTypeHasBeenSet;
}

string ExportCustomerWorkOrderDetailRequest::GetBeginDateTime() const
{
    return m_beginDateTime;
}

void ExportCustomerWorkOrderDetailRequest::SetBeginDateTime(const string& _beginDateTime)
{
    m_beginDateTime = _beginDateTime;
    m_beginDateTimeHasBeenSet = true;
}

bool ExportCustomerWorkOrderDetailRequest::BeginDateTimeHasBeenSet() const
{
    return m_beginDateTimeHasBeenSet;
}

string ExportCustomerWorkOrderDetailRequest::GetEndDateTime() const
{
    return m_endDateTime;
}

void ExportCustomerWorkOrderDetailRequest::SetEndDateTime(const string& _endDateTime)
{
    m_endDateTime = _endDateTime;
    m_endDateTimeHasBeenSet = true;
}

bool ExportCustomerWorkOrderDetailRequest::EndDateTimeHasBeenSet() const
{
    return m_endDateTimeHasBeenSet;
}


