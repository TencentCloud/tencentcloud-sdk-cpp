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

#include <tencentcloud/ess/v20201111/model/DescribeOrganizationGroupOrganizationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeOrganizationGroupOrganizationsRequest::DescribeOrganizationGroupOrganizationsRequest() :
    m_operatorHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_exportHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

string DescribeOrganizationGroupOrganizationsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_exportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Export";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_export, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo DescribeOrganizationGroupOrganizationsRequest::GetOperator() const
{
    return m_operator;
}

void DescribeOrganizationGroupOrganizationsRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeOrganizationGroupOrganizationsRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

uint64_t DescribeOrganizationGroupOrganizationsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeOrganizationGroupOrganizationsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeOrganizationGroupOrganizationsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeOrganizationGroupOrganizationsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeOrganizationGroupOrganizationsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeOrganizationGroupOrganizationsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeOrganizationGroupOrganizationsRequest::GetName() const
{
    return m_name;
}

void DescribeOrganizationGroupOrganizationsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeOrganizationGroupOrganizationsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeOrganizationGroupOrganizationsRequest::GetStatus() const
{
    return m_status;
}

void DescribeOrganizationGroupOrganizationsRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeOrganizationGroupOrganizationsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool DescribeOrganizationGroupOrganizationsRequest::GetExport() const
{
    return m_export;
}

void DescribeOrganizationGroupOrganizationsRequest::SetExport(const bool& _export)
{
    m_export = _export;
    m_exportHasBeenSet = true;
}

bool DescribeOrganizationGroupOrganizationsRequest::ExportHasBeenSet() const
{
    return m_exportHasBeenSet;
}

string DescribeOrganizationGroupOrganizationsRequest::GetId() const
{
    return m_id;
}

void DescribeOrganizationGroupOrganizationsRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeOrganizationGroupOrganizationsRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}


