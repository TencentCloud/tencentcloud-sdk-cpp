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

#include <tencentcloud/teo/v20220901/model/ModifyFunctionComponentBindingsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyFunctionComponentBindingsRequest::ModifyFunctionComponentBindingsRequest() :
    m_zoneIdHasBeenSet(false),
    m_functionIdHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_functionComponentBindingsHasBeenSet(false)
{
}

string ModifyFunctionComponentBindingsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_functionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_functionComponentBindingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionComponentBindings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_functionComponentBindings.begin(); itr != m_functionComponentBindings.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyFunctionComponentBindingsRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyFunctionComponentBindingsRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyFunctionComponentBindingsRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyFunctionComponentBindingsRequest::GetFunctionId() const
{
    return m_functionId;
}

void ModifyFunctionComponentBindingsRequest::SetFunctionId(const string& _functionId)
{
    m_functionId = _functionId;
    m_functionIdHasBeenSet = true;
}

bool ModifyFunctionComponentBindingsRequest::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}

string ModifyFunctionComponentBindingsRequest::GetOperation() const
{
    return m_operation;
}

void ModifyFunctionComponentBindingsRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool ModifyFunctionComponentBindingsRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

vector<FunctionComponentBinding> ModifyFunctionComponentBindingsRequest::GetFunctionComponentBindings() const
{
    return m_functionComponentBindings;
}

void ModifyFunctionComponentBindingsRequest::SetFunctionComponentBindings(const vector<FunctionComponentBinding>& _functionComponentBindings)
{
    m_functionComponentBindings = _functionComponentBindings;
    m_functionComponentBindingsHasBeenSet = true;
}

bool ModifyFunctionComponentBindingsRequest::FunctionComponentBindingsHasBeenSet() const
{
    return m_functionComponentBindingsHasBeenSet;
}


