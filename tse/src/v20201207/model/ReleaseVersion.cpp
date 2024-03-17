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

#include <tencentcloud/tse/v20201207/model/ReleaseVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ReleaseVersion::ReleaseVersion() :
    m_nameHasBeenSet(false),
    m_activeHasBeenSet(false)
{
}

CoreInternalOutcome ReleaseVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseVersion.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Active") && !value["Active"].IsNull())
    {
        if (!value["Active"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseVersion.Active` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_active = value["Active"].GetBool();
        m_activeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleaseVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_activeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Active";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_active, allocator);
    }

}


string ReleaseVersion::GetName() const
{
    return m_name;
}

void ReleaseVersion::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ReleaseVersion::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool ReleaseVersion::GetActive() const
{
    return m_active;
}

void ReleaseVersion::SetActive(const bool& _active)
{
    m_active = _active;
    m_activeHasBeenSet = true;
}

bool ReleaseVersion::ActiveHasBeenSet() const
{
    return m_activeHasBeenSet;
}

