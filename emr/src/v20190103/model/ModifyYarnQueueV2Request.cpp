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

#include <tencentcloud/emr/v20190103/model/ModifyYarnQueueV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyYarnQueueV2Request::ModifyYarnQueueV2Request() :
    m_instanceIdHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_configModifyInfoListHasBeenSet(false)
{
}

string ModifyYarnQueueV2Request::ToJsonString() const
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

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_configModifyInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigModifyInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configModifyInfoList.begin(); itr != m_configModifyInfoList.end(); ++itr, ++i)
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


string ModifyYarnQueueV2Request::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyYarnQueueV2Request::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyYarnQueueV2Request::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyYarnQueueV2Request::GetScheduler() const
{
    return m_scheduler;
}

void ModifyYarnQueueV2Request::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool ModifyYarnQueueV2Request::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

vector<ConfigModifyInfoV2> ModifyYarnQueueV2Request::GetConfigModifyInfoList() const
{
    return m_configModifyInfoList;
}

void ModifyYarnQueueV2Request::SetConfigModifyInfoList(const vector<ConfigModifyInfoV2>& _configModifyInfoList)
{
    m_configModifyInfoList = _configModifyInfoList;
    m_configModifyInfoListHasBeenSet = true;
}

bool ModifyYarnQueueV2Request::ConfigModifyInfoListHasBeenSet() const
{
    return m_configModifyInfoListHasBeenSet;
}


