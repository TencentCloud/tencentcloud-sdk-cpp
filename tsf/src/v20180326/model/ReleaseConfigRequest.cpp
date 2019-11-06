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

#include <tencentcloud/tsf/v20180326/model/ReleaseConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

ReleaseConfigRequest::ReleaseConfigRequest() :
    m_configIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_releaseDescHasBeenSet(false)
{
}

string ReleaseConfigRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReleaseDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_releaseDesc.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReleaseConfigRequest::GetConfigId() const
{
    return m_configId;
}

void ReleaseConfigRequest::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ReleaseConfigRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string ReleaseConfigRequest::GetGroupId() const
{
    return m_groupId;
}

void ReleaseConfigRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ReleaseConfigRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ReleaseConfigRequest::GetReleaseDesc() const
{
    return m_releaseDesc;
}

void ReleaseConfigRequest::SetReleaseDesc(const string& _releaseDesc)
{
    m_releaseDesc = _releaseDesc;
    m_releaseDescHasBeenSet = true;
}

bool ReleaseConfigRequest::ReleaseDescHasBeenSet() const
{
    return m_releaseDescHasBeenSet;
}


