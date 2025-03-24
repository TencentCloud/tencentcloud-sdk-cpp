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

#include <tencentcloud/chc/v20230418/model/DescribeModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

DescribeModelRequest::DescribeModelRequest() :
    m_devModelHasBeenSet(false),
    m_campusIdHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_checkedHasBeenSet(false)
{
}

string DescribeModelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_devModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevModel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_devModel.c_str(), allocator).Move(), allocator);
    }

    if (m_campusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CampusId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_campusId, allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Checked";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checked, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeModelRequest::GetDevModel() const
{
    return m_devModel;
}

void DescribeModelRequest::SetDevModel(const string& _devModel)
{
    m_devModel = _devModel;
    m_devModelHasBeenSet = true;
}

bool DescribeModelRequest::DevModelHasBeenSet() const
{
    return m_devModelHasBeenSet;
}

uint64_t DescribeModelRequest::GetCampusId() const
{
    return m_campusId;
}

void DescribeModelRequest::SetCampusId(const uint64_t& _campusId)
{
    m_campusId = _campusId;
    m_campusIdHasBeenSet = true;
}

bool DescribeModelRequest::CampusIdHasBeenSet() const
{
    return m_campusIdHasBeenSet;
}

string DescribeModelRequest::GetDeviceType() const
{
    return m_deviceType;
}

void DescribeModelRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DescribeModelRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

bool DescribeModelRequest::GetChecked() const
{
    return m_checked;
}

void DescribeModelRequest::SetChecked(const bool& _checked)
{
    m_checked = _checked;
    m_checkedHasBeenSet = true;
}

bool DescribeModelRequest::CheckedHasBeenSet() const
{
    return m_checkedHasBeenSet;
}


