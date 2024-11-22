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

#include <tencentcloud/tse/v20201207/model/DescribeConfigFileReleasesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeConfigFileReleasesRequest::DescribeConfigFileReleasesRequest() :
    m_instanceIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_onlyUseHasBeenSet(false),
    m_releaseNameHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_orderDescHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

string DescribeConfigFileReleasesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_onlyUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyUse";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyUse, allocator);
    }

    if (m_releaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_releaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDesc.c_str(), allocator).Move(), allocator);
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


string DescribeConfigFileReleasesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeConfigFileReleasesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeConfigFileReleasesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeConfigFileReleasesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeConfigFileReleasesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeConfigFileReleasesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeConfigFileReleasesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeConfigFileReleasesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeConfigFileReleasesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeConfigFileReleasesRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeConfigFileReleasesRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeConfigFileReleasesRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeConfigFileReleasesRequest::GetGroup() const
{
    return m_group;
}

void DescribeConfigFileReleasesRequest::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool DescribeConfigFileReleasesRequest::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string DescribeConfigFileReleasesRequest::GetFileName() const
{
    return m_fileName;
}

void DescribeConfigFileReleasesRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DescribeConfigFileReleasesRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

bool DescribeConfigFileReleasesRequest::GetOnlyUse() const
{
    return m_onlyUse;
}

void DescribeConfigFileReleasesRequest::SetOnlyUse(const bool& _onlyUse)
{
    m_onlyUse = _onlyUse;
    m_onlyUseHasBeenSet = true;
}

bool DescribeConfigFileReleasesRequest::OnlyUseHasBeenSet() const
{
    return m_onlyUseHasBeenSet;
}

string DescribeConfigFileReleasesRequest::GetReleaseName() const
{
    return m_releaseName;
}

void DescribeConfigFileReleasesRequest::SetReleaseName(const string& _releaseName)
{
    m_releaseName = _releaseName;
    m_releaseNameHasBeenSet = true;
}

bool DescribeConfigFileReleasesRequest::ReleaseNameHasBeenSet() const
{
    return m_releaseNameHasBeenSet;
}

string DescribeConfigFileReleasesRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeConfigFileReleasesRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeConfigFileReleasesRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

string DescribeConfigFileReleasesRequest::GetOrderDesc() const
{
    return m_orderDesc;
}

void DescribeConfigFileReleasesRequest::SetOrderDesc(const string& _orderDesc)
{
    m_orderDesc = _orderDesc;
    m_orderDescHasBeenSet = true;
}

bool DescribeConfigFileReleasesRequest::OrderDescHasBeenSet() const
{
    return m_orderDescHasBeenSet;
}

string DescribeConfigFileReleasesRequest::GetId() const
{
    return m_id;
}

void DescribeConfigFileReleasesRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeConfigFileReleasesRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}


