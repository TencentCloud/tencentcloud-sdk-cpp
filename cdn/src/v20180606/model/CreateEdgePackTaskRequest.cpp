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

#include <tencentcloud/cdn/v20180606/model/CreateEdgePackTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

CreateEdgePackTaskRequest::CreateEdgePackTaskRequest() :
    m_cosBucketHasBeenSet(false),
    m_cosUriFromHasBeenSet(false),
    m_blockIDHasBeenSet(false),
    m_cosUriToHasBeenSet(false)
{
}

string CreateEdgePackTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_cosUriFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUriFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosUriFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_blockIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_blockID, allocator);
    }

    if (m_cosUriToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUriTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosUriTo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEdgePackTaskRequest::GetCosBucket() const
{
    return m_cosBucket;
}

void CreateEdgePackTaskRequest::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool CreateEdgePackTaskRequest::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string CreateEdgePackTaskRequest::GetCosUriFrom() const
{
    return m_cosUriFrom;
}

void CreateEdgePackTaskRequest::SetCosUriFrom(const string& _cosUriFrom)
{
    m_cosUriFrom = _cosUriFrom;
    m_cosUriFromHasBeenSet = true;
}

bool CreateEdgePackTaskRequest::CosUriFromHasBeenSet() const
{
    return m_cosUriFromHasBeenSet;
}

uint64_t CreateEdgePackTaskRequest::GetBlockID() const
{
    return m_blockID;
}

void CreateEdgePackTaskRequest::SetBlockID(const uint64_t& _blockID)
{
    m_blockID = _blockID;
    m_blockIDHasBeenSet = true;
}

bool CreateEdgePackTaskRequest::BlockIDHasBeenSet() const
{
    return m_blockIDHasBeenSet;
}

string CreateEdgePackTaskRequest::GetCosUriTo() const
{
    return m_cosUriTo;
}

void CreateEdgePackTaskRequest::SetCosUriTo(const string& _cosUriTo)
{
    m_cosUriTo = _cosUriTo;
    m_cosUriToHasBeenSet = true;
}

bool CreateEdgePackTaskRequest::CosUriToHasBeenSet() const
{
    return m_cosUriToHasBeenSet;
}


