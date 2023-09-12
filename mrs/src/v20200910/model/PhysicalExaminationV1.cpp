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

#include <tencentcloud/mrs/v20200910/model/PhysicalExaminationV1.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PhysicalExaminationV1::PhysicalExaminationV1() :
    m_physicalExaminationMultiHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome PhysicalExaminationV1::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PhysicalExaminationMulti") && !value["PhysicalExaminationMulti"].IsNull())
    {
        if (!value["PhysicalExaminationMulti"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExaminationV1.PhysicalExaminationMulti` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_physicalExaminationMulti.Deserialize(value["PhysicalExaminationMulti"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_physicalExaminationMultiHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalExaminationV1.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhysicalExaminationV1::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_physicalExaminationMultiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalExaminationMulti";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_physicalExaminationMulti.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


PhysicalExamination PhysicalExaminationV1::GetPhysicalExaminationMulti() const
{
    return m_physicalExaminationMulti;
}

void PhysicalExaminationV1::SetPhysicalExaminationMulti(const PhysicalExamination& _physicalExaminationMulti)
{
    m_physicalExaminationMulti = _physicalExaminationMulti;
    m_physicalExaminationMultiHasBeenSet = true;
}

bool PhysicalExaminationV1::PhysicalExaminationMultiHasBeenSet() const
{
    return m_physicalExaminationMultiHasBeenSet;
}

string PhysicalExaminationV1::GetVersion() const
{
    return m_version;
}

void PhysicalExaminationV1::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool PhysicalExaminationV1::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

