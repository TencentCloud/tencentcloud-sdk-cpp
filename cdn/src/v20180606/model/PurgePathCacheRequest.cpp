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

#include <tencentcloud/cdn/v20180606/model/PurgePathCacheRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

PurgePathCacheRequest::PurgePathCacheRequest() :
    m_pathsHasBeenSet(false),
    m_flushTypeHasBeenSet(false)
{
}

string PurgePathCacheRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pathsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Paths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_paths.begin(); itr != m_paths.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_flushTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FlushType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_flushType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> PurgePathCacheRequest::GetPaths() const
{
    return m_paths;
}

void PurgePathCacheRequest::SetPaths(const vector<string>& _paths)
{
    m_paths = _paths;
    m_pathsHasBeenSet = true;
}

bool PurgePathCacheRequest::PathsHasBeenSet() const
{
    return m_pathsHasBeenSet;
}

string PurgePathCacheRequest::GetFlushType() const
{
    return m_flushType;
}

void PurgePathCacheRequest::SetFlushType(const string& _flushType)
{
    m_flushType = _flushType;
    m_flushTypeHasBeenSet = true;
}

bool PurgePathCacheRequest::FlushTypeHasBeenSet() const
{
    return m_flushTypeHasBeenSet;
}


