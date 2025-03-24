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

#include <tencentcloud/gs/v20191118/model/CopyAndroidInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

CopyAndroidInstanceRequest::CopyAndroidInstanceRequest() :
    m_sourceAndroidInstanceIdHasBeenSet(false),
    m_targetAndroidInstanceIdHasBeenSet(false),
    m_includesHasBeenSet(false),
    m_excludesHasBeenSet(false)
{
}

string CopyAndroidInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceAndroidInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceAndroidInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceAndroidInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetAndroidInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAndroidInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetAndroidInstanceId.c_str(), allocator).Move(), allocator);
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


string CopyAndroidInstanceRequest::GetSourceAndroidInstanceId() const
{
    return m_sourceAndroidInstanceId;
}

void CopyAndroidInstanceRequest::SetSourceAndroidInstanceId(const string& _sourceAndroidInstanceId)
{
    m_sourceAndroidInstanceId = _sourceAndroidInstanceId;
    m_sourceAndroidInstanceIdHasBeenSet = true;
}

bool CopyAndroidInstanceRequest::SourceAndroidInstanceIdHasBeenSet() const
{
    return m_sourceAndroidInstanceIdHasBeenSet;
}

string CopyAndroidInstanceRequest::GetTargetAndroidInstanceId() const
{
    return m_targetAndroidInstanceId;
}

void CopyAndroidInstanceRequest::SetTargetAndroidInstanceId(const string& _targetAndroidInstanceId)
{
    m_targetAndroidInstanceId = _targetAndroidInstanceId;
    m_targetAndroidInstanceIdHasBeenSet = true;
}

bool CopyAndroidInstanceRequest::TargetAndroidInstanceIdHasBeenSet() const
{
    return m_targetAndroidInstanceIdHasBeenSet;
}

vector<string> CopyAndroidInstanceRequest::GetIncludes() const
{
    return m_includes;
}

void CopyAndroidInstanceRequest::SetIncludes(const vector<string>& _includes)
{
    m_includes = _includes;
    m_includesHasBeenSet = true;
}

bool CopyAndroidInstanceRequest::IncludesHasBeenSet() const
{
    return m_includesHasBeenSet;
}

vector<string> CopyAndroidInstanceRequest::GetExcludes() const
{
    return m_excludes;
}

void CopyAndroidInstanceRequest::SetExcludes(const vector<string>& _excludes)
{
    m_excludes = _excludes;
    m_excludesHasBeenSet = true;
}

bool CopyAndroidInstanceRequest::ExcludesHasBeenSet() const
{
    return m_excludesHasBeenSet;
}


