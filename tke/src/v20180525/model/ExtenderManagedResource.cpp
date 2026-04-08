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

#include <tencentcloud/tke/v20180525/model/ExtenderManagedResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ExtenderManagedResource::ExtenderManagedResource() :
    m_nameHasBeenSet(false),
    m_ignoredBySchedulerHasBeenSet(false)
{
}

CoreInternalOutcome ExtenderManagedResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtenderManagedResource.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IgnoredByScheduler") && !value["IgnoredByScheduler"].IsNull())
    {
        if (!value["IgnoredByScheduler"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExtenderManagedResource.IgnoredByScheduler` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ignoredByScheduler = value["IgnoredByScheduler"].GetBool();
        m_ignoredBySchedulerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtenderManagedResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoredBySchedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoredByScheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoredByScheduler, allocator);
    }

}


string ExtenderManagedResource::GetName() const
{
    return m_name;
}

void ExtenderManagedResource::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ExtenderManagedResource::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool ExtenderManagedResource::GetIgnoredByScheduler() const
{
    return m_ignoredByScheduler;
}

void ExtenderManagedResource::SetIgnoredByScheduler(const bool& _ignoredByScheduler)
{
    m_ignoredByScheduler = _ignoredByScheduler;
    m_ignoredBySchedulerHasBeenSet = true;
}

bool ExtenderManagedResource::IgnoredBySchedulerHasBeenSet() const
{
    return m_ignoredBySchedulerHasBeenSet;
}

