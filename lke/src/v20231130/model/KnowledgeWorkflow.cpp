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

#include <tencentcloud/lke/v20231130/model/KnowledgeWorkflow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

KnowledgeWorkflow::KnowledgeWorkflow() :
    m_isEnabledHasBeenSet(false),
    m_usePdlHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeWorkflow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsEnabled") && !value["IsEnabled"].IsNull())
    {
        if (!value["IsEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeWorkflow.IsEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = value["IsEnabled"].GetBool();
        m_isEnabledHasBeenSet = true;
    }

    if (value.HasMember("UsePdl") && !value["UsePdl"].IsNull())
    {
        if (!value["UsePdl"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeWorkflow.UsePdl` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_usePdl = value["UsePdl"].GetBool();
        m_usePdlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeWorkflow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_usePdlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsePdl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usePdl, allocator);
    }

}


bool KnowledgeWorkflow::GetIsEnabled() const
{
    return m_isEnabled;
}

void KnowledgeWorkflow::SetIsEnabled(const bool& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool KnowledgeWorkflow::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

bool KnowledgeWorkflow::GetUsePdl() const
{
    return m_usePdl;
}

void KnowledgeWorkflow::SetUsePdl(const bool& _usePdl)
{
    m_usePdl = _usePdl;
    m_usePdlHasBeenSet = true;
}

bool KnowledgeWorkflow::UsePdlHasBeenSet() const
{
    return m_usePdlHasBeenSet;
}

