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

#include <tencentcloud/tse/v20201207/model/RollbackConfigFileReleasesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

RollbackConfigFileReleasesRequest::RollbackConfigFileReleasesRequest() :
    m_instanceIdHasBeenSet(false),
    m_rollbackConfigFileReleasesHasBeenSet(false)
{
}

string RollbackConfigFileReleasesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackConfigFileReleasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackConfigFileReleases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rollbackConfigFileReleases.begin(); itr != m_rollbackConfigFileReleases.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RollbackConfigFileReleasesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RollbackConfigFileReleasesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RollbackConfigFileReleasesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<ConfigFileRelease> RollbackConfigFileReleasesRequest::GetRollbackConfigFileReleases() const
{
    return m_rollbackConfigFileReleases;
}

void RollbackConfigFileReleasesRequest::SetRollbackConfigFileReleases(const vector<ConfigFileRelease>& _rollbackConfigFileReleases)
{
    m_rollbackConfigFileReleases = _rollbackConfigFileReleases;
    m_rollbackConfigFileReleasesHasBeenSet = true;
}

bool RollbackConfigFileReleasesRequest::RollbackConfigFileReleasesHasBeenSet() const
{
    return m_rollbackConfigFileReleasesHasBeenSet;
}


