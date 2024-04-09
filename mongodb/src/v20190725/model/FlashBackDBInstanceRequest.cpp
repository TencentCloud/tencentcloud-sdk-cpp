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

#include <tencentcloud/mongodb/v20190725/model/FlashBackDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

FlashBackDBInstanceRequest::FlashBackDBInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_targetFlashbackTimeHasBeenSet(false),
    m_targetDatabasesHasBeenSet(false),
    m_targetInstanceIdHasBeenSet(false)
{
}

string FlashBackDBInstanceRequest::ToJsonString() const
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

    if (m_targetFlashbackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetFlashbackTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetFlashbackTime.c_str(), allocator).Move(), allocator);
    }

    if (m_targetDatabasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDatabases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetDatabases.begin(); itr != m_targetDatabases.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_targetInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FlashBackDBInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void FlashBackDBInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool FlashBackDBInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string FlashBackDBInstanceRequest::GetTargetFlashbackTime() const
{
    return m_targetFlashbackTime;
}

void FlashBackDBInstanceRequest::SetTargetFlashbackTime(const string& _targetFlashbackTime)
{
    m_targetFlashbackTime = _targetFlashbackTime;
    m_targetFlashbackTimeHasBeenSet = true;
}

bool FlashBackDBInstanceRequest::TargetFlashbackTimeHasBeenSet() const
{
    return m_targetFlashbackTimeHasBeenSet;
}

vector<FlashbackDatabase> FlashBackDBInstanceRequest::GetTargetDatabases() const
{
    return m_targetDatabases;
}

void FlashBackDBInstanceRequest::SetTargetDatabases(const vector<FlashbackDatabase>& _targetDatabases)
{
    m_targetDatabases = _targetDatabases;
    m_targetDatabasesHasBeenSet = true;
}

bool FlashBackDBInstanceRequest::TargetDatabasesHasBeenSet() const
{
    return m_targetDatabasesHasBeenSet;
}

string FlashBackDBInstanceRequest::GetTargetInstanceId() const
{
    return m_targetInstanceId;
}

void FlashBackDBInstanceRequest::SetTargetInstanceId(const string& _targetInstanceId)
{
    m_targetInstanceId = _targetInstanceId;
    m_targetInstanceIdHasBeenSet = true;
}

bool FlashBackDBInstanceRequest::TargetInstanceIdHasBeenSet() const
{
    return m_targetInstanceIdHasBeenSet;
}


