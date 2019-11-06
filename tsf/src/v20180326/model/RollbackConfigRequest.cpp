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

#include <tencentcloud/tsf/v20180326/model/RollbackConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

RollbackConfigRequest::RollbackConfigRequest() :
    m_configReleaseLogIdHasBeenSet(false),
    m_releaseDescHasBeenSet(false)
{
}

string RollbackConfigRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configReleaseLogIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConfigReleaseLogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_configReleaseLogId.c_str(), allocator).Move(), allocator);
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


string RollbackConfigRequest::GetConfigReleaseLogId() const
{
    return m_configReleaseLogId;
}

void RollbackConfigRequest::SetConfigReleaseLogId(const string& _configReleaseLogId)
{
    m_configReleaseLogId = _configReleaseLogId;
    m_configReleaseLogIdHasBeenSet = true;
}

bool RollbackConfigRequest::ConfigReleaseLogIdHasBeenSet() const
{
    return m_configReleaseLogIdHasBeenSet;
}

string RollbackConfigRequest::GetReleaseDesc() const
{
    return m_releaseDesc;
}

void RollbackConfigRequest::SetReleaseDesc(const string& _releaseDesc)
{
    m_releaseDesc = _releaseDesc;
    m_releaseDescHasBeenSet = true;
}

bool RollbackConfigRequest::ReleaseDescHasBeenSet() const
{
    return m_releaseDescHasBeenSet;
}


