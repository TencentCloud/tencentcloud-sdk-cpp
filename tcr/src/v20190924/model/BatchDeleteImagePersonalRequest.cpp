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

#include <tencentcloud/tcr/v20190924/model/BatchDeleteImagePersonalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace rapidjson;
using namespace std;

BatchDeleteImagePersonalRequest::BatchDeleteImagePersonalRequest() :
    m_repoNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string BatchDeleteImagePersonalRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_repoNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BatchDeleteImagePersonalRequest::GetRepoName() const
{
    return m_repoName;
}

void BatchDeleteImagePersonalRequest::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool BatchDeleteImagePersonalRequest::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

vector<string> BatchDeleteImagePersonalRequest::GetTags() const
{
    return m_tags;
}

void BatchDeleteImagePersonalRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool BatchDeleteImagePersonalRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


