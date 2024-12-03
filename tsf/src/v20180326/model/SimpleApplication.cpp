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

#include <tencentcloud/tsf/v20180326/model/SimpleApplication.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

SimpleApplication::SimpleApplication() :
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_microserviceTypeHasBeenSet(false),
    m_applicationDescHasBeenSet(false),
    m_progLangHasBeenSet(false),
    m_applicationResourceTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_apigatewayServiceIdHasBeenSet(false),
    m_applicationRuntimeTypeHasBeenSet(false),
    m_ampInstanceIdHasBeenSet(false),
    m_apmInstanceNameHasBeenSet(false)
{
}

CoreInternalOutcome SimpleApplication::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleApplication.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleApplication.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleApplication.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceType") && !value["MicroserviceType"].IsNull())
    {
        if (!value["MicroserviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleApplication.MicroserviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceType = string(value["MicroserviceType"].GetString());
        m_microserviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationDesc") && !value["ApplicationDesc"].IsNull())
    {
        if (!value["ApplicationDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleApplication.ApplicationDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationDesc = string(value["ApplicationDesc"].GetString());
        m_applicationDescHasBeenSet = true;
    }

    if (value.HasMember("ProgLang") && !value["ProgLang"].IsNull())
    {
        if (!value["ProgLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleApplication.ProgLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progLang = string(value["ProgLang"].GetString());
        m_progLangHasBeenSet = true;
    }

    if (value.HasMember("ApplicationResourceType") && !value["ApplicationResourceType"].IsNull())
    {
        if (!value["ApplicationResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleApplication.ApplicationResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationResourceType = string(value["ApplicationResourceType"].GetString());
        m_applicationResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleApplication.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleApplication.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ApigatewayServiceId") && !value["ApigatewayServiceId"].IsNull())
    {
        if (!value["ApigatewayServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleApplication.ApigatewayServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apigatewayServiceId = string(value["ApigatewayServiceId"].GetString());
        m_apigatewayServiceIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationRuntimeType") && !value["ApplicationRuntimeType"].IsNull())
    {
        if (!value["ApplicationRuntimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleApplication.ApplicationRuntimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationRuntimeType = string(value["ApplicationRuntimeType"].GetString());
        m_applicationRuntimeTypeHasBeenSet = true;
    }

    if (value.HasMember("AmpInstanceId") && !value["AmpInstanceId"].IsNull())
    {
        if (!value["AmpInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleApplication.AmpInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ampInstanceId = string(value["AmpInstanceId"].GetString());
        m_ampInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ApmInstanceName") && !value["ApmInstanceName"].IsNull())
    {
        if (!value["ApmInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleApplication.ApmInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apmInstanceName = string(value["ApmInstanceName"].GetString());
        m_apmInstanceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimpleApplication::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microserviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_progLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_progLang.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_apigatewayServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApigatewayServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apigatewayServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationRuntimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationRuntimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationRuntimeType.c_str(), allocator).Move(), allocator);
    }

    if (m_ampInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmpInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ampInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_apmInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApmInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apmInstanceName.c_str(), allocator).Move(), allocator);
    }

}


string SimpleApplication::GetApplicationId() const
{
    return m_applicationId;
}

void SimpleApplication::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool SimpleApplication::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string SimpleApplication::GetApplicationName() const
{
    return m_applicationName;
}

void SimpleApplication::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool SimpleApplication::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string SimpleApplication::GetApplicationType() const
{
    return m_applicationType;
}

void SimpleApplication::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool SimpleApplication::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string SimpleApplication::GetMicroserviceType() const
{
    return m_microserviceType;
}

void SimpleApplication::SetMicroserviceType(const string& _microserviceType)
{
    m_microserviceType = _microserviceType;
    m_microserviceTypeHasBeenSet = true;
}

bool SimpleApplication::MicroserviceTypeHasBeenSet() const
{
    return m_microserviceTypeHasBeenSet;
}

string SimpleApplication::GetApplicationDesc() const
{
    return m_applicationDesc;
}

void SimpleApplication::SetApplicationDesc(const string& _applicationDesc)
{
    m_applicationDesc = _applicationDesc;
    m_applicationDescHasBeenSet = true;
}

bool SimpleApplication::ApplicationDescHasBeenSet() const
{
    return m_applicationDescHasBeenSet;
}

string SimpleApplication::GetProgLang() const
{
    return m_progLang;
}

void SimpleApplication::SetProgLang(const string& _progLang)
{
    m_progLang = _progLang;
    m_progLangHasBeenSet = true;
}

bool SimpleApplication::ProgLangHasBeenSet() const
{
    return m_progLangHasBeenSet;
}

string SimpleApplication::GetApplicationResourceType() const
{
    return m_applicationResourceType;
}

void SimpleApplication::SetApplicationResourceType(const string& _applicationResourceType)
{
    m_applicationResourceType = _applicationResourceType;
    m_applicationResourceTypeHasBeenSet = true;
}

bool SimpleApplication::ApplicationResourceTypeHasBeenSet() const
{
    return m_applicationResourceTypeHasBeenSet;
}

string SimpleApplication::GetCreateTime() const
{
    return m_createTime;
}

void SimpleApplication::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SimpleApplication::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SimpleApplication::GetUpdateTime() const
{
    return m_updateTime;
}

void SimpleApplication::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SimpleApplication::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string SimpleApplication::GetApigatewayServiceId() const
{
    return m_apigatewayServiceId;
}

void SimpleApplication::SetApigatewayServiceId(const string& _apigatewayServiceId)
{
    m_apigatewayServiceId = _apigatewayServiceId;
    m_apigatewayServiceIdHasBeenSet = true;
}

bool SimpleApplication::ApigatewayServiceIdHasBeenSet() const
{
    return m_apigatewayServiceIdHasBeenSet;
}

string SimpleApplication::GetApplicationRuntimeType() const
{
    return m_applicationRuntimeType;
}

void SimpleApplication::SetApplicationRuntimeType(const string& _applicationRuntimeType)
{
    m_applicationRuntimeType = _applicationRuntimeType;
    m_applicationRuntimeTypeHasBeenSet = true;
}

bool SimpleApplication::ApplicationRuntimeTypeHasBeenSet() const
{
    return m_applicationRuntimeTypeHasBeenSet;
}

string SimpleApplication::GetAmpInstanceId() const
{
    return m_ampInstanceId;
}

void SimpleApplication::SetAmpInstanceId(const string& _ampInstanceId)
{
    m_ampInstanceId = _ampInstanceId;
    m_ampInstanceIdHasBeenSet = true;
}

bool SimpleApplication::AmpInstanceIdHasBeenSet() const
{
    return m_ampInstanceIdHasBeenSet;
}

string SimpleApplication::GetApmInstanceName() const
{
    return m_apmInstanceName;
}

void SimpleApplication::SetApmInstanceName(const string& _apmInstanceName)
{
    m_apmInstanceName = _apmInstanceName;
    m_apmInstanceNameHasBeenSet = true;
}

bool SimpleApplication::ApmInstanceNameHasBeenSet() const
{
    return m_apmInstanceNameHasBeenSet;
}

