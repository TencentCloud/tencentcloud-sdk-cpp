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

#include <tencentcloud/dts/v20211206/model/CompareViewItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CompareViewItem::CompareViewItem() :
    m_viewNameHasBeenSet(false)
{
}

CoreInternalOutcome CompareViewItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareViewItem.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareViewItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

}


string CompareViewItem::GetViewName() const
{
    return m_viewName;
}

void CompareViewItem::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool CompareViewItem::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

