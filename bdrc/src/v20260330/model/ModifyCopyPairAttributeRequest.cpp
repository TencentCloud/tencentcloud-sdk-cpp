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

#include <tencentcloud/bdrc/v20260330/model/ModifyCopyPairAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ModifyCopyPairAttributeRequest::ModifyCopyPairAttributeRequest() :
    m_copyPairIdHasBeenSet(false),
    m_copyPairTypeHasBeenSet(false),
    m_copyPairNameHasBeenSet(false)
{
}

string ModifyCopyPairAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_copyPairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copyPairId.c_str(), allocator).Move(), allocator);
    }

    if (m_copyPairTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copyPairType.c_str(), allocator).Move(), allocator);
    }

    if (m_copyPairNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copyPairName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCopyPairAttributeRequest::GetCopyPairId() const
{
    return m_copyPairId;
}

void ModifyCopyPairAttributeRequest::SetCopyPairId(const string& _copyPairId)
{
    m_copyPairId = _copyPairId;
    m_copyPairIdHasBeenSet = true;
}

bool ModifyCopyPairAttributeRequest::CopyPairIdHasBeenSet() const
{
    return m_copyPairIdHasBeenSet;
}

string ModifyCopyPairAttributeRequest::GetCopyPairType() const
{
    return m_copyPairType;
}

void ModifyCopyPairAttributeRequest::SetCopyPairType(const string& _copyPairType)
{
    m_copyPairType = _copyPairType;
    m_copyPairTypeHasBeenSet = true;
}

bool ModifyCopyPairAttributeRequest::CopyPairTypeHasBeenSet() const
{
    return m_copyPairTypeHasBeenSet;
}

string ModifyCopyPairAttributeRequest::GetCopyPairName() const
{
    return m_copyPairName;
}

void ModifyCopyPairAttributeRequest::SetCopyPairName(const string& _copyPairName)
{
    m_copyPairName = _copyPairName;
    m_copyPairNameHasBeenSet = true;
}

bool ModifyCopyPairAttributeRequest::CopyPairNameHasBeenSet() const
{
    return m_copyPairNameHasBeenSet;
}


