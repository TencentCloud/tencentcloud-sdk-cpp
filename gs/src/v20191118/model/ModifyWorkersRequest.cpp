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

#include <tencentcloud/gs/v20191118/model/ModifyWorkersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace rapidjson;
using namespace std;

ModifyWorkersRequest::ModifyWorkersRequest() :
    m_instanceIdsHasBeenSet(false),
    m_setNoHasBeenSet(false)
{
}

string ModifyWorkersRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_setNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SetNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_setNo, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyWorkersRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ModifyWorkersRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ModifyWorkersRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

uint64_t ModifyWorkersRequest::GetSetNo() const
{
    return m_setNo;
}

void ModifyWorkersRequest::SetSetNo(const uint64_t& _setNo)
{
    m_setNo = _setNo;
    m_setNoHasBeenSet = true;
}

bool ModifyWorkersRequest::SetNoHasBeenSet() const
{
    return m_setNoHasBeenSet;
}


