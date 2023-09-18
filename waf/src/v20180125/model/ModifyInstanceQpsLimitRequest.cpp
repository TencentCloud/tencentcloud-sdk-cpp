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

#include <tencentcloud/waf/v20180125/model/ModifyInstanceQpsLimitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyInstanceQpsLimitRequest::ModifyInstanceQpsLimitRequest() :
    m_instanceIdHasBeenSet(false),
    m_qpsLimitHasBeenSet(false)
{
}

string ModifyInstanceQpsLimitRequest::ToJsonString() const
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

    if (m_qpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QpsLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qpsLimit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceQpsLimitRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceQpsLimitRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceQpsLimitRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyInstanceQpsLimitRequest::GetQpsLimit() const
{
    return m_qpsLimit;
}

void ModifyInstanceQpsLimitRequest::SetQpsLimit(const int64_t& _qpsLimit)
{
    m_qpsLimit = _qpsLimit;
    m_qpsLimitHasBeenSet = true;
}

bool ModifyInstanceQpsLimitRequest::QpsLimitHasBeenSet() const
{
    return m_qpsLimitHasBeenSet;
}


