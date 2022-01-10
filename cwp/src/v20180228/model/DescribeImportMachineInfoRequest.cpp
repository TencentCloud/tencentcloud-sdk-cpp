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

#include <tencentcloud/cwp/v20180228/model/DescribeImportMachineInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeImportMachineInfoRequest::DescribeImportMachineInfoRequest() :
    m_machineListHasBeenSet(false),
    m_importTypeHasBeenSet(false),
    m_isQueryProMachineHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeImportMachineInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_machineListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_machineList.begin(); itr != m_machineList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_importTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_importType.c_str(), allocator).Move(), allocator);
    }

    if (m_isQueryProMachineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQueryProMachine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isQueryProMachine, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
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


vector<string> DescribeImportMachineInfoRequest::GetMachineList() const
{
    return m_machineList;
}

void DescribeImportMachineInfoRequest::SetMachineList(const vector<string>& _machineList)
{
    m_machineList = _machineList;
    m_machineListHasBeenSet = true;
}

bool DescribeImportMachineInfoRequest::MachineListHasBeenSet() const
{
    return m_machineListHasBeenSet;
}

string DescribeImportMachineInfoRequest::GetImportType() const
{
    return m_importType;
}

void DescribeImportMachineInfoRequest::SetImportType(const string& _importType)
{
    m_importType = _importType;
    m_importTypeHasBeenSet = true;
}

bool DescribeImportMachineInfoRequest::ImportTypeHasBeenSet() const
{
    return m_importTypeHasBeenSet;
}

bool DescribeImportMachineInfoRequest::GetIsQueryProMachine() const
{
    return m_isQueryProMachine;
}

void DescribeImportMachineInfoRequest::SetIsQueryProMachine(const bool& _isQueryProMachine)
{
    m_isQueryProMachine = _isQueryProMachine;
    m_isQueryProMachineHasBeenSet = true;
}

bool DescribeImportMachineInfoRequest::IsQueryProMachineHasBeenSet() const
{
    return m_isQueryProMachineHasBeenSet;
}

vector<Filters> DescribeImportMachineInfoRequest::GetFilters() const
{
    return m_filters;
}

void DescribeImportMachineInfoRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeImportMachineInfoRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


