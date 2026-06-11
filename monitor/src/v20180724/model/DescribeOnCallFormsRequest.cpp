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

#include <tencentcloud/monitor/v20180724/model/DescribeOnCallFormsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeOnCallFormsRequest::DescribeOnCallFormsRequest() :
    m_moduleHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_onCallFormStaffIDsHasBeenSet(false),
    m_rotationTypeHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_onCallFormNameHasBeenSet(false)
{
}

string DescribeOnCallFormsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_onCallFormStaffIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnCallFormStaffIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_onCallFormStaffIDs.begin(); itr != m_onCallFormStaffIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rotationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rotationType.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_onCallFormNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnCallFormName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_onCallFormName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeOnCallFormsRequest::GetModule() const
{
    return m_module;
}

void DescribeOnCallFormsRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribeOnCallFormsRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t DescribeOnCallFormsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeOnCallFormsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeOnCallFormsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeOnCallFormsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeOnCallFormsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeOnCallFormsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeOnCallFormsRequest::GetOnCallFormStaffIDs() const
{
    return m_onCallFormStaffIDs;
}

void DescribeOnCallFormsRequest::SetOnCallFormStaffIDs(const vector<string>& _onCallFormStaffIDs)
{
    m_onCallFormStaffIDs = _onCallFormStaffIDs;
    m_onCallFormStaffIDsHasBeenSet = true;
}

bool DescribeOnCallFormsRequest::OnCallFormStaffIDsHasBeenSet() const
{
    return m_onCallFormStaffIDsHasBeenSet;
}

string DescribeOnCallFormsRequest::GetRotationType() const
{
    return m_rotationType;
}

void DescribeOnCallFormsRequest::SetRotationType(const string& _rotationType)
{
    m_rotationType = _rotationType;
    m_rotationTypeHasBeenSet = true;
}

bool DescribeOnCallFormsRequest::RotationTypeHasBeenSet() const
{
    return m_rotationTypeHasBeenSet;
}

string DescribeOnCallFormsRequest::GetOrder() const
{
    return m_order;
}

void DescribeOnCallFormsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeOnCallFormsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeOnCallFormsRequest::GetOnCallFormName() const
{
    return m_onCallFormName;
}

void DescribeOnCallFormsRequest::SetOnCallFormName(const string& _onCallFormName)
{
    m_onCallFormName = _onCallFormName;
    m_onCallFormNameHasBeenSet = true;
}

bool DescribeOnCallFormsRequest::OnCallFormNameHasBeenSet() const
{
    return m_onCallFormNameHasBeenSet;
}


