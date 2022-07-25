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

#include <tencentcloud/cynosdb/v20190107/model/ParamTemplateListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ParamTemplateListInfo::ParamTemplateListInfo() :
    m_idHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_engineVersionHasBeenSet(false)
{
}

CoreInternalOutcome ParamTemplateListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParamTemplateListInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamTemplateListInfo.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("TemplateDescription") && !value["TemplateDescription"].IsNull())
    {
        if (!value["TemplateDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamTemplateListInfo.TemplateDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateDescription = string(value["TemplateDescription"].GetString());
        m_templateDescriptionHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamTemplateListInfo.EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(value["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamTemplateListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_templateDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

}


int64_t ParamTemplateListInfo::GetId() const
{
    return m_id;
}

void ParamTemplateListInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ParamTemplateListInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ParamTemplateListInfo::GetTemplateName() const
{
    return m_templateName;
}

void ParamTemplateListInfo::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool ParamTemplateListInfo::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string ParamTemplateListInfo::GetTemplateDescription() const
{
    return m_templateDescription;
}

void ParamTemplateListInfo::SetTemplateDescription(const string& _templateDescription)
{
    m_templateDescription = _templateDescription;
    m_templateDescriptionHasBeenSet = true;
}

bool ParamTemplateListInfo::TemplateDescriptionHasBeenSet() const
{
    return m_templateDescriptionHasBeenSet;
}

string ParamTemplateListInfo::GetEngineVersion() const
{
    return m_engineVersion;
}

void ParamTemplateListInfo::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool ParamTemplateListInfo::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

