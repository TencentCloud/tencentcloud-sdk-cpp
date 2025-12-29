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

#include <tencentcloud/lke/v20231130/model/OutputWidgetConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

OutputWidgetConfig::OutputWidgetConfig() :
    m_widgetIdHasBeenSet(false),
    m_widgetNameHasBeenSet(false),
    m_widgetParamHasBeenSet(false)
{
}

CoreInternalOutcome OutputWidgetConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WidgetId") && !value["WidgetId"].IsNull())
    {
        if (!value["WidgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputWidgetConfig.WidgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetId = string(value["WidgetId"].GetString());
        m_widgetIdHasBeenSet = true;
    }

    if (value.HasMember("WidgetName") && !value["WidgetName"].IsNull())
    {
        if (!value["WidgetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputWidgetConfig.WidgetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetName = string(value["WidgetName"].GetString());
        m_widgetNameHasBeenSet = true;
    }

    if (value.HasMember("WidgetParam") && !value["WidgetParam"].IsNull())
    {
        if (!value["WidgetParam"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputWidgetConfig.WidgetParam` is not array type"));

        const rapidjson::Value &tmpValue = value["WidgetParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WidgetParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_widgetParam.push_back(item);
        }
        m_widgetParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputWidgetConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_widgetParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_widgetParam.begin(); itr != m_widgetParam.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string OutputWidgetConfig::GetWidgetId() const
{
    return m_widgetId;
}

void OutputWidgetConfig::SetWidgetId(const string& _widgetId)
{
    m_widgetId = _widgetId;
    m_widgetIdHasBeenSet = true;
}

bool OutputWidgetConfig::WidgetIdHasBeenSet() const
{
    return m_widgetIdHasBeenSet;
}

string OutputWidgetConfig::GetWidgetName() const
{
    return m_widgetName;
}

void OutputWidgetConfig::SetWidgetName(const string& _widgetName)
{
    m_widgetName = _widgetName;
    m_widgetNameHasBeenSet = true;
}

bool OutputWidgetConfig::WidgetNameHasBeenSet() const
{
    return m_widgetNameHasBeenSet;
}

vector<WidgetParam> OutputWidgetConfig::GetWidgetParam() const
{
    return m_widgetParam;
}

void OutputWidgetConfig::SetWidgetParam(const vector<WidgetParam>& _widgetParam)
{
    m_widgetParam = _widgetParam;
    m_widgetParamHasBeenSet = true;
}

bool OutputWidgetConfig::WidgetParamHasBeenSet() const
{
    return m_widgetParamHasBeenSet;
}

