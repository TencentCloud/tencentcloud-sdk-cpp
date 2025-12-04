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

#include <tencentcloud/dts/v20211206/model/ViewFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ViewFilter::ViewFilter() :
    m_viewNameHasBeenSet(false),
    m_opFilterHasBeenSet(false)
{
}

CoreInternalOutcome ViewFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewFilter.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (value.HasMember("OpFilter") && !value["OpFilter"].IsNull())
    {
        if (!value["OpFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ViewFilter.OpFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_opFilter.Deserialize(value["OpFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_opFilterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ViewFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_opFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_opFilter.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ViewFilter::GetViewName() const
{
    return m_viewName;
}

void ViewFilter::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool ViewFilter::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

OpFilter ViewFilter::GetOpFilter() const
{
    return m_opFilter;
}

void ViewFilter::SetOpFilter(const OpFilter& _opFilter)
{
    m_opFilter = _opFilter;
    m_opFilterHasBeenSet = true;
}

bool ViewFilter::OpFilterHasBeenSet() const
{
    return m_opFilterHasBeenSet;
}

