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

#include <tencentcloud/tiems/v20190416/model/DeleteServiceConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

DeleteServiceConfigRequest::DeleteServiceConfigRequest() :
    m_serviceConfigIdHasBeenSet(false),
    m_serviceConfigNameHasBeenSet(false)
{
}

string DeleteServiceConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceConfigNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceConfigName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceConfigName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteServiceConfigRequest::GetServiceConfigId() const
{
    return m_serviceConfigId;
}

void DeleteServiceConfigRequest::SetServiceConfigId(const string& _serviceConfigId)
{
    m_serviceConfigId = _serviceConfigId;
    m_serviceConfigIdHasBeenSet = true;
}

bool DeleteServiceConfigRequest::ServiceConfigIdHasBeenSet() const
{
    return m_serviceConfigIdHasBeenSet;
}

string DeleteServiceConfigRequest::GetServiceConfigName() const
{
    return m_serviceConfigName;
}

void DeleteServiceConfigRequest::SetServiceConfigName(const string& _serviceConfigName)
{
    m_serviceConfigName = _serviceConfigName;
    m_serviceConfigNameHasBeenSet = true;
}

bool DeleteServiceConfigRequest::ServiceConfigNameHasBeenSet() const
{
    return m_serviceConfigNameHasBeenSet;
}


