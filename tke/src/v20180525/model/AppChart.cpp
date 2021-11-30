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

#include <tencentcloud/tke/v20180525/model/AppChart.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

AppChart::AppChart() :
    m_nameHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_latestVersionHasBeenSet(false)
{
}

CoreInternalOutcome AppChart::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppChart.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppChart.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("LatestVersion") && !value["LatestVersion"].IsNull())
    {
        if (!value["LatestVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppChart.LatestVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersion = string(value["LatestVersion"].GetString());
        m_latestVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppChart::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_latestVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestVersion.c_str(), allocator).Move(), allocator);
    }

}


string AppChart::GetName() const
{
    return m_name;
}

void AppChart::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AppChart::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AppChart::GetLabel() const
{
    return m_label;
}

void AppChart::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool AppChart::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string AppChart::GetLatestVersion() const
{
    return m_latestVersion;
}

void AppChart::SetLatestVersion(const string& _latestVersion)
{
    m_latestVersion = _latestVersion;
    m_latestVersionHasBeenSet = true;
}

bool AppChart::LatestVersionHasBeenSet() const
{
    return m_latestVersionHasBeenSet;
}

