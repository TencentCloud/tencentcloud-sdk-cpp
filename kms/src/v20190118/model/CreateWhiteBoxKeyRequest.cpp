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

#include <tencentcloud/kms/v20190118/model/CreateWhiteBoxKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace rapidjson;
using namespace std;

CreateWhiteBoxKeyRequest::CreateWhiteBoxKeyRequest() :
    m_aliasHasBeenSet(false),
    m_algorithmHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateWhiteBoxKeyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_aliasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Algorithm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_algorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWhiteBoxKeyRequest::GetAlias() const
{
    return m_alias;
}

void CreateWhiteBoxKeyRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool CreateWhiteBoxKeyRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string CreateWhiteBoxKeyRequest::GetAlgorithm() const
{
    return m_algorithm;
}

void CreateWhiteBoxKeyRequest::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool CreateWhiteBoxKeyRequest::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}

string CreateWhiteBoxKeyRequest::GetDescription() const
{
    return m_description;
}

void CreateWhiteBoxKeyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateWhiteBoxKeyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


