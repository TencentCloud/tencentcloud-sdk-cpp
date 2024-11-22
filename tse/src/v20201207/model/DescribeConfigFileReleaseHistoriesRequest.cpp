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

#include <tencentcloud/tse/v20201207/model/DescribeConfigFileReleaseHistoriesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeConfigFileReleaseHistoriesRequest::DescribeConfigFileReleaseHistoriesRequest() :
    m_instanceIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_endIdHasBeenSet(false),
    m_configFileIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeConfigFileReleaseHistoriesRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_endIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endId, allocator);
    }

    if (m_configFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configFileId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeConfigFileReleaseHistoriesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeConfigFileReleaseHistoriesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeConfigFileReleaseHistoriesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeConfigFileReleaseHistoriesRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeConfigFileReleaseHistoriesRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeConfigFileReleaseHistoriesRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeConfigFileReleaseHistoriesRequest::GetGroup() const
{
    return m_group;
}

void DescribeConfigFileReleaseHistoriesRequest::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool DescribeConfigFileReleaseHistoriesRequest::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string DescribeConfigFileReleaseHistoriesRequest::GetName() const
{
    return m_name;
}

void DescribeConfigFileReleaseHistoriesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeConfigFileReleaseHistoriesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeConfigFileReleaseHistoriesRequest::GetEndId() const
{
    return m_endId;
}

void DescribeConfigFileReleaseHistoriesRequest::SetEndId(const uint64_t& _endId)
{
    m_endId = _endId;
    m_endIdHasBeenSet = true;
}

bool DescribeConfigFileReleaseHistoriesRequest::EndIdHasBeenSet() const
{
    return m_endIdHasBeenSet;
}

string DescribeConfigFileReleaseHistoriesRequest::GetConfigFileId() const
{
    return m_configFileId;
}

void DescribeConfigFileReleaseHistoriesRequest::SetConfigFileId(const string& _configFileId)
{
    m_configFileId = _configFileId;
    m_configFileIdHasBeenSet = true;
}

bool DescribeConfigFileReleaseHistoriesRequest::ConfigFileIdHasBeenSet() const
{
    return m_configFileIdHasBeenSet;
}

uint64_t DescribeConfigFileReleaseHistoriesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeConfigFileReleaseHistoriesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeConfigFileReleaseHistoriesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeConfigFileReleaseHistoriesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeConfigFileReleaseHistoriesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeConfigFileReleaseHistoriesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


