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

#include <tencentcloud/iai/v20180301/model/PersonGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

PersonGroupInfo::PersonGroupInfo() :
    m_groupIdHasBeenSet(false),
    m_personExDescriptionsHasBeenSet(false)
{
}

CoreInternalOutcome PersonGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonGroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("PersonExDescriptions") && !value["PersonExDescriptions"].IsNull())
    {
        if (!value["PersonExDescriptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PersonGroupInfo.PersonExDescriptions` is not array type"));

        const rapidjson::Value &tmpValue = value["PersonExDescriptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_personExDescriptions.push_back((*itr).GetString());
        }
        m_personExDescriptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_personExDescriptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonExDescriptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_personExDescriptions.begin(); itr != m_personExDescriptions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string PersonGroupInfo::GetGroupId() const
{
    return m_groupId;
}

void PersonGroupInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool PersonGroupInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<string> PersonGroupInfo::GetPersonExDescriptions() const
{
    return m_personExDescriptions;
}

void PersonGroupInfo::SetPersonExDescriptions(const vector<string>& _personExDescriptions)
{
    m_personExDescriptions = _personExDescriptions;
    m_personExDescriptionsHasBeenSet = true;
}

bool PersonGroupInfo::PersonExDescriptionsHasBeenSet() const
{
    return m_personExDescriptionsHasBeenSet;
}

