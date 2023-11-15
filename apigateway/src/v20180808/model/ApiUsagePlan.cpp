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

#include <tencentcloud/apigateway/v20180808/model/ApiUsagePlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ApiUsagePlan::ApiUsagePlan() :
    m_serviceIdHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_usagePlanIdHasBeenSet(false),
    m_usagePlanNameHasBeenSet(false),
    m_usagePlanDescHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_inUseRequestNumHasBeenSet(false),
    m_maxRequestNumHasBeenSet(false),
    m_maxRequestNumPreSecHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome ApiUsagePlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("UsagePlanId") && !value["UsagePlanId"].IsNull())
    {
        if (!value["UsagePlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.UsagePlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanId = string(value["UsagePlanId"].GetString());
        m_usagePlanIdHasBeenSet = true;
    }

    if (value.HasMember("UsagePlanName") && !value["UsagePlanName"].IsNull())
    {
        if (!value["UsagePlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.UsagePlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanName = string(value["UsagePlanName"].GetString());
        m_usagePlanNameHasBeenSet = true;
    }

    if (value.HasMember("UsagePlanDesc") && !value["UsagePlanDesc"].IsNull())
    {
        if (!value["UsagePlanDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.UsagePlanDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanDesc = string(value["UsagePlanDesc"].GetString());
        m_usagePlanDescHasBeenSet = true;
    }

    if (value.HasMember("Environment") && !value["Environment"].IsNull())
    {
        if (!value["Environment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.Environment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environment = string(value["Environment"].GetString());
        m_environmentHasBeenSet = true;
    }

    if (value.HasMember("InUseRequestNum") && !value["InUseRequestNum"].IsNull())
    {
        if (!value["InUseRequestNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.InUseRequestNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inUseRequestNum = value["InUseRequestNum"].GetInt64();
        m_inUseRequestNumHasBeenSet = true;
    }

    if (value.HasMember("MaxRequestNum") && !value["MaxRequestNum"].IsNull())
    {
        if (!value["MaxRequestNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.MaxRequestNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestNum = value["MaxRequestNum"].GetInt64();
        m_maxRequestNumHasBeenSet = true;
    }

    if (value.HasMember("MaxRequestNumPreSec") && !value["MaxRequestNumPreSec"].IsNull())
    {
        if (!value["MaxRequestNumPreSec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.MaxRequestNumPreSec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestNumPreSec = value["MaxRequestNumPreSec"].GetInt64();
        m_maxRequestNumPreSecHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiUsagePlan.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiUsagePlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_usagePlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usagePlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_usagePlanNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usagePlanName.c_str(), allocator).Move(), allocator);
    }

    if (m_usagePlanDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usagePlanDesc.c_str(), allocator).Move(), allocator);
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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ApiUsagePlan::GetServiceId() const
{
    return m_serviceId;
}

void ApiUsagePlan::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ApiUsagePlan::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string ApiUsagePlan::GetApiId() const
{
    return m_apiId;
}

void ApiUsagePlan::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool ApiUsagePlan::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string ApiUsagePlan::GetApiName() const
{
    return m_apiName;
}

void ApiUsagePlan::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool ApiUsagePlan::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string ApiUsagePlan::GetPath() const
{
    return m_path;
}

void ApiUsagePlan::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ApiUsagePlan::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ApiUsagePlan::GetMethod() const
{
    return m_method;
}

void ApiUsagePlan::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ApiUsagePlan::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ApiUsagePlan::GetUsagePlanId() const
{
    return m_usagePlanId;
}

void ApiUsagePlan::SetUsagePlanId(const string& _usagePlanId)
{
    m_usagePlanId = _usagePlanId;
    m_usagePlanIdHasBeenSet = true;
}

bool ApiUsagePlan::UsagePlanIdHasBeenSet() const
{
    return m_usagePlanIdHasBeenSet;
}

string ApiUsagePlan::GetUsagePlanName() const
{
    return m_usagePlanName;
}

void ApiUsagePlan::SetUsagePlanName(const string& _usagePlanName)
{
    m_usagePlanName = _usagePlanName;
    m_usagePlanNameHasBeenSet = true;
}

bool ApiUsagePlan::UsagePlanNameHasBeenSet() const
{
    return m_usagePlanNameHasBeenSet;
}

string ApiUsagePlan::GetUsagePlanDesc() const
{
    return m_usagePlanDesc;
}

void ApiUsagePlan::SetUsagePlanDesc(const string& _usagePlanDesc)
{
    m_usagePlanDesc = _usagePlanDesc;
    m_usagePlanDescHasBeenSet = true;
}

bool ApiUsagePlan::UsagePlanDescHasBeenSet() const
{
    return m_usagePlanDescHasBeenSet;
}

string ApiUsagePlan::GetEnvironment() const
{
    return m_environment;
}

void ApiUsagePlan::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool ApiUsagePlan::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

int64_t ApiUsagePlan::GetInUseRequestNum() const
{
    return m_inUseRequestNum;
}

void ApiUsagePlan::SetInUseRequestNum(const int64_t& _inUseRequestNum)
{
    m_inUseRequestNum = _inUseRequestNum;
    m_inUseRequestNumHasBeenSet = true;
}

bool ApiUsagePlan::InUseRequestNumHasBeenSet() const
{
    return m_inUseRequestNumHasBeenSet;
}

int64_t ApiUsagePlan::GetMaxRequestNum() const
{
    return m_maxRequestNum;
}

void ApiUsagePlan::SetMaxRequestNum(const int64_t& _maxRequestNum)
{
    m_maxRequestNum = _maxRequestNum;
    m_maxRequestNumHasBeenSet = true;
}

bool ApiUsagePlan::MaxRequestNumHasBeenSet() const
{
    return m_maxRequestNumHasBeenSet;
}

int64_t ApiUsagePlan::GetMaxRequestNumPreSec() const
{
    return m_maxRequestNumPreSec;
}

void ApiUsagePlan::SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec)
{
    m_maxRequestNumPreSec = _maxRequestNumPreSec;
    m_maxRequestNumPreSecHasBeenSet = true;
}

bool ApiUsagePlan::MaxRequestNumPreSecHasBeenSet() const
{
    return m_maxRequestNumPreSecHasBeenSet;
}

string ApiUsagePlan::GetCreatedTime() const
{
    return m_createdTime;
}

void ApiUsagePlan::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ApiUsagePlan::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ApiUsagePlan::GetModifiedTime() const
{
    return m_modifiedTime;
}

void ApiUsagePlan::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool ApiUsagePlan::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string ApiUsagePlan::GetServiceName() const
{
    return m_serviceName;
}

void ApiUsagePlan::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ApiUsagePlan::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

vector<Tag> ApiUsagePlan::GetTags() const
{
    return m_tags;
}

void ApiUsagePlan::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ApiUsagePlan::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

