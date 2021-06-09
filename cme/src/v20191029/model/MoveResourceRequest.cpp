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

#include <tencentcloud/cme/v20191029/model/MoveResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MoveResourceRequest::MoveResourceRequest() :
    m_platformHasBeenSet(false),
    m_sourceResourceHasBeenSet(false),
    m_destinationResourceHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string MoveResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceResource.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_destinationResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_destinationResource.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string MoveResourceRequest::GetPlatform() const
{
    return m_platform;
}

void MoveResourceRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool MoveResourceRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

ResourceInfo MoveResourceRequest::GetSourceResource() const
{
    return m_sourceResource;
}

void MoveResourceRequest::SetSourceResource(const ResourceInfo& _sourceResource)
{
    m_sourceResource = _sourceResource;
    m_sourceResourceHasBeenSet = true;
}

bool MoveResourceRequest::SourceResourceHasBeenSet() const
{
    return m_sourceResourceHasBeenSet;
}

ResourceInfo MoveResourceRequest::GetDestinationResource() const
{
    return m_destinationResource;
}

void MoveResourceRequest::SetDestinationResource(const ResourceInfo& _destinationResource)
{
    m_destinationResource = _destinationResource;
    m_destinationResourceHasBeenSet = true;
}

bool MoveResourceRequest::DestinationResourceHasBeenSet() const
{
    return m_destinationResourceHasBeenSet;
}

string MoveResourceRequest::GetOperator() const
{
    return m_operator;
}

void MoveResourceRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool MoveResourceRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


