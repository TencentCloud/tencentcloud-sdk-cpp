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

#include <tencentcloud/ioa/v20220601/model/RulePayload.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

RulePayload::RulePayload() :
    m_groupsHasBeenSet(false),
    m_relateOptionHasBeenSet(false)
{
}

CoreInternalOutcome RulePayload::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RulePayload.Groups` is not array type"));

        const rapidjson::Value &tmpValue = value["Groups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RulePayloadItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groups.push_back(item);
        }
        m_groupsHasBeenSet = true;
    }

    if (value.HasMember("RelateOption") && !value["RelateOption"].IsNull())
    {
        if (!value["RelateOption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RulePayload.RelateOption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relateOption = string(value["RelateOption"].GetString());
        m_relateOptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RulePayload::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_relateOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relateOption.c_str(), allocator).Move(), allocator);
    }

}


vector<RulePayloadItem> RulePayload::GetGroups() const
{
    return m_groups;
}

void RulePayload::SetGroups(const vector<RulePayloadItem>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool RulePayload::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

string RulePayload::GetRelateOption() const
{
    return m_relateOption;
}

void RulePayload::SetRelateOption(const string& _relateOption)
{
    m_relateOption = _relateOption;
    m_relateOptionHasBeenSet = true;
}

bool RulePayload::RelateOptionHasBeenSet() const
{
    return m_relateOptionHasBeenSet;
}

