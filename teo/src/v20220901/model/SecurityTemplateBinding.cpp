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

#include <tencentcloud/teo/v20220901/model/SecurityTemplateBinding.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SecurityTemplateBinding::SecurityTemplateBinding() :
    m_templateIdHasBeenSet(false),
    m_templateScopeHasBeenSet(false)
{
}

CoreInternalOutcome SecurityTemplateBinding::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityTemplateBinding.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateScope") && !value["TemplateScope"].IsNull())
    {
        if (!value["TemplateScope"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityTemplateBinding.TemplateScope` is not array type"));

        const rapidjson::Value &tmpValue = value["TemplateScope"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TemplateScope item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_templateScope.push_back(item);
        }
        m_templateScopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityTemplateBinding::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateScope.begin(); itr != m_templateScope.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SecurityTemplateBinding::GetTemplateId() const
{
    return m_templateId;
}

void SecurityTemplateBinding::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool SecurityTemplateBinding::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<TemplateScope> SecurityTemplateBinding::GetTemplateScope() const
{
    return m_templateScope;
}

void SecurityTemplateBinding::SetTemplateScope(const vector<TemplateScope>& _templateScope)
{
    m_templateScope = _templateScope;
    m_templateScopeHasBeenSet = true;
}

bool SecurityTemplateBinding::TemplateScopeHasBeenSet() const
{
    return m_templateScopeHasBeenSet;
}

