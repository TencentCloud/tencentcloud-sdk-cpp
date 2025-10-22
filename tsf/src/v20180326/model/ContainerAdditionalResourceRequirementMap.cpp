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

#include <tencentcloud/tsf/v20180326/model/ContainerAdditionalResourceRequirementMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ContainerAdditionalResourceRequirementMap::ContainerAdditionalResourceRequirementMap() :
    m_mHasBeenSet(false),
    m_nHasBeenSet(false)
{
}

CoreInternalOutcome ContainerAdditionalResourceRequirementMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("M") && !value["M"].IsNull())
    {
        if (!value["M"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerAdditionalResourceRequirementMap.M` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_m.Deserialize(value["M"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mHasBeenSet = true;
    }

    if (value.HasMember("N") && !value["N"].IsNull())
    {
        if (!value["N"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerAdditionalResourceRequirementMap.N` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_n.Deserialize(value["N"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerAdditionalResourceRequirementMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "M";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_m.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "N";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_n.ToJsonObject(value[key.c_str()], allocator);
    }

}


ContainerAdditionalResourceRequirement ContainerAdditionalResourceRequirementMap::GetM() const
{
    return m_m;
}

void ContainerAdditionalResourceRequirementMap::SetM(const ContainerAdditionalResourceRequirement& _m)
{
    m_m = _m;
    m_mHasBeenSet = true;
}

bool ContainerAdditionalResourceRequirementMap::MHasBeenSet() const
{
    return m_mHasBeenSet;
}

ContainerAdditionalResourceRequirement ContainerAdditionalResourceRequirementMap::GetN() const
{
    return m_n;
}

void ContainerAdditionalResourceRequirementMap::SetN(const ContainerAdditionalResourceRequirement& _n)
{
    m_n = _n;
    m_nHasBeenSet = true;
}

bool ContainerAdditionalResourceRequirementMap::NHasBeenSet() const
{
    return m_nHasBeenSet;
}

