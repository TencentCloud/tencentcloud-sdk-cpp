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

#include <tencentcloud/tke/v20180525/model/EdgeClusterAdvancedSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

EdgeClusterAdvancedSettings::EdgeClusterAdvancedSettings() :
    m_extraArgsHasBeenSet(false)
{
}

CoreInternalOutcome EdgeClusterAdvancedSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExtraArgs") && !value["ExtraArgs"].IsNull())
    {
        if (!value["ExtraArgs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeClusterAdvancedSettings.ExtraArgs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraArgs.Deserialize(value["ExtraArgs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraArgsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeClusterAdvancedSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_extraArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraArgs.ToJsonObject(value[key.c_str()], allocator);
    }

}


EdgeClusterExtraArgs EdgeClusterAdvancedSettings::GetExtraArgs() const
{
    return m_extraArgs;
}

void EdgeClusterAdvancedSettings::SetExtraArgs(const EdgeClusterExtraArgs& _extraArgs)
{
    m_extraArgs = _extraArgs;
    m_extraArgsHasBeenSet = true;
}

bool EdgeClusterAdvancedSettings::ExtraArgsHasBeenSet() const
{
    return m_extraArgsHasBeenSet;
}

