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

#include <tencentcloud/ess/v20201111/model/DescribeFileUrlsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeFileUrlsRequest::DescribeFileUrlsRequest() :
    m_operatorHasBeenSet(false),
    m_businessTypeHasBeenSet(false),
    m_businessIdsHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_urlTtlHasBeenSet(false),
    m_ccTokenHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string DescribeFileUrlsRequest::ToJsonString() const
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

    if (m_businessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessType.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_businessIds.begin(); itr != m_businessIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
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

    if (m_urlTtlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlTtl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_urlTtl, allocator);
    }

    if (m_ccTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccToken.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo DescribeFileUrlsRequest::GetOperator() const
{
    return m_operator;
}

void DescribeFileUrlsRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeFileUrlsRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DescribeFileUrlsRequest::GetBusinessType() const
{
    return m_businessType;
}

void DescribeFileUrlsRequest::SetBusinessType(const string& _businessType)
{
    m_businessType = _businessType;
    m_businessTypeHasBeenSet = true;
}

bool DescribeFileUrlsRequest::BusinessTypeHasBeenSet() const
{
    return m_businessTypeHasBeenSet;
}

vector<string> DescribeFileUrlsRequest::GetBusinessIds() const
{
    return m_businessIds;
}

void DescribeFileUrlsRequest::SetBusinessIds(const vector<string>& _businessIds)
{
    m_businessIds = _businessIds;
    m_businessIdsHasBeenSet = true;
}

bool DescribeFileUrlsRequest::BusinessIdsHasBeenSet() const
{
    return m_businessIdsHasBeenSet;
}

string DescribeFileUrlsRequest::GetFileName() const
{
    return m_fileName;
}

void DescribeFileUrlsRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DescribeFileUrlsRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string DescribeFileUrlsRequest::GetFileType() const
{
    return m_fileType;
}

void DescribeFileUrlsRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DescribeFileUrlsRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

int64_t DescribeFileUrlsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeFileUrlsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeFileUrlsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeFileUrlsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeFileUrlsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeFileUrlsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeFileUrlsRequest::GetUrlTtl() const
{
    return m_urlTtl;
}

void DescribeFileUrlsRequest::SetUrlTtl(const int64_t& _urlTtl)
{
    m_urlTtl = _urlTtl;
    m_urlTtlHasBeenSet = true;
}

bool DescribeFileUrlsRequest::UrlTtlHasBeenSet() const
{
    return m_urlTtlHasBeenSet;
}

string DescribeFileUrlsRequest::GetCcToken() const
{
    return m_ccToken;
}

void DescribeFileUrlsRequest::SetCcToken(const string& _ccToken)
{
    m_ccToken = _ccToken;
    m_ccTokenHasBeenSet = true;
}

bool DescribeFileUrlsRequest::CcTokenHasBeenSet() const
{
    return m_ccTokenHasBeenSet;
}

string DescribeFileUrlsRequest::GetScene() const
{
    return m_scene;
}

void DescribeFileUrlsRequest::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool DescribeFileUrlsRequest::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

Agent DescribeFileUrlsRequest::GetAgent() const
{
    return m_agent;
}

void DescribeFileUrlsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DescribeFileUrlsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


