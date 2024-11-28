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

#include <tencentcloud/bi/v20220105/model/WidgetVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

WidgetVO::WidgetVO() :
    m_widgetIdHasBeenSet(false),
    m_widgetNameHasBeenSet(false)
{
}

CoreInternalOutcome WidgetVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WidgetId") && !value["WidgetId"].IsNull())
    {
        if (!value["WidgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WidgetVO.WidgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetId = string(value["WidgetId"].GetString());
        m_widgetIdHasBeenSet = true;
    }

    if (value.HasMember("WidgetName") && !value["WidgetName"].IsNull())
    {
        if (!value["WidgetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WidgetVO.WidgetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetName = string(value["WidgetName"].GetString());
        m_widgetNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WidgetVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_widgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_widgetId.c_str(), allocator).Move(), allocator);
    }

    if (m_widgetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_widgetName.c_str(), allocator).Move(), allocator);
    }

}


string WidgetVO::GetWidgetId() const
{
    return m_widgetId;
}

void WidgetVO::SetWidgetId(const string& _widgetId)
{
    m_widgetId = _widgetId;
    m_widgetIdHasBeenSet = true;
}

bool WidgetVO::WidgetIdHasBeenSet() const
{
    return m_widgetIdHasBeenSet;
}

string WidgetVO::GetWidgetName() const
{
    return m_widgetName;
}

void WidgetVO::SetWidgetName(const string& _widgetName)
{
    m_widgetName = _widgetName;
    m_widgetNameHasBeenSet = true;
}

bool WidgetVO::WidgetNameHasBeenSet() const
{
    return m_widgetNameHasBeenSet;
}

