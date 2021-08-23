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

#include <tencentcloud/apigateway/v20180808/model/UsagePlanEnvironment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

UsagePlanEnvironment::UsagePlanEnvironment() :
    m_serviceIdHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_inUseRequestNumHasBeenSet(false),
    m_maxRequestNumHasBeenSet(false),
    m_maxRequestNumPreSecHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

CoreInternalOutcome UsagePlanEnvironment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanEnvironment.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanEnvironment.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanEnvironment.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanEnvironment.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanEnvironment.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Environment") && !value["Environment"].IsNull())
    {
        if (!value["Environment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanEnvironment.Environment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environment = string(value["Environment"].GetString());
        m_environmentHasBeenSet = true;
    }

    if (value.HasMember("InUseRequestNum") && !value["InUseRequestNum"].IsNull())
    {
        if (!value["InUseRequestNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanEnvironment.InUseRequestNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inUseRequestNum = value["InUseRequestNum"].GetInt64();
        m_inUseRequestNumHasBeenSet = true;
    }

    if (value.HasMember("MaxRequestNum") && !value["MaxRequestNum"].IsNull())
    {
        if (!value["MaxRequestNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanEnvironment.MaxRequestNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestNum = value["MaxRequestNum"].GetInt64();
        m_maxRequestNumHasBeenSet = true;
    }

    if (value.HasMember("MaxRequestNumPreSec") && !value["MaxRequestNumPreSec"].IsNull())
    {
        if (!value["MaxRequestNumPreSec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanEnvironment.MaxRequestNumPreSec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestNumPreSec = value["MaxRequestNumPreSec"].GetInt64();
        m_maxRequestNumPreSecHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanEnvironment.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanEnvironment.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanEnvironment.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsagePlanEnvironment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_inUseRequestNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InUseRequestNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inUseRequestNum, allocator);
    }

    if (m_maxRequestNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRequestNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRequestNum, allocator);
    }

    if (m_maxRequestNumPreSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRequestNumPreSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRequestNumPreSec, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

}


string UsagePlanEnvironment::GetServiceId() const
{
    return m_serviceId;
}

void UsagePlanEnvironment::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool UsagePlanEnvironment::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string UsagePlanEnvironment::GetApiId() const
{
    return m_apiId;
}

void UsagePlanEnvironment::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool UsagePlanEnvironment::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string UsagePlanEnvironment::GetApiName() const
{
    return m_apiName;
}

void UsagePlanEnvironment::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool UsagePlanEnvironment::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string UsagePlanEnvironment::GetPath() const
{
    return m_path;
}

void UsagePlanEnvironment::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool UsagePlanEnvironment::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string UsagePlanEnvironment::GetMethod() const
{
    return m_method;
}

void UsagePlanEnvironment::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool UsagePlanEnvironment::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string UsagePlanEnvironment::GetEnvironment() const
{
    return m_environment;
}

void UsagePlanEnvironment::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool UsagePlanEnvironment::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

int64_t UsagePlanEnvironment::GetInUseRequestNum() const
{
    return m_inUseRequestNum;
}

void UsagePlanEnvironment::SetInUseRequestNum(const int64_t& _inUseRequestNum)
{
    m_inUseRequestNum = _inUseRequestNum;
    m_inUseRequestNumHasBeenSet = true;
}

bool UsagePlanEnvironment::InUseRequestNumHasBeenSet() const
{
    return m_inUseRequestNumHasBeenSet;
}

int64_t UsagePlanEnvironment::GetMaxRequestNum() const
{
    return m_maxRequestNum;
}

void UsagePlanEnvironment::SetMaxRequestNum(const int64_t& _maxRequestNum)
{
    m_maxRequestNum = _maxRequestNum;
    m_maxRequestNumHasBeenSet = true;
}

bool UsagePlanEnvironment::MaxRequestNumHasBeenSet() const
{
    return m_maxRequestNumHasBeenSet;
}

int64_t UsagePlanEnvironment::GetMaxRequestNumPreSec() const
{
    return m_maxRequestNumPreSec;
}

void UsagePlanEnvironment::SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec)
{
    m_maxRequestNumPreSec = _maxRequestNumPreSec;
    m_maxRequestNumPreSecHasBeenSet = true;
}

bool UsagePlanEnvironment::MaxRequestNumPreSecHasBeenSet() const
{
    return m_maxRequestNumPreSecHasBeenSet;
}

string UsagePlanEnvironment::GetCreatedTime() const
{
    return m_createdTime;
}

void UsagePlanEnvironment::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool UsagePlanEnvironment::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string UsagePlanEnvironment::GetModifiedTime() const
{
    return m_modifiedTime;
}

void UsagePlanEnvironment::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool UsagePlanEnvironment::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string UsagePlanEnvironment::GetServiceName() const
{
    return m_serviceName;
}

void UsagePlanEnvironment::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool UsagePlanEnvironment::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

