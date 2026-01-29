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

#include <tencentcloud/tcb/v20180608/model/DescribeTablesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeTablesRequest::DescribeTablesRequest() :
    m_mgoLimitHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_mgoOffsetHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_mongoConnectorHasBeenSet(false)
{
}

string DescribeTablesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mgoLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MgoLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mgoLimit, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_mgoOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MgoOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mgoOffset, allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_mongoConnectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoConnector";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mongoConnector.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeTablesRequest::GetMgoLimit() const
{
    return m_mgoLimit;
}

void DescribeTablesRequest::SetMgoLimit(const int64_t& _mgoLimit)
{
    m_mgoLimit = _mgoLimit;
    m_mgoLimitHasBeenSet = true;
}

bool DescribeTablesRequest::MgoLimitHasBeenSet() const
{
    return m_mgoLimitHasBeenSet;
}

string DescribeTablesRequest::GetTag() const
{
    return m_tag;
}

void DescribeTablesRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DescribeTablesRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

int64_t DescribeTablesRequest::GetMgoOffset() const
{
    return m_mgoOffset;
}

void DescribeTablesRequest::SetMgoOffset(const int64_t& _mgoOffset)
{
    m_mgoOffset = _mgoOffset;
    m_mgoOffsetHasBeenSet = true;
}

bool DescribeTablesRequest::MgoOffsetHasBeenSet() const
{
    return m_mgoOffsetHasBeenSet;
}

string DescribeTablesRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeTablesRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeTablesRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

MongoConnector DescribeTablesRequest::GetMongoConnector() const
{
    return m_mongoConnector;
}

void DescribeTablesRequest::SetMongoConnector(const MongoConnector& _mongoConnector)
{
    m_mongoConnector = _mongoConnector;
    m_mongoConnectorHasBeenSet = true;
}

bool DescribeTablesRequest::MongoConnectorHasBeenSet() const
{
    return m_mongoConnectorHasBeenSet;
}


