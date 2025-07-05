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

#include <tencentcloud/dts/v20211206/model/ViewItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ViewItem::ViewItem() :
    m_viewNameHasBeenSet(false),
    m_newViewNameHasBeenSet(false)
{
}

CoreInternalOutcome ViewItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewItem.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (value.HasMember("NewViewName") && !value["NewViewName"].IsNull())
    {
        if (!value["NewViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewItem.NewViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newViewName = string(value["NewViewName"].GetString());
        m_newViewNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ViewItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_newViewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newViewName.c_str(), allocator).Move(), allocator);
    }

}


string ViewItem::GetViewName() const
{
    return m_viewName;
}

void ViewItem::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool ViewItem::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string ViewItem::GetNewViewName() const
{
    return m_newViewName;
}

void ViewItem::SetNewViewName(const string& _newViewName)
{
    m_newViewName = _newViewName;
    m_newViewNameHasBeenSet = true;
}

bool ViewItem::NewViewNameHasBeenSet() const
{
    return m_newViewNameHasBeenSet;
}

