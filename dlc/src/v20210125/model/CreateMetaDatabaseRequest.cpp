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

#include <tencentcloud/dlc/v20210125/model/CreateMetaDatabaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateMetaDatabaseRequest::CreateMetaDatabaseRequest() :
    m_datasourceConnectionNameHasBeenSet(false),
    m_metaDatabaseInfoHasBeenSet(false),
    m_governPolicyHasBeenSet(false),
    m_smartPolicyHasBeenSet(false)
{
}

string CreateMetaDatabaseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDatabaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDatabaseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaDatabaseInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_governPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GovernPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_governPolicy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_smartPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smartPolicy.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMetaDatabaseRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void CreateMetaDatabaseRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool CreateMetaDatabaseRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}

MetaDatabaseInfo CreateMetaDatabaseRequest::GetMetaDatabaseInfo() const
{
    return m_metaDatabaseInfo;
}

void CreateMetaDatabaseRequest::SetMetaDatabaseInfo(const MetaDatabaseInfo& _metaDatabaseInfo)
{
    m_metaDatabaseInfo = _metaDatabaseInfo;
    m_metaDatabaseInfoHasBeenSet = true;
}

bool CreateMetaDatabaseRequest::MetaDatabaseInfoHasBeenSet() const
{
    return m_metaDatabaseInfoHasBeenSet;
}

DataGovernPolicy CreateMetaDatabaseRequest::GetGovernPolicy() const
{
    return m_governPolicy;
}

void CreateMetaDatabaseRequest::SetGovernPolicy(const DataGovernPolicy& _governPolicy)
{
    m_governPolicy = _governPolicy;
    m_governPolicyHasBeenSet = true;
}

bool CreateMetaDatabaseRequest::GovernPolicyHasBeenSet() const
{
    return m_governPolicyHasBeenSet;
}

SmartPolicy CreateMetaDatabaseRequest::GetSmartPolicy() const
{
    return m_smartPolicy;
}

void CreateMetaDatabaseRequest::SetSmartPolicy(const SmartPolicy& _smartPolicy)
{
    m_smartPolicy = _smartPolicy;
    m_smartPolicyHasBeenSet = true;
}

bool CreateMetaDatabaseRequest::SmartPolicyHasBeenSet() const
{
    return m_smartPolicyHasBeenSet;
}


