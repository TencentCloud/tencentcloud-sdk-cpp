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

#include <tencentcloud/apigateway/v20180808/model/BindApiInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

BindApiInfo::BindApiInfo() :
    m_apiIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_bindTimeHasBeenSet(false)
{
}

CoreInternalOutcome BindApiInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindApiInfo.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindApiInfo.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindApiInfo.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindApiInfo.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("BindTime") && !value["BindTime"].IsNull())
    {
        if (!value["BindTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindApiInfo.BindTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindTime = string(value["BindTime"].GetString());
        m_bindTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindApiInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindTime.c_str(), allocator).Move(), allocator);
    }

}


string BindApiInfo::GetApiId() const
{
    return m_apiId;
}

void BindApiInfo::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool BindApiInfo::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string BindApiInfo::GetServiceId() const
{
    return m_serviceId;
}

void BindApiInfo::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool BindApiInfo::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string BindApiInfo::GetApiName() const
{
    return m_apiName;
}

void BindApiInfo::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool BindApiInfo::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string BindApiInfo::GetServiceName() const
{
    return m_serviceName;
}

void BindApiInfo::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool BindApiInfo::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string BindApiInfo::GetBindTime() const
{
    return m_bindTime;
}

void BindApiInfo::SetBindTime(const string& _bindTime)
{
    m_bindTime = _bindTime;
    m_bindTimeHasBeenSet = true;
}

bool BindApiInfo::BindTimeHasBeenSet() const
{
    return m_bindTimeHasBeenSet;
}

