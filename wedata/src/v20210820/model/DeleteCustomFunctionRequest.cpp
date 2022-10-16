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

#include <tencentcloud/wedata/v20210820/model/DeleteCustomFunctionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DeleteCustomFunctionRequest::DeleteCustomFunctionRequest() :
    m_clusterIdentifierHasBeenSet(false),
    m_functionIdHasBeenSet(false)
{
}

string DeleteCustomFunctionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIdentifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_functionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCustomFunctionRequest::GetClusterIdentifier() const
{
    return m_clusterIdentifier;
}

void DeleteCustomFunctionRequest::SetClusterIdentifier(const string& _clusterIdentifier)
{
    m_clusterIdentifier = _clusterIdentifier;
    m_clusterIdentifierHasBeenSet = true;
}

bool DeleteCustomFunctionRequest::ClusterIdentifierHasBeenSet() const
{
    return m_clusterIdentifierHasBeenSet;
}

string DeleteCustomFunctionRequest::GetFunctionId() const
{
    return m_functionId;
}

void DeleteCustomFunctionRequest::SetFunctionId(const string& _functionId)
{
    m_functionId = _functionId;
    m_functionIdHasBeenSet = true;
}

bool DeleteCustomFunctionRequest::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}


