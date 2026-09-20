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

#include <tencentcloud/live/v20180801/model/AuditGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AuditGroupInfo::AuditGroupInfo() :
    m_tagTypeHasBeenSet(false),
    m_groupClassListHasBeenSet(false)
{
}

CoreInternalOutcome AuditGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagType") && !value["TagType"].IsNull())
    {
        if (!value["TagType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditGroupInfo.TagType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagType = string(value["TagType"].GetString());
        m_tagTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupClassList") && !value["GroupClassList"].IsNull())
    {
        if (!value["GroupClassList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditGroupInfo.GroupClassList` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupClassList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuditGroupClassInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupClassList.push_back(item);
        }
        m_groupClassListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupClassListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupClassList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupClassList.begin(); itr != m_groupClassList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AuditGroupInfo::GetTagType() const
{
    return m_tagType;
}

void AuditGroupInfo::SetTagType(const string& _tagType)
{
    m_tagType = _tagType;
    m_tagTypeHasBeenSet = true;
}

bool AuditGroupInfo::TagTypeHasBeenSet() const
{
    return m_tagTypeHasBeenSet;
}

vector<AuditGroupClassInfo> AuditGroupInfo::GetGroupClassList() const
{
    return m_groupClassList;
}

void AuditGroupInfo::SetGroupClassList(const vector<AuditGroupClassInfo>& _groupClassList)
{
    m_groupClassList = _groupClassList;
    m_groupClassListHasBeenSet = true;
}

bool AuditGroupInfo::GroupClassListHasBeenSet() const
{
    return m_groupClassListHasBeenSet;
}

