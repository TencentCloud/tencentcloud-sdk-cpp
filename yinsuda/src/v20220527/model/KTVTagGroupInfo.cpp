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

#include <tencentcloud/yinsuda/v20220527/model/KTVTagGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

KTVTagGroupInfo::KTVTagGroupInfo() :
    m_groupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome KTVTagGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVTagGroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVTagGroupInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TagInfoSet") && !value["TagInfoSet"].IsNull())
    {
        if (!value["TagInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVTagGroupInfo.TagInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KTVTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagInfoSet.push_back(item);
        }
        m_tagInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVTagGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tagInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagInfoSet.begin(); itr != m_tagInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string KTVTagGroupInfo::GetGroupId() const
{
    return m_groupId;
}

void KTVTagGroupInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool KTVTagGroupInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string KTVTagGroupInfo::GetName() const
{
    return m_name;
}

void KTVTagGroupInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KTVTagGroupInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<KTVTagInfo> KTVTagGroupInfo::GetTagInfoSet() const
{
    return m_tagInfoSet;
}

void KTVTagGroupInfo::SetTagInfoSet(const vector<KTVTagInfo>& _tagInfoSet)
{
    m_tagInfoSet = _tagInfoSet;
    m_tagInfoSetHasBeenSet = true;
}

bool KTVTagGroupInfo::TagInfoSetHasBeenSet() const
{
    return m_tagInfoSetHasBeenSet;
}

