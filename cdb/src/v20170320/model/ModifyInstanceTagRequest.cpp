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

#include <tencentcloud/cdb/v20170320/model/ModifyInstanceTagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

ModifyInstanceTagRequest::ModifyInstanceTagRequest() :
    m_instanceIdHasBeenSet(false),
    m_replaceTagsHasBeenSet(false),
    m_deleteTagsHasBeenSet(false)
{
}

string ModifyInstanceTagRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_replaceTagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReplaceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_replaceTags.begin(); itr != m_replaceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deleteTagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeleteTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deleteTags.begin(); itr != m_deleteTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceTagRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceTagRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceTagRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<TagInfo> ModifyInstanceTagRequest::GetReplaceTags() const
{
    return m_replaceTags;
}

void ModifyInstanceTagRequest::SetReplaceTags(const vector<TagInfo>& _replaceTags)
{
    m_replaceTags = _replaceTags;
    m_replaceTagsHasBeenSet = true;
}

bool ModifyInstanceTagRequest::ReplaceTagsHasBeenSet() const
{
    return m_replaceTagsHasBeenSet;
}

vector<TagInfo> ModifyInstanceTagRequest::GetDeleteTags() const
{
    return m_deleteTags;
}

void ModifyInstanceTagRequest::SetDeleteTags(const vector<TagInfo>& _deleteTags)
{
    m_deleteTags = _deleteTags;
    m_deleteTagsHasBeenSet = true;
}

bool ModifyInstanceTagRequest::DeleteTagsHasBeenSet() const
{
    return m_deleteTagsHasBeenSet;
}


