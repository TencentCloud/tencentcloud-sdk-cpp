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

#include <tencentcloud/bsca/v20210811/model/AffectedComponent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

AffectedComponent::AffectedComponent() :
    m_nameHasBeenSet(false),
    m_affectedVersionListHasBeenSet(false),
    m_fixedVersionListHasBeenSet(false)
{
}

CoreInternalOutcome AffectedComponent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedComponent.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AffectedVersionList") && !value["AffectedVersionList"].IsNull())
    {
        if (!value["AffectedVersionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AffectedComponent.AffectedVersionList` is not array type"));

        const rapidjson::Value &tmpValue = value["AffectedVersionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_affectedVersionList.push_back((*itr).GetString());
        }
        m_affectedVersionListHasBeenSet = true;
    }

    if (value.HasMember("FixedVersionList") && !value["FixedVersionList"].IsNull())
    {
        if (!value["FixedVersionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AffectedComponent.FixedVersionList` is not array type"));

        const rapidjson::Value &tmpValue = value["FixedVersionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fixedVersionList.push_back((*itr).GetString());
        }
        m_fixedVersionListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AffectedComponent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_affectedVersionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedVersionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_affectedVersionList.begin(); itr != m_affectedVersionList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fixedVersionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixedVersionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fixedVersionList.begin(); itr != m_fixedVersionList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AffectedComponent::GetName() const
{
    return m_name;
}

void AffectedComponent::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AffectedComponent::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> AffectedComponent::GetAffectedVersionList() const
{
    return m_affectedVersionList;
}

void AffectedComponent::SetAffectedVersionList(const vector<string>& _affectedVersionList)
{
    m_affectedVersionList = _affectedVersionList;
    m_affectedVersionListHasBeenSet = true;
}

bool AffectedComponent::AffectedVersionListHasBeenSet() const
{
    return m_affectedVersionListHasBeenSet;
}

vector<string> AffectedComponent::GetFixedVersionList() const
{
    return m_fixedVersionList;
}

void AffectedComponent::SetFixedVersionList(const vector<string>& _fixedVersionList)
{
    m_fixedVersionList = _fixedVersionList;
    m_fixedVersionListHasBeenSet = true;
}

bool AffectedComponent::FixedVersionListHasBeenSet() const
{
    return m_fixedVersionListHasBeenSet;
}

