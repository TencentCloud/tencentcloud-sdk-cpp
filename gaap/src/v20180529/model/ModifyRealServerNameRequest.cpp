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

#include <tencentcloud/gaap/v20180529/model/ModifyRealServerNameRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

ModifyRealServerNameRequest::ModifyRealServerNameRequest() :
    m_realServerNameHasBeenSet(false),
    m_realServerIdHasBeenSet(false)
{
}

string ModifyRealServerNameRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_realServerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realServerName.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realServerId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRealServerNameRequest::GetRealServerName() const
{
    return m_realServerName;
}

void ModifyRealServerNameRequest::SetRealServerName(const string& _realServerName)
{
    m_realServerName = _realServerName;
    m_realServerNameHasBeenSet = true;
}

bool ModifyRealServerNameRequest::RealServerNameHasBeenSet() const
{
    return m_realServerNameHasBeenSet;
}

string ModifyRealServerNameRequest::GetRealServerId() const
{
    return m_realServerId;
}

void ModifyRealServerNameRequest::SetRealServerId(const string& _realServerId)
{
    m_realServerId = _realServerId;
    m_realServerIdHasBeenSet = true;
}

bool ModifyRealServerNameRequest::RealServerIdHasBeenSet() const
{
    return m_realServerIdHasBeenSet;
}


