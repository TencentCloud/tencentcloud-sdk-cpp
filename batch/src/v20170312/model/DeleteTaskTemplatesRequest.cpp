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

#include <tencentcloud/batch/v20170312/model/DeleteTaskTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

DeleteTaskTemplatesRequest::DeleteTaskTemplatesRequest() :
    m_taskTemplateIdsHasBeenSet(false)
{
}

string DeleteTaskTemplatesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskTemplateIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskTemplateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_taskTemplateIds.begin(); itr != m_taskTemplateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteTaskTemplatesRequest::GetTaskTemplateIds() const
{
    return m_taskTemplateIds;
}

void DeleteTaskTemplatesRequest::SetTaskTemplateIds(const vector<string>& _taskTemplateIds)
{
    m_taskTemplateIds = _taskTemplateIds;
    m_taskTemplateIdsHasBeenSet = true;
}

bool DeleteTaskTemplatesRequest::TaskTemplateIdsHasBeenSet() const
{
    return m_taskTemplateIdsHasBeenSet;
}


