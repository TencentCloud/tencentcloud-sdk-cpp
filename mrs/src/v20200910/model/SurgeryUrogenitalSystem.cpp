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

#include <tencentcloud/mrs/v20200910/model/SurgeryUrogenitalSystem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

SurgeryUrogenitalSystem::SurgeryUrogenitalSystem() :
    m_textHasBeenSet(false),
    m_prostateHasBeenSet(false),
    m_externalReproductiveOrgansHasBeenSet(false)
{
}

CoreInternalOutcome SurgeryUrogenitalSystem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryUrogenitalSystem.Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(value["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (value.HasMember("Prostate") && !value["Prostate"].IsNull())
    {
        if (!value["Prostate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryUrogenitalSystem.Prostate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_prostate.Deserialize(value["Prostate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_prostateHasBeenSet = true;
    }

    if (value.HasMember("ExternalReproductiveOrgans") && !value["ExternalReproductiveOrgans"].IsNull())
    {
        if (!value["ExternalReproductiveOrgans"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryUrogenitalSystem.ExternalReproductiveOrgans` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_externalReproductiveOrgans.Deserialize(value["ExternalReproductiveOrgans"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalReproductiveOrgansHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SurgeryUrogenitalSystem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_prostateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prostate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prostate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_externalReproductiveOrgansHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReproductiveOrgans";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_externalReproductiveOrgans.ToJsonObject(value[key.c_str()], allocator);
    }

}


KeyValueItem SurgeryUrogenitalSystem::GetText() const
{
    return m_text;
}

void SurgeryUrogenitalSystem::SetText(const KeyValueItem& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SurgeryUrogenitalSystem::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

KeyValueItem SurgeryUrogenitalSystem::GetProstate() const
{
    return m_prostate;
}

void SurgeryUrogenitalSystem::SetProstate(const KeyValueItem& _prostate)
{
    m_prostate = _prostate;
    m_prostateHasBeenSet = true;
}

bool SurgeryUrogenitalSystem::ProstateHasBeenSet() const
{
    return m_prostateHasBeenSet;
}

KeyValueItem SurgeryUrogenitalSystem::GetExternalReproductiveOrgans() const
{
    return m_externalReproductiveOrgans;
}

void SurgeryUrogenitalSystem::SetExternalReproductiveOrgans(const KeyValueItem& _externalReproductiveOrgans)
{
    m_externalReproductiveOrgans = _externalReproductiveOrgans;
    m_externalReproductiveOrgansHasBeenSet = true;
}

bool SurgeryUrogenitalSystem::ExternalReproductiveOrgansHasBeenSet() const
{
    return m_externalReproductiveOrgansHasBeenSet;
}

