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

#include <tencentcloud/cme/v20191029/model/MoveClassRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MoveClassRequest::MoveClassRequest() :
    m_platformHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_sourceClassPathHasBeenSet(false),
    m_destinationClassPathHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string MoveClassRequest::ToJsonString() const
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

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sourceClassPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceClassPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceClassPath.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationClassPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationClassPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationClassPath.c_str(), allocator).Move(), allocator);
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


string MoveClassRequest::GetPlatform() const
{
    return m_platform;
}

void MoveClassRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool MoveClassRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

Entity MoveClassRequest::GetOwner() const
{
    return m_owner;
}

void MoveClassRequest::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool MoveClassRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string MoveClassRequest::GetSourceClassPath() const
{
    return m_sourceClassPath;
}

void MoveClassRequest::SetSourceClassPath(const string& _sourceClassPath)
{
    m_sourceClassPath = _sourceClassPath;
    m_sourceClassPathHasBeenSet = true;
}

bool MoveClassRequest::SourceClassPathHasBeenSet() const
{
    return m_sourceClassPathHasBeenSet;
}

string MoveClassRequest::GetDestinationClassPath() const
{
    return m_destinationClassPath;
}

void MoveClassRequest::SetDestinationClassPath(const string& _destinationClassPath)
{
    m_destinationClassPath = _destinationClassPath;
    m_destinationClassPathHasBeenSet = true;
}

bool MoveClassRequest::DestinationClassPathHasBeenSet() const
{
    return m_destinationClassPathHasBeenSet;
}

string MoveClassRequest::GetOperator() const
{
    return m_operator;
}

void MoveClassRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool MoveClassRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


