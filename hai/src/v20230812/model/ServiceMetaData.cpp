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

#include <tencentcloud/hai/v20230812/model/ServiceMetaData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ServiceMetaData::ServiceMetaData() :
    m_serviceNameHasBeenSet(false),
    m_serviceChargeTypeHasBeenSet(false)
{
}

CoreInternalOutcome ServiceMetaData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceMetaData.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceChargeType") && !value["ServiceChargeType"].IsNull())
    {
        if (!value["ServiceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceMetaData.ServiceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceChargeType = string(value["ServiceChargeType"].GetString());
        m_serviceChargeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceMetaData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceChargeType.c_str(), allocator).Move(), allocator);
    }

}


string ServiceMetaData::GetServiceName() const
{
    return m_serviceName;
}

void ServiceMetaData::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ServiceMetaData::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string ServiceMetaData::GetServiceChargeType() const
{
    return m_serviceChargeType;
}

void ServiceMetaData::SetServiceChargeType(const string& _serviceChargeType)
{
    m_serviceChargeType = _serviceChargeType;
    m_serviceChargeTypeHasBeenSet = true;
}

bool ServiceMetaData::ServiceChargeTypeHasBeenSet() const
{
    return m_serviceChargeTypeHasBeenSet;
}

