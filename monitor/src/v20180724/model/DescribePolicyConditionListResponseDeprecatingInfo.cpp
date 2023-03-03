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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListResponseDeprecatingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyConditionListResponseDeprecatingInfo::DescribePolicyConditionListResponseDeprecatingInfo() :
    m_hiddenHasBeenSet(false),
    m_newViewNamesHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyConditionListResponseDeprecatingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Hidden") && !value["Hidden"].IsNull())
    {
        if (!value["Hidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListResponseDeprecatingInfo.Hidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hidden = value["Hidden"].GetBool();
        m_hiddenHasBeenSet = true;
    }

    if (value.HasMember("NewViewNames") && !value["NewViewNames"].IsNull())
    {
        if (!value["NewViewNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListResponseDeprecatingInfo.NewViewNames` is not array type"));

        const rapidjson::Value &tmpValue = value["NewViewNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_newViewNames.push_back((*itr).GetString());
        }
        m_newViewNamesHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListResponseDeprecatingInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyConditionListResponseDeprecatingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hidden";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hidden, allocator);
    }

    if (m_newViewNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewViewNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_newViewNames.begin(); itr != m_newViewNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


bool DescribePolicyConditionListResponseDeprecatingInfo::GetHidden() const
{
    return m_hidden;
}

void DescribePolicyConditionListResponseDeprecatingInfo::SetHidden(const bool& _hidden)
{
    m_hidden = _hidden;
    m_hiddenHasBeenSet = true;
}

bool DescribePolicyConditionListResponseDeprecatingInfo::HiddenHasBeenSet() const
{
    return m_hiddenHasBeenSet;
}

vector<string> DescribePolicyConditionListResponseDeprecatingInfo::GetNewViewNames() const
{
    return m_newViewNames;
}

void DescribePolicyConditionListResponseDeprecatingInfo::SetNewViewNames(const vector<string>& _newViewNames)
{
    m_newViewNames = _newViewNames;
    m_newViewNamesHasBeenSet = true;
}

bool DescribePolicyConditionListResponseDeprecatingInfo::NewViewNamesHasBeenSet() const
{
    return m_newViewNamesHasBeenSet;
}

string DescribePolicyConditionListResponseDeprecatingInfo::GetDescription() const
{
    return m_description;
}

void DescribePolicyConditionListResponseDeprecatingInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribePolicyConditionListResponseDeprecatingInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

