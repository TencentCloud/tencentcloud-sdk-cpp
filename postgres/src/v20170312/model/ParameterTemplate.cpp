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

#include <tencentcloud/postgres/v20170312/model/ParameterTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ParameterTemplate::ParameterTemplate() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_dBMajorVersionHasBeenSet(false),
    m_dBEngineHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome ParameterTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTemplate.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTemplate.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("DBMajorVersion") && !value["DBMajorVersion"].IsNull())
    {
        if (!value["DBMajorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTemplate.DBMajorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBMajorVersion = string(value["DBMajorVersion"].GetString());
        m_dBMajorVersionHasBeenSet = true;
    }

    if (value.HasMember("DBEngine") && !value["DBEngine"].IsNull())
    {
        if (!value["DBEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTemplate.DBEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBEngine = string(value["DBEngine"].GetString());
        m_dBEngineHasBeenSet = true;
    }

    if (value.HasMember("TemplateDescription") && !value["TemplateDescription"].IsNull())
    {
        if (!value["TemplateDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTemplate.TemplateDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateDescription = string(value["TemplateDescription"].GetString());
        m_templateDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParameterTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_dBMajorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBMajorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBMajorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dBEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_templateDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateDescription.c_str(), allocator).Move(), allocator);
    }

}


string ParameterTemplate::GetTemplateId() const
{
    return m_templateId;
}

void ParameterTemplate::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ParameterTemplate::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ParameterTemplate::GetTemplateName() const
{
    return m_templateName;
}

void ParameterTemplate::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool ParameterTemplate::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string ParameterTemplate::GetDBMajorVersion() const
{
    return m_dBMajorVersion;
}

void ParameterTemplate::SetDBMajorVersion(const string& _dBMajorVersion)
{
    m_dBMajorVersion = _dBMajorVersion;
    m_dBMajorVersionHasBeenSet = true;
}

bool ParameterTemplate::DBMajorVersionHasBeenSet() const
{
    return m_dBMajorVersionHasBeenSet;
}

string ParameterTemplate::GetDBEngine() const
{
    return m_dBEngine;
}

void ParameterTemplate::SetDBEngine(const string& _dBEngine)
{
    m_dBEngine = _dBEngine;
    m_dBEngineHasBeenSet = true;
}

bool ParameterTemplate::DBEngineHasBeenSet() const
{
    return m_dBEngineHasBeenSet;
}

string ParameterTemplate::GetTemplateDescription() const
{
    return m_templateDescription;
}

void ParameterTemplate::SetTemplateDescription(const string& _templateDescription)
{
    m_templateDescription = _templateDescription;
    m_templateDescriptionHasBeenSet = true;
}

bool ParameterTemplate::TemplateDescriptionHasBeenSet() const
{
    return m_templateDescriptionHasBeenSet;
}

