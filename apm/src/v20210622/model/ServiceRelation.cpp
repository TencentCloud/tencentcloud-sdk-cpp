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

#include <tencentcloud/apm/v20210622/model/ServiceRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ServiceRelation::ServiceRelation() :
    m_serviceNameHasBeenSet(false),
    m_upstreamServicesHasBeenSet(false),
    m_downstreamServicesHasBeenSet(false)
{
}

CoreInternalOutcome ServiceRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceRelation.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("UpstreamServices") && !value["UpstreamServices"].IsNull())
    {
        if (!value["UpstreamServices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceRelation.UpstreamServices` is not array type"));

        const rapidjson::Value &tmpValue = value["UpstreamServices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_upstreamServices.push_back((*itr).GetString());
        }
        m_upstreamServicesHasBeenSet = true;
    }

    if (value.HasMember("DownstreamServices") && !value["DownstreamServices"].IsNull())
    {
        if (!value["DownstreamServices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceRelation.DownstreamServices` is not array type"));

        const rapidjson::Value &tmpValue = value["DownstreamServices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_downstreamServices.push_back((*itr).GetString());
        }
        m_downstreamServicesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamServices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_upstreamServices.begin(); itr != m_upstreamServices.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_downstreamServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownstreamServices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_downstreamServices.begin(); itr != m_downstreamServices.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ServiceRelation::GetServiceName() const
{
    return m_serviceName;
}

void ServiceRelation::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ServiceRelation::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

vector<string> ServiceRelation::GetUpstreamServices() const
{
    return m_upstreamServices;
}

void ServiceRelation::SetUpstreamServices(const vector<string>& _upstreamServices)
{
    m_upstreamServices = _upstreamServices;
    m_upstreamServicesHasBeenSet = true;
}

bool ServiceRelation::UpstreamServicesHasBeenSet() const
{
    return m_upstreamServicesHasBeenSet;
}

vector<string> ServiceRelation::GetDownstreamServices() const
{
    return m_downstreamServices;
}

void ServiceRelation::SetDownstreamServices(const vector<string>& _downstreamServices)
{
    m_downstreamServices = _downstreamServices;
    m_downstreamServicesHasBeenSet = true;
}

bool ServiceRelation::DownstreamServicesHasBeenSet() const
{
    return m_downstreamServicesHasBeenSet;
}

