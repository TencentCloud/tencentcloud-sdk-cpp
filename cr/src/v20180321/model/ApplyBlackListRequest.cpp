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

#include <tencentcloud/cr/v20180321/model/ApplyBlackListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud;
using namespace TencentCloud::Cr::V20180321;
using namespace TencentCloud::Cr::V20180321::Model;
using namespace rapidjson;
using namespace std;

ApplyBlackListRequest::ApplyBlackListRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_blackListHasBeenSet(false),
    m_instIdHasBeenSet(false)
{
}

string ApplyBlackListRequest::ToJsonString()
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_blackListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlackList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_blackList.begin(); itr != m_blackList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_instIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyBlackListRequest::GetModule() const
{
    return m_module;
}

void ApplyBlackListRequest::SetModule(const string& module)
{
    m_module = module;
    m_moduleHasBeenSet = true;
}

bool ApplyBlackListRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string ApplyBlackListRequest::GetOperation() const
{
    return m_operation;
}

void ApplyBlackListRequest::SetOperation(const string& operation)
{
    m_operation = operation;
    m_operationHasBeenSet = true;
}

bool ApplyBlackListRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

vector<SingleBlackApply> ApplyBlackListRequest::GetBlackList() const
{
    return m_blackList;
}

void ApplyBlackListRequest::SetBlackList(const vector<SingleBlackApply>& blackList)
{
    m_blackList = blackList;
    m_blackListHasBeenSet = true;
}

bool ApplyBlackListRequest::BlackListHasBeenSet() const
{
    return m_blackListHasBeenSet;
}

string ApplyBlackListRequest::GetInstId() const
{
    return m_instId;
}

void ApplyBlackListRequest::SetInstId(const string& instId)
{
    m_instId = instId;
    m_instIdHasBeenSet = true;
}

bool ApplyBlackListRequest::InstIdHasBeenSet() const
{
    return m_instIdHasBeenSet;
}


