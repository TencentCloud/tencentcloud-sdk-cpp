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

#include <tencentcloud/mongodb/v20190725/model/PromoteDBInstanceToActiveRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

PromoteDBInstanceToActiveRequest::PromoteDBInstanceToActiveRequest() :
    m_instanceIdHasBeenSet(false),
    m_masterIdHasBeenSet(false)
{
}

string PromoteDBInstanceToActiveRequest::ToJsonString() const
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

    if (m_masterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PromoteDBInstanceToActiveRequest::GetInstanceId() const
{
    return m_instanceId;
}

void PromoteDBInstanceToActiveRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PromoteDBInstanceToActiveRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PromoteDBInstanceToActiveRequest::GetMasterId() const
{
    return m_masterId;
}

void PromoteDBInstanceToActiveRequest::SetMasterId(const string& _masterId)
{
    m_masterId = _masterId;
    m_masterIdHasBeenSet = true;
}

bool PromoteDBInstanceToActiveRequest::MasterIdHasBeenSet() const
{
    return m_masterIdHasBeenSet;
}


