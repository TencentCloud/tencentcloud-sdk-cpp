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

#include <tencentcloud/cls/v20201016/model/CheckFunctionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CheckFunctionRequest::CheckFunctionRequest() :
    m_etlContentHasBeenSet(false),
    m_dstResourcesHasBeenSet(false),
    m_funcTypeHasBeenSet(false)
{
}

string CheckFunctionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_etlContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EtlContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_etlContent.c_str(), allocator).Move(), allocator);
    }

    if (m_dstResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstResources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dstResources.begin(); itr != m_dstResources.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_funcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuncType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_funcType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckFunctionRequest::GetEtlContent() const
{
    return m_etlContent;
}

void CheckFunctionRequest::SetEtlContent(const string& _etlContent)
{
    m_etlContent = _etlContent;
    m_etlContentHasBeenSet = true;
}

bool CheckFunctionRequest::EtlContentHasBeenSet() const
{
    return m_etlContentHasBeenSet;
}

vector<DataTransformResouceInfo> CheckFunctionRequest::GetDstResources() const
{
    return m_dstResources;
}

void CheckFunctionRequest::SetDstResources(const vector<DataTransformResouceInfo>& _dstResources)
{
    m_dstResources = _dstResources;
    m_dstResourcesHasBeenSet = true;
}

bool CheckFunctionRequest::DstResourcesHasBeenSet() const
{
    return m_dstResourcesHasBeenSet;
}

int64_t CheckFunctionRequest::GetFuncType() const
{
    return m_funcType;
}

void CheckFunctionRequest::SetFuncType(const int64_t& _funcType)
{
    m_funcType = _funcType;
    m_funcTypeHasBeenSet = true;
}

bool CheckFunctionRequest::FuncTypeHasBeenSet() const
{
    return m_funcTypeHasBeenSet;
}


