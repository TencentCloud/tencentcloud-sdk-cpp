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

#include <tencentcloud/gs/v20191118/model/BackUpAndroidInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

BackUpAndroidInstanceRequest::BackUpAndroidInstanceRequest() :
    m_androidInstanceIdHasBeenSet(false),
    m_includesHasBeenSet(false),
    m_excludesHasBeenSet(false)
{
}

string BackUpAndroidInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_androidInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_includesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Includes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includes.begin(); itr != m_includes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Excludes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludes.begin(); itr != m_excludes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BackUpAndroidInstanceRequest::GetAndroidInstanceId() const
{
    return m_androidInstanceId;
}

void BackUpAndroidInstanceRequest::SetAndroidInstanceId(const string& _androidInstanceId)
{
    m_androidInstanceId = _androidInstanceId;
    m_androidInstanceIdHasBeenSet = true;
}

bool BackUpAndroidInstanceRequest::AndroidInstanceIdHasBeenSet() const
{
    return m_androidInstanceIdHasBeenSet;
}

vector<string> BackUpAndroidInstanceRequest::GetIncludes() const
{
    return m_includes;
}

void BackUpAndroidInstanceRequest::SetIncludes(const vector<string>& _includes)
{
    m_includes = _includes;
    m_includesHasBeenSet = true;
}

bool BackUpAndroidInstanceRequest::IncludesHasBeenSet() const
{
    return m_includesHasBeenSet;
}

vector<string> BackUpAndroidInstanceRequest::GetExcludes() const
{
    return m_excludes;
}

void BackUpAndroidInstanceRequest::SetExcludes(const vector<string>& _excludes)
{
    m_excludes = _excludes;
    m_excludesHasBeenSet = true;
}

bool BackUpAndroidInstanceRequest::ExcludesHasBeenSet() const
{
    return m_excludesHasBeenSet;
}


