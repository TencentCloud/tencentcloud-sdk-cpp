/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/adp/v20260520/model/ViewScope.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ViewScope::ViewScope() :
    m_viewTypeHasBeenSet(false),
    m_scopeIdHasBeenSet(false)
{
}

CoreInternalOutcome ViewScope::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ViewType") && !value["ViewType"].IsNull())
    {
        if (!value["ViewType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ViewScope.ViewType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_viewType = value["ViewType"].GetInt64();
        m_viewTypeHasBeenSet = true;
    }

    if (value.HasMember("ScopeId") && !value["ScopeId"].IsNull())
    {
        if (!value["ScopeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewScope.ScopeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scopeId = string(value["ScopeId"].GetString());
        m_scopeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ViewScope::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_viewTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_viewType, allocator);
    }

    if (m_scopeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scopeId.c_str(), allocator).Move(), allocator);
    }

}


int64_t ViewScope::GetViewType() const
{
    return m_viewType;
}

void ViewScope::SetViewType(const int64_t& _viewType)
{
    m_viewType = _viewType;
    m_viewTypeHasBeenSet = true;
}

bool ViewScope::ViewTypeHasBeenSet() const
{
    return m_viewTypeHasBeenSet;
}

string ViewScope::GetScopeId() const
{
    return m_scopeId;
}

void ViewScope::SetScopeId(const string& _scopeId)
{
    m_scopeId = _scopeId;
    m_scopeIdHasBeenSet = true;
}

bool ViewScope::ScopeIdHasBeenSet() const
{
    return m_scopeIdHasBeenSet;
}

