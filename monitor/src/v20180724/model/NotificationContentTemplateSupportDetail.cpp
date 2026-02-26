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

#include <tencentcloud/monitor/v20180724/model/NotificationContentTemplateSupportDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

NotificationContentTemplateSupportDetail::NotificationContentTemplateSupportDetail() :
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_exampleHasBeenSet(false)
{
}

CoreInternalOutcome NotificationContentTemplateSupportDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotificationContentTemplateSupportDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotificationContentTemplateSupportDetail.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Example") && !value["Example"].IsNull())
    {
        if (!value["Example"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotificationContentTemplateSupportDetail.Example` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_example = string(value["Example"].GetString());
        m_exampleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotificationContentTemplateSupportDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_exampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Example";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_example.c_str(), allocator).Move(), allocator);
    }

}


string NotificationContentTemplateSupportDetail::GetName() const
{
    return m_name;
}

void NotificationContentTemplateSupportDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NotificationContentTemplateSupportDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NotificationContentTemplateSupportDetail::GetDesc() const
{
    return m_desc;
}

void NotificationContentTemplateSupportDetail::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool NotificationContentTemplateSupportDetail::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string NotificationContentTemplateSupportDetail::GetExample() const
{
    return m_example;
}

void NotificationContentTemplateSupportDetail::SetExample(const string& _example)
{
    m_example = _example;
    m_exampleHasBeenSet = true;
}

bool NotificationContentTemplateSupportDetail::ExampleHasBeenSet() const
{
    return m_exampleHasBeenSet;
}

