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

#include <tencentcloud/bdrc/v20260330/model/DescribeFileBackupObjectsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DescribeFileBackupObjectsRequest::DescribeFileBackupObjectsRequest() :
    m_backupIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_objectTypeHasBeenSet(false)
{
}

string DescribeFileBackupObjectsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
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

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_objectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_objectType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFileBackupObjectsRequest::GetBackupId() const
{
    return m_backupId;
}

void DescribeFileBackupObjectsRequest::SetBackupId(const string& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool DescribeFileBackupObjectsRequest::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string DescribeFileBackupObjectsRequest::GetPath() const
{
    return m_path;
}

void DescribeFileBackupObjectsRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool DescribeFileBackupObjectsRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

uint64_t DescribeFileBackupObjectsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeFileBackupObjectsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeFileBackupObjectsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeFileBackupObjectsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeFileBackupObjectsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeFileBackupObjectsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeFileBackupObjectsRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeFileBackupObjectsRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeFileBackupObjectsRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

string DescribeFileBackupObjectsRequest::GetOrder() const
{
    return m_order;
}

void DescribeFileBackupObjectsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeFileBackupObjectsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeFileBackupObjectsRequest::GetObjectType() const
{
    return m_objectType;
}

void DescribeFileBackupObjectsRequest::SetObjectType(const string& _objectType)
{
    m_objectType = _objectType;
    m_objectTypeHasBeenSet = true;
}

bool DescribeFileBackupObjectsRequest::ObjectTypeHasBeenSet() const
{
    return m_objectTypeHasBeenSet;
}


