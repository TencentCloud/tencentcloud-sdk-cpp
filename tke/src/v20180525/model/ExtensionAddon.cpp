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

#include <tencentcloud/tke/v20180525/model/ExtensionAddon.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ExtensionAddon::ExtensionAddon() :
    m_addonNameHasBeenSet(false),
    m_addonParamHasBeenSet(false)
{
}

CoreInternalOutcome ExtensionAddon::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddonName") && !value["AddonName"].IsNull())
    {
        if (!value["AddonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionAddon.AddonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addonName = string(value["AddonName"].GetString());
        m_addonNameHasBeenSet = true;
    }

    if (value.HasMember("AddonParam") && !value["AddonParam"].IsNull())
    {
        if (!value["AddonParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionAddon.AddonParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addonParam = string(value["AddonParam"].GetString());
        m_addonParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtensionAddon::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addonNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addonName.c_str(), allocator).Move(), allocator);
    }

    if (m_addonParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddonParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addonParam.c_str(), allocator).Move(), allocator);
    }

}


string ExtensionAddon::GetAddonName() const
{
    return m_addonName;
}

void ExtensionAddon::SetAddonName(const string& _addonName)
{
    m_addonName = _addonName;
    m_addonNameHasBeenSet = true;
}

bool ExtensionAddon::AddonNameHasBeenSet() const
{
    return m_addonNameHasBeenSet;
}

string ExtensionAddon::GetAddonParam() const
{
    return m_addonParam;
}

void ExtensionAddon::SetAddonParam(const string& _addonParam)
{
    m_addonParam = _addonParam;
    m_addonParamHasBeenSet = true;
}

bool ExtensionAddon::AddonParamHasBeenSet() const
{
    return m_addonParamHasBeenSet;
}

