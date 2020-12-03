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

#include <tencentcloud/ump/v20200918/model/CreateProgramStateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ump::V20200918::Model;
using namespace rapidjson;
using namespace std;

CreateProgramStateRequest::CreateProgramStateRequest() :
    m_groupCodeHasBeenSet(false),
    m_programStateItemsHasBeenSet(false),
    m_mallIdHasBeenSet(false)
{
}

string CreateProgramStateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupCode.c_str(), allocator).Move(), allocator);
    }

    if (m_programStateItemsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProgramStateItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_programStateItems.begin(); itr != m_programStateItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_mallIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MallId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mallId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateProgramStateRequest::GetGroupCode() const
{
    return m_groupCode;
}

void CreateProgramStateRequest::SetGroupCode(const string& _groupCode)
{
    m_groupCode = _groupCode;
    m_groupCodeHasBeenSet = true;
}

bool CreateProgramStateRequest::GroupCodeHasBeenSet() const
{
    return m_groupCodeHasBeenSet;
}

vector<ProgramStateItem> CreateProgramStateRequest::GetProgramStateItems() const
{
    return m_programStateItems;
}

void CreateProgramStateRequest::SetProgramStateItems(const vector<ProgramStateItem>& _programStateItems)
{
    m_programStateItems = _programStateItems;
    m_programStateItemsHasBeenSet = true;
}

bool CreateProgramStateRequest::ProgramStateItemsHasBeenSet() const
{
    return m_programStateItemsHasBeenSet;
}

uint64_t CreateProgramStateRequest::GetMallId() const
{
    return m_mallId;
}

void CreateProgramStateRequest::SetMallId(const uint64_t& _mallId)
{
    m_mallId = _mallId;
    m_mallIdHasBeenSet = true;
}

bool CreateProgramStateRequest::MallIdHasBeenSet() const
{
    return m_mallIdHasBeenSet;
}


