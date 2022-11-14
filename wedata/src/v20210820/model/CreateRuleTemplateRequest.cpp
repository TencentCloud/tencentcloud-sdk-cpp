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

#include <tencentcloud/wedata/v20210820/model/CreateRuleTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateRuleTemplateRequest::CreateRuleTemplateRequest() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_qualityDimHasBeenSet(false),
    m_sourceObjectTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceEngineTypesHasBeenSet(false),
    m_multiSourceFlagHasBeenSet(false),
    m_sqlExpressionHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_whereFlagHasBeenSet(false)
{
}

string CreateRuleTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_qualityDimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityDim";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qualityDim, allocator);
    }

    if (m_sourceObjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceObjectType, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceEngineTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceEngineTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceEngineTypes.begin(); itr != m_sourceEngineTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_multiSourceFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiSourceFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_multiSourceFlag, allocator);
    }

    if (m_sqlExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sqlExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_whereFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhereFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_whereFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateRuleTemplateRequest::GetType() const
{
    return m_type;
}

void CreateRuleTemplateRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateRuleTemplateRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateRuleTemplateRequest::GetName() const
{
    return m_name;
}

void CreateRuleTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRuleTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateRuleTemplateRequest::GetQualityDim() const
{
    return m_qualityDim;
}

void CreateRuleTemplateRequest::SetQualityDim(const uint64_t& _qualityDim)
{
    m_qualityDim = _qualityDim;
    m_qualityDimHasBeenSet = true;
}

bool CreateRuleTemplateRequest::QualityDimHasBeenSet() const
{
    return m_qualityDimHasBeenSet;
}

uint64_t CreateRuleTemplateRequest::GetSourceObjectType() const
{
    return m_sourceObjectType;
}

void CreateRuleTemplateRequest::SetSourceObjectType(const uint64_t& _sourceObjectType)
{
    m_sourceObjectType = _sourceObjectType;
    m_sourceObjectTypeHasBeenSet = true;
}

bool CreateRuleTemplateRequest::SourceObjectTypeHasBeenSet() const
{
    return m_sourceObjectTypeHasBeenSet;
}

string CreateRuleTemplateRequest::GetDescription() const
{
    return m_description;
}

void CreateRuleTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRuleTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<uint64_t> CreateRuleTemplateRequest::GetSourceEngineTypes() const
{
    return m_sourceEngineTypes;
}

void CreateRuleTemplateRequest::SetSourceEngineTypes(const vector<uint64_t>& _sourceEngineTypes)
{
    m_sourceEngineTypes = _sourceEngineTypes;
    m_sourceEngineTypesHasBeenSet = true;
}

bool CreateRuleTemplateRequest::SourceEngineTypesHasBeenSet() const
{
    return m_sourceEngineTypesHasBeenSet;
}

bool CreateRuleTemplateRequest::GetMultiSourceFlag() const
{
    return m_multiSourceFlag;
}

void CreateRuleTemplateRequest::SetMultiSourceFlag(const bool& _multiSourceFlag)
{
    m_multiSourceFlag = _multiSourceFlag;
    m_multiSourceFlagHasBeenSet = true;
}

bool CreateRuleTemplateRequest::MultiSourceFlagHasBeenSet() const
{
    return m_multiSourceFlagHasBeenSet;
}

string CreateRuleTemplateRequest::GetSqlExpression() const
{
    return m_sqlExpression;
}

void CreateRuleTemplateRequest::SetSqlExpression(const string& _sqlExpression)
{
    m_sqlExpression = _sqlExpression;
    m_sqlExpressionHasBeenSet = true;
}

bool CreateRuleTemplateRequest::SqlExpressionHasBeenSet() const
{
    return m_sqlExpressionHasBeenSet;
}

string CreateRuleTemplateRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateRuleTemplateRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateRuleTemplateRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool CreateRuleTemplateRequest::GetWhereFlag() const
{
    return m_whereFlag;
}

void CreateRuleTemplateRequest::SetWhereFlag(const bool& _whereFlag)
{
    m_whereFlag = _whereFlag;
    m_whereFlagHasBeenSet = true;
}

bool CreateRuleTemplateRequest::WhereFlagHasBeenSet() const
{
    return m_whereFlagHasBeenSet;
}


