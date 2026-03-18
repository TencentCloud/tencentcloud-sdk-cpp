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

#include <tencentcloud/tione/v20211111/model/AggregatePublicAlgoVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

AggregatePublicAlgoVersion::AggregatePublicAlgoVersion() :
    m_groupNameHasBeenSet(false),
    m_publicAlgoVersionsHasBeenSet(false)
{
}

CoreInternalOutcome AggregatePublicAlgoVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregatePublicAlgoVersion.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("PublicAlgoVersions") && !value["PublicAlgoVersions"].IsNull())
    {
        if (!value["PublicAlgoVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AggregatePublicAlgoVersion.PublicAlgoVersions` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicAlgoVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PublicAlgoVersion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_publicAlgoVersions.push_back(item);
        }
        m_publicAlgoVersionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AggregatePublicAlgoVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicAlgoVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAlgoVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publicAlgoVersions.begin(); itr != m_publicAlgoVersions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AggregatePublicAlgoVersion::GetGroupName() const
{
    return m_groupName;
}

void AggregatePublicAlgoVersion::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AggregatePublicAlgoVersion::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

vector<PublicAlgoVersion> AggregatePublicAlgoVersion::GetPublicAlgoVersions() const
{
    return m_publicAlgoVersions;
}

void AggregatePublicAlgoVersion::SetPublicAlgoVersions(const vector<PublicAlgoVersion>& _publicAlgoVersions)
{
    m_publicAlgoVersions = _publicAlgoVersions;
    m_publicAlgoVersionsHasBeenSet = true;
}

bool AggregatePublicAlgoVersion::PublicAlgoVersionsHasBeenSet() const
{
    return m_publicAlgoVersionsHasBeenSet;
}

