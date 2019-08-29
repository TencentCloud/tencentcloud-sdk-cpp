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

#include <tencentcloud/tiems/v20190416/model/CreateServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiems::V20190416::Model;
using namespace rapidjson;
using namespace std;

CreateServiceRequest::CreateServiceRequest() :
    m_scalerHasBeenSet(false),
    m_serviceConfigIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scaleModeHasBeenSet(false),
    m_clusterHasBeenSet(false)
{
}

string CreateServiceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scalerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scaler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_scaler.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceConfigIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceConfigId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScaleMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_scaleMode.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cluster.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Scaler CreateServiceRequest::GetScaler() const
{
    return m_scaler;
}

void CreateServiceRequest::SetScaler(const Scaler& _scaler)
{
    m_scaler = _scaler;
    m_scalerHasBeenSet = true;
}

bool CreateServiceRequest::ScalerHasBeenSet() const
{
    return m_scalerHasBeenSet;
}

int64_t CreateServiceRequest::GetServiceConfigId() const
{
    return m_serviceConfigId;
}

void CreateServiceRequest::SetServiceConfigId(const int64_t& _serviceConfigId)
{
    m_serviceConfigId = _serviceConfigId;
    m_serviceConfigIdHasBeenSet = true;
}

bool CreateServiceRequest::ServiceConfigIdHasBeenSet() const
{
    return m_serviceConfigIdHasBeenSet;
}

string CreateServiceRequest::GetName() const
{
    return m_name;
}

void CreateServiceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateServiceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateServiceRequest::GetScaleMode() const
{
    return m_scaleMode;
}

void CreateServiceRequest::SetScaleMode(const string& _scaleMode)
{
    m_scaleMode = _scaleMode;
    m_scaleModeHasBeenSet = true;
}

bool CreateServiceRequest::ScaleModeHasBeenSet() const
{
    return m_scaleModeHasBeenSet;
}

string CreateServiceRequest::GetCluster() const
{
    return m_cluster;
}

void CreateServiceRequest::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool CreateServiceRequest::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}


