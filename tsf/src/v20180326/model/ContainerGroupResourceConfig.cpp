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

#include <tencentcloud/tsf/v20180326/model/ContainerGroupResourceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ContainerGroupResourceConfig::ContainerGroupResourceConfig() :
    m_additionalResourceRequirementHasBeenSet(false)
{
}

CoreInternalOutcome ContainerGroupResourceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AdditionalResourceRequirement") && !value["AdditionalResourceRequirement"].IsNull())
    {
        if (!value["AdditionalResourceRequirement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupResourceConfig.AdditionalResourceRequirement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_additionalResourceRequirement.Deserialize(value["AdditionalResourceRequirement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_additionalResourceRequirementHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerGroupResourceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_additionalResourceRequirementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalResourceRequirement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_additionalResourceRequirement.ToJsonObject(value[key.c_str()], allocator);
    }

}


ContainerAdditionalResourceRequirementMap ContainerGroupResourceConfig::GetAdditionalResourceRequirement() const
{
    return m_additionalResourceRequirement;
}

void ContainerGroupResourceConfig::SetAdditionalResourceRequirement(const ContainerAdditionalResourceRequirementMap& _additionalResourceRequirement)
{
    m_additionalResourceRequirement = _additionalResourceRequirement;
    m_additionalResourceRequirementHasBeenSet = true;
}

bool ContainerGroupResourceConfig::AdditionalResourceRequirementHasBeenSet() const
{
    return m_additionalResourceRequirementHasBeenSet;
}

