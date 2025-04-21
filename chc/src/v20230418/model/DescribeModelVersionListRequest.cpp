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

#include <tencentcloud/chc/v20230418/model/DescribeModelVersionListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

DescribeModelVersionListRequest::DescribeModelVersionListRequest() :
    m_deviceTypeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_checkedHasBeenSet(false),
    m_campusIdHasBeenSet(false),
    m_modelNameHasBeenSet(false)
{
}

string DescribeModelVersionListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
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

    if (m_checkedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Checked";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checked, allocator);
    }

    if (m_campusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CampusId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_campusId, allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeModelVersionListRequest::GetDeviceType() const
{
    return m_deviceType;
}

void DescribeModelVersionListRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DescribeModelVersionListRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

vector<Filter> DescribeModelVersionListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeModelVersionListRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeModelVersionListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool DescribeModelVersionListRequest::GetChecked() const
{
    return m_checked;
}

void DescribeModelVersionListRequest::SetChecked(const bool& _checked)
{
    m_checked = _checked;
    m_checkedHasBeenSet = true;
}

bool DescribeModelVersionListRequest::CheckedHasBeenSet() const
{
    return m_checkedHasBeenSet;
}

uint64_t DescribeModelVersionListRequest::GetCampusId() const
{
    return m_campusId;
}

void DescribeModelVersionListRequest::SetCampusId(const uint64_t& _campusId)
{
    m_campusId = _campusId;
    m_campusIdHasBeenSet = true;
}

bool DescribeModelVersionListRequest::CampusIdHasBeenSet() const
{
    return m_campusIdHasBeenSet;
}

string DescribeModelVersionListRequest::GetModelName() const
{
    return m_modelName;
}

void DescribeModelVersionListRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool DescribeModelVersionListRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}


