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
    m_engineVersionHasBeenSet(false),
    m_dbModeHasBeenSet(false),
    m_paramInfoSetHasBeenSet(false)
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

    if (value.HasMember("DbMode") && !value["DbMode"].IsNull())
    {
        if (!value["DbMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamTemplateListInfo.DbMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbMode = string(value["DbMode"].GetString());
        m_dbModeHasBeenSet = true;
    }

    if (value.HasMember("ParamInfoSet") && !value["ParamInfoSet"].IsNull())
    {
        if (!value["ParamInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParamTemplateListInfo.ParamInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TemplateParamInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paramInfoSet.push_back(item);
        }
        m_paramInfoSetHasBeenSet = true;
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

    if (m_dbModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbMode.c_str(), allocator).Move(), allocator);
    }

    if (m_paramInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramInfoSet.begin(); itr != m_paramInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

string ParamTemplateListInfo::GetDbMode() const
{
    return m_dbMode;
}

void ParamTemplateListInfo::SetDbMode(const string& _dbMode)
{
    m_dbMode = _dbMode;
    m_dbModeHasBeenSet = true;
}

bool ParamTemplateListInfo::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}

vector<TemplateParamInfo> ParamTemplateListInfo::GetParamInfoSet() const
{
    return m_paramInfoSet;
}

void ParamTemplateListInfo::SetParamInfoSet(const vector<TemplateParamInfo>& _paramInfoSet)
{
    m_paramInfoSet = _paramInfoSet;
    m_paramInfoSetHasBeenSet = true;
}

bool ParamTemplateListInfo::ParamInfoSetHasBeenSet() const
{
    return m_paramInfoSetHasBeenSet;
}

