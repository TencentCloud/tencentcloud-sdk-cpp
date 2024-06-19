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

#include <tencentcloud/csip/v20221121/model/VULRiskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VULRiskInfo::VULRiskInfo() :
    m_fixHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_impactComponentHasBeenSet(false)
{
}

CoreInternalOutcome VULRiskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Fix") && !value["Fix"].IsNull())
    {
        if (!value["Fix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskInfo.Fix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fix = string(value["Fix"].GetString());
        m_fixHasBeenSet = true;
    }

    if (value.HasMember("References") && !value["References"].IsNull())
    {
        if (!value["References"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskInfo.References` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_references = string(value["References"].GetString());
        m_referencesHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskInfo.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("ImpactComponent") && !value["ImpactComponent"].IsNull())
    {
        if (!value["ImpactComponent"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VULRiskInfo.ImpactComponent` is not array type"));

        const rapidjson::Value &tmpValue = value["ImpactComponent"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulImpactComponentInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_impactComponent.push_back(item);
        }
        m_impactComponentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VULRiskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fix.c_str(), allocator).Move(), allocator);
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_references.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_impactComponentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactComponent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_impactComponent.begin(); itr != m_impactComponent.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string VULRiskInfo::GetFix() const
{
    return m_fix;
}

void VULRiskInfo::SetFix(const string& _fix)
{
    m_fix = _fix;
    m_fixHasBeenSet = true;
}

bool VULRiskInfo::FixHasBeenSet() const
{
    return m_fixHasBeenSet;
}

string VULRiskInfo::GetReferences() const
{
    return m_references;
}

void VULRiskInfo::SetReferences(const string& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool VULRiskInfo::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}

string VULRiskInfo::GetDescribe() const
{
    return m_describe;
}

void VULRiskInfo::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool VULRiskInfo::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

vector<VulImpactComponentInfo> VULRiskInfo::GetImpactComponent() const
{
    return m_impactComponent;
}

void VULRiskInfo::SetImpactComponent(const vector<VulImpactComponentInfo>& _impactComponent)
{
    m_impactComponent = _impactComponent;
    m_impactComponentHasBeenSet = true;
}

bool VULRiskInfo::ImpactComponentHasBeenSet() const
{
    return m_impactComponentHasBeenSet;
}

